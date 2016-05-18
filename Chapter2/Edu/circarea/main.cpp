#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float rad;
    const float PI = 3.14159F;
    cout << "Input radius of circle:\n";
    cin >> rad;
    float area = PI * rad * rad;
    cout << "Area of circle = " << area << endl;

    return 0;
}
