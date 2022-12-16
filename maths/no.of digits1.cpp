#include<iostream>

using namespace std;

int count_digits(int a){
	int count=0;
	while(a!=0){
		a=a/10;
		count++;
	}
	return count;
}

int main(){
	int n, no;
	cout<<"Enter a number to count the no of digits in it: ";
	cin>>n;
	no=count_digits(n);
	cout<<"No of digits in "<<n<<" are: "<<no<<endl;
}