#include <iostream>
#include <string>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	char	*str;
	for (int i = 1; i < ac; i++)
	{
		str = av[i];
		for (int j = 0; j < ft_strlen(str); j++)
			std::cout << (char)toupper(str[j]);
	}
	std::cout << std::endl;
	return (0);
}
