# Libft - Biblioteca de Funciones en C

**Libft** es una biblioteca personalizada de funciones en **C**, creada como primer proyecto de la escuela **42**. Este proyecto busca construir funciones estándar de C desde cero, mejorando el entendimiento de la programación a bajo nivel y la gestión de memoria en este lenguaje.

## Contenido

La biblioteca **libft** incluye implementaciones de funciones de las siguientes categorías:

### 1. Funciones de la Biblioteca Estándar
- **ft_memset**: Rellena una región de memoria con un byte específico.
- **ft_bzero**: Establece una región de memoria en cero.
- **ft_memcpy**: Copia un bloque de memoria a otro.
- **ft_strlen**: Calcula la longitud de una cadena.
- **ft_strcpy**: Copia una cadena a otra.

### 2. Manipulación de Cadenas
- **ft_strdup**: Duplica una cadena.
- **ft_strjoin**: Concadena dos cadenas en una nueva.
- **ft_substr**: Extrae una subcadena de una cadena dada.
- **ft_strtrim**: Elimina caracteres específicos del inicio y final de una cadena.

### 3. Funciones de Conversión
- **ft_atoi**: Convierte una cadena a un entero.
- **ft_itoa**: Convierte un entero a una cadena.
- **ft_tolower** y **ft_toupper**: Convierte caracteres individuales a minúsculas o mayúsculas.

### 4. Funciones de Manipulación de Memoria y Listas
- **ft_memmove**: Copia una región de memoria de forma segura.
- **ft_lstnew**: Crea un nuevo nodo de lista enlazada.
- **ft_lstadd_front**: Agrega un nodo al inicio de una lista.
- **ft_lstadd_back**: Agrega un nodo al final de una lista.

## Instalación

Para compilar **libft.a**, simplemente ejecuta el siguiente comando:

```bash
make