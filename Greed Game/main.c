#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "jogo.h"
#include <locale.h>
#include <windows.h>

void limpaTela()
{
    system("cls");
}
void main(char t, char u)
{
    setlocale (LC_ALL, "Portuguese_Brazil");
    char opcao;
    do
    {
        limpaTela();
        exibirMenu();
        opcao = escolherOpcao();
        putchar('\n');
    }
    while (opcao != '1' && opcao != '2' && opcao != '3' && opcao != '4' && opcao != '5');

    switch(opcao)
    {
    case '1':
        {
            limpaTela();
            jogo(t);
        }
        break;

    case '2':
        {
            system("cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   Bye bye, jovem Vingador!!! Volte para jogar novamente.\n\n");
        }
        break;

    case '3':
        configurarJogo(t, u);
        break;

    case '4':
        placar();
        break;

    case '5':
        {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        printf("\t\tEquipe:\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        printf("\t\tBruno Roberto Lima Ramos Rangel\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        printf("\t\tDiego Vinicius de Souza Goiana\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
        printf("\t\tFelipe Romero Pacheco Segundo\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
        printf("\t\tJoão Pedro Lopes Tavares\n\n");
        printf("\t\t");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
        system("pause");
        main(t, u);
        }
    }

    return;
}
