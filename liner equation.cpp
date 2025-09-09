//This code is developed by Anushka
#include<iostream>
using namespace std;
int main() {
	double a1,b1,c1,a2,b2,c2;
	cout<< "Enter coefficients of first equation (a1 b1 c1):";
	cin>> a1>> b1>> c1;
	cout << "Enter coefficients of second equation (a2 b2 c2):";
	cin>> a2>> b2>> c2;
	double det = a1* b2- a2*b1 ;
	if ( det == 0) {
		cout << " No unique solution exists ( lines and parallel or coincident )."<< endl;
	} else {
		double x = ( c1*b2- c2*b1)/ det;
		double y= ( a1*c2- a2*c1)/ det;
		cout << "Solution : x= " << x<<",y=" << y << endl;
	}
	return 0;

}

