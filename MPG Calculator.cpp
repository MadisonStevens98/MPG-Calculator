#include <iostream>
using namespace std;

double miles[10] = { 240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3 };
double gallons[10] = { 10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4 };
double mpg[10];

double *g = mpg;

int main() {
	for (int i = 0; i < 10; i++) {
		*g = miles[i] / gallons[i];
		cout << *g << ' ';
	}
	system("Pause");
	return 0;
}

