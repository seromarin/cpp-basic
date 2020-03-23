#include <iostream>
#include <stdlib.h>

using namespace std;

enum USER_INPUT {
    RIGHT,
    LEFT,
    UP,
    DOWN,
    QUIT,
    NOTHING,
};

void drawMap(int heroPosition[2], char gameMap[5][10]) {
    for (int v = 0; v < 5; v++)
    {
        for (int h = 0; h < 10; h++)
        {
            if (heroPosition[0] == h && heroPosition[1] == v) {
                cout << 'H';
            } else {
                cout << gameMap[v][h];
            }
        }
        cout << endl;
    }
}

int* checkHeroPosition(int *heroPosition, USER_INPUT heroMovement) {
    cout << "desde el check" << heroMovement << endl;
    cout << "desde el check 1 ->" << heroPosition[0] << heroPosition[1] << endl;
    switch (heroMovement)
    {
    case RIGHT: 
        if (heroPosition[0] >= 1 && heroPosition[0] <= 8) {
            heroPosition[0]++;
        }
        break;
    case LEFT:
        if (heroPosition[0] >= 2 && heroPosition[0] <= 9) {
            heroPosition[0]--;
        }
        break;
    case UP: 
        if (heroPosition[1] >= 2 && heroPosition[1] <= 3) {
            heroPosition[1]--;
        }
        break;
    case DOWN:
        if (heroPosition[1] >= 1 && heroPosition[1] <= 2) {
            heroPosition[1]++;
        }
        break;
    case NOTHING:
        heroPosition = heroPosition;
        break;
    }
    return heroPosition;
}

int main(int argc, char const *argv[])
{
    int heroPosition[2] = { 2, 3 };
    char userInput = ' ';
    USER_INPUT heroMovement;
    bool gameOver = false;
    char gameMap[5][10] = {
        {'I','I','I','I','I','I','I','I','I','I'},
        {'I',' ',' ',' ',' ',' ',' ',' ',' ','I'},
        {'I',' ',' ',' ',' ',' ',' ',' ',' ','I'},
        {'I',' ',' ',' ',' ',' ',' ',' ',' ','I'},
        {'I','I','I','I','I','I','I','I','I','I'}
    };

    cout << "Welcome to the game" << endl;
    drawMap(heroPosition, gameMap);

    while(!gameOver) {
        cout << "Move right: 'd' - Move left: 'a' - Quit: 'q'" << endl;
        drawMap(heroPosition, gameMap);
        // cout << endl;
        cin >> userInput;
        heroMovement = 
              userInput == 'd' ? RIGHT 
            : userInput == 'a' ? LEFT 
            : userInput == 'w' ? UP
            : userInput == 's' ? DOWN
            : userInput == 'q' ? QUIT
            : NOTHING;
        if (heroMovement == QUIT) {
            gameOver = true;
        } else {
            int* newHeroPosition = checkHeroPosition(heroPosition, heroMovement);
            // system("clear");
            // drawMap(heroPosition, gameMap);
            cout << endl;
        }
    }



    return 0;
}
