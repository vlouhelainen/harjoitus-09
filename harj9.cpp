/*		Valtteri Louhelainen

Tee ohjelma, joka toimii laskimena.
Käyttäjältä kysytään kaksi kokonaislukua,
jonka jälkeen ohjelma antaa valikon
laskutoimituksista. Valikko nayttaa
seuraavalta:

VALIKKO
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos

Lopuksi ohjelma tulostaa valitun tuloksen naytölle.*/

#include <iostream>
using namespace std;

void main()
{
	int luku1;
	int luku2;
	int toimitus;
	float luku1f;
	float luku2f;

	cout << "Tervetuloa laskinsovellukseen\nSy\x94t\x84 kaksi kokonaislukua\n\nAnna luku 1: ";
	cin >> luku1;
	cout << "Anna luku 2: ";
	cin >> luku2;
	cout << "\nSy\x94t\x84 halutun laskutoimituksen numero\n1. Summa\n2. Erotus\n3. Tulo\n4. Osam\x84\x84r\x84\n5. Jakoj\x84\x84nn\x94s\n6. Kaikki\n";
	cin >> toimitus;
	cout << "\n";
	if (toimitus == 1)
		cout << luku1 << " + " << luku2 << " = " << luku1 + luku2 << "\n";
	if (toimitus == 2)
		cout << luku1 << " - " << luku2 << " = " << luku1 - luku2 << "\n";
	if (toimitus == 3)
		cout << luku1 << " * " << luku2 << " = " << luku1 * luku2 << "\n";
	if (toimitus == 4)
	{
		luku1f = luku1;
		luku2f = luku2;
		cout << luku1 << " / " << luku2 << " = " << luku1f / luku2f << "\n";
	}
	if (toimitus == 5)
		cout << "Lukujen " << luku1 << " ja " << luku2 << " jakoj\x84\x84nn\x94s on " << luku1 - luku1 / luku2 * luku2 << "\n";
	if (toimitus == 6)
	{
		luku1f = luku1;
		luku2f = luku2;
		cout << luku1 << " + " << luku2 << " = " << luku1 + luku2 << "\n";
		cout << luku1 << " - " << luku2 << " = " << luku1 - luku2 << "\n";
		cout << luku1 << " * " << luku2 << " = " << luku1 * luku2 << "\n";
		cout << luku1 << " / " << luku2 << " = " << luku1f / luku2f << "\n";
		cout << "Lukujen " << luku1 << " ja " << luku2 << " jakoj\x84\x84nn\x94s on " << luku1 - luku1 / luku2 * luku2 << "\n";
	}
}