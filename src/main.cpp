#include "my_hash.h"
#include <iostream>
#include <string>

int main(int argc, char** argv){
	std::cout << hash1("Joe" , 10007) << std::endl;	
	std::cout << hash2("Joe" , 10007) << std::endl;
	std::cout << hash3("Joe" , 10007) << std::endl;
}
