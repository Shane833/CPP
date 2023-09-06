#include <iostream>
#include <string>
using namespace std;

int main(){

// Reading strings

// You can use the basic I/O functions to read and write strings

string s;
cout << "Enter a strings: ";
cin >> s;// it only reads a whitespace separated string meaning sigle word but not the whole line
cout << "You entered " << s << endl;


//You can read multiple amounts of strings by defining a loop until it reaches the end of line(EOF)

string words;
while(cin >> words){
    cout << words << endl;
}


// Reading whole lines
// You can read an entire line of string even if its separated by whitespace characters by using the getline() function
// this function takes two arguments the first is the input stream and then the other is the string in which you want to store the input

string line;
cout << "Enter a line of strings: ";
getline(cin,line);// as soon as it reads a newline it stops reading and return whatever the answer is,it will stop reading even if the first character is a newline
cout << "You entered : " << line << endl;


}



