#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c,t,t1,t2,x,x1,x2,x3,x4,delta;
	cout << "Giai phuong trinh Ax^4 + Bx^2 + C = 0\n";
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	cout << a << "x^4" << ((b > 0) ? "+" : "") << b << "x^2" << ((c > 0) ? "+" : "") << c << " = 0 " << endl;
	t = pow(x, 2);
	delta = pow(b , 2) - 4 * a * c;
	if(a == 0){
		if(b == 0){
			if(c == 0){
				cout << "Phuong trinh co vo so nghiem\n";
			}
			else{
				cout << "Phuong trinh vo nghiem\n";
			}
		}
		else{
			t = -c / b;
			if(t >= 0){
				x = sqrt(t);
				cout << "x = " << x << endl;
			}
		}
	}
	else{
		if(delta < 0){
			cout << "Phuong trinh vo nghiem\n";
		}
		else if(delta == 0){
			t = -b / (2 * a);
			if(t > 0){
				x1 = sqrt(t);
				x2 = -sqrt(t);
				cout << "x = " << x1 << " x = " << x2 << endl;
			}
			else{
				cout << "Phuong trinh vo nghiem\n";
			}
		}
		else{
			t1 = (-b - sqrt(delta)) / (2 * a);
			t2 = (-b + sqrt(delta)) / (2 * a);
			if(t1 > 0){
				x1 = sqrt(t1);
				x2 = -sqrt(t1);
				cout << "x = " << x1 << " x = " << x2 << endl;
			}
			else{
				cout << "Phuong trinh vo nghiem\n";
			}
			if(t2 > 0){
				x3 = sqrt(t2);
				x4 = -sqrt(t2);
				cout << "x = " << x3 << " x = " << x4 << endl;
			}
			else{
				cout << "Phuong trinh vo nghiem\n";
			}
		}
	}
	return 0;
}