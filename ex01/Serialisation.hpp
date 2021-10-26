#ifndef SERIALISATION_HPP
# define SERIALISATION_HPP

#include <string>
#include <iostream>

struct Data{
	int	number;
	Data() : number(42){
	}
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif