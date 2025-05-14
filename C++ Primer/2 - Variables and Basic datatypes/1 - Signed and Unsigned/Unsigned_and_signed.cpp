#include <iostream>
using namespace std;

int main(int argc,char *argv[]){

    // unsingned values are all positive values including the zero
    // and if you try to assign a negative value to an unsigned value then it wraps around 
    // For eg if you datatype has a range of 20 when unsigned and if you try to assign it a negative value
    // say -2 to it will just loop around and give it a value of 19
    // and if you try to go out of range then the value is given by mudolus of the total range by that number
    // Example: range of unsigned char is 0 to 255(256 values) to if you try to assign something like 300 then the answer will be 300 % 256
    
    unsigned char a = -5;
    cout << (int)a; // so the in the output the value will be 300 % 256 = 44 or in character it will be represented as a comma ',' 

	// It checks the remainder of the value then modulo it with the range
	// For eg: unsigned char a = 300;
	// Remainder = 300 % 256
	// and for unsigned char a = -1;
	// Remainder = -1 % 256 -> -1 * 256 + 255
	// and hence we get 255
	
	// Though in the case of signed char the behavious remains undefined
}