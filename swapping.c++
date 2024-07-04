    // Write a program to swap two numbers
    #include<iostream>
    int main()
    {
    	int a , b ;
    	std::cout<<"enter the 1st value";
    	std::cin>>a;
    	
    	std::cout<<"enter the 2nd value :";
    	std::cin>>b;
    	
    	a=a+b;
    	b=a-b;
    	a=a-b;
    	
    	std::cout<<a<<" "<<b;
    	
    	return 0;
	}
