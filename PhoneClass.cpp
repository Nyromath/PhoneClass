#include <iostream>
using namespace std;

class Phone {
public:
    double cost;
    int slots;
};

int main()
{
    Phone Y6;
    Phone Y7;

    Y6.cost = 100.0;
    Y6.slots = 2;
    Y7.cost = 200.0;
    Y7.slots = 2;

    cout << "Cost of Y6:\t" << Y6.cost << endl;
    cout << "Cost of Y7:\t" << Y7.cost << endl;
    cout << "Slots in Y6:\t" << Y6.slots << endl;
    cout << "Slots in Y7:\t" << Y7.slots << endl;

    return 0;
}