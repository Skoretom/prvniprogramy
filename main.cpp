#include <iostream>

using namespace std;

int main(){

    cout << "Ahoj, jak se m�." << endl;

    int celeCislo = 12300000000;

    int a = 3;
    double realneCislo = double(a) / celeCislo;

    char znak = 'd';
    string retezec = "Toto je retezec.";

    int mojePole[3] = {1, 5, 8};
    char poleZnaku [] = {'a', 'b', 'c'};

    bool start = 0;
    start = true; //1
    start = false;  //0

    cout << "3/2 = " << celeCislo << endl;
    cout << "Velikost int = " << sizeof(int) << endl;
    cout << "Znak = " << znak << endl;
    cout << "Retezec = " << retezec << endl;
    cout << "2. slozka pole = " << mojePole [1] << endl;
    cout << "2. slozka poleZnaku = " << poleZnaku [2] << endl;
    cout << "bool = " << start << endl;

    return 0;
}
