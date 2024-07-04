#include<iostream>
int main()
{
	int age;
	std::cout<<"enter the age :";
	std::cin>>age;
	
	switch(age)
	{
		case 18:
			std::cout<<"you are an adult";
			break;
			case 60:
				std::cout<<"you are a seniour citizen";
				break;
				case 10:
					std::cout<<"you are a kid now";
					break;
					default:
						std::cout<<"age not matched";
						break;
	}
	return 0;
}
