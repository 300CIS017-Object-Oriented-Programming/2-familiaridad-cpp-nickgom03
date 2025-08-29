// main.cpp
#include <iostream>
#include "matematicas.h" // Incluimos nuestro contrato

void probarMatematicas()
{
    std::cout << "Bienvenido al programa de matemáticas" << std::endl;
    std::cout << "Ingresa el primer numero" << std::endl;
    int num1;
    std::cin >> num1;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num2;
    std::cout << "Ingresa el segundo numero" << std::endl;
    std::cin >> num2;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    int resultado_suma = sumar(num1, num2); // Funciona
    int resultado_resta = restar(num1, num2); // Funciona

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
}

void probarPotencia()
{
    std::cout << "Calcular potencia" << std::endl;
    int base, exponente;
    std::cout << "Ingrese el base: ";
    std::cin >> base;
    std::cout << "Ingrese el exponente: ";
    std::cin >> exponente;
    std::cin.clear();
    std::cin.ignore(10000);

    if (exponente < 0) {
        std::cout << "Nada de exponentes negativos" << std::endl;
        return;
    }

    int resultado = potencia(base, exponente);
    std::cout << "El resultado es: " << resultado << std::endl;

}

void probarFactorial()
{
    std::cout << "Bienvenido al programa de factorial" << std::endl;
    int num;
    std::cin >> num;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    if(num == 0 || num < 0){
        std::cerr << "Numero invalido" << std::endl;
    return;
    }
    int resultado = num * num;
    std::cout << "Factorial: " << resultado << std::endl;
}

void probarArreglos()
{
    int cantElementos = 10;
    int arreglo[cantElementos]; // Declaración de un arreglo
    llenarArreglo(arreglo, cantElementos);
    std::cout << "Arreglo lleno: ";
    mostrarArreglo(arreglo, cantElementos);
    std::cout << " Sumando pares" << std::endl;
    int suma = sumarPares(arreglo, cantElementos);
    std::cout << "Suma de elementos en posiciones pares: " << suma << std::endl;
}

int main()
{
    probarMatematicas();
    probarArreglos();
    probarFactorial();
    probarPotencia();
    return 0;
}
/*
#include <iostream>
#include "matematicas.h"

int main(){
    int opc;
    do{
    std::cout << "\n===== MENU PRINCIPAL =====\n";
    std::cout << "1. Sumar dos numeros\n";
    std::cout << "2. Restar dos numeros\n";
    std::cout << "3. Calcular factorial\n";
    std::cout << "4. Calcular potencia\n";
    std::cout << "-1. Salir\n";
    std::cout << "Seleccione una opcion: ";
    std::cin >> opc;

    switch (opc){
        case 1: {
            int a, b;
            std::cout << "Ingrese el primer numero: ";
            std::cin >> a;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> b;
            std::cout << "Resultado de la suma: " << sumar(a, b) << std::endl;
            break;
        }
        case 2: {
            int a, b;
            std::cout << "Ingrese el primer numero: ";
            std::cin >> a;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> b;
            std::cout << "Resultado de la resta: " << restar(a, b) << std::endl;
            break;
        }
        case 3: {
            int n;
            std::cout << "Ingrese un numero: ";
            std::cin >> n;
            if (n < 0) {
                std::cout << "El factorial no esta definido para numeros negativos.\n";
            } else {
                std::cout << "El factorial de " << n << " es: " << factorial(n) << std::endl;
            }
            break;
            }
        case 4: {
            int base, exp;
            std::cout << "Ingrese la base: ";
            std::cin >> base;
            std::cout << "Ingrese el exponente: ";
            std::cin >> exp;
            if (exp < 0) {
                std::cout << "Este programa no soporta exponentes negativos.\n";
            } else {
                std::cout << base << "^" << exp << " = " << potencia(base, exp) << std::endl;
            }
            break;
        }
        case -1:
            std::cout << "Saliendo del programa... Hasta pronto!\n";
            break;
        default:
            std::cout << "Opcion invalida. Intente de nuevo.\n";
            break;
    }

    } while (opcion != -1);

    return 0;
}
*/
