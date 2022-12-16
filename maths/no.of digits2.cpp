#include<iostream>

using namespace std;

int count_digits(int a){
	if(a==0){
		return 0;
	}
	return 1+count_digits(a/10);
}

int main(){
	int n;
	cout<<"Enter a no: "<<endl;
	cin>>n;
	cout<<"The no of digits are "<<count_digits(n)<<endl;
}