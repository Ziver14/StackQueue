#include<iostream>
#include<string>
#include<fstream>

#include<list>
#include<vector>
#include<set>


#include<queue>
#include<stack>


class DemoGood {
public:
	DemoGood() {
		std::cout << this << "create by default constructor\n";

	}

	DemoGood(int a, bool b) {
		std::cout << this << "create by parametric constructor\n";
	}

	DemoGood(const DemoGood& other) {
		std::cout << this << "create by copy constructor\n";
		std::cout << "from " << &other << "object\n";
	}

	~DemoGood() {
		std::cout << this << "destroyed\n";
	}

	int var = 0;
};

int main() {

	/*std::stack<DemoGood, std::list<DemoGood>> qwe2;

	{
		DemoGood tmp;
		for (int i = 0; i < 7; i++)
		{
			
			tmp.var = i;
			qwe2.push(tmp);
		}
	}
	for (int i = 0; i < 7; i++)
	{
		std::cout << qwe2.top().var << ' ';
		qwe2.pop();
	}*/
	//работа stack
	/*for (int i = 0; i < 7; i++)
	{
		qwe2.push(i);
	}

	for (int i = 0; i < 7; i++)
	{
		std::cout << qwe2.top() << ' ';
		qwe2.pop();
	}*/
	//работа queue
	/*for (int i = 0; i < 7; i++)
	{
		qwe.push(i);
	}

	for (int i = 0; i < 7; i++)
	{	
		std::cout<<qwe.front() << ' ';
		qwe.pop();
	}*/


	std::stack<std::string > qwe3;
	std::queue<std::string > qwe4;

	std::string path = "Name.txt";
	std::ifstream in;
	
	in.open(path);
	if (in.is_open()) {
		std::string str;
		while (std::getline(in, str)) {
			qwe3.push(str);
			qwe4.push(str);
		}
	}

	
	for (int i = qwe3.size(); i != 0; i--)
	{
		std::cout << qwe3.top() << ' ';
		qwe3.pop();
		
	}
	std::cout<<std::endl;
	for (int i = qwe4.size(); i != 0; i--)
	{
		std::cout << qwe4.front() << ' ';
		qwe4.pop();

	}



	return 0;
}