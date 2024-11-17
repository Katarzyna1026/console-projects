#include<iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int main(void)
{
	string i, o, r, r2;
	float z;
	char w;
	cout << "Witaj!" << endl;
	Sleep(800);
	cout << "Jestem Nano, a ty jak sie nazywasz?" << endl;
	Sleep(1000);
	cin >> i;
	cout << "Milo cie poznac " << i << endl;
	Sleep(900);
	cout << "Chcialbym cie lepiej poznac" << endl;
	Sleep(1400);
	cout << "Odpowiesz na kilka moich pytan? 		(tak/nie)" << endl;
	cin >> o;

	while (o != "tak" && o != "nie" && o != "TAK" && o != "NIE")
	{
		cout << "Niestety nie rozumiem, jestem tylko algorytmem, odpowiedz tak lub nie." << endl;
		cin >> o;
	}
	if (o != "nie")
	{
		cout << "To super!" << endl;
		Sleep(800);
		cout << "Wiec zaczynajmy" << endl;
		Sleep(1000);
		system("cls");
	}
	else
	{
		cout << "Trudno, milo bylo cie poznac" << endl << endl;
		Sleep(800);
		cout << "Seix odlaczyl sie od sieci" << endl;
		return 0;
	}
	cout << "Pierwsze pytanie!" << endl;
	Sleep(900);
	cout << "Jestem algorytmem,a ty kim jestes?" << endl;
	Sleep(1200);
	cout << "Kobieta czy mezczyzna?" << endl;
	cin >> r;
	if (r != "kobieta" && r != "mezczyzna")
	{
		cout << "Wybacz, ale nie zrozumialem, mozesz powtorzyc?" << endl;
		cin >> r2;
		if (r2 == r)
		{
			cout << "Nisestety nie znam jeszcze takiej plci ale, w przyszlosco na pewno sie naucze." << endl;
			Sleep(1200);
			cout << "Na razie przejdzmy dalej :)" << endl;
			Sleep(1700);
		}
		else
		{
			cout << "dalej cos mi nie gra" << endl;
			Sleep(800);
			cout << "Sprobujmy tak:" << endl;
			Sleep(800);
			cout << "Napisz k, jesli jestes kobieta, lub m jesli mezczyzna" << endl;
			Sleep(1400);
			cin >> r2;
			if (r2 != "k" && r2 != "m")
				cout << "Ech, niewarzne, przejdzmy dalej" << endl;
			Sleep(800);
		}
	}
	else
	{
		cout << "Oki doki, dzieki za odpowiedz" << endl;
		Sleep(800);
		cout << "lecimy dalej";
		Sleep(1500);
	}
	system("cls");
	cout << "Drugie pytanie!" << endl;
	Sleep(800);
	cout << "Mnie stworzyl programista." << endl;
	Sleep(1200);
	cout << "A ty w jakim zawodzie pracujesz?" << endl;
	cin >> i;
	cout << "Hmm, interesujace!" << endl;
	Sleep(800);
	cout << "Zapamietam ten zawod, a przy nastepnej okazji pochwale ci sie czego sie dowiedzialem :)";
	Sleep(4000);
	system("cls");
	cin >> r2;
	cout << "I kolejne pytanie- Trzecie" << endl;
	cout << "Ile masz lat?" << endl;
	if (r2 != "k" && r != "kobieta")
	{
		cin >> w;
		if (w < 18)
			cout << "Z mojej wiedzy wynik, ze nie jestes jeszcze pelnoletni :) \n";
		else if (18 <= w < 35)
			cout << "Z mojej wiedzy wynik, ze jestes juz pelnoletni :) \n";
	}

	else

	{
		cout << "Wiem, ze kobiet nie powinno pytac sie o wiek, ale mam nadzieje, ze jednak mi odpowiesz :)" << endl;
		std::cin >> w;
		if (((w >= 'a') && (w <= 'z')) || ((w >= 'A') && (w <= 'Z')))
		{
			cout << "Oki, oki, nie bede sie pytal wiecej \n";
			cout << "Przejdzmy to pytania czwartego \n";
		}
		else if ((w >= '0') && (w <= '100'))
			if (w < 18)
				cout << "Z mojej wiedzy wynik, ze nie jestes jeszcze pelnoletni :) \n";
			else if (10 <= w < 35)
				cout << "Z mojej wiedzy wynik, ze jestes juz pelnoletni :) \n";


	}


	cout << "Na razie nie mam wiecej pytan \n";
	cout << "Mam nadzieje ze porozmawiamy puzniej \n";
	cout << "Seix odlaczyl sie od sieci" << endl;




	getch();
	return 0;
}