/*
>Permutação com repetição
https://www.geeksforgeeks.org/print-all-permutations-with-repetition-of-characters/


este código é de rathbhupendra

*/

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/* A seguinte função é usada por
a função de biblioteca qsort()
para ordenar um array de caracteres */
int compare (const void * a, const void * b);

/* A função principal que recursivamente
imprime todas as permutações repetidas de
a sequência dada. Ele usa data[] para armazenar todos
permutações uma a uma */
void allLexicographicRecur (char *str, char* data, int last, int index)
{

    int i, len = strlen(str);

    // Um ​​por um corrige todos os caracteres em
    // o índice dado e se repete para
    // os/ índices subsequentes
    for ( i = 0; i < len; i++ ){

        // Corrige o i-ésimo caractere no índice
        // e se este não for o último
        // indexa então chama recursivamente
        // para índices mais altos
        data[index] = str[i] ;

        // Se este é o último índice então
        // imprime a string armazenada em
        // dados[]
        if (index == last){
            cout << data << endl;
        }else {allLexicographicRecur (str, data, last, index+1);}
    }
}

    /* Esta função classifica a string de entrada,
    aloca memória para dados (necessário
    para allLexicographicRecur()) e
    chama allLexicographicRecur() para
    imprimin todas as permutações */
    void allLexicographic(char *str)
{
    int len = strlen (str) ;

    //Crie um array temporário que irá
    // ser usado por allLexicographicRecur()
    char *data = (char *) malloc (sizeof(char) * (len + 1)) ;
    data[len] = '\0';

    // Ordena a string de entrada para que
    // obtemos todas as strings de saída em
    // ordem ordenada lexicograficamente
    qsort(str, len, sizeof(char), compare);

    // Agora imprima todas as permutações
    allLexicographicRecur (str, data, len-1, 0);

    // Libera dados para evitar vazamento de memória
    free(data);
} 
    // Necessário para a função de biblioteca qsort()
    int compare (const void * a, const void * b)
{
    
    return ( *(char *)a - *(char *)b );
}

// Código do driver
int main()
{
    char str[] = "102";
    cout << "Todas as repetições de "<<
                                str <<" sao: "<<endl ;
    allLexicographic(str);
    return 0;
}