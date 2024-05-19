#include "klasybalonikowe.h"
using namespace std;
void balonik::zmien_wysokosc(float przyrost_wysokosc)
{
    wysokosc += przyrost_wysokosc;
}

void balonik::zmien_srednice(float przyrost_srednica)
{
    srednica += przyrost_srednica;
}

void balonik::stan_bal()
{
    cout << "\n\tNazwa balonika: " << nazwa;
    cout << "\n\tWysokosc balonika: " << wysokosc;
    cout << "\n\tSrednica balonika: " << srednica << endl;
}

void pompuj(balonik& Balonik, float powierzchnia_powietrza)
{
    float promien = sqrt(powierzchnia_powietrza / 3.145);
    float przyrost_srednica = 2 * promien;
    Balonik.zmien_srednice(przyrost_srednica);
}
