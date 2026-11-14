# Apuntes de C: Retorno de `Structs` y Entrada de Datos Nativa

Guía de modularización para la creación de instancias de `Struct` en funciones personalizadas (equivalentes a los `get_*` de entrenamiento), utilizando C puro estándar (ISO C99/C11) sin bibliotecas auxiliares como `cs50.h`.

---

## 1. Retorno de una `Struct` por Valor (`Return-by-Value`)

### Intuición y Concepto Formal
A diferencia de los `Arrays` puros (cuyo nombre decae a un `Pointer` y no pueden ser retornados directamente desde el `Stack` local de una `Function`), las `Structs` en C son tratados como tipos de datos completos:

* Pueden pasarse como argumentos por valor.
* **Pueden retornarse por valor (`return-by-value`).**

Cuando una `Function` retorna una `Struct`, el compilador realiza una copia bit a bit de todos sus miembros desde el marco del `Stack` de la función hacia la variable receptora en el invocador (por ejemplo, `main`).

---

## 2. Anatomía y Sintaxis de la Función

### Declaración Correcta
En C no se utiliza el operador de asignación `=` al definir una `Function`:

```c
// ✅ Correcto: tipo de retorno seguido del nombre
Persona get_persona(void);

// ❌ Incorrecto
Persona = get_persona(void);
```

### Captura de Datos: C Nativo vs. `cs50.h`

| Requerimiento | Abstracción (`cs50.h`) | C Puro Estándar (`<stdio.h>` / `<string.h>`) |
| :--- | :--- | :--- |
| **Lectura de texto (`String`)** | `get_string("Prompt: ")` | `fgets(buffer, sizeof(buffer), stdin)` + sanitización de `\n` |
| **Lectura de enteros (`int`)** | `get_int("Prompt: ")` | `fgets` en `Buffer` temporal + `sscanf(buffer, "%d", &var)` |

> ⚠️ **¿Por qué evitar `scanf("%d", ...)` directo?**  
> `scanf` deja el salto de línea (`\n`) residual en el flujo `stdin`. Si luego se invoca `fgets`, este lee inmediatamente ese `\n` pendiente, procesando una cadena vacía de forma fantasma. Leer líneas completas con `fgets` y luego parsear con `sscanf` es el estándar seguro y robusto en C.

---

## 3. Ejemplo Mínimo Ejecutable

Compilable con: `gcc -Wall -Wextra -std=c11 main.c -o main`

```c
#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
} Persona;

// Function que construye y retorna una Struct por valor
Persona get_persona(void) {
    Persona p;
    char buffer_edad[16];

    // 1. Lectura del String nativo
    printf("Ingrese el nombre: ");
    if (fgets(p.nombre, sizeof(p.nombre), stdin) != NULL) {
        // Eliminar el salto de línea al final
        p.nombre[strcspn(p.nombre, "\n")] = '\0';
    }

    // 2. Lectura del entero sin ensuciar stdin
    printf("Ingrese la edad: ");
    if (fgets(buffer_edad, sizeof(buffer_edad), stdin) != NULL) {
        sscanf(buffer_edad, "%d", &p.edad);
    }

    // 3. Retorno por copia completa
    return p;
}

int main(void) {
    // Modularización limpia: instanciación mediante función
    Persona p3 = get_persona();

    printf("\n--- Registro Exitoso ---\n");
    printf("Nombre: %s\n", p3.nombre);
    printf("Edad:   %d\n", p3.edad);

    return 0;
}
```

---

## 4. Errores Típicos y Trampas Comunes (*Gotchas*)

1. **Intentar asignar cadenas con `=`: `p.nombre = get_string(...)`**  
   `p.nombre` es un `Array` estático (`char[100]`), que representa un *lvalue no modificable*. Se debe volcar la entrada directamente en el `Buffer` pasando su dirección a `fgets`.
2. **Buffer Residual:**  
   Mezclar `scanf` con llamadas posteriores a `fgets` sin limpiar el flujo `stdin`.
3. **Desbordamiento de `Buffer` (*Buffer Overflow*):**  
   Usar funciones inseguras como `gets()` (obsoleta y prohibida) en lugar de `fgets()`, la cual siempre exige delimitar el tamaño máximo a leer (`sizeof(...)`).

---

## 5. Siguiente Nivel: Paso por Referencia (`Pointers`)

Retornar una `Struct` pequeña por valor es simple y seguro. Sin embargo, a medida que las estructuras crecen o contienen gran cantidad de datos, duplicar la memoria en el `Stack` tiene un costo de rendimiento.

El siguiente paso es pasar la `Struct` mediante un `Pointer` a memoria:
```c
void get_persona_by_ref(Persona *p);
```
En este esquema, se accede y modifica directamente la memoria original utilizando el operador flecha (`p->edad` o `p->nombre`).
