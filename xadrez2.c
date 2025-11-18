#include <stdio.h>
// adicionar o movimento do cavalo.

int main() {
// torre (5 casas oara a direita)
printf("====Movimento da TORRE====\n");

for (int i = 0; i < 5; i++) {
    printf ("Direita\n"); //imprime a direção do movimento
}

//Rainha (8 casas para a esquerda)
printf("====Movimento da Rainha===\n");

int i = 1;

 while (i <= 8) {
    printf ("Esquerda\n"); //imprime a direção do movimento
    i++;
}

//Bispo (5 casas para a diagonal)
printf("====Movimento da bispo===\n");

int j = 1;

 do{
printf ("Cima + Esquerda\n"); //imprime a direção do movimento
j++;
  } while (j <= 8);


//Cavalo (2 cima uma direita)
printf("====Movimento do cavalo===\n");


for (int movimento = 1; movimento <= 1; movimento++){
    int passos = 1;
    while (passos <= 3){
        if (passos <=2){
            printf ("Cima\n");
        }else{
            printf("Direita\n");
        }
        passos++;
    }
}
}