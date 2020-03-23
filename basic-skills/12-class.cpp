#include <iostream>

using namespace std;

class Cat {
    public: 
        string Name;
    
    Cat() {
        Name = "Guapo";
    }

    Cat(string kittyName) {
        Name = kittyName;
    }

    void meow() {
        cout << Name << " dice MEOW!" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Cat myFirstKitty;
    Cat mySecondKitty("Toriel");
    myFirstKitty.meow();
    mySecondKitty.meow();
    return 0;
}
