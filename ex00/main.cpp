#include "convert.hpp"

int	main(int argc, char **argv){
	std::string	str;
	int			type;

	if (argc != 2){
		std::cout << "Error, wrong number of arguments" << std::endl;
		return (0);
	}
	str = argv[1];
	if (specialCases(str))
		return (1);
	type  = typeChecking(str);
	if (!type){
		impossibleType(str);
		return (0);
	}
	else if (type)
		Convert(std::stod(argv[1]));
	return (1);
}