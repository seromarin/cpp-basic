#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age = 0;

    cout << "How old are u?" << endl;
    cin >> age;
    cout << "You are " <<  age << " years old!" << endl;

    int base, altura;

    cout << "Ahora vamos a calcular el area de un triangulo" << endl;
    cin >> base >> altura;
    cout << "El area de tu triangulo es de: " << base * altura << endl;

    return 0;
}