/*
    Ejemplo 2 - Arrays Unidimensional:
    Convertir un mes numerico a mes en formato texto.

    input -> 1 | output esperado: "Enero"
    input -> 2 | output esperado: "Febrero"
    input -> 3 | output esperado: "Marzo"
*/

/*
    Realizo una funcion para delegar la logica de obtener el mes.    
*/
String obtenerMes(int mes){
    String meses[12]={
            "Enero", //indice = 0  - elemento = "Enero"
            "Febrero", //indice = 1  - elemento = "Febrero"
            "Marzo", //indice = 2  - elemento = "Marzo"
            "Abril", //indice = 3  - elemento = "Abril"
            "Mayo", //indice = 4  - elemento = "Mayo"
            "Junio", //indice = 5  - elemento = "Junio"
            "Julio", //indice = 6  - elemento = "Julio"
            "Agosto", //indice = 7  - elemento = "Agosto"
            "Septiembre", //indice = 8  - elemento = "Septiembre"
            "Octubre", //indice = 9  - elemento = "Octubre"
            "Noviembre", //indice = 10  - elemento = "Noviembre"
            "Diciembre" //indice = 11  - elemento = "Diciembre"
        }
    
    /*
        Es sabido que el indice 0 del arreglo "meses" corresponde al elemento "Enero",
        Si utilizamos como indice mes sin ningun tratamiento, esto dara un error en la logica.
        Ya que si mes tiene un valor de "1" ejemplo:
        meses[1]--> "Febrero", el valor que va a retonar no corresponde.
        para solucionar esto, realizamos una correccion en el indice restando -1.
        De esta forma, cuando se ingrese un mes (1-12), podemos asocirlo a un indice correcto.
        Ejemplo:
        mes = 1
        meses[mes-1]---> meses[0] --> "Enero"
        
    */
    return meses[mes-1]; 
}
void setup(){
    Serial.begin(9600);
    int mes_numero =2; //mes ingresado
    String mes_caracter = obtenerMes(mes_numero); //obtengo el mes.
    //Imprimo los resultados
    Serial.print("mes->")
    Serial.print(mes_numero);
    Serial.print("-");    
    Serial.println(mes_caracter);
}

void loop(){
    
}