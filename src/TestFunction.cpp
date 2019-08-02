#include "TestFunction.h"
#include "iostream"
#include "vector"
#include "numeric"
using namespace std;

void Function::operator ()(int a, int b, int c){
	cout << a+b+c << endl;
}

void testAccumulate(){
	int i[] = {1,2,3,4,5};
	vector<int> *v = new vector<int>(i, i + 5);
	int sum2 = accumulate(v->begin(), v->end(), 0, SumSquare<int>(2));
	cout << "平方和=" << sum2 << endl;
	free(v);
}
