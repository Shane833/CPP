#include <iostream>
using namespace std;

int main(){

    int a = 120;// every reference starts with '&' sign
    int &ref = a;// ref here is a reference to a and is simply another name for a
    //all operation done on the reference affects the actual variable that it is referring to
    ref = ref + 5;
    cout << ref << endl;
    // You can never have an empty reference it must be initialized and should be of same datatype at initialization
   
}