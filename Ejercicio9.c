#include <iostream>
using namespace std;

// Simulación de registros
int R1 = 10; // Primer operando
int R2 = 20; // Segundo operando
int R3 = 0;  // Registro donde se guardará el resultado

// Registros temporales internos del CPU
int A = 0;
int B = 0;
int ALU_OUT = 0;

int main() {
    cout << "Microprograma de Suma\n\n";

    // Paso 1: Lectura de operandos desde registros
    // Simula las señales Enable_R1, Enable_R2, Load_A, Load_B
    A = R1;
    B = R2;
    cout << "Paso 1: Carga de operandos\n";
    cout << "A <- R1 = " << A << endl;
    cout << "B <- R2 = " << B << endl;

    // Paso 2: Activación de la ALU para sumar
    // Simula la señal ALU_OP = ADD
    ALU_OUT = A + B;
    cout << "\nPaso 2: Suma en la ALU\n";
    cout << "ALU_OUT = A + B = " << ALU_OUT << endl;

    // Paso 3: Almacenamiento del resultado en R3
    // Simula la señal Load_R3
    R3 = ALU_OUT;
    cout << "\nPaso 3: Almacenar resultado\n";
    cout << "R3 <- ALU_OUT = " << R3 << endl;

    return 0;
}
