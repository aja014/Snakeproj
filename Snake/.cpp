#include <Coorxy.h>
#include <iostream>
#include <conio.h>

using namespace std;

void draw() {
}
int main() {
	int x=1,y=1;
	A:
	switch (_getch()) {
	case 75: // left
		if (x <= 119) {
			x--;
			if (x < 0) {
				x = 119;
			}
		}
		coorxy(x, y); cout << char(223);
		break;
	case 72: // up
		if (y <= 29) {
			y--;
			if (y < 0) {
				y = 29;
			}
		}
		coorxy(x, y); cout << char(223);
		break;
	case 80: // down
		if (y <= 29) {
			y++;
			if (y > 29) {
				y = 0;
			}
		}
		coorxy(x, y); cout << char(223);
		break;
	case 77: // right
		if (x <= 119) {
			x++;
			if (x > 119) {
				x = 0;
			}
		}
		coorxy(x, y);cout << char(223);
		break;
	case 27:
		exit(0);
		break;
	}
	goto A;



	coorxy(0, 29); system("pause");
}