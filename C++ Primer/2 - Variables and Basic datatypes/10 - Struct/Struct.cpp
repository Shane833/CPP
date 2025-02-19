#include <iostream>
using namespace std;

// Sturct is like a smaller version of class
struct info{

    string name;
};

int main(){
    info iobj,*pobj;// You can create an simple object or a pointer object
    cin >> iobj.name;// and use dot or arrow member operator depending on the type of object you choose
    cout << iobj.name << "\n";//It is important to know that each object create its own instance(that is have its own copy of the data members of the struct/classs)
	cout << pobj->name; // When we try to access the name variable through the pointer object it displays an empty string and nothing has been written to the data member of the pointer object
//So if you try to access the same member from two different objects then your results may vary if you have changed the default value of the data member
}
