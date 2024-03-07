#include <iostream>
using namespace std;
int main()
{
    double R1, R2, R3;
    cout << "Введіть значення R1,R2,R3 : ";
    cin >> R1 >> R2 >> R3;
    double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
    cout << "R0 " << R0 << endl;

    //task2
    double okrushnist;
    const double pi = 3.14;
    cout << "Введіть окружність кола : ";
    cin >> okrushnist;
    double radius = okrushnist / (2 * pi);
    double area = pi * radius * radius;
    cout << "Радіус кола : " << radius << endl;
    cout << "Площа кола : " << area << endl;
    //task3
    double s, t, p;

    cout << "Speed: ";
    cin >> s;
    cout << "Time : ";
    cin >> t;
    cout << "Priskorennja: ";
    cin >> p;
    double distance = s * t + (p * t * t) / 2;
    cout << "Proydeno : " << distance << endl;
    //Task4
    int second, hour, minute, second2;
    cout << "Enter the number of seconds: ";
    cin >> second;
    hour = second / 3600;
    second2 = second % 3600;
    minute = second2 / 60;
    second2 = second2 % 60;
    cout << "Hour : " << hour << endl;
    cout << "Minute : " << minute << endl;
    cout << "Second : " << second2<< endl;
}