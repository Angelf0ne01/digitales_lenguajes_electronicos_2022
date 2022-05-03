/*
    Ejemplo 1 - Arrays Unidimensional:
    Almacenar en un vector (Array unidimensional) 5 valores de forma inicial.
*/

void setup(){
    Serial.begin(9600);
    //opcion 1
    int valores_opcion_1[5]={1,2,3,4,5};
    //opcion 2
    int valores_opcion_2[5];
    valores_opcion_2[0]=1;
    valores_opcion_2[1]=2;
    valores_opcion_2[2]=3;
    valores_opcion_2[3]=4;
    valores_opcion_2[4]=5;    

    //imprimo los elementos
    Serial.print("elemento 1->");
    Serial.println(valores_opcion_1[0]); //indice 0

    Serial.print("elemento 2->");
    Serial.println(valores_opcion_1[1]); //indice 1

    Serial.print("elemento 3->");
    Serial.println(valores_opcion_1[2]); //indice 2

    Serial.print("elemento 4->");
    Serial.println(valores_opcion_1[3]); //indice 3

    Serial.print("elemento 5->");
    Serial.println(valores_opcion_1[4]); //indice 4
    
}

void loop(){
    
}