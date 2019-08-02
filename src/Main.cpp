#include "TestFile.h"
#include "TestVector.h"
#include "TestList.h"
#include "TestFunction.h"
#include "TestCast.h"
#include "TestSharedPtr.h"

#include "iostream"
using namespace std;

void readFromFile();
void testFunction();

int main(int args, char *argv[]){
	//readFromFile();
	//testVector();
	//testList();
	//testFunction();
	//testCast();
	//testSharedPtr();
	return 0;
}

void readFromFile(){
	string path = "/home/georgejx/develop/ide/eclipse-cpp-2019-03-R-linux-gtk-x86_64/eclipse/project/cdemo2/file";
	readFromFile(path);
}

void testFunction(){
	Function *function = new Function();
	function->operator ()(1, 2, 3);
	(*function)(2, 3, 4);
	delete function;
	testAccumulate();
}

