/*
Ejemplo 4 - Variables:
Realizar un programa que me permita imprimir la union de 2 palabras. 

INPUT:
palabra1 -> texto1 
palabra2 -> texto2


OUTPUT:
result-> texto1texto2
*/

void setup()
{
    Serial.begin(9600);
    String palabra1="text1";
    String palabra2="texto2";
    String union_palabras = palabra1 + palabra2;    
    Serial.println(union_palabras); //imprimo el promedio
}

void loop()
{
   

}
