/*
Ejemplo 3 - Variables:
Desarrollar un programa que me permita almacenar en una variable, la suma de 6 numeros enteros.
Se debe mostrar imprimir el resultado de dicha suma, tambien se debe calcular el promedio de los 6 numeros e imprimir su resultado.

INPUT:
5,10,15,20,25,30


OUTPUT:
result-> suma -> 105
result-> promedio -> 17,5
*/

void setup()
{
    Serial.begin(9600);
     // Declaracion de variables.
    int num1 = 5;
    int num2 = 10;
    int num3 = 15;
    int num4 = 20;
    int num5 = 25;
    int num6 = 30;
    int suma = num1 + num2 + num3 + num4 + num5 + num6; //como el resultado es un numero entero, utilizo el tipo de dato int.
    float promedio = suma/6; //como el promedio contiene punto decimal, utilizo un tipo de dato Float para almacenar el resultado. 
    Serial.println(suma); //imprimo la sumatoria de numeros.
    Serial.println(promedio); //imprimo el promedio
}

void loop()
{
   

}
