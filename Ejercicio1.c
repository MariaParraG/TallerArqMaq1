#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

int main() {
    int numeroDecimal = 45;

    // Conversión a binario usando bitset (representación de 8 bits)
    bitset<8> binario(numeroDecimal);
    cout << "Binario: " << binario << endl;

    // Conversión a octal
    cout << "Octal: " << oct << numeroDecimal << endl;

    // Conversión a hexadecimal
    cout << "Hexadecimal: " << hex << uppercase << numeroDecimal << endl;

    return 0;
}
