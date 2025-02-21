#include <iostream>
using namespace std;

int add(int x,int y){
    
    string a("boi");
    cout << a.at(0) << endl;
    return x + y; 
    
}

string place(string x);
int where(string x);

#include <cmath> // Its not neccessary to include your libraries at the begining of the programs they can be inserted at any step
int main(){      // even if they are included at any stage of the program they are made available globally and can be accessed even before the include statement
    
    std::cout << add(2,3) << std::endl;

    string c = "aeiou";
    
    cout << c.find("a") << endl;
    
    cout << pow(5,2) << endl;

    cout << place("Shivang") << endl;

    cout << where("asdfg");
    

}

#define A 20 // these are not made globally available but only available to blocks after its declaration

string place(string x)
{
    #include <string> // seems like you can even include them inside your functions and still its globally available

    string a = x.append("hi");
    
    return a;
}

int where(string x){

    int b = x.length();
    
    return b + A;
}

