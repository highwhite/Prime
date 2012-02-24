#include <iostream>
#include <exception>
#include <exception>
#include <vector>
#include <list>

class prime{
	int MIN;
	int MAX;
	public:
void run(){
	MIN=1;
	MAX=20;
	std::vector<int> i_base;
	std::vector<int> i_list;
	for(;MIN<MAX;)
		i_base.push_back(MIN++);
	i_list.push_back(*i_base.begin());
	std::cout<<*i_list.begin()<<std::endl;
};
};
int main() try {
	prime ho;
}catch(const std::exception& e){
	std::cerr << e.what();
}