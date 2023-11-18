#include <iostream>
using namespace std;

int main()
{
    int total_window = 48;
    long area1, area2;
    int x, y;
    int a = 36;

    cout << "Enter Window size before cut- " << endl;
    cin >> x >> y;
    cout << "window size before cut is " << x << " " << y << endl;
    area1 = total_window * x * y;
    cout << "Total amount of area before cut the windows= " << area1 << endl;
    cout << endl;
    cout << "After cutting new window size= " << a << " " << a << endl;
    cout << "squard area is- " << a * a << endl;
    area2 = total_window * a * a;
    cout << "Total amount of area after cut the windows= " << area2 << endl;
    cout << "total amount of cut area= " << area2 - area1 << endl;

    return 0;
}