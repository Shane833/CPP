#include <iostream>
#include <string>
using namespace std;


int main(int argc,char *argv[]){

// You can check if the strings is empty or not by using the empty() method which returns a bool depending upon if the string is empty or not
string something;
if(something.empty()){// as the string is empty the condition will be true and therefore the it will print the message out
    cout << "The string is empty" << endl;
}

string smthg("Not Empty");
if(!smthg.empty()){// now here we use the NOT operator(!) which inverses the output of the empty() method which would have been false but after using the NOT operator its changed to true
    cout << "This string is not empty" << endl;
}

// You can also check the length/size of the string using the size() method which returns the number of characters in the string
cout << something.size() << " " << smthg.size() << endl;
}