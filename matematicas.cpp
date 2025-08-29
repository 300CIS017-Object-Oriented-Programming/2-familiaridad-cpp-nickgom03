// matematicas.cpp
#include "matematicas.h" // Se incluye a sí mismo

// --- Definiciones (El "cómo") ---
int sumar(int num1, int num2)
{
    return num1 + num2;
}

int restar(int num1, int num2)
{
    // TODO agregar validacion para que num1 >= num2, sino cambiar el orden para restar num2 - num1
    return num1 - num2;
}

int factorial(int numero)
{
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado = resultado * i;
    }
    return resultado;
}

int potencia(int base, int expo) {
    int result = 1;
    while (expo > 0) {
        result *= base;
        }
    return result;
    }
}

// Ejemplos con arreglos
int llenarArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        arreglo[i] = i + 1; // Llena el arreglo con números del 1 al 10
    }
    return 0; // Retorna 0 para indicar éxito
}

int sumarPares(int arreglo[], int tamano)
{
    int suma = 0;
    for (int i = 0; i < tamano; i += 2)
    {
        // Posiciones pares
        suma += arreglo[i];
    }
    return suma;
}

void mostrarArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        std::cout << arreglo[i] << " "; // Muestra el elemento en la posición i})
    }
}
