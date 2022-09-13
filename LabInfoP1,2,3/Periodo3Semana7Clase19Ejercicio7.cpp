#include<iostream>
using namespace std;

int main(){
	int n1,n2,c;
	
	cout<<"digite un numero: ";cin>>n1;
	cout<<"digite un numero diferente: ";cin>>n2;
	c=n1;
	
	while(c>n2){
		cout<<c<<endl;
		c--;
	}
	
	while(c<n2){
		cout<<c<<endl;
		c++;
	}
	
	system("pause");
	return 0;
}
