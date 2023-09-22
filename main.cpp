
#include <iostream>

using namespace std;

class Punkt
{
    float x, y;
    string nazwa;
    public:
    void wyswietl()
    {
        cout << nazwa << "(" << x << ", " << ")";
    }
    Punkt(string n="S", float a=0, float b=0)
    {
        nazwa = n;
        x = a;
        y = b;
    }
};
class Kolo :public Punkt // klasa kolo dziedziczy publicznie z punkt
{
    float r;
    string nazwa;
    
    public:
    void wyswietl()
    {
        cout << "Kolo" << nazwa << endl;
        cout << "Srodek kola " << endl;
        Punkt::wyswietl();
        cout << "Promien " << r << endl
    }
};

int main()
{
    

    return 0;
}
