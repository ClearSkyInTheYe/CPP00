#include "iostream"

int main(int argc, char **argv)
{
	int i = 0;
	int x = 1;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return(0);
	}
	while (argv[x])
	{
		i = 0;
		while (argv[x][i])
		{
			std::cout << (char) toupper(argv[x][i]);
			i++;
		}
		x++;
	}
}