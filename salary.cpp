#include<iostream>
//Pahi
using namespace std;
int main () {
	double basic, hra, da, allowances;
	cout << "Enter Basic Salary:";
	cin>> basic;
	cout<< "Enter HRA";
	cin>>hra;
	cout<<"Enter DA:";
	cin >> da;
	cout << "Enter other  Allowances:" ;
	cin>> allowances;
	 double totalsalary = basic + hra +da + allowances;
	 cout << "Total salary = " << totalsalary << endl;
	 return 0;

}
