#include <print>
#include <string>

std::string arr[2][10] = {{"Hello"},{"Hi"}};

// returning a refernce to an array of 10 ints
/*
std::string &retRefOfArray(int i){
	return (i % 2) ? arr[1] : arr[0];
}
*/	

void display(std::string (&iarr)[10]){
	for(int i = 0;i < 10;i++){
		std::println("{}",iarr[i]);
	}
}

std::string (&retRefOfArray(int i))[10]{ // Alright so yeah, we can declare a function that returns a refernce to an array of 10 strings
	return (i % 2) ? arr[1] : arr[0];
}

int main(){
	display(retRefOfArray(0));
	display(retRefOfArray(1));

	std::string (&sref)[10] = arr[0]; // Alright so this is a valid way to make a reference 
									  // to an string array of size 10
	// NOW HOW WOULD I MAKE IT A RETURN TYPE ??
	// ANSWER: You would do it the same way you would declare a pointer to an array of size 10
	// if return_type (&name(args))[size]{}
}
