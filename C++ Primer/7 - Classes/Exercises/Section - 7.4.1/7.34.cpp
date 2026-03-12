#include <iostream>

int height;

class Screen{
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
    
    public:
        void dummy_fcn(pos height){
            cursor = height * width;
        }
        typedef std::string::size_type pos;
};

int main(){
    Screen s;

}
