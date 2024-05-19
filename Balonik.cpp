#include <iostream>
#include "klasybalonikowe.h"
using namespace std;

int main()
{
    //INICJACJA BALONIKOW
    balonik czerwony("czerwony");
    balonik zielony("zielony");
    balonik niebieski("niebieski");

    //ZMIANA WARTOSCI DOMYSLNYCH BALONIKOW
    czerwony.zmien_srednice(50);
    czerwony.zmien_wysokosc(25);

    zielony.zmien_srednice(10);
    zielony.zmien_wysokosc(31);

    niebieski.zmien_srednice(100);
    niebieski.zmien_wysokosc(52);
    //WYSWIETLANIE STANU BALONIKOW PRZED POMPOWANIEM
    cout << "\n\tPRZED POMPOWANIEM\n";
    czerwony.stan_bal();
    zielony.stan_bal();
    niebieski.stan_bal();
    system("pause");


    //POMPOWANIE BALONIKOW
    cout << "\n\tPO POMPOWANIU\n";
        pompuj(czerwony, 100);
        pompuj(zielony, 300);
        pompuj(niebieski, 2137);

    //WYSWIETLANIE STANU BALONIKOW PO POMPOWANIU
    czerwony.stan_bal();
    zielony.stan_bal();
    niebieski.stan_bal();
    system("pause");
}

