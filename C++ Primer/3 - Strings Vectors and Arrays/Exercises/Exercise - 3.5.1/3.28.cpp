#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

void displayInt(int arr[], size_t size){
	for(size_t i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void displayString(string arr[], size_t size){
	for(size_t i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

string sa[10];
int ia[10];

int main()
{
	string sa2[10];
	int ia2[10];

	displayInt(ia, sizeof(ia)/sizeof(ia[0]));
	// displayInt(ia2, sizeof(ia2)/sizeof(ia2[0]));
	// We can use range-for for local arrays with size definitions
	for(int i : ia2){
		cout << i << " ";
	}
	cout << endl;

	displayString(sa, sizeof(sa)/sizeof(sa[0]));
	displayString(sa2, sizeof(sa2)/sizeof(sa2[0]));



}