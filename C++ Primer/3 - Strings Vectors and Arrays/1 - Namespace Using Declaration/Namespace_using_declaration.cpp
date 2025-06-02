#include <iostream>
namespace mine{
    void show(){
        std::cout << "Yo this my namespace!!";
    }
    }
	// using mine::show; // You must specify the using declration for each item you wish 
						 // to use from the namespace
int main(){

    std::cout << "Yo" << std::endl;// we are using the namespace std and also using the scope operator(::) which find the right hand function inside the scope of the left hand 
    // so you can use the using declaration to avoid writing the std::cout 
    // in order to do so just simply write using std::cout and from this point own you can just simply write cout instead of writting std::cout and cout becomes an alias for std::cout 
    
    // never use the using declarations on your header files

    // You can even create your own namespace using the namespace keyword like and then same as you define your class or structure
    mine::show();
	// show(); // after the using delcration you can directly use the item you wish without 
			   // the scope resolution operator (::)
}
