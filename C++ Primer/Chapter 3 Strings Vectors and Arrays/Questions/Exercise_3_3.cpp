#include <iostream>
#include <string>
using namespace std;

int main(int argc,char *argv[]){

    string s1,s2;
    
    cout << "Enter two strings : ";
    cin >> s1 >> s2;

    if(!s1.empty() && !s2.empty()){

        if(s1 != s2){

            if(s1 > s2){
                cout << s1 << " is larger" << endl;
            }
            else{
                cout << s2 << " is larger" << endl;
            }
        }
        else{
            cout << "Both are equal Strings" << endl;
        }
        
        
    }
    // Modified program for comparing length
    if(!s1.empty() && !s2.empty()){

        if(s1.size() != s2.size()){

            if(s1.size() > s2.size()){
                cout << s1 << " is longer in size" << endl;
            }
            else{
                cout << s2 << " is longer in size" << endl;
            }
        }
        else{
            cout << "Both Strings are equal length" << endl;
        }
    }    
        
    
}