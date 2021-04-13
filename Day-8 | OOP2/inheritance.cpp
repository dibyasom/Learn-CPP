#include <bits/stdc++.h>

using namespace std;

// Getter and Setter

// parent class
class NetflixCore
{
    // Access Specifiers.
private:
    string pvtContent;

protected:
    string prtContent;

public:
    string location;
    static string content;
    float policies;

    NetflixCore()
    { //Default

        this->location = "global";
        this->policies = 109.7;
    }

    NetflixCore(string content, string location, float policies)
    { //Prameterised Contructor
        this->location = location;
        this->policies = policies;
    }

    void stream()
    {
        cout << " I'm streaming " << this->content << endl;
    }

    string get_pvtContnent()
    {
        return this->pvtContent;
    }

    void set_pvtContnent(string newVal)
    {
        this->pvtContent = newVal;
    }
};

class NetflixIndia : public NetflixCore
{
public:
    int someAttr;

    NetflixIndia(string content, string location, float policies, int s) : NetflixCore(content, location, policies)
    { //DRY
        this->someAttr = s;
    }

    void test()
    {
        this->prtContent = "Some Random Val";
        cout << this->prtContent << endl;
    }

    // Function overloading
    void stream()
    {
        cout << " I'm from loc " << this->location << endl;
    }
};

//Initialize
string NetflixCore::content = " ";
int main(void)
{
    NetflixCore nf("Money Hesit", "Asia", 106);
    nf.stream();
    nf.content = "Sherlock";
    cout << nf.content << endl;

    nf.set_pvtContnent("Peaky Blinders");
    // cout << nf.get_pvtContnent() << endl;
    // Polymorphism.
    NetflixIndia nf_INDIA("Ghoul", "India", 108, 10);
    // nf_INDIA.content = "Bikram";
    nf_INDIA.stream();
    cout << nf_INDIA.content << endl;

    return 0;
}