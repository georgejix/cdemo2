#include "TestCast.h"
#include "iostream"
#include "stdexcept"

using namespace std;
void testCast(){
	int i = static_cast<int>(3.14);
	cout << i << endl;

	const string s1 = "12345";
	cout << s1 << endl;
	string *s2 = const_cast<string *>(&s1);
	s2->append("ss");
	cout << "s1=" << s1 << ",s2=" << *s2 << endl;

    int n = 300;
    A *pa = reinterpret_cast<A*> ( & n); //强行让 pa 指向 n
    pa->i = 400;  // n 变成 400
    cout << n << endl;

    Base b;
    FromBase fb;
    FromBase *fb_;
    Base *b2 = new FromBase;
    fb_ = dynamic_cast<FromBase *>(&b);
    if(NULL == fb_)
    	cout << "dynamic_cast error" << endl;
    else
        cout << "no error" << endl;
    fb_ = dynamic_cast<FromBase *>(b2);
        if(NULL == fb_)
        	cout << "dynamic_cast error" << endl;
        else
        	cout << "no error" << endl;

    delete fb_;
    delete b2;

    try {
        char * p = new char[0x7fffffffffff];  //无法分配这么多空间，会抛出异常
    }
    catch (bad_alloc & e)  {
        cerr << e.what() << endl;
    }
}

