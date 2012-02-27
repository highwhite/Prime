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

	std::cout << "素数計算プログラム開始"<<std::endl<<std::endl;
	std::cout << "18~32までの数字を入力してください!!2からそこまでの素数を計算します!!"<<std::endl;
	std::cout << ">"; std::cin >> MAX;

	position=0;
	MIN=2;
	sum=2;
	std::vector<int> i_base;
	std::vector<int> i_list;

	for(;MIN<MAX;)
		i_base.push_back(MIN++);

	ite_base=i_base.begin();
	i_list.push_back(*ite_base);
	i_base.erase(ite_base);

	for(ite_list=i_list.begin();(*ite_list)*(*ite_list) <= *(i_base.end()-1); ite_list++,position++){
		std::cout << " i_list push_back"<<*ite_base<< std::endl;
		i_list.push_back(*ite_base);
		std::cout << "i_base erase"<< *ite_base<< std::endl;
		i_base.erase(ite_base);
	
		ite_list=i_list.begin()+position;

		for(ite_base=i_base.begin();i_base.end() != ite_base; ite_base++){
			std::cout <<"*ite_base="<< *ite_base<< std::endl;
			std::cout <<"*ite_list="<< *ite_list<< std::endl;
			std::cout <<"sum value"<< sum<<std::endl;
			if(*ite_list*sum<=*ite_base){
				if(*ite_list*sum==*ite_base){
					std::cout << "inside i_base erase"<< *ite_base<< std::endl;
					i_base.erase(ite_base);
				}
			sum++;
			}
		}
		sum=2;
		ite_base=i_base.begin();
	}
	std::cout << "素数は以下の通りです！" <<std::endl
	std::cout << "i_listのリストは";
	for(ite_base=i_base.begin(),ite_list=i_list.begin();i_list.end() != ite_list; ite_list++){
		std::cout << *ite_list<<" ";
	}
	std::cout << std::endl<<"i_baseのリストは";
	for(ite_base=i_base.begin(),ite_list=i_list.begin();i_base.end() != ite_base; ite_base++){
		std::cout << *ite_base<<" ";
	}

	std::cout<<"です。終わったよ!!";

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