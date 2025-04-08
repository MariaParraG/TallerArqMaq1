#include <iostream>
#include <iostream>
#include <bitset>
#include <climits>  // Para límites de enteros

using namespace std;

int main() {
    // Dos números de 8 bits que al sumarse generan desbordamiento
    int8_t a = 120;
    int8_t b = 20;

    // Realizar la suma
    int8_t resultado = a + b;

    // Mostrar los valores en binario
    cout << "a = " << (int)a << " -> " << bitset<8>(a) << endl;
    cout << "b = " << (int)b << " -> " << bitset<8>(b) << endl;
    cout << "Resultado = " << (int)resultado << " -> " << bitset<8>(resultado) << endl;

    // Verificación manual de desbordamiento
    if ((a > 0 && b > 0 && resultado < 0) || (a < 0 && b < 0 && resultado > 0)) {
        cout << "¡Desbordamiento detectado!" << endl;
    } else {
        cout << "No hay desbordamiento." << endl;
    }

    return 0;
}
