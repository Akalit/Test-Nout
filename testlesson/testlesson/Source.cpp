#include <iostream>

using namespace std;

class Counter{
	int count;
public:
	Counter() : count(0) {}
	 
	 int getCount() { return count ;}

	 //void operator ++ () { count++ ;}
};

int main(){
	setlocale(0,"");

	Counter c1;
	cout << c1.getCount() << endl;

	++c1;

	cout << c1.getCount() << endl;

	system("pause");
	return 0;
}