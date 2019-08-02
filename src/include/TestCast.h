#ifndef TESTCAST_H
#define TESTCAST_H

void testCast();
class A
{
public:
    int i;
    int j;
    A(int n):i(n),j(n) { }
};

class Base{
public:
	virtual ~Base(){};
};

class FromBase : public Base{
};
#endif
