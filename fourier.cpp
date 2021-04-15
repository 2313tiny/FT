#include"fourier.hpp"

void FT()
{
	std::cout << "greeting from Fourier Transform" << std::endl;
	std::cout << "sin wave 1Hz, Amplitude = 1, Sampling Frequency = "
		  << POINT << "Hz\n";	

	float x[POINT]; //time domain
	mycomplex X[POINT]; //frequency domain
	float radianval = 0.00;
	float degreeval = 0.00; 	

	for (int i = 0; i < POINT; ++i){
		radianval = degreeval * (PI / 180);
		x[i] = sin(radianval);
		degreeval += (360/POINT);
	}
	
	float real = 0.00;
	float imag = 0.00;	

	for (int k = 0; k < POINT; ++k){
		degreeval = 0.00;
		real = 0.00;
		imag = 0.00;	
		for(int i = 0; i < POINT; ++i){
			radianval = degreeval * (PI/ 180);
			real += x[i] * cos(radianval);
			X[k].setReal(real); 		
			imag += x[i] * sin(radianval);
			X[k].setImag(imag);
			degreeval -= (360*k/POINT);
		}
	}

	std::cout << std::endl;	
	const int WIDTH = 24;
	std::cout.setf(std::ios::right);
	std::cout << std::setw(WIDTH/2) << YELLOW << "Time Domain "
		  << std::setw(WIDTH) << "Frequency Domain" << RESET << '\n';

	std::cout.setf(std::ios::fixed);
	for(int i = 0; i < POINT; ++i){
		 std::cout << std::setprecision(4)
		           << "x[" << std::setw(2) << i << "] = " 
		           << std::setw(WIDTH/3) << x[i]
		           << std::setprecision(4) << std::setw(WIDTH/2-5)
		           << "X[" << std::setw(2) << i << "] = " 
		           << X[i] << '\n'; 
	}
}

void IFT()
{
	//empty body
}
