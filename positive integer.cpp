//This code is developed by Anushka
#include<iostream>
//Anushka
using namespace std;
int main () {
	int n;
	cout<<"Enter a positive integer:";
	cin>> n;
	if (n<0) {
		cout<<"Please enter a positive integer."<<endl;
		return 1;
	}
	int sum =0;
	int temp= n;
	while ( temp != 0) {
		sum += temp % 10;
		temp/= 10;
	}
	cout<<"Sum of digits of" << n<< "=" << sum <<endl;
	return 0;

}

