[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Z32xH0F4)
# Guía para Iniciar con el Programa "CalculadoraSimple"

Este proyecto es una calculadora simple escrita en C++ que realiza operaciones básicas como suma y resta, así como una guía para practicar algunos conceptos de C++.

> Este es un código de familiaridad, se espera que los estudiantes hagan commit y push de lo que avancen, pero no es calificable

## Contenido del Programa

El programa consta de los siguientes archivos principales:

1. **`main.cpp`**: Contiene la lógica principal del programa, donde se interactúa con el usuario. Cada proyecto en C++ debe tener solamente una función main.
2. **`matematicas.h`**: Define las funciones matemáticas disponibles.
3. **`matematicas.cpp`**: Implementa las funciones matemáticas definidas en el archivo de cabecera.

El programa solicita al usuario dos números y realiza las operaciones de suma y resta, mostrando los resultados en pantalla.

___

## Actividades de familiaridad

### Actividad 1: Ejecutar el Programa e Interactuar con la Consola

Sigue estos pasos para abrir y trabajar con un proyecto existente que utiliza CMake en CLion:

1. **Abrir CLion**:
   - Inicia CLion desde tu sistema operativo.

2. **Seleccionar el Proyecto**:
   - Haz clic en "Open" en la pantalla de inicio de CLion.
   - Navega hasta la carpeta raíz del proyecto que contiene el archivo `CMakeLists.txt`.
   - Selecciona la carpeta y haz clic en "OK".

3. **Cargar el Proyecto**:
   - CLion detectará automáticamente el archivo `CMakeLists.txt` y configurará el entorno de desarrollo.
   - Espera a que el IDE termine de cargar y generar los archivos necesarios.


4. **Verificar la Configuración de CMake - este proyecto esta OK, pero vale la pena ver que tiene**:
      <details>
      <summary>Más info aquí para **verificar la Configuración de CMake**</summary>
      Asegúrate de que el archivo `CMakeLists.txt` esté configurado correctamente. Esto implica:

      1. **Revisar el Archivo `CMakeLists.txt`**:
         - Verifica que el archivo contenga las instrucciones necesarias para compilar tu proyecto, como:
            - La versión mínima de CMake requerida (`cmake_minimum_required`).
            - El nombre del proyecto (`project`).
            - La inclusión de los archivos fuente y de cabecera necesarios (`add_executable`).
   
         2. **Comprobar la Configuración del Compilador**:
            - Asegúrate de que el compilador configurado sea compatible con el estándar de C++ que estás utilizando (por ejemplo, C++17 o C++20). Esto se puede especificar en el archivo `CMakeLists.txt` con:
              ```cmake
              set(CMAKE_CXX_STANDARD 20)
              set(CMAKE_CXX_STANDARD_REQUIRED ON)
              ```
   
         3. **Validar las Rutas de Archivos**:
            - Confirma que las rutas a los archivos fuente y de cabecera sean correctas y que todos los archivos necesarios estén incluidos.
   
         4. **Resolver Errores de Configuración**:
            - Si CLion muestra errores relacionados con CMake, revisa los mensajes de error en la consola de CMake para identificar y corregir problemas en el archivo `CMakeLists.txt`.
      </details>
5. **Construir el Proyecto**:
   - Haz clic en el botón "Build" o usa el atajo `Ctrl + F9` para compilar el proyecto.
6. **Ejecutar el Proyecto**:
   - Haz clic en el botón "Run" o usa el atajo `Shift + F10` para ejecutar el programa.
7. **Interactuar con la Consola**:
   - Ingresa los números solicitados por el programa y observa los resultados de las operaciones matemáticas.
   - Familiarízate con cómo el programa solicita datos y muestra resultados.
8. **Explorar el Código**:
   - Abre los archivos `main.cpp`, `matematicas.h` y `matematicas.cpp` para identificar cómo se implementan las funciones y cómo se organiza el código.

### Actividad 2: Revisar los Archivos del Proyecto

1. **Explorar el Archivo `CMakeLists.txt`**:
   - Abre el archivo `CMakeLists.txt` y revisa las configuraciones, como el nombre del proyecto, los archivos fuente incluidos y el estándar de C++ especificado.

2. **Revisar el Archivo `.gitignore`**:
   - Abre el archivo `.gitignore` y analiza qué tipos de archivos están excluidos del control de versiones. Identifica por qué es importante ignorar ciertos archivos.

3. **Identificar Archivos `.h` y `.cpp`**:
   - Examina los archivos del proyecto y distingue entre los archivos de cabecera (`.h`) y los archivos de implementación (`.cpp`).
   - Comprende cómo los archivos `.h` declaran las funciones y cómo los archivos `.cpp` las implementan.

4. **Ejecutar Cambios Simples**:
   - Modifica un mensaje en el archivo `main.cpp` (por ejemplo, cambia el texto de bienvenida) y vuelve a compilar y ejecutar el programa para observar los cambios.

___

## Actividades para Extender el Programa

### Actividad 1: Crear una Función para Calcular el Factorial de un Número

1. **Modificar `matematicas.h`**:
    - Declara una nueva función `int factorial(int numero);`.

2. **Modificar `matematicas.cpp`**:
    - Implementa la función `factorial` usando un ciclo `for` o `while` para calcular el factorial de un número.


3. **Modificar `main.cpp`**:
    - Solicita un número al usuario y muestra el resultado del factorial. La función debe retornar el resultado y es
      dentro del main que debes mostrarlo

---

### Actividad 2: Crear una Función para Calcular la Potencia de un Número

1. **Modificar `matematicas.h`**:
    - Declara una nueva función `int potencia(int base, int exponente);`.

