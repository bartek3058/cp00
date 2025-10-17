#include <iostream>
#include <cctype>

int main (int argc, char **argv)
{
	int i;
	int a;
	
	i = 1;
	a = 0;
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else if (argc > 1)
	{
		while(argv[i])
		{
			a = 0;
			while(argv[i][a] != '\0')
			{
				std::cout<<(char)toupper(argv[i][a]);
				a++;
			}
			i++;
		}
		std::cout<<std::endl;
	}
}