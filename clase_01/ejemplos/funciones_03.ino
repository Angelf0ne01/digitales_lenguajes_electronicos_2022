/*
Ejemplo 2 - Funciones:
Desarrollar una funcion que me permita saber si una persona es mayor de edad.
*/


bool esMayorDeEdad(int edad){
    return edad>=18; //en el caso de ser mayor se va a retornar 1 (true),caso contrario 0 (false)
}


void setup()
{
    Serial.begin(9600);
    int edad = 20;
    bool esMayor = esMayorDeEdad(edad);
    Serial.println(esMayor); //si es mayor se va a imprimir 1 (true), caso contrario 0 (false)
}

void loop()
{

}
