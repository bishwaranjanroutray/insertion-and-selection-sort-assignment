#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'a', 'c', 'd', 'b', 'e'};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {

        bool flag = true;

        for (int j = 1; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}