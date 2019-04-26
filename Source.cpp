#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"

int number;

Child child_1, child_2;

Tiles tile_1 = Tiles("Brand_1", 10, 10, 2000);
Tiles tile_2 = Tiles("Brand_2", 20, 20, 3000);

Complex complex;

Vector vector1;
Vector vector2;


int main()
{
	cout << "Enter the number: ";
	cin >> number;
	cout << endl;

	switch (number)
	{
	case 1:
		child_1 = child_1.data_input();
		child_2 = child_2.data_input();

		child_1.data_output();
		child_2.data_output();

		break;

	case 2:
		tile_1.getData();
		tile_2.getData();

		break;

	case 3:
		cout << "Enter complex number: ";
		cin >> complex;

		complex.modul = complex.complex_modul();
		complex.argument = complex.complex_argument();

		cout << "Modul is " << complex.modul << endl << "Argument is " << complex.argument << endl;

		break;

	case 4:
		vector1.vector_input();
		vector2.vector_input();

		vector1.modul = vector1.vector_modul();
		vector2.modul = vector2.vector_modul();

		vector1.vector_output();

		break;
	}

	system("pause");
}