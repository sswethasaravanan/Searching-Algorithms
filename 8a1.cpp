#include <iostream>
#include <string>
using namespace std;
int main()
{
    int myarray[10] = {21, 43, 23, 54, 75, 13, 5, 8, 25, 10};
    int key, loc = 0;
    cout << "The input array is" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << myarray[i] << " ";
    }
    cout << endl;
    cout << "Enter the key to be searched : ";
    cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if (myarray[i] == key)
        {
            loc = i + 1; // Set loc to the position if found
            break;
        }
    }
    if (loc != 0)
    {
        cout << "Key found at position " << loc << " in the array";
    }
    else
    {
        cout << "Could not find the given key in the array";
    }
    return 0;
}
