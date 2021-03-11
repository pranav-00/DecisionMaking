#include<iostream>
using namespace std;
int main(){
	int age,a=1;
	while(a){
		cout<<"Enter Age of a user: ";
		cin>>age;
		if(age>=18)
			cout<<"You are eligible";
		else
			cout<<"You are not eligible";
		cout<<"\nEnter 1 to continue or 0 to exit";
		cin>>a;
	}
return 0;		
}
