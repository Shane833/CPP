#include <iostream>
#include <string>

int main(){
	std::string s = "ffmpeg flourish fish";

	int ff_cnt = 0, fl_cnt = 0, fi_cnt = 0;

	for(auto beg = s.begin();beg < s.end() - 1;beg++){
		switch(*beg){ 
			case 'f':
				switch(*(beg + 1)){
					case 'f':
						ff_cnt++;
						break;
					case 'l':
						fl_cnt++;
						break;
					case 'i':
						fi_cnt++;
						break;
				}
				break;
		}
	}

	std::cout << "No. of ff in string are : " << ff_cnt << std::endl;
	std::cout << "No. of fl in string are : " << fl_cnt << std::endl;
	std::cout << "No. of fi in string are : " << fi_cnt << std::endl;


	
}