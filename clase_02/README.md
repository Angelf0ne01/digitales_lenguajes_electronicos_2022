#  Clase Nº 2
## Temas: 
### Arrays (Matrices):
### Defines:

[TOC]

___ 
#### ARRAYS (ARREGLOS) - VECTORES - UNIDIMENSIONALES
 
 Los arreglos (array) son un conjunto de valores que se relacionan por medio de un nombre en común. También se puede decir que son datos que se almacenan bajo el mismo nombre y para diferenciarlos se utiliza un índice.

> **NOTA**:  Un Arreglo Puede Tener Varias Dimensiones.
Un arreglo unidimensional es una lista de valores guardados bajo el mismo nombre y del mismo tipo. Cada valor dentro del arreglo se le conoce como elemento del arreglo.

###### declaracion:
`
tipo_dato identificador[tamaño];
`

En “tipo de dato” introduciremos que tipo de dato queremos (int, char, float.. etc) , luego en “identificador” introducimos como llamaremos a nuestro arreglo para ubicarlo e identificarlo de manera rápida. Y entre los corchetes colocaremos el tamaño que le demos a nuestro array. Quedando de esta manera:



 ###### sintaxis:
```c
int arreglo[3];
```
###### Asignar valores para cada uno de los elementos:
> Nota: para agregar un elemento al arreglo hay que indicar el indice.
El primer elemento de un arreglo empiza por el indice 0.
![array_mem](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQWnQaJGCePC3vD2bVHWlDEqWyVzE1BVtfvRCTcDFRquz_5L26dOBa_4ihu9AxSPpcuevk&usqp=CAU "array_mem")

 ###### sintaxis:
```c
vector[0] = valor;
vector[1] = valor;
vector[2] = valor;
```
![array](https://sites.google.com/site/clasesprogramacionii/_/rsrc/1298564615815/home/3-vectores/vector_1.png?height=529&width=847 "array")

#### ARRAYS (ARREGLOS) - VECTORES - BIDIMENSIONALES
 Es una matriz de datos de tamaño m x n que contiene información almacenada del mismo tipo de datos (int, float, char, etc). Este tipo de arreglos necesita dos subíndices para ser declarado o para acceder a la información de un elemento en específico, a diferencia de una matriz unidimensional que solo necesita un subíndice. Un arreglo bidimensional es utilizado cuando queremos guardar mucha información sobre un tipo de dato en específico en distintas filas. Por ejemplo, si quieres crear una base de datos donde queremos guardar varios nombres, en un vector no se podría hacer pues solo podrías guardar un nombre, en cambio, con un arreglo bidimensional puedes guardar un nombre por fila, por lo tanto, si creamos varias filas podemos guardar varios nombres.
 
###### declaracion:
`
tipo_dato nombre_arreglo [tamaño_fila][tamaño_columna];
`

- **tipo_dato**: Nos referimos al tipo de dato que estaremos manejando en el arreglo, puede ser char, int, float, etc.
- **nombre_arreglo**: El nombre con el que identificaremos nuestra matriz.
- **tamaño_fila**: La cantidad de filas que tendrá nuestra matriz.
- **tamaño_columna**: La cantidad de columnas que tendrá nuestra matriz.

Por ejemplo, si queremos crear una matriz de 3 filas y 4 columnas de tipo de dato int y con nombre “matriz”, lo haríamos de la siguiente manera:

```
int matriz[3][4];
```
Esta matriz tendría 12 espacios para guardar información (3x4), y gráficamente lo veríamos de la siguiente manera:


![bidimensional](http://solucioningenieril.com/imagenes/asignaturas/programacion_en_c/tema_37/1.png "bidimensional")

___
#### Defines:

**#define** un componente C útil que permite al programador dar un nombre a un valor constante antes de compilar el programa. Las constantes definidas en arduino no ocupan ningún espacio de memoria de programa en el chip. El compilador reemplazará las referencias a estas constantes con el valor definido en el momento de la compilación.

Sin embargo, esto puede tener algunos efectos secundarios no deseados, si por ejemplo, un nombre de constante que ha sido #definido se incluye en algún otro nombre de constante o variable. En ese caso, el texto sería reemplazado por el número (o texto) #definido.

En general, se prefiere la palabra clave const para definir constantes y debe usarse en lugar de #define.

##### sintaxis
```
#define constantName value
```
Tenga en cuenta que el # es necesario.

##### Código de ejemplo
```
#define ledPin 3

```

##### Notas y Advertencias
No hay punto y coma después de la instrucción #define. Si incluye uno, el compilador arrojará errores crípticos más abajo en la página.
De manera similar, incluir un signo igual después de la declaración #define también generará un error de compilación críptico más abajo en la página.

```
#define ledPin 3;    // error
#define ledPin  = 3 //error
#define ledPin 3 //bien
```
