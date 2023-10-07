#include <iostream>
using namespace std;

int main() {

	setlocale(0, "");

	cout << "¬ведите число от 1 до 100: ";

	int number;
	cin >> number;

	if (number <= 0) {
		cout << "ќшибка! „исло меньше 0";
	}
	else if (number <= 10) {
		cout << "„исло в промежутке от 1 до 10";
	}
	else if (number <= 20) {
		cout << "„исло в промежутке от 11 до 20";
	}
	else if (number <= 30) {
		cout << "„исло в промежутке от 21 до 30";
	}
	else if (number <= 40) {
		cout << "„исло в промежутке от 31 до 40";
	}
	else if (number <= 50) {
		cout << "„исло в промежутке от 41 до 50";
	}
	else if (number <= 60) {
		cout << "„исло в промежутке от 51 до 60";
	}
	else if (number <= 70) {
		cout << "„исло в промежутке от 61 до 70";
	}
	else if (number <= 80) {
		cout << "„исло в промежутке от 71 до 80";
	}
	else if (number <= 90) {
		cout << "„исло в промежутке от 81 до 90";
	}
	else if (number <= 100) {
		cout << "„исло в промежутке от 91 до 100";
	}
	else {
		cout << "ќшибка! „исло больше 100";
	}

	int _; cin >> _;
	return 0;
}