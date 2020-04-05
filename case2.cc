#include<iostream>
using namespace std;
int main()
{
	int i,i_sumvalue=0,i_number;
	cout<<"Enter the number";
	cin>>i_number;
	cout<<endl;
	for(i=1;i<=i_number;i++)
{
	i_sumvalue=i_sumvalue+i*i;
}
cout<<i_sumvalue;
return 0;
}
