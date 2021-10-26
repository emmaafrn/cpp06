#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Base* newA(void){
	A*	a = new A;
	return (a);
}

Base* newB(void){
	B*	b = new B;
	return (b);
}

Base* newC(void){
	C*	c = new C;
	return (c);
}

Base * generate(void){
	int	mystery_nbr;

	srand(time(NULL));
	mystery_nbr = rand() % 3 + 1;
	switch (mystery_nbr){
		case 1 : return newA();
				break;
		case 2 : return newB();
				break;
		default : return newC();
	}
}

void identify(Base * p){
	if (dynamic_cast<A*>(p) == NULL){
		if (dynamic_cast<B*>(p) == NULL)
			std::cout << 'C' << std::endl;
		else if (dynamic_cast<C*>(p) == NULL)
			std::cout << 'B' << std::endl;
	}
	else
		std::cout << 'A' << std::endl;
	delete p;
}

void identify(Base & p){

	try{
		A &a = dynamic_cast<A&>(p);
		std::cout << 'A' << std::endl;
		(void)a;
	}
	catch (const std::bad_cast &cast){

	}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
		(void)b;
	}
	catch (const std::bad_cast &cast){

	}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << 'C' << std::endl;
		(void)c;
	}
	catch (const std::bad_cast &cast){

	}
}

int	main(void){
	identify(generate());
	identify(*generate());
}