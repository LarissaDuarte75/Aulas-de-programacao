#include <stdio.h>
#define MAX 3

void Menu(int mensagem);//Opções de jogar ou sair.
int Controle(int posicoes[][MAX]);//Controla a vez de cada jogador, a verificação de vitória e empate.
void Jogo(int posicoes[][MAX], int vez, int ganhou);
void ZeraTabuleiro(int posicoes[][MAX]);
void Clear(void);
int VerificaPosicaoExistente(int linha, int coluna);//Verifica se a linha e coluna que o usuário escolheu, foram números entre 1 e 3.
int VerificaPosicao(int posicoes[][MAX], int linha, int coluna);//Verifica se já existe 'X' ou 'O' na posição.
int VerificaVitoria(int posicoes[][MAX]);
void ErroMensagens(int mensagem);
void printaLinha(char *chars, int linha);//Aloca na variável chars(função Jogo()), o respectivo caractere da variável linha(função Jogo()).

int main()
{
    int posicoes[MAX][MAX], jogardenovo;

    Menu(0);

    do{
        jogardenovo = Controle(posicoes);
    }while(jogardenovo);

    return 0;
}

void Menu(int mensagem)
{
    char strings[4][46] = {"Jogo da velha\n",
                           "\nO jogador 1 ganhou. Deseja jogar novamente?\n",
                           "\nO jogador 2 ganhou. Deseja jogar novamente?\n",
                           "\nEMPATE! Deseja jogar novamente?\n"};

    int opcao = -1;

    do{
        printf("\t\t%s\n"
               "1. Jogar\n"
               "0. Sair\n"
               "Opcao: ", strings[mensagem]);

        scanf("%d", &opcao);

        while(getchar() != '\n')//Limpa stream de entrada.
            opcao = -1;//Se o usuário mandar, por exemplo, 1d como escolha de opção, não será permitido.

        if(opcao != 1 && opcao != 0)
            printf("Opcao invalida. Tente novamente!\n"
                   "-----------------------------------------------------------------------\n");
    }while(opcao != 1 && opcao != 0);

    if(!opcao)


int Controle(int posicoes[][MAX])

    int vez, jogada, vv = 0;

    ZeraTabuleiro(posicoes);

    for(vez = 1, jogada = 1; ; vez++, jogada++)
    {
        Jogo(posicoes, vez, 0);//Chama a função jogo() e só retorna pra cá, quando o jogador da vez acabar a jogada.

        if(jogada >= 5 && jogada <= 9)//Entre as jogadas 5 e 9, verifica vitória.
        {
            if(vv = VerificaVitoria(posicoes))
            {
                Jogo(posicoes, vez, 1);
                Menu(vv);
                return 1;
            }
        }
        if(jogada == 9)//Caso na jogada 9 não tenha vitória, chama função Menu() e avisa empate.
        {
            Jogo(posicoes, vez, 1);
            Menu(3);
            return 1;
        }

        if(vez == 2)//Controla o laço for e a vez de cada jogador.
            vez = 0;
    }
}

void Jogo(int posicoes[][MAX], int vez, int ganhou)
{
    int linha = -1, coluna = -1;

    char strings1[2][8] = {"\t", "Linha:"},
         strings2[2][7] = {"Linha", "Coluna"},
         simbolos[2] = {'X', 'O'},
         chars;

    for(int i = 1; i <= 2; i++)
    {
        Clear();

        if(i == 1)
            chars = ' ';
        if(i == 2)
            printaLinha(&chars, linha);

        printf("\t\t\t\t\t     c1    c2    c3\n"
               "\t\t\t\t\t  *******************\n"
               "\t\t\t\t\tl1|  %c  |  %c  |  %c  |\n"
               "\t\t\t\t\t*********************\n"
               "\t\t\t\t\tl2|  %c  |  %c  |  %c  |\n"
               "\t\t\t\t\t*********************\n"
               "\t\tVez:Jogador %d\t\tl3|  %c  |  %c  |  %c  |\n"
               "\t\tsimbolo:'%c'\t\t  *******************\n"
               "\t\t%s%c\t\t%s:", posicoes[0][0], posicoes[0][1], posicoes[0][2]
                                , posicoes[1][0], posicoes[1][1], posicoes[1][2]
                           , vez, posicoes[2][0], posicoes[2][1], posicoes[2][2]
                           , simbolos[vez-1], strings1[i-1], chars, strings2[i-1]);

        if(ganhou == 1)//Se essa função(Jogo) for chamada passando 1 na variável ganhou,
            break;     //apenas mostra as ultimas posições do jogo e retorna para a função Controle().

        if(i == 1)
        {
            scanf("%d", &linha);

            while(getchar() != '\n')//Limpa stream de entrada.
                linha = -1;//Se o usuário mandar, por exemplo, 1d como escolha da linha, não será permitido.
        }

        if(i == 2)
        {
            scanf("%d", &coluna);

            while(getchar() != '\n')//Limpa stream de entrada.
                coluna = -1;//Se o usuário mandar, por exemplo, 2f como escolha da coluna, não será permitido.

            if(VerificaPosicaoExistente(linha, coluna))
            {
                if(VerificaPosicao(posicoes, linha, coluna))
                {
                    ErroMensagens(1);
                    system("pause");
                    linha = coluna = -1;
                    i = 0;
                }
                else
                    break;
            }
            else
            {
                ErroMensagens(0);
                system("pause");
                linha = coluna = -1;
                i = 0;
            }
        }
    }

    if(vez == 1)
        posicoes[linha-1][coluna-1] = 'X';
    if(vez == 2)
        posicoes[linha-1][coluna-1] = 'O';
}

