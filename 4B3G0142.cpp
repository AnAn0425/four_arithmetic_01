#include <iostream>
using namespace std;

int main()
{
	double x, y, res;
	char oper;

		
		while (true) {

				char ch;
				cout << "請輸入運算式: ";
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
						cout << "error, 無解!\n";
					}
					else {
						cout << x << oper << y << "= " << x/y << endl;
					}
				}
		}
}
