#include <iostream>
#include <cmath>
using namespace std;

struct  PHAN_SO {
	int Mau;
	int Tu;
};

bool Input (int &x1, int &x2, int& y1, int& y2)
{
	cin >> x1 >> x2 >> y1 >> y2;
	if (x1*x2 < 0 || y1*y2 < 0 || x2*y2 == 0) return 1;
	return 0;
}

int UOC_CHUNG_LON_NHAT(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

void Max (int x1, int x2,int y1, int y2)
{
	x1 *= y2;
	y1 *= x2;
	if ( x1 >= y2)
		cout << x1/y2 << " / " << x2;
	else 
		cout << y1/x2 << " / " << y2;
	
}
void SUM (int a, int b, int c, int d)
{
    int TU, MAU, UOC;
	UOC = UOC_CHUNG_LON_NHAT(abs(b), abs(d));
        MAU = b * d / UOC;
        TU = MAU / b * a + MAU / d * c;

	if ((MAU < 0 && TU > 0) || (MAU > 0 && TU < 0))
        {
            TU = -abs(TU);
            MAU = abs(MAU);
        }
    else if (MAU < 0 && TU < 0)
        {
            TU = abs(TU);
            MAU = abs(MAU);
        }	

	if (TU % MAU == 0)
		cout << TU / MAU;
    else
    {
        UOC = UOC_CHUNG_LON_NHAT(abs(TU), abs(MAU));
        cout << TU / UOC << " / " << MAU / UOC ;
    }
}

void MINUS(int a, int b, int c, int d)
{
	int TU, MAU, UOC;
	UOC = UOC_CHUNG_LON_NHAT(abs(b), abs(d));
        MAU = b * d / UOC;
        TU = MAU / b * a - MAU / d * c;

	if ((MAU < 0 && TU > 0) || (MAU > 0 && TU < 0))
        {
            TU = -abs(TU);
            MAU = abs(MAU);
        }
    else if (MAU < 0 && TU < 0)
        {
            TU = abs(TU);
            MAU = abs(MAU);
        }	

	if (TU % MAU == 0)
		cout << TU / MAU;
    else
    {
        UOC = UOC_CHUNG_LON_NHAT(abs(TU), abs(MAU));
        cout << TU / UOC << " / " << MAU / UOC ;
    }
}

void MULTI(int a, int b, int c, int d)
{
	int MAU, TU, UOC;
	TU = a*c;
	MAU = b*d;
	if ((MAU < 0 && TU > 0) || (MAU > 0 && TU < 0))
        {
            TU = -abs(TU);
            MAU = abs(MAU);
        }
    else if (MAU < 0 && TU < 0)
        {
            TU = abs(TU);
            MAU = abs(MAU);
        }	

	if (TU % MAU == 0)
		cout << TU / MAU;
    else
    {
        UOC = UOC_CHUNG_LON_NHAT(abs(TU), abs(MAU));
        cout << TU / UOC << " / " << MAU / UOC ;
    }
}

void DIVIDE (int a, int b, int c, int d)
{
	int MAU, TU, UOC;
	MAU = b*c;
	TU = a*d;
	if ((MAU < 0 && TU > 0) || (MAU > 0 && TU < 0))
        {
            TU = -abs(TU);
            MAU = abs(MAU);
        }
    else if (MAU < 0 && TU < 0)
        {
            TU = abs(TU);
            MAU = abs(MAU);
        }	

	if (TU % MAU == 0)
		cout << TU / MAU;
    else
    {
        UOC = UOC_CHUNG_LON_NHAT(abs(TU), abs(MAU));
        cout << TU / UOC << " / " << MAU / UOC ;
    }
}

int main()
{
	PHAN_SO a, b;
	if (Input(a.Tu, a.Mau, b.Tu, b.Mau ) == 1) cout << "Du lieu khong phu hop";
	else
	{
		cout << "Phan so lon nhat la: ";  
        Max(a.Tu, a.Mau, b.Tu, b.Mau) ;
        cout << endl;

		cout << "Tong hai phan so la: "; 
        SUM(a.Tu, a.Mau, b.Tu, b.Mau);
        cout << endl;
        
		cout << "Hieu hai phan so la: ";  
        MINUS(a.Tu, a.Mau, b.Tu, b.Mau);
        cout << endl;

		cout << "Tich hai phan so la: "; 
        MULTI(a.Tu, a.Mau, b.Tu, b.Mau);
        cout << endl;

		cout << "Thuong hai phan so la: "; 
        DIVIDE(a.Tu, a.Mau, b.Tu, b.Mau);
	}
	return 0; 
}