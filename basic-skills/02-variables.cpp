#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string name = "Sebastian";
    int age = 26;

    const float PI = 3.1416;

    bool isGameOver = false;

    cout << "Hello, " << name << " and you are " << age << " years old!" << endl;
    cout << "The value of PI is equal to " << PI << endl;

    if (isGameOver != true) {
        cout << "Keep gamming!" << endl;
    }

    return 0;
}