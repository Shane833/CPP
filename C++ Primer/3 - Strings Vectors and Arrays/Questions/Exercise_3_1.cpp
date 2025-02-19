#include <iostream>
#include <string>
using namespace std;

int main(){

    // Reading a line at once
    string line;
    while(getline(cin,line)){
        if(!line.empty()){
            cout << line << endl;
        }
    }

    // Modified program to read a word at once
    string word;
    while(cin >> word){
        cout << word;
    }
}