#include <iostream>
using namespace std;
 
class StrDyn {
    int* p;
 
public:
    // default constructor
    StrDyn()
    {
 
        // allocating memory at run time
        // and initializing
        p = new int[3]{ 1, 2, 3 };
 
        for (int i = 0; i < 3; i++) {
            cout << p[i] << " ";
        }
 
        cout << endl;
    }
};
 
int main()
{
 
    // five objects will be created
    // for each object
    // default constructor would be called
    // and memory will be allocated
    // to array dynamically
    StrDyn* ptr = new StrDyn[5];
}