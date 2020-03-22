#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int direction = 3509;

    int* directionPointer = &direction;

    cout << direction << endl;
    cout << directionPointer << endl;

    *directionPointer = 3510;

    cout << direction << endl;
    cout << directionPointer << endl;

    return 0;
}