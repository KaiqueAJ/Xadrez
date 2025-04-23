#include <stdio.h>

    void movimentoTorre(int n) {
        if (n > 0)
        {
            printf("Para a direita\n");
            movimentoTorre(n - 1);
        }    

    };


    // n = 10
    void movimentoBispo(int n) {
        while (n > 0)
        {
            while (n > 5 && n <= 10)
            {
                printf("para a direita\n");
                n--;
            }
            
            printf("para cima\n");
            n--;
        }
        

    };



    void movimentoRainha(int n) {
        if (n > 0)
        {
            printf("Para a esquerda\n");
            movimentoRainha(n - 1);
        }

    };





int main() {
    int i, j;

    i = 8;
    printf("Movimento da rainha:\n");
    movimentoRainha(i);


    i = 10; 
    printf("Movimento do bispo:\n");
    movimentoBispo(i);
    

    i = 5;
    printf("Movimento da torre:\n");
    movimentoTorre(i);
    
    i = 0;
    printf("Movimento do cavalo:\n");

    j = 0;
    while (i < 2)
    {
        while (j < 2)
        {
            printf("cima\n");
            j++;
        }

        if (i >= 1)
        {
            break;
        }
        
        printf("direita\n");
        i++;

    }
    
    
 
    
    

}
