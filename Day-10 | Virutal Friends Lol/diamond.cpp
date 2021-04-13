/*
    * FACTORY BUILDER METHOD
*/
#include <bits/stdc++.h>

using namespace std;

// base class
class primate
{
public:
    /*TO BE ADDED LATERSSSSSS*/
    //Define a function that returns an object of this class.
    static primate *make_primate(string name, string receipe, float height)
    { // Factory Method
        if (height >= 1)
        {
            return new primate(name, receipe, height);
        }
        else
        {
            cout << "Invalid Primate, sorry <3" << endl;
            return NULL;
        }
    }

    virtual void whoAmI()
    {
        // Definition will be provided by derived class.
        cout << "I'm a basic implementation, from parent class. (primate)" << endl;
    }

    // Getter function.
    virtual void get_name()
    {
        cout << "I'm a basic implementation, from parent class. (primate)" << endl;
    }

private:
    // Attribute.
    string receipe;
    string name;
    float height;

    // Default Constructor.
    primate()
    {
        cout << "* Primate constructor called!" << endl;
    }

    // Parametrised Constructor
    primate(string name, string receipe, float height)
    {
        cout << "Primate constructor called!" << endl;
        this->height = height;
        this->name = name;
        this->receipe = receipe;
    }

    //Declare the class that you want to give access to, as a friend.
    friend class caveman;
    friend class cavewoman;
    friend class hooman;
};

// First child of primate.
class caveman : virtual public primate
{
public:
    // Runtime Polymorphism.
    void get_name()
    {
        cout << "I'm overloaded by child class." << endl;
    }

    void whoAmI()
    {
        // Definition will be provided by derived class.
        cout << "I'm " << this->name << " cus imma " << this->height << " and I eat " << this->receipe << endl;
    }

    bool tailExists;
    caveman(string name, string receipe, float height)
    { // Defaul const()
        cout << "\t ** Caveman  constructor called" << endl;
        tailExists = false;
        this->height = height;
        this->name = name;
        this->receipe = receipe;
    }
};

// Second child of primate
class cavewoman : virtual public primate
{
public:
    bool commonSense;

    cavewoman(string name, string receipe, float height)
    { // Defaul const()
        cout << "\t ** Cavewoman  constructor called" << endl;
        commonSense = true;
    }
};

//  Primate -> Caveman, CaveWoman -> Hooman
// Multilevel+Multiple Inheritance
class hooman : public caveman, public cavewoman
{
public:
    bool something;
    hooman(string name, string receipe, float height) : caveman(name, receipe, height), cavewoman(name, receipe, height)
    { // Defaul const()
        cout << "\t\t *** Hooman  constructor called" << endl;
        something = false;
    }
};

// Driver code.
int main(void)
{

    hooman hum("Tazan", "Meat", 2);
    hum.whoAmI();
    hum.get_name();

    hooman hum1("Kingkong", "Banana", 337);
    hum1.whoAmI();
    hum1.get_name();

    return 0;
}