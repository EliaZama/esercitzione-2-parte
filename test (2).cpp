#include <iostream>
# include "polygon.h"
# include "Rectangle.h"
# include "rhombus.h"
# include "IsoTrapezoid.h"

using namespace std;

int main() {

	//TEST RETTANGOLO
	Rectangle rett1;
	rett1.SetDim(2.9, 9.6);
	Rectangle rett2 = rett1;
	//rett2 = rett1;
	if (rett1 == rett2) {
		cout << "uguali" << endl;
	}
	else {
		cout << "diversi" << endl;
	}
	cout << "fig1" << endl;
	rett1.Dump();
	cout << "fig2" << endl;
	rett2.Dump();
	rett2.Draw();
	Rectangle rett3(rett1);
	cout << "fig1" << endl;
	rett1.Dump();
	cout << "fig3" << endl;
	rett3.Dump();
	rett2.SetDim(3, 5.6);
	if (rett1 == rett3) {
		cout << "1 e 3 uguali" << endl;
		if (rett1 == rett2) {
			cout << "1, 2 e 3 sono uguali" << endl;
		}
		else { cout << "1 e 3 sono diveri da 2" << endl; }
	}
	else { cout << "1 e 3 diversi" << endl; }

	rett3.Reset();
	rett3.Dump();

	rett1.~Rectangle();
	rett2.~Rectangle();
	rett3.~Rectangle();
	cout << "1, 2 e 3 sono distrutti" << endl;

	//TEST ROMBO
	Rhombus romb1;
	romb1.SetDim(2.9, 9.6);
	romb1.Dump();
	Rhombus romb2;
	romb2.Dump();
	romb2 = romb1;
	if (romb1 == romb2) {
		cout << "uguali" << endl;
	}
	else {
		cout << "diversi" << endl;
	}
	cout << "fig1" << endl;
	romb1.Dump();
	cout << "fig2" << endl;
	romb2.Dump();
	romb2.Draw();
	Rhombus romb3(romb1);
	cout << "fig1" << endl;
	romb1.Dump();
	cout << "fig3" << endl;
	romb3.Dump();
	romb2.SetDim(3, 5.6);
	if (romb1 == romb3) {
		cout << "1 e 3 uguali" << endl;
		if (romb1 == romb2) {
			cout << "1, 2 e 3 sono uguali" << endl;
		}
		else { cout << "1 e 3 sono diveri da 2" << endl; }
	}
	else { cout << "1 e 3 diversi" << endl; }

	romb3.Reset();
	romb3.Dump();

	romb1.~Rhombus();
	romb2.~Rhombus();
	romb3.~Rhombus();
	cout << "1, 2 e 3 sono distrutti" << endl;

	//TEST TRAPEZIO ISOSCELE
	IsoTrapezoid trap1(2.3,4.5,6);
	trap1.Dump();
	IsoTrapezoid trap2;
	trap2.Dump();
	trap2 = trap1;
	if (trap1 == trap2) {
		cout << "uguali" << endl;
	}
	else {
		cout << "diversi" << endl;
	}
	cout << "fig1" << endl;
	trap1.Dump();
	cout << "fig2" << endl;
	trap2.Dump();
	trap2.Draw();
	IsoTrapezoid trap3(trap1);
	cout << "fig1" << endl;
	trap1.Dump();
	cout << "fig3" << endl;
	trap3.Dump();
	if (trap1 == trap3) {
		cout << "1 e 3 uguali" << endl;
		if (trap1 == trap2) {
			cout << "1, 2 e 3 sono uguali" << endl;
		}
		else { cout << "1 e 3 sono diveri da 2" << endl; }
	}
	else { cout << "1 e 3 diversi" << endl; }

	trap3.Reset();
	trap3.Dump();

	trap1.~IsoTrapezoid();
	trap2.~IsoTrapezoid();
	trap3.~IsoTrapezoid();
	cout << "1, 2 e 3 sono distrutti" << endl;

}
