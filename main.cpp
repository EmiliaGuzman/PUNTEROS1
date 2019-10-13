#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    int **ptr2 = &ptr;
    cout << ptr << endl;
    cout << *ptr2 << endl;
    while(**ptr2){
        if(*ptr){
            cout << **ptr2 << endl;
        break;
        }
        *ptr -=1;
    }
    cout << x << endl;
}
