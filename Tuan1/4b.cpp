#include <iostream>
#include <cmath>
using namespace std;

struct LOCATION 
{
    double HOANH_DO;
    double TUNG_DO;
};

void input (int n, LOCATION a[100] )
{
    for (int i = 0; i< n; i++)
    {
        cin >> a[i].HOANH_DO >> a[i].TUNG_DO; 
    }
}

void DISTANCE ( int n, LOCATION*a)
{
    int MAX, MAX1_TUNG, MAX1_HOANH, MAX2_HOANH, MAX2_TUNG;
    MAX = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1 ; j < n ; j++)
        {
            int d;
            d =  pow( a[j].HOANH_DO - a[i].HOANH_DO , 2) + pow ( a[j].TUNG_DO - a[i].TUNG_DO, 2);
            if ( d > MAX) 
            {
                MAX = d;
                MAX1_HOANH = a[i].HOANH_DO ;
                MAX1_TUNG = a[i].TUNG_DO;
                MAX2_HOANH = a[j].HOANH_DO;
                MAX2_TUNG = a[j].TUNG_DO;
            }
        }
    }
    cout << "Toa do 2 diem co khoang cach lon nhat la: ("<< MAX1_HOANH <<";" << MAX1_TUNG <<") va (" << MAX2_HOANH << ";" << MAX2_TUNG << ")"; 
}


int main ()
{
    int n;
    cin >> n;
    LOCATION a[n];
    input (n,a );
    DISTANCE(n,a);
    return 0;
}