#include <iostream>
using namespace std;

int main() {

	int age;
	cout << "Enter age to determine max heart rate! " << endl;
	cin >> age;
	cout << "Your max heart rate is: " << (211 - .64 * age);

	return 0;
}