#include <iostream>
#include <vector> // in order to use the vectors we need to include this
using namespace std;

int main(){
    // Vector is a collection of objects of the same type, each objects has an assigned index
    // often referred to as a container as it contains objects

    // Vector is a class template, now templates are like instructions for the compiler for generating classes or functions
    // The process compiler uses to create a templates is called instantiation
    // so when we are creating a template we specify which kind of class or function we want the compiler to instantiate
    // this additional information is provided in a pair of angle brackets

    vector <int> number; // number holds objects of type int
    vector <vector<string>> names; // names is a vector whose elements themselves are vectors
    // we can have a vector for any type of data unless its not a reference as they are not objects

    // Initialization of vectors
    vector <string> people; // declaration of a vector people whose elements are of type string
    // now this right here is an empty vector which might seem useless but its not as elements can be added/removed at runtime very easily

    // Copying value of one vector to other
    // You can easily copy value of one vector to another at initialization but the vectors must of same type
    vector<string> someone(people); // initializes by copying the elements of people into vector someone
    vector<int> digits(number); // copies the elements of number into digits
    //vector<string> xyz(number); // this will give an error as the type of both vectors is not same
	vector<int> reals = number; // now you can also copy values of one vector to another by simply using the assignment operator

	// list initializing a vector
	vector<string> bros = {"Lakshay","Rahul","Anubhav","Vinit","Rishabh"};
	for(int i = 0;i < 5;i++){
		cout << bros[i] << "\n";
	}
	// this format is under the new format and assigns 5 strings to the vector bros
	// as in C++ there are many ways of initiliazation of a single object
	// these forms can be used interchangeably
	// When list initializing make sure you use curly braces as with paranthesis it won't work
	vector<string> homies{"Lakshay","Rahul","Anubhav"," Vinit","Rishabh"};
	// while using vector<string> homies("Lakshay","Rahul","Anubhav"," Vinit","Rishabh"); will give an error

	// initializing a vector from a count and element value
	// general form of initializing a vector this way is vector<type> name(count(how many element),value(all the elements will have this value))
	vector<int> natural(10,0);
	vector<string> intro(5,"Hi there!");
	for(int i = 0;i < 10;i++){
		cout << natural[i] << "\n";
	}
	for(int i = 0;i < 5;i++){
		cout << intro[i] << "\n";
	}

	// You can also initialize using just count
	// This type of initialization will set all known data types to equivalent of null (0)
	vector<int> ivec(10); // initializes a vector of type int with 10 elements holding 0
	vector<string> svec(10); // initializes a vector of type string with 10 empty strings
	for(auto a : ivec){
		cout << a << "\n";
	}
	
}