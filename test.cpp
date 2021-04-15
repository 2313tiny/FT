#include"test.hpp"

 
void test_v1()
{
	//simple test for complex class
	mycomplex number1(1,1);  
	std::cout << number1 << std::endl;
	mycomplex number2(2,2);
	std::cout << number2 << std::endl;
	mycomplex number4;
	number4 = number1 + number2;
	std::cout << number4 << std::endl;
	mycomplex number3 = number1 + number2; 
	std::cout << number3 << std::endl;
	std::cout <<"number2 magnitude = " <<  number2.abs() << std::endl;	
	std::cout <<"number2 angle = " << number2.arg()  << std::endl;
	int k =3;
	std::cout << "number1 = " << number1 << std::endl;
	mycomplex number5 = number1 * number2 ;
	std::cout << "number1 = " << number1 << std::endl;
	number1 = number1 * k;
	std::cout << "number1 * 3 = " << number1 << std::endl;
	std::cout << "number5 = " ;
	std::cout << number5 << std::endl;	
	std::cout << YELLOW;
	std::cout << "\n*******************************\n\n\n";	
	std::cout << RESET;
}
void test_v2()
{
	//simple test for Fourier Transform
	FT();
}
void test_v3()
{
	//empty body
}
 



