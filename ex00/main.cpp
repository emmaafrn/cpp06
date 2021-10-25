#include <iostream>
#include <string>
#include <cctype>

void	charChecking(int c){
	if (!isprint(c)){
		std::cout << "char : Non displayable\n";
	}
	else
		std::cout << c << std::endl;
}

int	main(int argc, char **argv){
	std::string str;

	if (argc != 2){
		std::cout << "Error, wrong number of arguments" << std::endl;
		return (0);
	}
	str = argv[1];
	if (str.length() == 1)
		charChecking(static_cast<int>(argv[1][0]) - 48);
	
}