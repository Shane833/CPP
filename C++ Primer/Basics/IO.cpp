#include <iostream>
using namespace std;

int main(int argc,char *argv[]){ 

    int a;

// so the iostream library also the input output stream library contains some statements for the basic I/O functionality

    // cout is used to output the datastream to the console

    cout << "Hi there"; // simply outputs the string to the console uses the '<<' to direct the flow of the output
    cout << "Yeah boi" << endl; // endl is used to flush the buffer so that it does not save space in the memory and so the memory is free

    // cerr is also used to output to the console but it is unbuffered and don't hold the message in its memory also called character error
    cerr << "This is the cerr unbuffered boi\n"; // if you want to handle and print crashes then you must use cerr as it don't hold them in the buffer

    // clog is also used for output but its buffered and stores the message and is not preffered for debugging purposes
    clog << "This here is buffered boi\n";

    // cin is used for the input stream and can take the input from the user and similarly the '>>' shows the flow of data
    cin >> a;
    cout << "Value of a is " << a;

    // each of them can be written individually without affecting our program
    cout;
    cin;
    cerr;
    clog;
    // Its the operators that define the flow of data
    // but you cannot do cout << ; as there is not data present to display

}