void ZeraTabuleiro(int posicoes[][MAX])
{
    for(int linha = 0; linha < MAX; linha++)
        for(int coluna = 0; coluna < MAX; coluna++)
            posicoes[linha][coluna] = ' ';
}

void Clear(void)
{
    for(int i = 0; i < 100; i++)
        putchar('\n');
}

int VerificaPosicaoExistente(int linha, int coluna)
{
    if(linha >= 1 && linha <= MAX)
    {
        if(coluna >= 1 && coluna <= MAX)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

int VerificaPosicao(int posicoes[][MAX], int linha, int coluna)
{
    if(posicoes[linha - 1][coluna - 1] == 'X' || posicoes[linha - 1][coluna - 1] == 'O')
        return 1;
    else
        return 0;
}

int VerificaVitoria(int posicoes[][MAX])
{
    int linha, coluna, j1 = 0, j2 = 0;

    //Verifica vitória na horizontal.
    for(linha = 0; linha < MAX; linha++)
    {
        for(coluna = 0; coluna < MAX; coluna++)
        {
            if(posicoes[linha][coluna] == 'X')
                j1++;
            if(posicoes[linha][coluna] == 'O')
                j2++;
        }

        if(j1 == 3)
            return 1;
        else
            j1 = 0;

        if(j2 == 3)
            return 2;
        else
            j2 = 0;
    }
    //Verifica vitória na vertical.
    for(coluna = 0; coluna < MAX; coluna++)
    {
        for(linha = 0; linha < MAX; linha++)
        {
            if(posicoes[linha][coluna] == 'X')
                j1++;
            if(posicoes[linha][coluna] == 'O')
                j2++;
        }

        if(j1 == 3)
            return 1;
        else
            j1 = 0;

        if(j2 == 3)
            return 2;
        else
            j2 = 0;
    }
    //Verifica 'X' na diagonal da esquerda para direita '\'
    if(posicoes[0][0] == 'X' && posicoes[1][1] == 'X' && posicoes[2][2] == 'X')
        return 1;
    //Verifica 'O' na diagonal da esquerda para direita '\'
    if(posicoes[0][0] == 'O' && posicoes[1][1] == 'O' && posicoes[2][2] == 'O')
        return 2;
    //Verifica 'X' na diagonal da direita para esquerda '/'
    if(posicoes[0][2] == 'X' && posicoes[1][1] == 'X' && posicoes[2][0] == 'X')
        return 1;
    //Verifica 'O' na diagonal da direita para esquerda '/'
    if(posicoes[0][2] == 'O' && posicoes[1][1] == 'O' && posicoes[2][0] == 'O')
        return 2;

    return 0;
}

void ErroMensagens(int mensagem)
{
    char erromensagens[2][40] = {"Posicao inexistente. Tente novamente!!\n",
                                 "Posicao ocupada. Tente outra posicao!!\n"};
    Clear();
    printf("%s", erromensagens[mensagem]);
}

void printaLinha(char *chars, int linha)
{
    switch(linha)
    {
        case 1:
        *chars = '1';
        break;
        case 2:
        *chars = '2';
        break;
        case 3:
        *chars = '3';
        break;
    }
}
