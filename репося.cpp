#include <iostream>
using namespace std;

int main() {

	setlocale(0, "");

	cout << "������� ����� �� 1 �� 100: ";

	int number;
	cin >> number;

	if (number <= 0) {
		cout << "������! ����� ������ 0";
	}
	else if (number <= 10) {
		cout << "����� � ���������� �� 1 �� 10";
	}
	else if (number <= 20) {
		cout << "����� � ���������� �� 11 �� 20";
	}
	else if (number <= 30) {
		cout << "����� � ���������� �� 21 �� 30";
	}
	else if (number <= 40) {
		cout << "����� � ���������� �� 31 �� 40";
	}
	else if (number <= 50) {
		cout << "����� � ���������� �� 41 �� 50";
	}
	else if (number <= 60) {
		cout << "����� � ���������� �� 51 �� 60";
	}
	else if (number <= 70) {
		cout << "����� � ���������� �� 61 �� 70";
	}
	else if (number <= 80) {
		cout << "����� � ���������� �� 71 �� 80";
	}
	else if (number <= 90) {
		cout << "����� � ���������� �� 81 �� 90";
	}
	else if (number <= 100) {
		cout << "����� � ���������� �� 91 �� 100";
	}
	else {
		cout << "������! ����� ������ 100";
	}

	int _; cin >> _;
	return 0;
}