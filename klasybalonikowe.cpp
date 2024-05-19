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

void logowanie()
{
    string temp_dane{}, haslo{}, login{};
    cout << "\n\tWitaj w tajnym programie kontrolowania balonikow!";
    cout << "\n\tProsze podaj Login oraz haslo!";
    

   
    ifstream logowanie("login.txt");
    if (logowanie.is_open())
    {
        logowanie >> temp_dane;
        do 
        {
            cout << "\n\tLogin: "; cin >> login;
        } while (login != temp_dane);
    }
    else 
    {
        cout << "\n\tNie udalo sie uzyskac dostepu do bazy loginow oraz hasel"
             << "\n\tSkontaktuj sie z administratorem!";
    }
    logowanie.close();
    
    temp_dane = "";
    ifstream psw("haslo.txt");
    if (psw.is_open())
    {
        psw >> temp_dane;
        do
        {
            cout << "\n\tHaslo: "; cin >> haslo;
        } while (haslo != temp_dane);
    }
    else
    {
        cout << "\n\tNie udalo sie uzyskac dostepu do bazy loginow oraz hasel"
            << "\n\tSkontaktuj sie z administratorem!";
    }
    psw.close();
}

void pompuj(balonik& Balonik, float powierzchnia_powietrza)
{
    float promien = sqrt(powierzchnia_powietrza / 3.145);
    float przyrost_srednica = 2 * promien;
    Balonik.zmien_srednice(przyrost_srednica);
}
