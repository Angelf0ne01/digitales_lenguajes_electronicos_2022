/*
Ejemplo 2 - Variables:
Desarrollar un programa que me permita almacenar en una variable, la suma de 1 numeros enteros.
Se debe mostrar imprimir el resultado de dicha suma.

INPUT:
num1 - > 5
num2 -> 25


OUTPUT:
result->30
*/

void setup()
{
    Serial.begin(9600);
    // Declaracion de variables.
    int num1 = 5;
    int num2 = 25;
    int result = num1 + num2;
    Serial.println(result);
}

void loop()
{

}
