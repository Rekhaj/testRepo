#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	std::cout << "Have " << argc << " arguments:" << std::endl;
	for (int i = 0; i < argc; ++i) {
		std::cout << argv[i] << std::endl;
	}
	std::cout << "Hello welcome to command prompt" << std::endl;
	return 0;
}