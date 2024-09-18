#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	cout << "Введіть число: ";
	cin >> a;
	if (a >= 1 && a <= 100) {
		cout << "Число "<<a<< " входить в діапазон";
	}
	else {
		cout << "Число "<<a<< " не входить в діапазон";
	}
}
