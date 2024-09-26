#include <iostream>
#include <string>

using namespace std;
int main() {
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 2; i <= 100; i++) {
		if (i % 2 == 0) {
			sum1 += i;
		}
	}
	cout << "The sum of all even numbers between 2 and 100, inclusive, is " << sum1 << "." << endl;
	for (int i = 1; i <= 100; i++) {
		sum2 = sum2 + (i * i);
	}
	cout << "The sum of all squares between 1 and 100, inclusive, is " << sum2 << ".";
}