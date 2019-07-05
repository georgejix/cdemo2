#include "TestList.h"
#include "iostream"
using namespace std;
void testList(){
	list<int> *intList = new list<int>();
	intList->push_back(1);
	intList->push_back(2);
	intList->push_back(3);
	intList->push_back(4);
	intList->push_back(5);
	intList->push_front(-1);
	intList->push_front(9);
	intList->push_front(8);
	intList->push_front(8);
	intList->push_front(1);

	intList->unique();
	intList->sort();

	list<int> *intList2 = new list<int>();
	intList2->push_back(15);
	intList2->push_back(16);
	intList->splice(intList->begin(), *intList2, intList2->begin(), intList2->end());

	intList->remove(-1);

	//删除数组中大于10的值
	intList->remove_if([](int n){return n > 10;});

	list<int>::iterator i = intList->begin();
	for(; i != intList->end(); i++){
		cout << *i << " ";
	}
	free(intList);
}

