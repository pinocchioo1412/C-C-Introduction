#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "nhap canh a: ";
    cin >> a;
    cout << "nhap canh b: ";
    cin >> b;
    cout << "nhap canh c: ";
    cin >> c;
    if (a+b>c && b+c>a && c+a>b)
    {
        if (a==b==c)
        {
            cout << "tam giac deu" << endl;
        }
        else if (a==c || b==a || b==c)
        {
            if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
            {
                cout << "tam giac vuong can" << endl;
            }
            else
            {
                cout << "tam giac can khong vuong" << endl;
            }
        }
        else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        {
            cout << "tam giac vuong" << endl;
        }
        else
        {
            cout << "tam giac thuong" << endl;
        }

    }
    else
    {
        cout << "ba canh khong tao thanh tam giac" << endl;
    }
}