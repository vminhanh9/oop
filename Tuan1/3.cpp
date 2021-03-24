#include <iostream>
#include <cmath>
using namespace std;

struct HOC_SINH
{
    string NAME;
    double MATH;
    double LITERATURE;
};

void input (string& name, double& math, double& literature )
{
    cin >> name >> math >> literature;
}

double DIEM_TRUNG_BINH (string name, double math, double literature)
{
    return  ( math + literature ) / 2;
}

int main ()
{
    HOC_SINH a;
    input (a.NAME,a.MATH,a.LITERATURE);
    cout << DIEM_TRUNG_BINH(a.NAME,a.MATH,a.LITERATURE);
    return 0;
}