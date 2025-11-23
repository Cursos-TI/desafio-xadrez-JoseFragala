#include <stdio.h>

// atualizar o código para fazer as movimentações das peças com recursividade
// declarando funções antes do main -- "void significa que não dará retorno."
void moverTorreRecursiva (int casasRestantes);
void moverRainhaRecursiva (int casasRestantes);
void moverBispoRecursivo (int casasRestantes);
void moverBispoComLoopsAninhados(int casasTotais);
void moverCavaloComLoops (void);

int main (){

// declarar a quantidade de casas de cada peça.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;


// torre
    printf("====Movimento da TORRE (5 casas para a direita) ===\n");
    moverTorreRecursiva(casasTorre);
    printf ("\n");

// Rainha
    printf ("=== Movimento da RAINHA (8 casas para a esquerda) ====\n");
    moverRainhaRecursiva(casasRainha);
    printf ("\n");

//Bispo (+Loops aninhados)
    printf ("==== Movimento do BISPO (5 casas na diagonal Cima + Direita) ====\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

// Cavalo (loops aninhados + continue/break) - não está usando recursividade
    printf ("==== Movimento do CAVALO (2 para Cima e 1 para Direita) ====\n");
    moverCavaloComLoops();
    printf ("\n");

    return 0;

}   

void moverTorreRecursiva (int casasRestantes){
    if (casasRestantes == 0){
        return;
    }
    printf("Direita\n");
    //chamada recursiva diminuindo 1 casa
    moverTorreRecursiva(casasRestantes - 1);

}

void moverRainhaRecursiva(int casasRestantes){
    if (casasRestantes == 0){
        return;
    }
printf ("Esquerda\n");
moverRainhaRecursiva(casasRestantes - 1);
}

void moverBispoRecursivo (int casasRestantes){
    if (casasRestantes == 0){
        return;
    }

    for (int movVertical = 0; movVertical < 1; movVertical++){
        printf ("Cima ");

        //Loop mais interno "movimento horizontal (direiita)"
        for (int movHorizontal = 0; movHorizontal < 1; movHorizontal++){
            printf ("Direita ");
        }
    }
    printf ("\n");

    moverBispoRecursivo(casasRestantes - 1);

}
void moverBispoComLoopsAninhaodos(int casasTotais){ // movimento do bispo sem o IF

    for (int passoVertical = 1; passoVertical <= casasTotais; passoVertical++){
        // Representa o movimento vertical
    printf ("Cima ");

    //loop interno
        for (int passoHorizontal = 1; passoHorizontal <= 1; passoHorizontal++){
            printf("Direita");
        }
        printf ("\n");
    }
}

// Cavalo com uso de continue e break para controlar fluxo.

void moverCavaloComLoops (void){
    int movimentosFeitos = 0;

    //loop externo controla quantos passos verticais (cima) o cavalo dá.
    for (int passoVertical = 1; passoVertical <=2; passoVertical++){
        printf ("Cima\n");

        //Loop interno controla pra direita
        for (int passoHorizontal = 1; passoHorizontal <=1; passoHorizontal++){

            //enquanto não tiver completado os 2 passos para cima não vai pra direita

        if (passoVertical < 2){
            //Pula o restante da interação atual do Loop interno
            continue;
        
        }

        printf("Direita\n");
        movimentosFeitos++;

        break; // para sair do loop interno

            
        }
        // para sair do loop externo
        if (movimentosFeitos > 0){
            break;
        }
    }
}