2. **Modificar `matematicas.cpp`**:
    - Implementa la función `potencia` usando un ciclo `for` para calcular la potencia de un número.

   Ejemplo de implementación:
   ```cpp
   int potencia(int base, int exponente) {
       int resultado = 1;
       for (int i = 0; i < exponente; ++i) {
           resultado *= base;
       }
       return resultado;
   }
   ```

3. **Modificar `main.cpp`**:
    - Solicita la base y el exponente al usuario y muestra el resultado de la potencia.

---

### Actividad 3: Crear un Menú en el `main` Usando `do-while` y `switch`

1. **Modificar `main.cpp`**:
    - Implementa un menú que permita al usuario elegir entre las operaciones disponibles (suma, resta, factorial,
      potencia o salir del programa con -1).
    - Usa un ciclo `do-while` para mantener el menú activo hasta que el usuario decida salir.
    - Usa una estructura `switch` para manejar las opciones del menú.

Este código es una guía:

```cpp
#include <iostream>

int main() {
    int opcion;

    do {
        std::cout << "\n--- Menú de Animales ---\n";
        std::cout << "1. Perro\n";
        std::cout << "2. Gato\n";
        std::cout << "3. Pájaro\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Elegiste Perro. ¡Guau guau!\n";
                break;
            case 2:
                std::cout << "Elegiste Gato. ¡Miau miau!\n";
                break;
            case 3:
                std::cout << "Elegiste Pájaro. ¡Pío pío!\n";
                break;
            case 4:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}
```

### Explicación

- **`do-while`**: Mantiene el menú activo hasta que el usuario seleccione la opción de salir (`4`).
- **`switch`**: Evalúa la opción ingresada y ejecuta el bloque correspondiente.
- **Validación**: Se incluye un mensaje para opciones no válidas.


### Actividad 4: Encontrar el Máximo de un Arreglo y Sumar la Edad del Estudiante

1. **Modificar `matematicas.h`**:
   - Declara una nueva función `int encontrarMaximo(int arreglo[], int tamano);`.

2. **Modificar `matematicas.cpp`**:
   - Implementa la función `encontrarMaximo` para recorrer un arreglo y encontrar el número máximo.

3. **Modificar `main.cpp`**:
   * Agrega una nueva opción al menú principal para encontrar el máximo de un arreglo.
   * Crea un arreglo con valores de ejemplo.
   * Llama a la función encontrarMaximo para obtener el valor máximo del arreglo.
   * Solicita al usuario su edad, suma este valor al máximo encontrado y muestra el resultado.


---

## Nota Importante sobre el Uso de Herramientas de IA

Este proyecto está diseñado para ayudarte a desarrollar habilidades prácticas en programación con C++. Es fundamental que completes los ejercicios por tu cuenta, ya que esto te permitirá adquirir soltura y confianza con el lenguaje.

Si encuentras problemas de **sintaxis** o errores técnicos específicos, puedes usar herramientas de IA para resolverlos. Sin embargo, evita recurrir a estas herramientas para realizar los ejercicios completos, ya que el objetivo principal es que desarrolles tus propias soluciones y fortalezcas tu aprendizaje.

Recuerda: la práctica constante y el esfuerzo personal son clave para convertirte en un programador competente.

---

## Recursos Adicionales para Resolver Inquietudes sobre el Lenguaje

Si tienes dudas relacionadas con aspectos del lenguaje C++, te recomendamos los siguientes recursos:

1. **Revisión de Material Bibliográfico**:
   - Estudia las secciones 1 a la 21 del libro *Modern C++ for Absolute Beginners: A Friendly Introduction to the C++ Programming Language and C++11 to C++23 Standards*.
   - Este recurso está disponible para estudiantes de la Pontificia Universidad Javeriana de Cali a través de la biblioteca de O’Reilly. Puedes acceder al libro en el siguiente enlace:
     [Acceder al libro en O’Reilly](https://learning.oreilly.com/library/view/modern-c-for/9781484292747/)

2. **Consulta de la Guía en GitHub**:
   - Revisa la guía disponible en:
     [Guía de Introducción a C++](https://github.com/yoanpinzon/POO/blob/master/c%2B%2B1.md)
   - [Guía sobre C++ ciclos y arreglos](https://github.com/yoanpinzon/POO/blob/master/c%2B%2B2.md)


## Cómo Subir los Cambios al Repositorio

A medida que comples las actividades sigue estos pasos para registrar tu progreso y subir tu trabajo al repositorio de GitHub Classroom.

1. **Abrir la Terminal o Consola Integrada**:
   - En CLion, puedes usar la terminal integrada o abrir una terminal externa en la carpeta del proyecto.

2. **Registrar Cambios Progresivos (Commits Intermedios)**:
   - A medida que avances en las actividades, realiza commits intermedios para registrar tu progreso. Por ejemplo:
     ```bash
     git add .
     git commit -m "Implementada función factorial"
     ```
   - Realiza un commit cada vez que completes una parte significativa del trabajo, como la implementación de una nueva función o la corrección de un error.

3. **Subir los Cambios (Push)**:
   - Envía todos los commits al repositorio remoto en GitHub:
     ```bash
     git push origin main
     ```
4 **Confirmar la Entrega**:
   - Verifica que los cambios esten reflejados en tu repositorio de GitHub Classroom. Puedes hacerlo visitando el enlace del repositorio en tu navegador.

### Nota
- Realizar commits intermedios es una buena práctica, ya que permite llevar un registro detallado de tu progreso y facilita la identificación de cambios específicos.
- Si encuentras problemas al subir los cambios, verifica que estés autenticado correctamente en GitHub y que estés trabajando en el repositorio correcto.

Solo es necesario hacer push al repositorio para que los cambios queden registrados. No es necesario subir ninguna entrega al Brightspace