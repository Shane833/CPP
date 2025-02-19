#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // Comparing strings :
    // strings are compared on the basis of length, value of characters according to ASCII etc

    // You can use the simple comparision operators like ==,<,>,<=,>= and != to compare strings
    string msg = "Hello World";
    string say = "Hiya";
    string z = "zoo";

    if(msg > say){
        cout << msg << " is greater than " << say << endl;
    }
    else{
        cout << say << " is greater than " << msg << endl;
    }
    // It shows that Hiya is greater this is because the first character 'H' is the same but then the character 'i' in "Hiya" is greater than the 'e' in the Hello so therfore "Hiya" becomes greater than "Hello World"
    if(say > z){
        cout << say << endl;
    }
    else{
        cout << z << endl;
    }


    // Adding strings

    //  Adding library strings to each other
    // string can be concatenated onto each other by simply using the '+' operator in between each library strings(different than string literals)

    string a = "Yo ",b = "Boi!!!";
    string c = a + b;
    cout << c << endl;

    // Adding library strings to string literals
    // Now normally you cannot add two string literals using the '+' operator however if you include library strings as operands then you can do so

    // For example:
    string s = "Hehe";
    s = s + "Haha";// Now what happens here is it convers the constant character string into library string(just like we typecast to change one datatype into another)
                   // here the "Haha" is converted into some temporary library string and then concatenated onto the main string
    cout << s << endl;

    string _1 = "hi";
    string _2 = "there";
    string _3 = _1 + " " + " ," + " " + _2; // Now what is happening here is that it forms little clusters of substrings like (_1 + " ") this return a library string say temp then it agains forms a cluster of subtring and keep on doing so until the end
    cout << _3 << endl;

    // its necessary that you first write your library string operand first before appending those string literals bcz simple string literals cannot be concatenated on their own as there is no functionality defined as such for this operation using the '+' operator
    // so string _4 = ":" + ",." + _3; would be illegal bcz you cannot add the first two string literals directly
}
