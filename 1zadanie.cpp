#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int num;
	cout << "Введите число:";
	cin >> num;

	int kvadrat = num * num;
	int kyb = num * num * num;

	cout << "Квадрат числа:" << kvadrat << endl;
	cout << "Куб числа:" << kyb << endl;

	return 0;
}