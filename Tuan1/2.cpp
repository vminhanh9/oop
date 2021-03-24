#include <iostream>

using namespace std;

struct DAY_MONTH_YEAR 
{
    int DAY;
    int MONTH;
    int YEAR;
};

void input (int& d, int& m, int& y)
{
   cin >> d >> m >> y; 
}

void NEXT_DAY (int d, int m, int y)
{
    int flag = 0; // nam nhuan flag = 1
    if ( y % 400 == 0) flag = 1;
    
    if ( d == 28) 
        {
            if ( flag == 1 && m == 2)
            {
                d = 1;
                m ++;
            } 
            else d++;   
        }

    if ( d == 30) 
        {
            if ( m == 2) cout << "Du lieu nhap sai";
            else if ( m == 4 || m == 6 || m == 9 || m == 11) 
            {
                d = 1;
                m ++;
            }
            else d++;
        }
    if ( d == 31)
        {
            if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11 ) 
                cout << "Du lieu nhap sai";
            else if ( m == 12)
            {
                d = 1;
                m = 1;
                y++;
            }
            else 
            {
                d = 1;
                m ++;
            }
        }
    cout << "The next day is " << d << " month " << m << " year " << y;
}

int main ()
{
    DAY_MONTH_YEAR a;
    input(a.DAY, a.MONTH, a.YEAR);
    NEXT_DAY ( a.DAY, a.MONTH, a.YEAR);
    return 0;
}