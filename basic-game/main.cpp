#include <iostream>
#include <stdlib.h>

using namespace std;

void drawMap(int heroPosition, char gameMap[5]) {
    for (size_t i = 0; i < sizeof(gameMap); i++)
    {
        if (i != heroPosition) {
            cout << gameMap[i];
        } else {
            cout << 'H';
        }
    }
}

int main(int argc, char const *argv[])
{
    int heroPosition = 0;
    char gameMap[5] = {'I','I','I','I','I'};

    drawMap(heroPosition, gameMap);
    cout << endl;
    system("clear");
    drawMap(heroPosition, gameMap);


    return 0;
}
