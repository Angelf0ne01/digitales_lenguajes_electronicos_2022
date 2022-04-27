/*
Ejemplo 2 - Funciones:
Desarrollar una funcion que me permita calcular el area de una superficie.
La formula es: 
Area = base * altura;
*/


int calculoDeArea(int base, int altura){
    return base*altura;
}
void setup()
{
    Serial.begin(9600);
    int altura = 10;
    int base = 20;
    int area = calculoDeArea(base,altura);
    Serial.println(area); 
}

void loop()
{

}
