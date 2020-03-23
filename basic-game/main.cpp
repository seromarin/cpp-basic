#include <iostream>
#include <stdlib.h>

using namespace std;

enum USER_INPUT {
    RIGHT,
    LEFT,
    QUIT,
    NOTHING,
};

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

int checkHeroPosition(int heroPosition, USER_INPUT heroMovement) {
    switch (heroMovement)
    {
    case RIGHT:
        return heroPosition < 4 ? heroPosition + 1 : heroPosition;
        break;
    case LEFT:
        return heroPosition > 0 ? heroPosition - 1 : heroPosition;
        break;
    case NOTHING:
        return heroPosition;
        break;
    }
}

int main(int argc, char const *argv[])
{
    int heroPosition = 0;
    char userInput = ' ';
    USER_INPUT heroMovement;
    bool gameOver = false;
    char gameMap[5] = {'I','I','I','I','I'};

    cout << "Welcome to the game" << endl;

    while(!gameOver) {
        cout << "Move right: 'd' - Move left: 'a' - Quit: 'q'" << endl;
        drawMap(heroPosition, gameMap);
        // cout << endl;
        cin >> userInput;
        heroMovement = userInput == 'd' ? RIGHT : userInput == 'a' ? LEFT : userInput == 'q' ? QUIT : NOTHING;
        if (heroMovement == QUIT) {
            gameOver = true;
        } else {
            heroPosition = checkHeroPosition(heroPosition, heroMovement);
            system("clear");
            // drawMap(heroPosition, gameMap);
            cout << endl;
        }
    }



    return 0;
}
