#include <iostream>
#include <Coorxy.h>
#include <conio.h>

using namespace std;

//int main() {
//	// pointer
//	// * is used to store the memory address of another variable
//	// & is used to get the value address of its storage location
//	int p = 1;
//
//	int *x = &p;
//	int &y = p;
//
//	cout << *x;
//
//
//	coorxy(0, 29); system("pause");
//}

int x = 45, y = 15;
int xtail1, xtail2, xtail3, xtail4;

void click() {
	switch (_getch()) {
	case 72:
		if (y <= 29) {
			y--;
			if (y < 0){
				y = 29;
			}
		}
		break;
	case 75:
		if (x <= 119) {
			x--;
			if (x < 0) {
				x = 119;
			}
		}
		break;
	case 77:
		if (x <= 119) {
			x++;
			if (x > 119) {
				x = 0;
			}
		}
		break;
	case 80:
		if (y <= 29) {
			y++;
			if (y > 29) {
				y = 0;
			}
		}
		break;
	}
}

void logic() {
	system("cls");
	xtail4 = x - 4;
	/*tail2 = x - 2;
	tail1 = x - 1;*/

	xtail4 = xtail3;
	xtail3 = xtail2;
	xtail2 = xtail1;
	xtail1 = x;



	coorxy(xtail4, y); cout << "#";
	coorxy(xtail3, y); cout << "#";
	coorxy(xtail2, y); cout << "#";
	coorxy(xtail1, y); cout << "#";




}


int main() {

	while (true) {
		click();
		logic();
	}




	coorxy(0, 29); system("pause");
}