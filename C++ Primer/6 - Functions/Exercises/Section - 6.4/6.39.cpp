
/*
// ILLEGAL - definitely illegal
int calc(int){

}
int calc(const int){

}
*/

/*
// Again ILLEGAL
int get();
double get();
*/

// This will be legal - bcz they differ in type of the parameter
int *reset(int *){
	return nullptr;
}

double *reset(double *){
	return nullptr;
}


int main(){
	return 0;
}