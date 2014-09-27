/*
Zad 2.1 Wskaźniki i ich wykorzystanie w tablicach, strukturach i plikach.
*/
//---------------------------------------
#include <iostream>
#include <conio.h>
//---------------------------------------
using namespace std;
int main(int argc, char *argv[])
{
short a,b,c;
short *wsk;
cout<<"Adres zmiennej a="<<&a<<endl;
cout<<"Adres zmiennej b="<<&b<<endl;
cout<<"Adres zmiennej c="<<&c<<endl;
cout<<"Adres zmiennej a="<<unsigned(&a)<<endl;
cout<<"Adres zmiennej b="<<unsigned(&b)<<endl;
cout<<"Adres zmiennej c="<<unsigned(&c)<<endl;
a=b=c=0;
b=10;
wsk=&b;
cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl; //0 0 0
cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl; //0 10 0
//deklaracja wskaźnika
//wyswietlenie adresów przydzielonych zmiennym
*wsk=20;
cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;//0
*(wsk+1)=30; cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;//30
*(wsk-1)=40; cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;//30
a=*wsk;
cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;//20
cout<<sizeof(short)<<endl;
cout<<"Podaj liczbe:";
int liczba1,wynik;
int liczba2=2;
int *wsk1,*wsk2;
cin>>liczba1;
cout<<endl;
wynik=liczba1+liczba2;
cout<<"Wynik to "<<wynik<<endl;
wsk1=&liczba1;
wsk2=&liczba2;
*wsk1=10;
//zmiana danych w pamieci
*wsk2=20;
wynik=liczba1+liczba2;
cout<<"Wynik to "<<wynik<<endl;
getch();
return 0;
}

