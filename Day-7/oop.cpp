#include <bits/stdc++.h>

using namespace std;

//define class animal;
class animal //user defined datatype.
{
public:
    // Define attributes.
    string name;
    float height;
    string lang;

    animal()
    { //Default
        name = "human";
        height = 10000;
        lang = "Hindi";
        cout << "Animal is born." << endl;
    }

    animal(string name, float height, string lang)
    {
        this->name = name;
        this->height = height;
        this->lang = lang;
    }

    void plisTalk()
    {
        cout << " I speak " << this->lang << endl;
    }
};

int main(void)
{
    animal a; //Obejct of class animal; //DRY
    animal b("Dog", 60.7, "Bhow");
    // myAnimal.name = "Cat";
    // myAnimal.height = 20.5;
    // myAnimal.lang = "Meow";

    cout << "Hello from " << a.name << " I speak " << a.lang << endl;
    cout << "Hello from " << b.name << " I speak " << b.lang << endl;
    
    b.plisTalk(); // b.lang

    return 0;
}