#include <iostream>
#include <vector>
#include "test01.h"

using namespace std;


void print_hello(){
	cout << "hello, world." << endl;
}

void adda()
{
	ll=ll+1;
}
void addb()
{
	ll=ll+10;
}
int main(){

	ll=0;
	adda();
	cout<< ll<<endl;
	addb();
	cout<< ll<<endl;
	vector<int> A;
    vector<int> B;
	A.push_back(1);
	A.push_back(2);
	A.push_back(3);
	B.push_back(4);
	B.push_back(5);
    A.assign(B.begin(),B.end());
	for(auto i:A)
	{
		cout<<i<<endl;
	}
	for(auto i:B)
	cout<<i<<endl;
	cout<<A.size();
	return 0;
}
