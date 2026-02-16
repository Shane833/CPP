// So function that uses top-level const, the constness is ignored
// while function declaration


int print(int a){
	return a;
}
int print(const int a){ // effectively same declaration should result in error
	return a;		    // Yes it shows up as redeclaration
}

void display(int *b){
}

void display(int *const b){ // This is a top level const, or just a const pointer that can point to only a single object


}

int main(){

}