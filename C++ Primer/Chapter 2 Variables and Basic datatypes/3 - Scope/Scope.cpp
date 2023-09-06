#include <iostream>
using namespace std;

int main(){

    int i = 10,sum = 0;// Though we have defined an integer named i in the outer scope 

    for(int i = 0;i < 10;i++){
        sum += i;// but when we use the same variable in the inner scope the local variable is given preference in the inner scope
        cout << sum << " ";
    }
	// The scope of any variable is within a block represented by ' {} '
	// all the local variable are local to a block and any reference to them out of the block will result in error
	// Though the variable are local to the block, they can still be reference in the inner blocks as technically they are still inside their original block
}

