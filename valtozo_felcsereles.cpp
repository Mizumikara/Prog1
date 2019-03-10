#include <stdio.h>
#include <iostream>

int main()
{
	int a=5;
	int b=3;
	//std::cout << "a= "<< a <<" b= "<< b <<std::endl;
	printf("%d %d\n",a,b);
	b=b-a;
	a=a+b;
	b=a-b;
	//std::cout << "a= "<< a <<" b= "<< b <<std::endl;
	printf("%d %d\n",a,b);

}
