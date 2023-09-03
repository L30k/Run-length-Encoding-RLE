#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void RLE(char nome[]);

int main(){
    char nome[40] = "aaavkkkkkkkkmmyyyyy";
    
    printf("%s\n", nome);
    
    RLE(nome);
    
    return 0;
}

void RLE(char nome[]){
    char aux[40], base = nome[0], aux2[5];
    int pos = 0, cont = 0;
    
    for(int i = 0; nome[i] != '\0'; i++){
        if(nome[i] == base){
            cont++;
        }else{
            sprintf(aux2, "%d%c", cont, base);
            for(int j = 0; aux2[j] != '\0'; j++, pos++){
                aux[pos] = aux2[j];
            }
            cont = 1;
            
            base = nome[i];
        }
    }
    
    sprintf(aux2, "%d%c", cont, base);
    for(int j = 0; aux2[j] != '\0'; j++, pos++){
        aux[pos] = aux2[j];
    }
    
    printf("%s", aux);
}
