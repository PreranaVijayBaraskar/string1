#include<iostream>
using namespace std;

int main()
{
	string s;
	int i,k;
	
	cout<<"Enter a website name:\t";
	cin>>s;
	
	cout<<"\n\nWebsite is:"<<s;
	
	cout<<"\n\nRequired Domain Name is:";
	
	for(i=4; s[i] !='.';i++)
	cout<<s[i];
	}
