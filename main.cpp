#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <list>
class prime{
	int MIN;
	int MAX;
	int sum;
	int position;
	std::vector<int>::iterator ite_base;
	std::vector<int>::iterator ite_list;
	public:
void run(){
	sum=1;
	MIN=2;
	MAX=20;
	std::vector<int> i_base;
	std::vector<int> i_list;
	for(;MIN<MAX;)
		i_base.push_back(MIN++);
	for(ite_base=i_base.begin(),ite_list=i_list.begin();i_base.end() != ite_base; ite_base++,ite_list++){
	std::cout << *ite_base<< std::endl;
	i_list.push_back(*ite_base);
	i_base.erase(ite_base);

	ite_list=i_list.end();
	

	////for_each(ite_base, i_base.end(), [i_list,sum](int x) -> int{if(x==i_list.at(position)*sum)i_base.erase(&x); });

	}
	std::cout<<"終わったよ!!";
		
};
};
int main() try {
	prime ho;
	ho.run();
	return 0;
}catch(const std::exception& e){
	std::cerr << e.what();
	return 0;
}