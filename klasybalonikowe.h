#pragma once
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class balonik
{
private:
	string nazwa{};
	float wysokosc{}; // metry
	float srednica{}; // centymetry
public:
	balonik(const string& nazwa) :
		nazwa(nazwa), wysokosc(0.0), srednica(0.0) {};
	void zmien_wysokosc(float przyrost_wysokosc);
	void zmien_srednice(float przyrost_srednica);
	void stan_bal();

};	

void pompuj(balonik& Balonik, float powierzchnia_powietrza);