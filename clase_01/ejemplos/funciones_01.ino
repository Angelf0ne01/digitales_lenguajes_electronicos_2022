/*
Ejemplo 1 - funciones:
Declaracion de funciones sin parametros.
*/

void funcionVoid(){};

//retorna un valor booleano./*
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

bool funcionBool(){
    //return false;
    return true;
}

//retorna un valor numerico.
int funcionInt(){   
    return 5;
}

//retorna un valor flotante.
float funcionFloat(){   
    return 2.5;
}


//retorna una letra.
char funcionChar(){   
    return 'a';
}

//retorna una palabra.
String funcionString(){   
    return "palabras";
}

/*
Ejemplo 1 - funciones:
Declaracion de funciones con parametros.
*/

void funcionVoidConParametros(int numero, float decimal, bool booleanoo, String palabras){}





void setup(){}

void loop(){}
