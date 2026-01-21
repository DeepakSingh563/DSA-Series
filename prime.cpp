#include <iostream>
using namespace std;
int main()
{
    int p;
    cin >> p;
    int i = 2;
    while (i < p)
    {
        if (p % i == 0)
        {
            cout << "not a prime";
            break;
        }
        else
        {
            cout << "Prime Number";
            break;
        }
        i += 1;
    }
} 


// break is used to stop iteration while
// continue is used to skip the particualr 
//iteration