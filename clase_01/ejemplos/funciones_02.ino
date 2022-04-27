/*
Ejemplo 2 - Funciones:
Desarrollar una funcion que me calcule la suma de 2 valores enteros y devuelva su valor.
*/


int Sumar(int val1,int val2){
    return val1 + val2;
}


void setup()
{
    Serial.begin(9600);
    int val1 = 3;
    int val2 = 3;
    int suma = Sumar(val1,val2);
    Serial.println(suma);
}

void loop()
{

}
