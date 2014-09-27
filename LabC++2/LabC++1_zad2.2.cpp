/*
Zad 2.2 Tworzenie własnych funkcji.
a) Przeanalizuj strukturę programu, w którym zdefiniowano własne funkcje.
b) Zdefiniuj własne funkcje:
- Znajdującą minimum lub maksimum z 2 liczb
- Obliczającą średnią arytmetyczną lub geometryczną z 2 liczb
- Obliczającą odwrotność liczby (1/liczba)
- Porządkującą rosnąco 2 liczby
*/
#include <cstdlib>
#include <iostream>
void szlaczek(void);
using namespace std;
//prototyp funkcji (bez parametrow)
//-----------------------------------------
void wczytaj(int *a, int *b) //definicja funkcji(a,b – wskazniki)
{
cout<<"Podaj pierwsza liczbe: ";
cin>>*a;
cout<<"Podaj druga liczbe: ";
cin>>*b;
}
//-----------------------------------------
int suma(int a, int b) //definicja funkcji (a,b – zmienne calkowite)
{
return a + b;
}
void maxmin(int a, int b, int *max, int *min)
{
if (a>b)
{
    *max=a;
    *min=b;
}
    else {
        *max=b;
        *min=a;}
}
//-----------------------------------------
int main(int argc, char *argv[])
{
int L1,L2;
szlaczek();
wczytaj(&L1,&L2);
szlaczek();
maxmin(L1,L2,&L1, &L2);
 cout<<"max="<<L1<<endl;
 cout<<"min="<<L2<<endl;
cout<<"Suma="<<suma(L1,L2)<<endl;
szlaczek();
//system("PAUSE");
return EXIT_SUCCESS;
}
//-----------------------------------------
void szlaczek(void)
//definicja funkcji
{
int i;
for(i=1;i<=50;i++)
{cout<<"*";
}
cout<<endl;
}


