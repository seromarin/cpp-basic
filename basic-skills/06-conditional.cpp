#include <iostream>

using namespace std;

enum COLOR {
    RED,
    GREEN,
    UNKNOWN
};

int main(int argc, char const *argv[])
{
    int age;
    const int MAX_AGE = 18;

    cout << "How old are you?" << endl;
    cin >> age;

    if (age >= MAX_AGE) {
        cout << "You can drink men!" << endl;
    } else {
        cout << "You are too young to drink" << endl;
    }

    string SFavoriteColor;
    COLOR userColor;
    cout << "Now, tell me your favorite color" << endl;
    cin >> SFavoriteColor;

    userColor = SFavoriteColor == "rojo"
                    ? RED
                    : SFavoriteColor == "verde"
                        ? GREEN
                        : UNKNOWN;

    switch (userColor)
    {
    case RED:
        cout << "Bloody color"<< endl;
        break;
    case GREEN:
        cout << "Lovely color is the green" << endl;
    default:
        cout << "I can'r recognize this color :c"<< endl;
        break;
    }

    return 0;
}