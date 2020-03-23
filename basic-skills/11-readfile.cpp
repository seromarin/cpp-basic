#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    ifstream myDataFile("GameData.txt");
    string line;

    if(myDataFile.is_open()) {
        while (getline(myDataFile, line)) {
            cout << line << endl;
        }
    } else {
        cout << "No se pudo abrir el archivo" << endl;
    }

    myDataFile.close();
    
    return 0;
}