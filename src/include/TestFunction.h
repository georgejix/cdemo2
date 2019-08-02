#ifndef TESTFUNCTION_H
#define TESTFUNCTION_H
class Function{
public:
	void operator()(int a, int b, int c);
};

template <class T>
class SumSquare{
private:
	int power;
public:
	SumSquare(int p):power(p){}
	T operator()(T & total, T & value){
		T v = value;
		for(int i = 0; i < power - 1; ++i){
			v = v * value;
		}
		total += v;
		return total;
	}
};

void testAccumulate();
#endif
