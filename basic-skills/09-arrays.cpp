#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char letras[5];

    letras[0] = 'v';
    letras[1] = 's';
    letras[2] = 'c';
    letras[3] = 't';
    letras[4] = 'a';

    for (size_t i = 0; i < sizeof(letras); i++)
    {
        cout << "El item en la posicion " << i + 1 << " es " << letras[i] << endl;
    }
    
    for (const char &letra : letras)
        cout << "El item es: " << letra << endl;

    return 0;
}