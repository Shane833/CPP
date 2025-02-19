#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    // you can easily process individual characters in a string using the tools provided in the cctype libraray of C language
    /* 
    Here is a list of all the character functions you can perform on the individual characters of a string

    isalnum(c) true if c is a letter or a digit.
    isalpha(c) true if c is a letter.
    iscntrl(c) true if c is a control character.
    isdigit(c) true if c is a digit.
    isgraph(c) true if c is not a space but is printable.
    islower(c) true if c is a lowercase letter.
    isprint(c) true if c is a printable character (i.e., a space or a character that has a
    visible representation).
    ispunct(c) true if c is a punctuation character (i.e., a character that is not a control
    character, a digit, a letter, or a printable whitespace).
    isspace(c) true if c is whitespace (i.e., a space, tab, vertical tab, return, newline, or
    formfeed).
    isupper(c) true if c is an uppercase letter.
    isxdigit(c) true if c is a hexadecimal digit.
    tolower(c) If c is an uppercase letter, returns its lowercase equivalent; otherwise
    returns c unchanged.
    toupper(c) If c is a lowercase letter, returns its uppercase equivalent; otherwise returns
    c unchanged.

    */
    // we'll use ranged for loop to access every character of the string 
    string hey("Yuhu!");

    // now we can use the ranged for to display each fo the individual character of the string
    for(char c : hey){// here c is an instance of each individual character of the string 
        cout << c << " ";// just putting a whitespace to separate the characters
    }
    cout << endl;
    // Lets create a program to count the number of punctutations in our string

    string hi("Yo!: there!!"); // Now this contains total of 4 punctuations
    string::size_type size = 0; // We will store the size of our punctutations in this variable

    for(auto c: hi){
        if(ispunct(c)){ // this will return true if c is punctuation
            size++;
        }
    }
    cout << size << " punctutations in " << hi << endl;

    // if you want to change the value of each character in a string we must define the loop variable as a reference
    // As reference is just another name for the variable we can do some operation onto that reference and the results will be passed onto the characters

    string small("shivang");
    // lets convert all of these characters to uppercase we will use the toupper() function

    for(char &c:small){
         
        c = toupper(c);// converts the character to uppercase
        // when we are assigning to c we are assigning actually to the characters in the string
    }

    cout << small << endl;
}
