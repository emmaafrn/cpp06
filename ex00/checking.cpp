#include "convert.hpp"

bool	typeChecking(std::string str){
	int	i = 0;
	int	j = 0;
	int	size = str.length();

	if (str[i] == '-')
		i++;
	while (i < size && str[i] >= '0' && str[i] <= '9'){
		i++;
		if (str[i] == '.'){
			j++;
			i++;
		}
	}
	if (i == (size - 1) && str[i] == 'f') // Float
		return (1);
	if (j > 1 || i < size) // Error
		return (0);
	return (1); // Int, Double
}

bool	specialCases(std::string str){
	if (!str.compare("nan") || !str.compare("inf") || !str.compare("-inf")
		|| !str.compare("inff") || !str.compare("nanf") || !str.compare("-inff")){
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		specialType(str);
		return (1);
	}
	return (0);
}