#include "chapter6.h"

int fact(int number){
	int result = 1;
	for(int i = number; i > 0;i--){
		result = result * i;
	}
	return result;
}