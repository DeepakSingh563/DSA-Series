#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if (ch > 'a' && ch < 'z')
    {
        cout << "small letter";
    }
     else if (ch > 'A' && ch < 'Z')
    {
        cout << "Capital letter";
    }
    else if (ch >'0' && ch < '9'){
        cout<<"numeric";

        
    }
    else {
        cout<<"special charater";
    }
}
