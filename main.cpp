//
// Created by . pathos on 2026/10/12.
//

#include<iostream>
#include<thread>
#include<string>

class hello {
public:
	void operator()(std::string language)const {
		if (language == "中文") {
			std::cout << "你好" << std::endl;
		}
		else if (language == "Deutsch") {
			std::cout << "Guten Tag" << std::endl;
		}
		else {
			std::cout << "Hello" << std::endl;
		}
	}
};


int main(){
	hello hello_in_deutschland;
	std::thread t(hello_in_deutschland,"Deutsch");
	t.join();
}