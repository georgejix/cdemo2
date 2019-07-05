#include "TestVector.h"
#include "iostream"
using namespace std;

void testVector(){
	vector<int> *v = new vector<int>();
	for(int i = 0; i < 5; i++){
		v->push_back(i);
	}
	vector<int>::iterator iterator;
	for(iterator = v->begin(); iterator < v->end(); ++iterator){
		cout<<*iterator<<"  ";
	}
}
