#include <iostream>
#include <string>

int compute(std::string strand1, std::string strand2) {

    if(strand1.length() != strand2.length()){
        std::cout << "Las cadenas deben tener la misma longitud" << std::endl;
        return -1;
    }

    int distance = 0;

    for(int i = 0; i < strand1.length(); i++){
        if(strand1[i] != strand2[i]){
            distance++;
        }
    }

    return distance;
}

int main() {

    std::string dna1 = "GAGCCTACTAACGGGAT";
    std::string dna2 = "CATCGTAATGACGGCCT";

    int result = compute(dna1, dna2);

    if(result != -1){
        std::cout << "Distancia de Hamming: " << result << std::endl;
    }

    return 0;
}
