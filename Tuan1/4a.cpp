#include <iostream>

using namespace std;

void input (int n, int* a)
{
    for (int i = 0; i<n ; i++)
    {
        cin >> a[i];
    }
}

void output (int n, int* a)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void SAP_XEP (int n, int* a)
{
    for (int i = 0; i < n ; i++)
    {       
            for ( int j = i+1; j < n; j++)
            {
                if ( a[j] < a[i] ) 
                    { 
                        int t;
                        t = a[i];
                        a[i] = a[j];
                        a[j]= t; 
                    }
            }
    }
}

int main ()
{
    int n;
    cin >> n;
    int* a = new int[n];
    input (n,a);
    SAP_XEP(n,a);
    output (n,a);
    return 0;
}