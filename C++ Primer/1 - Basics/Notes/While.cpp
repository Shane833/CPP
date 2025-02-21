#include <iostream>
using namespace std;

int main(int argc,char *argv[]){

// Similiar to the while loop in C so until the condition remaains true the loop will continue to run

int a,b;

cout << "Enter the range of your numbers : ";
cin >> a >> b;

while(a < b){

    cout << a << endl;
    a++;
}
}

