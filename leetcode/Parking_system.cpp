#include <iostream>
using namespace std;

class ParkingSystem {
private:
    int big, medium, small;

public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }

    bool addCar(int carType) {
        if (carType == 1 && big > 0) { big--; return true; }
        if (carType == 2 && medium > 0) { medium--; return true; }
        if (carType == 3 && small > 0) { small--; return true; }
        return false;
    }
};

int main() {
    ParkingSystem p(1,1,0);

    cout << p.addCar(1) << endl;
    cout << p.addCar(2) << endl;
    cout << p.addCar(3) << endl;

    return 0;
}