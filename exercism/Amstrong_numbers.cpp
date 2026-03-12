#include <iostream>
#include <cmath>

bool is_armstrong_number(int number) {

    int original = number;
    int digits = 0;
    int temp = number;

    while(temp > 0){
        digits++;
        temp /= 10;
    }

    temp = number;
    int sum = 0;

    while(temp > 0){
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {

    int num = 153;

    if(is_armstrong_number(num)){
        std::cout << num << " es un numero Armstrong" << std::endl;
    }
    else{
        std::cout << num << " no es un numero Armstrong" << std::endl;
    }

    return 0;
}