#include<stdio.h>

int main(){
    //varpiáveis 
    int peca, sentidoDaPeca, movimentacaodapeca, i, movimentoDoCavalo = 1 ;
    //Menu de opções das peças
    printf("\n");
    printf("---SEJA BEM VINDO(A) AO JOGO DE XADREZ---\n");
    printf("\n");
    printf("Escolha uma peça para mover:\n");
    printf("1. Torre.\n");
    printf("2. Bispo.\n");
    printf("3. Raínha.\n");
    printf("4. Cavalo.\n");
    printf("Escolha sua peça: ");
    scanf("%d", &peca);
    printf("\n");
    //switch da opção das peças
    switch (peca)
    {
    //Sentido da peça.
    //-----------------Início do Switch do cavaco.-----------------
        case 4:
        printf("---Sentido da peça---\n");
        printf("1. Cima/esquerda.\n");
        printf("2. Cima/direita.\n");
        printf("Escolha o sentido em que a peça vai andar: ");
        scanf("%d", &sentidoDaPeca);
        printf("\n");
        //INÍCIO DO CASE DO SENTIDO QUE O VAVALO VAI ANDAR
        switch (sentidoDaPeca)
        {
        case 1:
                while (movimentoDoCavalo--)
                    {
                        for (i = 0; i < 2; i++)
                        {
                            printf("Cima\n");
                        }
                        printf("Esquerda\n");

                    }
            break;
        
        case 2:
                while (movimentoDoCavalo--)
                    {
                        for (i = 0; i < 2; i++)//i inicia 0 e enquanoto ele for menor que 2 e vai acrecentar mais 1.
                        {
                            printf("Cima\n");//vai imprimir "cima" toda vez que a verificação for verdadeira.
                        }
                        printf("Direita\n");//imprime quando a verificação do for for falsa.
                        
                    }
            break;
        
        default: printf("Erro! Escolha um número de 1 a 2.\n");// caso o usuário escolha um número inexistente. 
            break;
        }
        break;
        
        
        //FIM DO CASE DO SENTIDO QUE O VAVALO VAI ANDAR
    //-----------------Fim do Switch do cavalo.-----------------
    
    //Sentido da peça.
    //-----------------Início do case da Rainha.-----------------
    case 3:
        printf("---Sentido da peça---\n");
        printf("1. Cima/esquerda.\n");
        printf("2. Baixo/esquerda.\n");
        printf("3. Cima/direita.\n");
        printf("4. Baixo/direita.\n");
        printf("5. Cima.\n");
        printf("6. Baixo.\n");
        printf("7. Esquerda.\n");
        printf("8. Direita.\n");
        printf("Escolha o sentido em que a peça vai andar: ");
        scanf("%d", &sentidoDaPeca);
        printf("\n");
            switch (sentidoDaPeca)
            {
            //Quantidade de casas que a Rainha vai andar.
            case 1:
                printf("---Movimentação da Rainha---\n");
                printf("1. Cima/esquerda cinco casas.\n");
                printf("2. Cima/esquerda quatro casas.\n");
                printf("3. Cima/esquerda três casas.\n");
                printf("4. Cima/esquerda duas casas.\n");
                printf("5. Cima/esquerda uma casa.\n");
                printf("Quantas casas você quer descer? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                
                {   
                    //Movimentação da rainha para cima.
                    case 1:
                        do {printf("Cima/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 2:
                        do {printf("Cima/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;             
                    case 3:
                        do {printf("Cima/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 4:
                        do {printf("Cima/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 5:
                        do {printf("Cima/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;                                                            
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break; 
                              
            //Quantidade de casas que a rainha vai andar.
            case 2:
                printf("---Movimentação da Rainha---\n");
                printf("1. Baixo/esquerda cinco casas.\n");
                printf("2. Baixo/esquerda quatro casas.\n");
                printf("3. Baixo/esquerda três casas.\n");
                printf("4. Baixo/esquerda duas casas.\n");
                printf("5. Baixo/esquerda uma casa.\n");
                printf("Quantas casas você quer ir para baixo/esquerda? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   
                    //Movimento da rainha.
                    case 1:
                        do {printf("Baixo/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 2:
                        do {printf("Baixo/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;                
                    case 3:
                        do {printf("Baixo/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 4:
                        do {printf("Baixo/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 5:
                        do {printf("Baixo/esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;                                                               
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break;
                break;             
            //Quantidade de casas que a Rainha vai andar.
            case 3:
                printf("---Movimentação da Rainha---\n");               
                printf("1. Cima/direita cinco casas.\n");
                printf("2. Cima/direita casas.\n");
                printf("3. Cima/direita casas.\n");
                printf("4. Cima/direita casas.\n");
                printf("5. Cima/direita uma casa.\n");
                printf("Quantas casas você quer ir para cima/direita? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da rainha para esquerda.
                    case 1:
                        do {printf("Cima/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 2:
                        do {printf("Cima/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;             
                    case 3:
                        do {printf("Cima/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 4:
                        do {printf("Cima/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 5:
                        do {printf("Cima/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;                                                                 
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break;
            //Quantidade de casas que a rainha vai andar.
            case 4:
                printf("---Movimentação da Rainha---\n");
                printf("1. Baixo/direita cinco casas.\n");
                printf("2. Baixo/direita quatro casas.\n");
                printf("3. Baixo/direita três casas.\n");
                printf("4. Baixo/direita duas casas.\n");
                printf("5. Baixo/direita uma casa.\n");
                printf("Quantas casas você quer ir para baixo/direita? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da torre para Direita.
                    case 1:
                        do {printf("Baixo/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 2:
                        do {printf("Baixo/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;               
                    case 3:
                        do {printf("Baixo/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 4:
                        do {printf("Baixo/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 5:
                        do {printf("Baixo/direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    //Se a ecolha da movimentação for diferente de 1 a 5.                                                                 
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break;
                //Movimenta rainha pra cima.
            case 5:
                printf("---Movimentação da Rainha---\n");
                printf("1. Cima cinco casas.\n");
                printf("2. Cima casas.\n");
                printf("3. Cima três casas.\n");
                printf("4. Cima duas casas.\n");
                printf("5. Cima uma casa.\n");
                printf("Quantas casas você quer ir para cima? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da torre para Direita.
                    case 1:
                        do {printf("Cima.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 2:
                        do {printf("Cima.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;               
                    case 3:
                        do {printf("Cima.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 4:
                        do {printf("Cima.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 5:
                        do {printf("Cima.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    //Se a ecolha da movimentação for diferente de 1 a 5.                                                                 
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }                
            case 6:
                printf("---Movimentação da Rainha---\n");
                printf("1. Baixo cinco casas.\n");
                printf("2. Baixo casas.\n");
                printf("3. Baixo três casas.\n");
                printf("4. Baixo duas casas.\n");
                printf("5. Baixo uma casa.\n");
                printf("Quantas casas você quer ir para Baixo? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da torre para Direita.
                    case 1:
                        do {printf("Baixo.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 2:
                        do {printf("Baixo.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;               
                    case 3:
                        do {printf("Baixo.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 4:
                        do {printf("Baixo.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 5:
                        do {printf("Baixo.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    //Se a ecolha da movimentação for diferente de 1 a 5.                                                                 
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }    //colocar case 6, 7 e 8 da rainha.
            case 7:
                printf("---Movimentação da Rainha---\n");
                printf("1. Esquerda cinco casas.\n");
                printf("2. Esquerda casas.\n");
                printf("3. Esquerda três casas.\n");
                printf("4. Esquerda duas casas.\n");
                printf("5. Esquerda uma casa.\n");
                printf("Quantas casas você quer ir para Esquerda? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da torre para Direita.
                    case 1:
                        do {printf("Esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 2:
                        do {printf("Esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;               
                    case 3:
                        do {printf("Esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 4:
                        do {printf("Esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 5:
                        do {printf("Esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    //Se a ecolha da movimentação for diferente de 1 a 5.                                                                 
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }    //colocar case 6, 7 e 8 da rainha.
            case 8:
                printf("---Movimentação da Rainha---\n");
                printf("1. Direita cinco casas.\n");
                printf("2. Direita casas.\n");
                printf("3. Direita três casas.\n");
                printf("4. Direita duas casas.\n");
                printf("5. Direita uma casa.\n");
                printf("Quantas casas você quer ir para Direita? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da torre para Direita.
                    case 1:
                        do {printf("Direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 2:
                        do {printf("Direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;               
                    case 3:
                        do {printf("Direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 4:
                        do {printf("Direita.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    case 5:
                        do {printf("Esquerda.\n"); movimentacaodapeca++;}
                        while(movimentacaodapeca <= 5);               
                        break;
                    //Se a ecolha da movimentação for diferente de 1 a 5.                                                                 
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }      
//Se sentido da torre for diferente de 1 a 8.
                break;
                default: printf("Erro! Escolha um número de 1 a 8.\n");
                break;                
     }        
     break;
    case 2:
        printf("---Sentido da peça---");
        printf("1. Cima/esquerda.\n");
        printf("2. Baixo/esquerda.\n");
        printf("3. Cima/direita.\n");
        printf("4. Baixo/direita.\n");
        printf("Escolha o sentido em que a peça vai andar: ");
        scanf("%d", &sentidoDaPeca);
        printf("\n");
            switch (sentidoDaPeca)
            {
            //Quantidade de casas que do bispo vai andar.
            case 1:
                printf("---Movimentação do Bispo---\n");
                printf("1. Cima/esquerda cinco casas.\n");
                printf("2. Cima/esquerda quatro casas.\n");
                printf("3. Cima/esquerda três casas.\n");
                printf("4. Cima/esquerda duas casas.\n");
                printf("5. Cima/esquerda uma casa.\n");
                printf("Quantas casas você quer descer? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   
                    //Movimentação da bispo para cima.
                    case 1:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/esquerda.\n");
                            movimentacaodapeca++;                  
                        }
                                            
                        break;
                    case 2:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/esquerda.\n");
                            movimentacaodapeca++;                  
                        }                  
                        break;                
                    case 3:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/esquerda.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;
                    case 4:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/esquerda.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;
                    case 5:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/esquerda.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                    break;                                                                  
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break; 
                              
            //Quantidade de casas que o bispo vai andar.
            case 2:
                printf("---Movimentação da Torre---\n");
                printf("1. Baixo/esquerda cinco casas.\n");
                printf("2. Baixo/esquerda quatro casas.\n");
                printf("3. Baixo/esquerda três casas.\n");
                printf("4. Baixo/esquerda duas casas.\n");
                printf("5. Baixo/esquerda uma casa.\n");
                printf("Quantas casas você quer ir para baixo/esquerda? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   
                    //Movimento do bispo.
                    case 1:
                        while (movimentacaodapeca <= 5){
                            printf("Baixo/esquerda.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;
                    case 2:
                        while (movimentacaodapeca <= 5){
                            printf("Baixo/esquerda.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;                
                    case 3:
                        while (movimentacaodapeca <= 5){
                            printf("Baixo/esquerda.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;
                    case 4:
                        while (movimentacaodapeca <= 5){
                            printf("Baixo/esquerda.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;
                    case 5:
                        while (movimentacaodapeca <= 5){
                            printf("Baixo/esquerda.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                    break;                                                                  
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break;
                break;             
            //Quantidade de casas que a torre vai andar.
            case 3:
                printf("---Movimentação da Torre---\n");
                printf("1. Cima/direita cinco casas.\n");
                printf("2. Cima/direita casas.\n");
                printf("3. Cima/direita casas.\n");
                printf("4. Cima/direita casas.\n");
                printf("5. Cima/direita uma casa.\n");
                printf("Quantas casas você quer ir para cima/direita? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da torre para esquerda.
                    case 1:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/direita.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;
                    case 2:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/direita.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;                
                    case 3:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/direita.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;
                    case 4:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/direita.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;
                    case 5:
                        while (movimentacaodapeca <= 5){
                            printf("Cima/direita.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                    break;                                                                  
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break;
            //Quantidade de casas que a torre vai andar.
            case 4:
                printf("---Movimentação da Torre---\n");
                printf("1. Baixo/direita cinco casas.\n");
                printf("2. Baixo/direita quatro casas.\n");
                printf("3. Baixo/direita três casas.\n");
                printf("4. Baixo/direita duas casas.\n");
                printf("5. Baixo/direita uma casa.\n");
                printf("Quantas casas você quer ir para baixo/direita? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da torre para Direita.
                    case 1:
                        while (movimentacaodapeca <= 5){
                            printf("Baixo/direita.\n");
                            movimentacaodapeca++;                  
                        } 
                                            
                        break;
                    case 2:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Baixo/direita.\n");                  
                        }
                                            
                        break;                
                    case 3:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Baixo/direita.\n");                  
                        }
                                            
                        break;
                    case 4:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Baixo/direita.\n");                  
                        }
                                            
                        break;
                    case 5:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Baixo/direita.\n");                  
                        }
                                            
                    break;
                    //Se a ecolha da movimentação for diferente de 1 a 5.                                                                 
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
//Se sentido da torre for dirente de 1 a 4.
                break;
                default: printf("Erro! Escolha um número de 1 a 4.\n");
                break;                
     }        
     break;
//------------------Fim do case 2 do bispo-----------.

    //Escolha do sentido em que a peça vai andar(cima, baixo, direita ou esquerda).  
    //-------------Inicio do Case da torre------------.  
    case 1:
        printf("---Sentido da peça---");
        printf("1. Cima.\n");
        printf("2. Baixo.\n");
        printf("3. Esquerda.\n");
        printf("4. Direita.\n");
        printf("Escolha o sentido em que a peça vai andar: ");
        scanf("%d", &sentidoDaPeca);
        printf("\n");
            switch (sentidoDaPeca)
            {
            //Quantidade de casas que a torre vai andar.
            case 1:
                printf("---Movimentação da Torre---\n");                
                printf("1. Subir cinco casas.\n");
                printf("2. Subir quatro casas.\n");
                printf("3. Subir três casas.\n");
                printf("4. Subir duas casas.\n");
                printf("5. Subir uma casa.\n");
                printf("Quantas casas você quer descer? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   
                    //Movimentação da torre para cima.
                    case 1:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Cima.\n");                  
                        }
                                            
                        break;
                    case 2:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Cima.\n");                  
                        }
                                            
                        break;                
                    case 3:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Cima.\n");                  
                        }
                                            
                        break;
                    case 4:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Cima.\n");                  
                        }
                                            
                        break;
                    case 5:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Cima.\n");                  
                        }
                                            
                    break;                                                                  
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break; 
//-------------------Fim do case 2 do sentdo da torre.------------------                               
            //Quantidade de casas que a torre vai andar.
            case 2:
                printf("---Movimentação da Torre---\n");
                printf("1. descer cinco casas.\n");
                printf("2. descer quatro casas.\n");
                printf("3. descer três casas.\n");
                printf("4. descer duas casas.\n");
                printf("5. descer uma casa.\n");
                printf("Quantas casas você quer descer? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   
                    //Movimentação da torre para cima.
                    case 1:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Baixo.\n");                  
                        }
                                            
                        break;
                    case 2:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Baixo.\n");                  
                        }
                                            
                        break;                
                    case 3:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Baixo.\n");                  
                        }
                                            
                        break;
                    case 4:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Baixo.\n");                  
                        }
                                            
                        break;
                    case 5:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Baixo.\n");                  
                        }
                                            
                    break;                                                                  
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break;                
//-------------------Fim do case 2 do sentdo da torre.------------------

            //Quantidade de casas que a torre vai andar.
            case 3:
                printf("---Movimentação da Torre---\n");
                printf("1. Esquerda cinco casas.\n");
                printf("2. Esquerda quatro casas.\n");
                printf("3. Esquerda três casas.\n");
                printf("4. Esquerda duas casas.\n");
                printf("5. Esquerda uma casa.\n");
                printf("Quantas casas você quer ir para esquerda? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da torre para esquerda.
                    case 1:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Esquerda.\n");                  
                        }
                                            
                        break;
                    case 2:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Esquerda.\n");                  
                        }
                                            
                        break;                
                    case 3:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Esquerda.\n");                  
                        }
                                            
                        break;
                    case 4:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Esquerda.\n");                  
                        }
                                            
                        break;
                    case 5:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Esquerda.\n");                  
                        }
                                            
                    break;                                                                  
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
                break;
//----------Fim do casa 3 do sentido da torre.----------

//Inicio do case 4 do sentido da torre.
            //Quantidade de casas que a torre vai andar.
            case 4:
                printf("---Movimentação da Torre---\n");
                printf("1. Direita cinco casas.\n");
                printf("2. Direita quatro casas.\n");
                printf("3. Direita três casas.\n");
                printf("4. Direita duas casas.\n");
                printf("5. Direita uma casa.\n");
                printf("Quantas casas você quer ir para Direita? ");
                scanf("%d", &movimentacaodapeca);
                printf("\n");
                switch (movimentacaodapeca)
                {   //Movimentação da torre para Direita.
                    case 1:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Direita.\n");                  
                        }
                                            
                        break;
                    case 2:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Direita.\n");                  
                        }
                                            
                        break;                
                    case 3:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Direita.\n");                  
                        }
                                            
                        break;
                    case 4:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Direita.\n");                  
                        }
                                            
                        break;
                    case 5:
                        for (movimentacaodapeca; movimentacaodapeca <= 5; movimentacaodapeca++){
                            printf("Direita.\n");                  
                        }
                                            
                    break;
                    //Se a ecolha da movimentação for diferente de 1 a 5.                                                                 
                    default: printf("Erro! Escolha um número de 1 a 5.\n");
                    break;
                }
//----------Fim do case 4 do sentido da torre.----------
//Se sentido da torre for dirente de 1 a 4.
                break;
                default: printf("Erro! Escolha um número de 1 a 4.\n");
                break;                
     }
//----------Fim do case 1 da torre.----------  
//Se a escolha da peça for diferente de 1 a 3.
            break;
            default: printf("Erro! Escolha um número de 1 a 4.\n");
            break;      
    }


return 0;
}

