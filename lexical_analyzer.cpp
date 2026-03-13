#include <math.h>
#include <string>

using namespace std;

int Analizador_Numeros(string cadena){
    /* BANDERAS DE CONTROL DE punto decimal, exponencial y error*/
    int ban = 0, punto = 0, exp = 0;

    for (int i = 0; i < cadena.length(); i++){
        if(isdigit(cadena[i])){  /* VERIFICA SI EL CARACTER ES DIGITO */
            continue;
        } else if(i > 0 && isdigit(cadena[i-1]) && cadena[i] == '.' && (i < cadena.length() - 1)) { 
            /* VERIFICA SI EL CARACTER ES PUNTO DECIMAL */
            punto += 1;
            if(punto >= 2){ /*SI EL CONTADOR 'punto' AUMENTA A MAS DE 1, ENTONCES RETORNA UN 1*/
                ban = 1;
                break;
            }
            continue;
        } else if(i > 0 && isdigit(cadena[i-1]) && (cadena[i] == 'E' || cadena[i] == 'e') /*&& punto == 1*/ && (i < cadena.length() - 1)){ 
            /* VERIFICA SI EL CARACTER ES UNA 'E' PARA EXPONENCIAL*/
            exp += 1;
            if(exp >= 2){ /*SI EL CONTADOR 'exp' AUMENTA A MAS DE 1, ENTONCES RETORNA UN 1*/
                ban = 1;
                break;
            }
            continue;
            
        } else if(i == 0 || (cadena[i-1] == 'E' || cadena[i-1] == 'e') && (cadena[i] == '-' || cadena[i] == '+')){  
            /* VERIFICA SI EL CARACTER ES UN SIGNO DE (+) O (-) */
            continue;
        } /*else if(i == 0 || (cadena[i-1] == 'E' || cadena[i-1] == 'e') && (isdigit(cadena[i]))) {                   
            /*VERIFICA SI EL CARACTER ES DIGITO DESPUES DEL EXPONENTE
            continue;
        }*/ else { /* SI EL CARACTER RESULTA SER CUALQUIERA QUE NO ES DE LOS MENCIONADOS ANTERIORMENTE */
            ban = 1;
            break;
        }
    }

    /*SI ban = 1, ENTONCES CADENA NO ES VALIDA*/
    /*SI ban = 0, ENTONCES CADENA SI ES VALIDA*/
    return ban;
}