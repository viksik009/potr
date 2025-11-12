# include <iostream>
using namespace std;
int factorial(int n) {
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}
int main() {
	setlocale(0, "");
	int n = 5;
	int f1 = 1;
	for (int i = 2; i <= n; i++)
		f1 = i;
	int f2 = factorial(n);
	cout << "Вычисляем факториал числа :" << n << "!" << endl;
	cout << "Результат :" << f1 << endl;
	
	return 0;
}
