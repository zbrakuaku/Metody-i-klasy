#include <iostream>

using namespace std;

class Prostokat{

    int a, b;
    public:
    void wyswietlPole();
    void wyswietlObwod();
    void pobierz(int, int);
};

int main()
{
    Prostokat jeden;
    jeden.pobierz(5, 5);
    jeden.wyswietlPole();
    jeden.wyswietlObwod();
    return 0;
}
    void Prostokat::wyswietlPole(){
    cout << "Pole prostokata wynosi: " << a*b << endl;
    }
    void Prostokat::wyswietlObwod(){
    cout << "Obwod prostokata wynosi: " << 2*a + 2*b << endl;
    }
    void Prostokat::pobierz(int b1, int b2){
        a=b1;
        b=b2;
    }
