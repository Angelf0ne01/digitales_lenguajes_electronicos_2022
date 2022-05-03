#  Clase Nº 4
## Temas: 
### Switch - case

[TOC]

___ 
Al igual que las declaraciones if, switch case controla el flujo de programas al permitir que los programadores especifiquen diferentes códigos que deben ejecutarse en diversas condiciones. En particular, una sentencia switch compara el valor de una variable con los valores especificados en sentencias case. Cuando se encuentra una declaración de caso cuyo valor coincide con el de la variable, se ejecuta el código en esa declaración de caso.

La palabra clave break sale de la instrucción switch y normalmente se usa al final de cada caso. Sin una sentencia break, la sentencia switch continuará ejecutando las siguientes expresiones ("falling-through") hasta que se alcance una rotura o el final de la sentencia switch.

###### Sintaxis

```c
switch (val) {
   case val1:
     // instrucciones si val=val1
     break;
   case val2:
     // instrucciones si val=val2
     break;
   default:
     // instrucciones por default para cuando val sea distinto a los casos.
     break;
 }
```
> NOTA: 
**val** es una variable cuyo valor comparar con varios casos. Tipos de datos permitidos: int, char.
**val1,val2,etc** son constantes y los tipos de datos permitidos: int, char.



###### Codigo de Ejemplo:
En el siguiente ejemplo, una variable val se define e incrementa en cada bucle. La instrucción del switch ejecuta el código correspondiente al valor val. Notará que cuando el valor del val no está definido en un case, se ejecuta el código de la instrucción default.

```
int val=0;
void setup() {
 Serial.begin(9600);  
}
void loop() {
 switch (val) {
   case 0:
     Serial.println("ZERO");
     break;
   case 1:
      Serial.println("ONE");
     break;
   case 2:
      Serial.println("TWO");
     break;
   case 3:
      Serial.println("THREE");
     break;
   default:
     Serial.println("UNDEFINED");
     break;
 }
 val++;
 if(val>5) val=0;
 delay(500);
}
```
Al eliminar la instrucción break, es posible ejecutar el mismo bloque de instrucciones en diferentes casos. Esto permite no reescribir el bloque de instrucciones cuando la función es la misma en diferentes casos.

```
char val=0;
void setup() {
 Serial.begin(9600);  
}
void loop() {
 switch (val) {
   case 1:
   case 3:
   case 5:
   case 7:
   case 9:
     Serial.println("INPAR");
     break;
   case 2:
   case 4:
   case 6:
   case 8:
     Serial.println("PAR");
     break;
   default:
     Serial.println("> 10");
     break;
 }
 val++;
 if(val>10) val=0;
 delay(500);
}
```



