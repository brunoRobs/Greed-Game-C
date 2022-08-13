#include <stdio.h>
#include <stdlib.h>
#include "Jogo.h"
#include "menu.h"
#include <locale.h>
#include <windows.h>

void exibirMenu()
{
    setlocale (LC_ALL, "Portuguese_Brazil");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t      ==============================================\n");

    printf("\t\t\t\t\t\t                               GREED - ENDGAME\n\n");
    printf("\t\t\t\t\t\t\t         Escolha entre:\n");
    printf("\t\t \t\t\t\t\t         1 - JOGAR\n");
    printf("\t\t \t\t\t\t\t         2 - SAIR\n");
    printf("\t\t \t\t\t\t\t         3 - CONFIGURAR O JOGO\n");
    printf("\t\t \t\t\t\t\t         4 - PLACAR\n");
    printf("\t\t \t\t\t\t\t         5 - VINGADORES(CRÉDITOS)\n");

    printf("\t\t\t\t\t\t\t      ==============================================\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
}

int escolherOpcao()
{
    char x;
    do
    {
    x = getch();
    return x;
    }
    while(x != '1' && x != '2' && x != '3' && x != '4' && x != '5');
}
