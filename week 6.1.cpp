

#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    for (int a = 0; a < 10; a++)
    {
        cin >> arr[a];
    }

    int i, j;
    
    for (int a = 0; a < 10; a++)
    {
        if (a != 0&&arr[a] % 2 != 0)
        {
            if ((arr[a + 2])%2!=0 )
            {
                cout << arr[a] << " ";
            }
        }
    }

}

