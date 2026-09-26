#include<iostream>
using namespace std;
int main()
{
	int marks,attendance;
	cin>>marks>>attendance;
	if(marks>=80&&attendance>=75)
	cout<<"eligible for scholarship";
	else
	cout<<"not eligible for scholarship";
	return 0;
}
