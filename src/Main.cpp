#include "TestFile.h"
#include "TestVector.h"
#include "TestList.h"

#include "iostream"
using namespace std;

void readFromFile();

int main(int args, char *argv[]){
	//readFromFile();
	//testVector();
	testList();
	return 0;
}

void readFromFile(){
	string path = "/home/georgejx/develop/ide/eclipse-cpp-2019-03-R-linux-gtk-x86_64/eclipse/project/cdemo2/file";
	readFromFile(path);
}

