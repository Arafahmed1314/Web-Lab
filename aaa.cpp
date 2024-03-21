#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed << setprecision(x)
using namespace std;
void destuffing(int n, int arr[])
{
    cout << "after stuffing : ";
    int d[100], c = 0, j = 0;
    cout << "01111110 ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            c++;
            d[j] = arr[i];
            j++;
            if (c == 5)
            {
                // b[j] = 0;
                i++;
                // j++;
                c = 0;
            }
        }
        else
        {
            c = 0;
            d[j] = arr[i];
            j++;
        }
    }
    // cout << "after destuffing : ";

    for (int i = 0; i < j; i++)
    {
        cout << d[i] << " ";
    }
    cout << "01111110 ";
}
void bitstuffing(int n, int arr[])
{
    cout << "after stuffing: ";
    int b[100], c = 0, j = 0;
    cout << "01111110 ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            c++;
            b[j] = arr[i];
            j++;
            if (c == 5)
            {
                b[j] = 0;
                j++;
                c = 0;
            }
        }
        else
        {
            c = 0;
            b[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout << b[i] << " ";
    }
    cout << "01111110 ";
    cout << endl;
    destuffing(j, b);
}
int main()
{
    int n;
    cout << "Enter array size :";
    cin >> n;
    int arr[n];
    cout << "Enter array Elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bitstuffing(n, arr);

    return 0;
}