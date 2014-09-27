/*
Zad 1.4 Instrukcje iteracyjne
a) Dany jest ciąg liczb całkowitych zakończony zerem. Oblicz:
- sumę wszystkich liczb
- wartość min i max
- ile jest liczb parzystych.
b) Sprawdź, czy wczytana liczba całkowita jest liczbą pierwszą. Sprawdzanie powtarzaj do momentu wczytania liczby pierwszej.
c) Wczytaj dowolną małą literę. Wyświetl kody ASCII małych liter: od ‘a’ do wczytanej litery. Podaj ich liczbę.
d) Wczytaj zdanie zakończone kropką (znak po znaku). Podaj ile razy w zdaniu wystąpiła interesująca ciebie litera (np. A lub a – wielkość liter nie ma znaczenia).
e) Oblicz sumę kwadratów kolejnych N liczb naturalnych. Podaj ile z nich jest podzielnych
przez 3.
f) Jan Kowalski wygrał milion euro, które ulokował na rachunku bankowym o oprocentowaniu 3% rocznie. 31 grudnia każdego roku Jan wypłaca 100 000 dolarów.
Napisz program, który oblicz ile lat upłynie zanim Jan całkowicie opróżni swoje konto.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a, suma = 0;
    int maxx = 0, minn = 0;
    int parzyste=0, nieparzyste=0;
    do {
       cout << "podaj liczbe" << endl;
       cin >> a;
       suma += a;

    if (maxx<a) maxx=a;
    if (minn>a) minn=a;
    if (a%2 == 0) parzyste+=1;
    else nieparzyste+=1;
       }
    while (a != 0);

    cout << "Suma:" << suma << endl;
    cout << "max:" << maxx << endl;
    cout << "min:" << minn << endl;
    cout << "liczba parzystych:" << parzyste << endl;
    cout << "liczba nieparzystych:" << nieparzyste << endl;
    return 0;
}

