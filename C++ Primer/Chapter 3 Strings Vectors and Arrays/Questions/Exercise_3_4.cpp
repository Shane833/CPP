#include <iostream>
#include <string>
using namespace std;

int main(int argc,char *argv[]){

    string read,concatenate;

    cout << "Enter strings : ";
    while(cin >> read){
        concatenate += read;
    }
    cout << concatenate << endl;
    

    // Modified version to add spaces
    cout << "Enter strings : ";
    while(cin >> read){
        concatenate += " " + read;
    }
    cout << concatenate << endl;
}