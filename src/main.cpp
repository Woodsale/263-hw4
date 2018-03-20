#include "my_hash.h"
#include <iostream>
#include <string>

int main(int argc, char** argv){
	/*
	std::cout << hash1("Joe" , 10007) << std::endl;	
	std::cout << hash2("Joe" , 10007) << std::endl;
	std::cout << hash3("Joe" , 10007) << std::endl;*/

	int shL1[18000];
	int shL2[18000];
	int shL3[18000];
	int one,two,three;
	int counterOne = 0, counterTwo = 0, counterThree = 0;

	io::CSVReader<3> in("ram.csv");
	in.read_header(io::ignore_extra_column, "ventor", "size", "speed")'
	std::string vendor;
	int size;
	double speed;
	while(in.read_row(vendor size, speed)){
		one = hash1(id,1234);
		two = hash2(id,1234);
		three = hash3(id,1234);
		
		shL1[one] = id;
		shL2[two] = id;
		shL3[three] = id;		
		
		if(shL1[one] != NULL){
			counterOne++;
		}
		if(shL2[two] != NULL){
			counterTwo++;
		}
		if(shL3[three] != NULL){
			counterThree++;
		}
	}
	
	std::cout << "Here are the number of collisions for one, two,and three: \n" << std::edl;
	std::cout << one <<std::endl; 
	std::cout << two <<std::endl; 
	std::cout << three <<std::endl; 
}
