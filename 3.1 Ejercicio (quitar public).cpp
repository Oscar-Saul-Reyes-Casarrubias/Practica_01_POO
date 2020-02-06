#include <iostream>

using namespace std;

class Gato{
    unsigned int suEdad;
    unsigned int suPeso;
    void Maullar(){
        cout << "miauuuu" << endl;
        }
};

int main(void){
    float myFloat;
    Gato Pelusa;
    Pelusa.suPeso = 6;
    Pelusa.suEdad = 5;
    Pelusa.Maullar();
}
