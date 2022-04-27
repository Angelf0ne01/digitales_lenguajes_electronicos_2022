#  Clase Nº 1
## Temas: 
### Variables:
[TOC]

------------

#### Variable del tipo INT 
las variables Int, tambien conocidas como variables del tipo entero, son aquellas que pueden almacenar valores numericos, pueden ser positivos o negativos.
Solo se puede almecenar valores enteros, sin decimal.

El valo maximo y minimo de una variable Int depende de la resolucion del procesador.
**Ejemplo: 16bits ==> 2 bytes
**
```
valor_max =  (2 ^ 15) - 1) = 32767
valor_min = -2 ^ 15 = 32768
```
El rango maximo que se puede almacenar con un valor de 8bits (1byte) es de -256 a 255.

La forma de declarar una variable del tipo entero es la siguiente:

```c
//declarado pero no inicializado.
int nombre_de_variable;  
//declarado e inicializado.
int nombre_de_variable=0; 
```
>  *NOTA: En programación, una variable no inicializada es una variable que se declara pero no está ajustada a un valor definido y conocido antes de su uso. Tendrá algún valor, pero no se puede predecir.***

------------
#### Variable del tipo Unsigned Int
Las variables sin signos, son las mismas que las variables del tipo INT, ya que pueden almacenar el mismo valor de bytes (en este ejemplo de 2bytes o 16 bits). Sin embargo, en lugar de almacenar numeros negativos, solo amacenan valores positivos, lo que produce un rago util de **0 a 65.535** (2 ^ 16) - 1).

La diferencia entre un Int sin signo y un int con signo, radica en la forma de que se interpreta el bit mas alto, a veces denominado bit de "signo". Si el bit alto es un "1".

La forma de declarar una variable del tipo Unsigned es la siguiente:

```c
//declarado pero no inicializado.
Unsigned int nombre_de_variable;  
//declarado e inicializado.
Unsigned int nombre_de_variable=0; 
```


------------
#### Variable del tipo Boolean o Bool 
Las variables del tipo bool o booleanas solo acepta uno de dos valores, **1 o 0 (true o false).**
Cada variable booleana ocupa un byte de memoria. 

La forma de declarar una variable del tipo boolean es la siguiente:
```c
//valor falso
int nombre_de_variable = false; // false o 0.
//valor verdadero
int nombre_de_variable = true; //true o 1.
```

#### Variable del tipo string
Las variables string son secuencia de caracteres guardados como una mtriz de caracteres terminados con un caracter nulo ('\' ASCII 0).
Las cadenas se especifican entre "comillas dobles".

###### sintaxis:

```c
String nombre_de_variable = "";
String nombre_de_variable = "palabra";
```


#### Variable del tipo char 
Las varaibles del tipo char solo puede almacenar 1 byte de informacion (8 bits). 
Este tipo de datos se emplea para representar un carácter perteneciente a un determinado código utilizado por el ordenador (normalmente el código ASCII).

Para representar este tipo de dato se antepone la palabra reservada char al identificador de la variable.

los caracteres se almacenan como números. Puede ver la codificación específica en el gráfico ASCII . Esto significa que es posible realizar operaciones aritméticas con caracteres, en los que se utiliza el valor ASCII del carácter (por ejemplo, 'A' + 1 tiene el valor 66, ya que el valor ASCII de la letra A mayúscula es 65).

###### Grafico ascii:

[![grafico ascii](https://835983.smushcdn.com/2126993/wp-content/uploads/2018/07/codigo-ascii.jpg?lossy=1&strip=1&webp=1 "grafico ascii")](https://835983.smushcdn.com/2126993/wp-content/uploads/2018/07/codigo-ascii.jpg?lossy=1&strip=1&webp=1 "grafico ascii")

###### sintaxis:
```c
 char nombre_de_variable = 'A';
 char nombre_de_variable = 65; // ambos son equivalentes

```

