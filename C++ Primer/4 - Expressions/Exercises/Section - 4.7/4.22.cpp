#include <iostream>
#include <string>

int main()
{
	int grade = 60;
	std::string finalgrade;
	//std::string finalgrade = (grade > 90) ? "high pass" : ((grade <= 75) ? ((grade >= 60) ? "low pass" : "fail") : "pass");

	if(grade > 90){
		finalgrade = "high pass";
	}else{
		if(grade <= 75 && grade >= 60){
			finalgrade = "low pass";
		}else if (grade < 60){
			finalgrade = "fail";
		}
		else{
			finalgrade = "pass";
		}
	}

	std::cout << finalgrade << std::endl;
}