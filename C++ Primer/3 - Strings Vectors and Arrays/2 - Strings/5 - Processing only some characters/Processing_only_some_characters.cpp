#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    // now range for loop is good when we want to access or operate upon every element of the array
    // but if we only only access a specific element then we would use the subscript operator([])
    // [] operator takes argument of type string::size_type the index of the string starts at 0 and so on.
    // inside [] we specify the index of the characters in the string and access or operate upon 
    // the operator actually return a reference to the characters
    // the range of the subscipt should be >= 0 and <= size()
    // out of this range undefined behaviour is shown
    string s("using subscript");

    // So we can implement the subscript in such a way
    if(!s.empty()){ // checking if the string is not empty
        cout << s[1] << endl;// displaying the character at index 1
    }

    // now we can directly manipulate the substring as they are simply characters
    if(!s.empty()){
       s[2] = toupper(s[2]);// making the character at 2nd index uppercase
        cout << s << endl;
    }

    // now using the substring we will turn the first word to uppercase
    
    if(!s.empty()){
        for(string::size_type index = 0; index != s.size() && !isspace(s[index]);index++){ // now here we will check for the condition till we haven't reached the end of the string and till the character is not a space however if either of the condtion is false then we will come out of the loop
            s[index] = toupper(s[index]); // here we are simply changing each of the character to uppercase
        } // in the above statement the && operator ensure that the right hand experssion is not evaluated till the left is true so if the index is not within the range then the function would not check for any spaces
        // also always use the variable of type size_type for index as its a unsigned type so we can ensure that it will never check for any index less than zero which is out of range for the subscript
        cout << s << endl;
    }

    // using the above data we will now create a decimal to hexadecimal convertor

    string hexadigits = "0123456789ABCDEF"; // string containing all the hexadigits
    cout << "Enter the numbers in decimal between 0 to 15, numbers should be separated by spaces\nType ^Z when done and hit enter" << endl;
    string::size_type n; // declared n of type size_type
    string result; // string to hold our results
    while(cin >> n){ // read the numbers till the end of file
        if(n < hexadigits.size()){ // if the digits are greater than the size then they will be ignored
            result += hexadigits[n]; // simply concatenating the strings
        }
    } 
    cout << result << endl;

}