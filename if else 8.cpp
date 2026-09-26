#include<iostream>
using namespace std;
int main()
{
	int balance,amount;
	cin>>balance>>amount;
	if(amount<=balance)
	cout<<"withdraw succesful";
	else
	cout<<"insufficient balance";
	return 0;
}
