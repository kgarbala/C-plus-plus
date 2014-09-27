/*Zad 1.2 Instrukcje przypisania. Wyrażenia, operatory, funkcje standardowe.
a) Dla dwóch liczb naturalnych jednocyfrowych a, b (jedna wczytana z klawiatury – cin,
druga wylosowana – randomize(), rand()) wyświetl wynik wyrażenia: Y = |a^2 + 2b – 10| / (a b +1)
Wynik zaokrąglij do liczby całkowitej.
b) Przelicz czas podany w minutach na godziny i minuty, a czas podany w dniach na liczbę
tygodni i dni.
c) Dla wczytanego z klawiatury imienia i nazwiska oblicz sumę liter.
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    int a, b;
    int Y;
    cout << "Podaj liczbe a:" << endl;
    cin >> a;
    srand(time(0));
    b = rand()%10;
    //b=10;
    Y = abs(pow(a,2)+2*b-10)/(pow(a,b)+1);
    cout << "Wynik:" << Y <<"\n";
    return 0;
}

