// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Complex
{
public:
	int re;
	int im;
	Complex(int perv, int pimv) {
		this->re = perv;
		this->im = pimv;
	};

private:

};


int main()
{
	Complex lok = new Complex(0, 7);
}
