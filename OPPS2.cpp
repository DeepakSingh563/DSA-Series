#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;


    Hero (){
        name = new char[100];
    }

    //parameterised constructor
    Hero (int health){
        this -> health =health;
    }
    Hero(int health ,char level){
        this ->health=health;
        this ->level=level;
    }


    //copy constructor 
    Hero (Hero &temp){
        cout<<"copy constructor called";
        this ->health=temp.health;
        this->level =temp.level;
    }

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