# Apuntes de C: `strcpy`, `struct` y Entrada de Datos

Resumen y guía rápida basada en los conceptos vistos durante la sesión sobre manipulación de cadenas, definición y uso de estructuras (`struct`), y cómo interactuar con el usuario.

---

## 1. La Función `strcpy` (String Copy)

Definida en `<string.h>`:
```c
#include <string.h>
char *strcpy(char *destino, const char *origen);
```

### ¿Por qué es necesaria?
En lenguaje C, las cadenas de texto no son un tipo de dato nativo primitivo, sino arrays de caracteres terminados en `\0` (`char[]`). Por ello, **no se pueden reasignar con el operador `=`** tras ser declarados:

```c
char destino[20];
destino = "Hola"; // ❌ ERROR de compilación
```

Para copiar texto dentro de un array de caracteres, se utiliza `strcpy`:

```c
strcpy(destino, "Hola"); // ✅ Copia "Hola\0" en destino
```

> ⚠️ **Atención:** `strcpy` no verifica si el array de destino tiene espacio suficiente. Para evitar desbordamientos de memoria (*buffer overflow*), se recomienda usar `strncpy` asegurando el tamaño del buffer.

---

## 2. Estructuras (`struct`) en C

Una estructura es un tipo de dato compuesto definido por el programador que permite agrupar múltiples variables de distintos tipos bajo un mismo nombre.

### A. El "molde" vs. la "variable"
Definir un struct solo crea el plano o molde, no reserva espacio real para los datos hasta declarar una variable:

```c
// Molde (definición del tipo)
struct Persona {
    char nombre[50];
    int edad;
};

// Creación de variables en memoria
struct Persona p1; // p1 es una instancia concreta
struct Persona p2; // p2 es otra persona independiente
```

- **`struct Persona`**: Es el tipo de dato.
- **`p1` / `p2`**: Son los nombres de las variables creadas con ese molde.

---

## 3. Agregar Más Variables (Miembros) a una `struct`

Se pueden añadir tantas variables como se necesiten dentro de las llaves `{ ... }`:

```c
struct Persona {
    char nombre[50];
    int edad;
    float altura;        // Decimal (ej: 1.75)
    float peso;          // Decimal (ej: 70.2)
    char genero;         // Carácter ('M', 'F', etc.)
    int id;              // Entero de identificación
};
```

Para acceder y asignar valores a sus campos, se utiliza el operador punto (`.`):

```c
struct Persona p1;
strcpy(p1.nombre, "Guillermo");
p1.edad = 22;
p1.altura = 1.80f;
p1.genero = 'M';
```

---

## 4. Tip Pro: Simplificar con `typedef`

Para evitar escribir la palabra `struct` cada vez que se declara una variable:

```c
typedef struct {
    char nombre[50];
    int edad;
    float altura;
} Persona;

// Ahora se declara directo como cualquier otro tipo:
Persona p1;
```

---

## 5. Llenar los Datos de una `struct` con Entrada de Usuario

Para permitir que el usuario ingrese la información por consola, usamos `scanf` o `fgets`.

### Regla clave del `&` (Ampersand):
- **Tipos numéricos y caracteres simples (`int`, `float`, `char`)**: Requieren `&` para pasar la dirección de memoria.
- **Cadenas / Arrays (`char[]`)**: **No** llevan `&`, porque el nombre del array ya representa la dirección de memoria de su primer elemento.

### Ejemplo Completo:

```c
#include <stdio.h>

struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    struct Persona p1;

    // 1. Cadena simple (sin espacios)
    printf("Ingrese su nombre: ");
    scanf("%s", p1.nombre);        // Sin '&'

    // 2. Entero
    printf("Ingrese su edad: ");
    scanf("%d", &p1.edad);         // Con '&'

    // 3. Decimal
    printf("Ingrese su altura: ");
    scanf("%f", &p1.altura);       // Con '&'

    // Imprimir resultados
    printf("\n--- Datos Registrados ---\n");
    printf("Nombre: %s\n", p1.nombre);
    printf("Edad:   %d anios\n", p1.edad);
    printf("Altura: %.2f m\n", p1.altura);

    return 0;
}
```

### Para nombres con espacios:
Si se desea capturar espacios (por ejemplo, "Juan Carlos"), se utiliza `fgets`:

```c
printf("Ingrese su nombre completo: ");
fgets(p1.nombre, sizeof(p1.nombre), stdin);
```
