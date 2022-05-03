#  Clase Nº 2
## Temas: 
### if - else

[TOC]

___ 
#### If
 
La declaración de "if" comprueba una condición y ejecuta la siguiente declaración o conjunto de declaraciones si la condición es 'verdadera'. (true).

###### sintaxis
```
if (condicion) {
  //declaracion(s)
}
```
> condicion: es una expresion booleana (es decir, puede ser **True** O **false**)

##### Código de ejemplo 

```
//Al ejercutarse una sola linea, se puede eliminar los corchetes. 
if (x > 120) digitalWrite(LEDpin, HIGH); 
//Al ejercutarse una sola linea, se puede eliminar los corchetes. 
if (x > 120)
digitalWrite(LEDpin, HIGH);

if (x > 120) {digitalWrite(LEDpin, HIGH);}

if (x > 120) {
  digitalWrite(LEDpin1, HIGH);
  digitalWrite(LEDpin2, HIGH);
}
//Todos los ejemplos son validos. 
```

> Las declaraciones que se evalúan dentro de los paréntesis requieren el uso de uno o más operadores que se muestran a continuación.
##### Operadores de comparación:
```
x == y (x es igual a y) 
x != y (x no es igual a y) 
x < y (x es menor que y) 
x > y (x es mayor que y) 
x <= y (x es menor o igual que y) 
x >= y (x es mayor o igual que y)
```
___

### ELSE 

El if…​else permite un mayor control sobre el flujo de código que la instrucción if básica, al permitir que se agrupen múltiples pruebas. Se ejecutará una cláusula else (si es que existe) si la condición en la declaración if da como resultado falso. El else puede continuar con otra prueba if, de modo que se pueden ejecutar varias pruebas mutuamente excluyentes al mismo tiempo.

Cada prueba pasará a la siguiente hasta que se encuentre una prueba verdadera. Cuando se encuentra una prueba verdadera, se ejecuta su bloque de código asociado y el programa salta a la línea que sigue a toda la construcción if/else. Si ninguna prueba resulta ser cierta, se ejecuta el bloque else predeterminado, si hay uno presente, y establece el comportamiento predeterminado.


###### Sintaxis
```
if (condicion1) {
  // realizar tarea 1
}
else if (condicion2) {
  // realizar tarea 2
}
else {
  // realizar tarea 3
}
```
###### Ejemplo:
A continuación se muestra un extracto de un código para el sistema de sensor de temperatura

```
if (temperature >= 70) {
  // Peligro! Apagar sistema.
}
else if (temperature >= 60) { // 60 <= temperature < 70
  // Advertencia! Requiere una atencion de un usuario.
}
else { // temperature < 60
  //Estable! Continua con las tareas normales.
}
```
