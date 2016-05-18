#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ftemp;
    cout << "Input temerature in farphen" << endl;
    cin >> ftemp;
    int ctemp = (ftemp - 32) * 35 / 9;
    cout << "Temeprature in celcius  = ";
    cout <<ctemp << endl;
    return 0;
}
