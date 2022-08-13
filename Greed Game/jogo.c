#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include<conio.h>
#include <stdbool.h>
#define Altura 36
#define Largura 84
#include <locale.h>

void limpaTela();
void main(t, u);
int movimento();
int player[2] = {(Altura/2),(Largura/2)};
int TamanhoMapa[Altura][Largura];
int soma;
int pode_mover;
int pontuacaoJogador = 0;
char NomeDoJogador[200];
char ch, t, u;
int tamanho = 0;
char nomes[10][50];
int pontuacoes[10];
FILE *ranking;

void gameover()
{
    telaFimJogo();
}

void mapaF()
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < Altura; i++)
    {
        for(j = 0; j < Largura; j++)
        {
            if(i==player[0] && j==player[1])
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
                printf(" @");

            }
            else if (i == 0 || i == Altura-1|| j == 0 ||j == Largura-1)
            {
                printf(" ");
            }
            else
            {
                TamanhoMapa[i][j] = (rand()%3)+1;
                switch(TamanhoMapa[i][j])
                {
                case 1:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
                    break;
                case 2:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
                    break;
                case 3:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
                    break;
                case 4:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
                    break;
                case 5:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
                    break;
                case 6:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
                    break;
                case 7:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
                    break;
                case 8:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
                    break;
                case 9:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                    break;
                }
                printf(" %d", TamanhoMapa[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\t\tUse as teclas WASD para mover o @\n\t\tAperte K para voltar ao menu\n\n\t");
}

void mapaM()
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < Altura; i++)
    {
        for(j = 0; j < Largura; j++)
        {
            if(i==player[0] && j==player[1])
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
                printf(" @");

            }
            else if (i == 0 || i == Altura-1|| j == 0 ||j == Largura-1)
            {
                printf(" ");
            }
            else
            {
                TamanhoMapa[i][j] = (rand()%6)+1;
                switch(TamanhoMapa[i][j])
                {
                case 1:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
                    break;
                case 2:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
                    break;
                case 3:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
                    break;
                case 4:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
                    break;
                case 5:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
                    break;
                case 6:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
                    break;
                case 7:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
                    break;
                case 8:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
                    break;
                case 9:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                    break;
                }
                printf(" %d", TamanhoMapa[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\t\tUse as teclas WASD para mover o @\n\t\tAperte K para voltar ao menu\n\n\t");
}

void mapaD()
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < Altura; i++)
    {
        for(j = 0; j < Largura; j++)
        {
            if(i==player[0] && j==player[1])
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
                printf(" @");

            }
            else if (i == 0 || i == Altura-1|| j == 0 ||j == Largura-1)
            {
                printf(" ");
            }
            else
            {
                TamanhoMapa[i][j] = (rand()%9)+1;
                switch(TamanhoMapa[i][j])
                {
                case 1:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
                    break;
                case 2:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
                    break;
                case 3:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
                    break;
                case 4:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
                    break;
                case 5:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
                    break;
                case 6:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
                    break;
                case 7:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
                    break;
                case 8:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
                    break;
                case 9:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                    break;
                }
                printf(" %d", TamanhoMapa[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\t\tUse as teclas WASD para mover o @\n\t\tAperte K para voltar ao menu\n\n\t");
}

void mapaMD()
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < Altura; i++)
    {
        for(j = 0; j < Largura; j++)
        {
            if(i==player[0] && j==player[1])
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
                printf(" @");

            }
            else if (i == 0 || i == Altura-1|| j == 0 ||j == Largura-1)
            {
                printf(" ");
            }
            else
            {
                TamanhoMapa[i][j] = (rand()%5)+5;
                switch(TamanhoMapa[i][j])
                {
                case 1:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
                    break;
                case 2:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
                    break;
                case 3:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
                    break;
                case 4:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
                    break;
                case 5:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
                    break;
                case 6:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
                    break;
                case 7:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
                    break;
                case 8:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
                    break;
                case 9:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                    break;
                }
                printf(" %d", TamanhoMapa[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\t\tUse as teclas WASD para mover o @\n\t\tAperte K para voltar ao menu\n\n\t");
}

void mapaJogo(char t)
{
    switch(t)
    {
    case '1':
        mapaF();
        break;

    case '2':
        mapaM();
        break;

    case '3':
        mapaD();
        break;

    case '4':
        mapaMD();
        break;

    default:
        mapaM();
    }
}

int checarB()
{
    int distance = 0;
    int y;
    distance=TamanhoMapa[player[0]+1][player[1]];
    if(distance==0) return 0;
    for(y = 1; y <= distance; y++)
    {
        if(TamanhoMapa[player[0]+y][player[1]]==0)
            return 0;
    }
    return 1;
}

int checarE()
{
    int distance = 0;
    int x;
    distance=TamanhoMapa[player[0]][player[1]-1];
    if(distance==0) return 0;
    for(x = 1; x <= distance; x++)
    {
        if(TamanhoMapa[player[0]][player[1]-x]==0)
            return 0;
    }
    return 1;
}

int checarD()
{
    int distance = 0;
    int x;
    distance=TamanhoMapa[player[0]][player[1]+1];
    if(distance==0)
        return 0;
    for(x = 1; x <= distance; x++)
    {
        if(TamanhoMapa[player[0]][player[1]+x]==0)
            return 0;
    }
    return 1;
}

int checarC()
{
    int distance = 0;
    int y;
    distance=TamanhoMapa[player[0]-1][player[1]];
    if(distance==0) return 0;
    for(y = 1; y <= distance; y++)
    {
        if(TamanhoMapa[player[0]-y][player[1]]==0)
            return 0;
    }
    return 1;
}

int checar_movimento()
{
    pode_mover=0;
    pode_mover+=checarC()+checarB()+checarE()+checarD();
    if(pode_mover==0)
        {
            system("pause");
            gameover();
        }
}

void telaFimJogo()
{
    int k;
    setlocale (LC_ALL, "Portuguese_Brazil");
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t |END GAME|\n\n\t\t\t\t\t\t\t\t   |THANOS GANHOU| - Pontuação Total: %d", pontuacaoJogador);
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t      Digite K para retornar ao Menu!");
    rank();
    do
    {
        k = getch();
        if(k == 'k')
            main(t, u);
        if(k == 'K')
            main(t, u);
    }
    while(k != 'k' && k !='K');
}

int movimento()
{
    while(1)
    {
        ch = getch();
        switch(ch)
        {
        case'W':
            moveCima();
            break;

        case'S':
            moveBaixo();
            break;

        case'A':
            moveEsquerda();
            break;

        case'D':
            moveDireita();
            break;

        case'K':
            {
            pontuacaoJogador=0;
            main(t, u);
            break;
            }

        case 'w':
            moveCima();
            break;

        case 's':
            moveBaixo();
            break;

        case 'a':
            moveEsquerda();
            break;

        case 'd':
            moveDireita();
            break;

        case 'k':
        {
            pontuacaoJogador=0;
            main(t, u);
            break;
        }
        }
    }
}

int updmapa()
{
    int i, j;
    setlocale (LC_ALL, "Portuguese_Brazil");
    limpaTela();
    for(i = 0; i < Altura; i++)
    {
        for(j = 0; j < Largura; j++)
        {
            if(i==player[0]&&j==player[1])
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
                printf(" @");
            }
            else if(TamanhoMapa[i][j]==0)printf("  ");
            else
            {
                switch(TamanhoMapa[i][j])
                {
                case 1:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
                    break;
                case 2:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
                    break;
                case 3:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
                    break;
                case 4:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
                    break;
                case 5:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
                    break;
                case 6:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
                    break;
                case 7:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
                    break;
                case 8:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
                    break;
                case 9:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                    break;
                }
                printf(" %d",TamanhoMapa[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\t\tUse as teclas WASD para mover o @\n\t\tAperte K para voltar ao menu\n");
    printf("\n\t\tSua pontuação: %d\n\n\t\t", pontuacaoJogador);
    return pontuacaoJogador;
}

int moveEsquerda()
{
    int j;
    int distance = 0;
    distance = TamanhoMapa[player[0]][player[1]-1];
    if(distance==0)
    {
        printf("\n\n\t\tMovimento incorreto, tente outro");
        movimento();
    }
    else
    {
        for(j = 1; j <= distance; j++)
        {
            if(TamanhoMapa[player[0]][player[1]-j]==0)
            {
                printf("\n\n\t\tMovimento incorreto, tente outro");
                movimento();
            }
        }
    }

    for(j = 1; j <= distance; j++)
    {
        soma+=TamanhoMapa[player[0]][player[1]-j];
        TamanhoMapa[player[0]][player[1]-j]=0;
    }
    player[1]=player[1]-distance;
    pontuacaoJogador+=soma;
    soma = 0;
    updmapa();
    checar_movimento();
    return pontuacaoJogador;
}

int moveDireita()
{
    int j;
    int distance = 0;
    distance = TamanhoMapa[player[0]][player[1]+1];
    if(distance==0)
    {
        printf("\n\n\t\tMovimento incorreto, tente outro");
        movimento();
    }
    else
    {
        for(j = 1; j <=distance; j++)
        {
            if(TamanhoMapa[player[0]][player[1]+j]==0)
            {
                printf("\n\n\t\tMovimento incorreto, tente outro");
                movimento();
            }
        }
    }

    for(j = 1; j <= distance; j++)
    {
        soma+=TamanhoMapa[player[0]][player[1]+j];
        TamanhoMapa[player[0]][player[1]+j]=0;
    }
    player[1]=player[1]+distance;
    pontuacaoJogador+=soma;
    soma=0;
    updmapa();
    checar_movimento();
    return pontuacaoJogador;
}

int moveCima()
{
    int i;
    int distance = 0;
    distance = TamanhoMapa[player[0]-1][player[1]];
    if(distance==0)
    {
        printf("\n\n\t\tMovimento incorreto, tente outro");
        movimento();
    }
    else
    {
        for(i = 1; i <= distance; i++)
        {
            if(TamanhoMapa[player[0]-i][player[1]]==0)
            {
                printf("\n\n\t\tMovimento incorreto, tente outro");
                movimento();
            }
        }
    }

    for(i = 1; i <= distance; i++)
    {
        soma+=TamanhoMapa[player[0]-i][player[1]];
        TamanhoMapa[player[0]-i][player[1]]=0;
    }
    player[0]=player[0]-distance;
    pontuacaoJogador+=soma;
    soma=0;
    updmapa();
    checar_movimento();
    return pontuacaoJogador;
}

int moveBaixo()
{
    int i;
    int distance = 0;
    distance = TamanhoMapa[player[0]+1][player[1]];
    if(distance==0)
    {
        printf("\n\n\t\tMovimento incorreto, tente outro");
        movimento();
    }
    else
    {
        for(i = 1; i <= distance; i++)
        {
            if(TamanhoMapa[player[0]+i][player[1]]==0)
            {
                printf("\n\n\t\tMovimento incorreto, tente outro");
                movimento();
            }
        }
    }

    for(i = 1; i <= distance; i++)
    {
        soma+=TamanhoMapa[player[0]+i][player[1]];
        TamanhoMapa[player[0]+i][player[1]]=0;
    }
    player[0]=player[0]+distance;
    pontuacaoJogador+=soma;
    soma = 0;
    updmapa();
    checar_movimento();
    return pontuacaoJogador;
}

void configurarJogo(char t, char u)
{
    setlocale (LC_ALL, "Portuguese_Brazil");
    do
    {
        printf("\t\tQual dificuldade desejas enfrentar, jovem Vingador?\n\n\t\tFácil (1)\n\n\t\tMédio (2)\n\n\t\tDifícil (3)\n\n\t\tMUITO Difícil (4)\n\n");
        u = getch();
        t = u;
        limpaTela();
    }
    while(t != '1' && t != '2' && t != '3' && t != '4');
    main(t, u);
}

int jogo(char t)
{
    setlocale (LC_ALL, "Portuguese_Brazil");
    printf("\t\tDigite seu alter ego, Vingador:\n", NomeDoJogador);
    printf("\t\t");
    scanf("\t\t%s", NomeDoJogador);
    mapaJogo(t);
    do
    {
        movimento();
    }
    while(gameover == 0);
    gameover();
    return 0;
}

void rank()
{
    setlocale (LC_ALL, "Portuguese_Brazil");
    ranking = fopen("ranking.txt", "a");
    fprintf(ranking,"%s : %d\n\n", NomeDoJogador, pontuacaoJogador);
    fclose(ranking);
}

void bubbleSort(int* pontuacaoJogador, char nomes[10][50], int tamanho)
{
    int i;
    int trocou;
    do
    {
        trocou = 0;
    for (i=tamanho; i > 0; i--)
    {
        if (pontuacaoJogador[i] > pontuacaoJogador[i-1])
        {
            int pAux;
            char nAux[10];
            pAux = pontuacaoJogador[i];
            strcpy(nAux, nomes[i]);
            pontuacaoJogador[i] = pontuacaoJogador[i-1];
            strcpy(nomes[i], nomes[i-1]);
            pontuacaoJogador[i-1] = pAux;
            strcpy(nomes[i-1], nAux);
            trocou = 1;
        }
    }

    }while (trocou);
}

void placar()
{
    setlocale (LC_ALL, "Portuguese_Brazil");
    int k;
    ranking = fopen("ranking.txt","r");
    printf("\t\tVingadores Honorários:\n\n ");
    if(ranking == NULL)
    {
        printf("\t\tCom o estalar dos dedos, Thanos sumiu com os\n\t\tarquivos. Não foi possivel encontrar...\n\n\n");
        system("pause");
        main(t, u);
    }
    while(fscanf(ranking,"%s : %d", NomeDoJogador, &pontuacaoJogador) != EOF)
    {
        strcpy(nomes[tamanho], NomeDoJogador);
        pontuacoes[tamanho] = pontuacaoJogador;
        tamanho++;
    }
    bubbleSort(pontuacoes, nomes, tamanho);
    int i, j;
    for(i = 0, j = 1; i < 10, j <= 10; i++, j++)
    {
        setlocale (LC_ALL, "Portuguese_Brazil");
        printf("\t\t%dº: %s - %d pontos\n\n", j, nomes[i], pontuacoes[i]);
    }
    fclose(ranking);
    printf("\t\tAperte K para voltar ao Menu, Vingador.\n\n");
    tamanho = 0;
    pontuacaoJogador = 0;
    do
    {
        k = getch();
        if(k == 'k')
            main(t, u);
    }
    while(k != 'k');
}
