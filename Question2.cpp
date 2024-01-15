#include <iostream>
using namespace std;

int main()
{
    int length, breadth, radius;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    cout << "Enter radius: ";
    cin >> radius;

    float areaofrectangle = length * breadth;
    cout << "Area of rectangle: " << areaofrectangle << endl;

    float Perimeterofrectangle = 2 * length + 2 * breadth;
    cout << "Perimeter of rectangle: " << Perimeterofrectangle << endl;

    float areaofcircle = 3.14 * (radius * radius);
    cout << "Area of circle: " << areaofcircle << endl;

    float Perimeterofcircle = 2 * 3.14 * radius;
    cout << "Perimeter of circle: " << Perimeterofcircle << endl;

    return 0;
}
