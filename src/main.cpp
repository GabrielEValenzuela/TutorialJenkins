#include "Hello.h"
#include <iostream>

int main (int argc, char *argv[]){
	Hello *hi = new Hello();
	hi->print_message();
	std::cout<<"This was made by neovim and CMake"<<std::endl;
	return 0;
}
