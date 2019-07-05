#include "TestFile.h"
#include <iostream>                                      // For standard streams
#include <fstream>                                       // For file streams
#include <iterator>                                      // For iterators and begin() and end()
#include <string>                                        // For string class
#include <set>                                           // For set container
#include <vector>                                        // For vector container
#include <algorithm>                                     // For next_permutation()
#include <exception>

using namespace std;
void readFromFile(string path) {
	ifstream *in = new ifstream();
	in->open(path, ios::binary);
	if (!in->is_open()) {
		return;
	}
	/*char content;
	while(*in >> content)
	printf("%x  ", content&0xff);*/
	char contents[5];
	while(in->read(contents, sizeof(contents))){
		for(int i = 0; i < in->gcount(); i++)
			printf("%x  ", contents[i] & 0xff);
	}
	in->close();
	try{
		throw "nullpoint";
	}catch(const char* &e){
		cout<<e<<endl;
	}
}
