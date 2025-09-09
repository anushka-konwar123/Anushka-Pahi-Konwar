#include <iostream>
using namespace std;
int main() {
	int n;
	cout << " Enter value of n :";
	cin >> n;
	double sum = 0.0;
	for (int i=1; i <= n; i++) {
		sum += 1.0/i;
	}
	cout << " Sum of series = "<< sum << endl;
	return 0;
}