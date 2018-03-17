#include <string>

/*********************************************************
 *Hash function, Modified from example codes
 *********************************************************/
unsigned int hash1( const std::string & key, int tableSize){
	unsigned int hashVal = 0;
	for(char ch:key){
		hashVal = 2525 * hashVal + ch;
	}
	return hashVal % tableSize;
} 

/*********************************************************
 *Hash function, Modified from previous one that was based
 on hash3 from the example codes
 *********************************************************/
unsigned int hash2( const std::string & key, int tableSize){
	unsigned int hashVal = 0; 
	int num = 0;
	for(char ch:key){
		num++;
		if((num % 5)== 0){
			hashVal = 9001 * hashVal + ch;
		}else{
			hashVal = 17 * hashVal + ch;
		}
	}
	return hashVal % tableSize;
}

/*********************************************************
 *Hash function, made to have lots of collisions
 *********************************************************/
int hash3( const std::string & key, int tableSize){
	return (key[0] + key[1] + key[2]) % tableSize;
} 
