#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream myFile("GameData.txt");

    if(myFile.is_open()) {
        myFile << "Hola sebastian" << endl;
        for (size_t i = 0; i < 10; i++)
        {
            myFile << i << endl;
        }
    }
    
    myFile.close();

    return 0;
}
