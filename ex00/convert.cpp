#include "convert.hpp"

void	convertFromChar(std::string str){
	double	x = static_cast<double>(str[0]);

	std::cout << "char : '" << str << '\'' <<  std::endl; 
	std::cout << "int : " << static_cast<int>(x) <<  std::endl; 
	std::cout << std::fixed << std::setprecision(2) << "float : " << x << 'f' << std::endl; 
	std::cout << std::fixed << std::setprecision(2) << "double : " << x <<  std::endl; 
}

void	impossibleType(std::string str){
	if (str.length() != 1)
		std::cout << "char : impossible" << std::endl;
	else if (isprint(static_cast<int>(str[0]))){
		convertFromChar(str);
		return ;
	}
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : impossible" << std::endl;
	std::cout << "double : impossible" << std::endl;
}

void	Convert(double x){
	char	c = static_cast<char>(static_cast<int>(x));

	if (!isprint(static_cast<int>(x)))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << '\''<< c << '\''<<  std::endl;
	std::cout << "int : " << static_cast<int>(x) << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "Float : " << x << 'f' << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "Double : " << x << std::endl;
}

void	specialType(std::string str){
	int	i = -1;
	int	j = 0;
	int	res = -1;
	std::string floatTab[3] = {"-inff", "inff", "nanf"};
	std::string doubleTab[3] = {"-inf", "inf", "nan"};

	while (res != 0 && ++i < 3)
		res = str.compare(floatTab[i]);
	if (res != 0){
		while (res != 0 && ++j < 3)
			res = str.compare(doubleTab[j]);
		i = j;
	}
	else
		j = i;
	std::cout << "float = " << floatTab[i] << std::endl;
	std::cout << "double = " << doubleTab[j] << std::endl;
}