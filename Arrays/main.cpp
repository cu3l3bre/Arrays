#include <iostream>

using namespace std;

int main()
{
	cout << "Programm zu Arrays" << endl;

	// Liste von Zahlen anlegen

	// Wenn ich das Array chon festlege mit den Zahlen, dann kann ich die Anzahl an Elementen 
	// weglassen also []

	//int ZahlenListe[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int ZahlenListe[10] = {};

	for (int i = 0; i < 10; i++)
	{
		ZahlenListe[i] = (i+1)*2;
		cout << "Element in der Liste: " << i+1 << " Wert an dieser Stelle: " << ZahlenListe[i]  << endl;
		
	}

	cout << ZahlenListe << endl;
	cout << &ZahlenListe[0] << endl;
	cout << &ZahlenListe[1] << endl;
	cout << &ZahlenListe[2] << endl;
	cout << &ZahlenListe[3] << endl;
	cout << &ZahlenListe[4] << endl;
	cout << &ZahlenListe[5] << endl;
	cout << &ZahlenListe[6] << endl;
	cout << &ZahlenListe[7] << endl;
	cout << &ZahlenListe[8] << endl;
	cout << &ZahlenListe[9] << endl;

	int AnzahlElemente = 0;
	int* DynListe = 0;

	cout << "Wie gross soll das Array sein?: ";
	cin >> AnzahlElemente;

	DynListe = new int [AnzahlElemente];

	for (int i = 0; i < AnzahlElemente; i++)
	{
		DynListe[i] = i;
	}

	for (int i = 0; i < AnzahlElemente; i++)
	{
		cout << DynListe[i] << endl;
	}

	delete DynListe;


	system("pause");
	return 0;
}