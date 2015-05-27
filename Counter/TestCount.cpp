#include <iostream>
#include <string>
#include "UpDown.h"

using namespace std;

void display(string name, UpDownCount &temp);

int main()
{
	//All cases
	UpDownCount a, b(120, 250, 5, 2), c(12, 26, 6, 7), d(-111, 112, 50, 50), e(-59, 62, 99, 64);

	display("1", a);
	display("2", b);
	display("3", c);
	display("4", d);
	display("5", e);
	system("pause");
	return 0;
}

void display(string name, UpDownCount &temp)
{
	cout << name + ": " << temp << endl;
	cout << "++" + name + ": " << ++temp << endl;
	cout << name + ": " << temp << endl;
	cout << name + "++: " << temp++ << endl;
	cout << name + ": " << temp << endl;
	cout << "--" + name + ": " << --temp << endl;
	cout << name + ": " << temp << endl;
	cout << name + "--: " << temp-- << endl;
	cout << name + ": " << temp << endl << endl;
}