#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    void printh()
    {
        cout << health << endl;
    }

    // getter function
    int getHealth()
    {
        return health;
    }

    // getter function
    char getLevel()
    {
        return level;
    }

    // setter function
    void setHealth(int h)
    {
        health = h;
    }

    // setter function
    void setLevel(char ch)
    {
        level = ch;
    }
    
    //constructor
    Hero (){
        cout<<"constructor called" <<endl;
    }
};

int main()
{
    // creating of object 
    Hero ramesh;
    
    //using of setter function to set the value
    ramesh.setHealth(40);

    //using of getter function to get the value 
    cout << ramesh.getHealth();
     
}