#include <iostream>
using namespace std;

int main()
{
	double x, y, res;
	char oper;

		
		while (true) {

				char ch;
				cout << "輸入四則運算: ";
				cin >> x >> oper >> y;
				
				if (oper == '+') {
					cout << x << oper << y << "= " << x + y << endl;
				}
				else if (oper == '-') {
					cout << x << oper << y << "= " << x - y << endl;
				}
				else if (oper == '*') {
					cout << x << oper << y << "= " << x * y << endl;
				}
				else if (oper == '/') {
					if (y == 0) {
						cout << "error, µL¸Ñ!\n";
					}
					else {
						cout << x << oper << y << "= " << x/y << endl;
					}
				}
		}
}
