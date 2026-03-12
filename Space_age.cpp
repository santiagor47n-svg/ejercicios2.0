#include <iostream>

class space_age {
private:
    long seconds;

public:
    space_age(long s) : seconds(s) {}

    double on_earth() {
        return seconds / 31557600.0;
    }

    double on_mercury() {
        return on_earth() / 0.2408467;
    }

    double on_venus() {
        return on_earth() / 0.61519726;
    }

    double on_mars() {
        return on_earth() / 1.8808158;
    }

    double on_jupiter() {
        return on_earth() / 11.862615;
    }

    double on_saturn() {
        return on_earth() / 29.447498;
    }

    double on_uranus() {
        return on_earth() / 84.016846;
    }

    double on_neptune() {
        return on_earth() / 164.79132;
    }
};

int main() {

    space_age age(1000000000);

    std::cout << "Edad en la Tierra: " << age.on_earth() << std::endl;
    std::cout << "Edad en Mercurio: " << age.on_mercury() << std::endl;
    std::cout << "Edad en Venus: " << age.on_venus() << std::endl;
    std::cout << "Edad en Marte: " << age.on_mars() << std::endl;

    return 0;
}
