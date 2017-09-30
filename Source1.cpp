#include"menu.hpp"

int main() {
	system("cls");
	menu ground;
	int p;
	do {
		p = ground.start();
	} while (p != 1);
	system("cls");
	logo_thank();

	_getch();
	return 0;
}