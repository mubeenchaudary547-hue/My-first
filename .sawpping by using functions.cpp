/*#include<iostream>
#include<cmath>
using namespace std;
void swaping(int*a,int*b){
	 int temp=*a;
	 *a=*b;
	 *b=temp;
}
int main(){
	int a,b;
	cout<<"the value of a is="<<endl;
	cin>>a;
	cout<<"enter the value of b="<<endl;
	cin>>b;
	swaping(&a,&b);//by using pointer refrence
	cout<<"the value of a is"<<a<<endl;
	cout<<"the value of b is "<<b<<endl;
	
	
	return 0;
}    */
#include<iostream>
#include<cmath>
using namespace std;
void varswaping(int&a,int&b){
	 int temp=a;
	 a=b;
	 b=temp;
}
int main(){
	int a,b;
	cout<<"the value of a is="<<endl;
	cin>>a;
	cout<<"enter the value of b="<<endl;
	cin>>b;
	varswaping(a,b);//swaping by using varibable refrence
	cout<<"the value of a is"<<a<<endl;
	cout<<"the value of b is "<<b<<endl;
	
	
	return 0;
}
