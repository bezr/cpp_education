#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    long pop1 = 128934, pop2 = 15325, pop3 = 875;
    cout << setw(6) << "City" << setw(12) << "Popualtion" << endl;
    cout << setw(6) <<"Moscow" << setw(12) << pop1 << endl;
    cout << setw(6) <<"City2" << setw(12) << pop2 << endl;
    cout << setw(6) <<"City3" << setw(12) << pop3 << endl;

    return 0;
}
