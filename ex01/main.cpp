#include "Serialisation.hpp"


uintptr_t serialize(Data* ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int	main(){
	Data* data1 = new Data;
	Data* data2 = new Data;

	std::cout << "[data1->number] = " << data1->number << std::endl;
	data2 = deserialize(serialize(data1));
	std::cout << "[data2->number] = " << data2->number << std::endl;
	if (data2 == data1)
		std::cout << "EQUALS" << std::endl;
	else
		std::cout << "UNEQUALS" << std::endl;
	return (0);
}
