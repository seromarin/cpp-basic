#include <iostream>

using namespace std;

bool isPlayerDeath(int health) {
    return health <= 0;
}

int main(int argc, char const *argv[])
{
    int playerHealth = 5;

    if (!isPlayerDeath(playerHealth)) {
        cout << "Sigue jugando!" << endl;
    } else {
        cout << "Estas muerto!" << endl;
    }

    return 0;
}