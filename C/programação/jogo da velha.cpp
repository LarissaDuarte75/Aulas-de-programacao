#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
int vet [4][4];
int vet2[4][4];
int i,j,a,b,g,h,r,k,w,f;
int vg,cg,qg,qjp,e,m,vjc;
int ja[11][7]={{126, 32, 32, 32, 33, 18, 12}, /* letra J*/
               { 28, 34, 65, 65, 65, 34, 28}, /* letra O*/
               { 60, 66,  1,  1,113, 98, 92}, /* letra G*/
               { 28, 34, 65, 65, 65, 34, 28}, /* letra O*/
               { 31, 33, 65, 65, 65, 33, 31}, /* letra D*/
               { 28, 34, 65, 65,127, 65, 65}, /* letra A*/
               { 65, 65, 65, 34, 34, 20,  8}, /* letra V*/
               { 63,  1,  1, 31,  1,  1, 63}, /* letra E*/
               {  1,  1,  1,  1,  1,  1,127}, /* letra L*/
               { 65, 65, 65,127, 65, 65, 65}, /* letra H*/
               { 28, 34, 65, 65,127, 65, 65}};/* letra A*/
char c[5];
void gotoxy(int x, int y){
  COORD c;
  c.X = x;
  c.Y = y;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void desenha(int vt){
   
    for(i=1;i<4;i++){
        if(i==1){printf(" A -%c  ",16);}
        else{
            if(i==2){printf(" B -%c  ",16);}
            else{
                printf(" C -%c  ",16);
            }
        }
        for(j=1;j<4;j++){
            if(vt==1){
                if(vet[i][j]==1){if(vjc==1){printf(" O ");}else{printf(" X ");}}
            else{
                if(vet[i][j]==2){if(vjc==2){printf(" O ");}else{printf(" X ");}}
                else{printf("   ");}
            }}
            else{
                if(vet2[i][j]==1){if(vjc==1){printf(" O ");}else{printf(" X ");}}
            else{
                if(vet2[i][j]==2){if(vjc==2){printf(" O ");}else{printf(" X ");}}
                else{printf("   ");}
            }}
            if(j==3){printf("\n");}
            if(j<3){printf("|");}
        }
        if(i<3){printf("       -----------\n");}
    }
    printf("                                          Vit%crias Do Computador ------> %d\n",224,cg);
    printf("                                          Vit%crias Do Jogador Humano --> %d\n",224,vg);
}
int verifica_se_ganhou(int g,int h){
    for(i=1;i<4;i++){for(j=1;j<4;j++){vet2[i][j]=vet[i][j];}}
    if(vet[1][1]==h&&vet[1][2]==h&&vet[1][3]==h){g=1;vet2[1][1]=3;vet2[1][2]=3;vet2[1][3]=3;}
    if(vet[2][1]==h&&vet[2][2]==h&&vet[2][3]==h){g=1;vet2[2][1]=3;vet2[2][2]=3;vet2[2][3]=3;}
    if(vet[3][1]==h&&vet[3][2]==h&&vet[3][3]==h){g=1;vet2[3][1]=3;vet2[3][2]=3;vet2[3][3]=3;}
    if(vet[1][1]==h&&vet[2][1]==h&&vet[3][1]==h){g=1;vet2[1][1]=3;vet2[2][1]=3;vet2[3][1]=3;}
    if(vet[1][2]==h&&vet[2][2]==h&&vet[3][2]==h){g=1;vet2[1][2]=3;vet2[2][2]=3;vet2[3][2]=3;}
    if(vet[1][3]==h&&vet[2][3]==h&&vet[3][3]==h){g=1;vet2[1][3]=3;vet2[2][2]=3;vet2[3][3]=3;}
    if(vet[1][1]==h&&vet[2][2]==h&&vet[3][3]==h){g=1;vet2[1][1]=3;vet2[2][2]=3;vet2[3][3]=3;}
    if(vet[1][3]==h&&vet[2][2]==h&&vet[3][1]==h){g=1;vet2[1][3]=3;vet2[2][2]=3;vet2[3][1]=3;}
    return g;
}
int inicio(int tp){
    c[0]='p';
    if(tp==1){printf("\nVoc%c Quer Jogar Mais Uma Partida ?   S/N ",136);gets(c);goto l6;}
    do{
        desenha(2);
        if(tp==2){printf("\nO Computador Ganhou Essa Partida");}
        if(tp==3){printf("\nVoc%c Ganhou Essa Partida ",136);}
        printf("\nVoc%c Quer Jogar Mais Uma Partida ?       S / N ",136);
        for(f=0;f<100000;f++){for(k=0;k<3000;k++);}
        desenha(1);
        if(tp==2){printf("\nO Computador Ganhou Essa Partida");}
        if(tp==3){printf("\nVoc%c Ganhou Essa Partida ",136);}
        printf("\nVoc%c Quer Jogar Mais Uma Partida ?       S / N ",136);
        for(f=0;f<100000;f++){for(k=0;k<1000;k++);}
        if(kbhit()){gets(c);}
    }while(c[0]!='s'&&c[0]!='n');
    l6:
    k=0;
    if(c[0]=='n'){k=27;}
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            vet[i][j]=0;
        }
    }
    system("cls");
    desenha(1);
    return k;
}
int raciocinio(int p){
    if(vet[2][2]==0){vet[2][2]=1;return 1;}
    if(vet[2][2]==p){if(vet[1][1]==p){if(vet[3][3]==0){vet[3][3]=1;return 1;}}}
    if(vet[2][2]==p){if(vet[1][2]==p){if(vet[3][2]==0){vet[3][2]=1;return 1;}}}
    if(vet[2][2]==p){if(vet[1][3]==p){if(vet[3][1]==0){vet[3][1]=1;return 1;}}}
    if(vet[2][2]==p){if(vet[2][3]==p){if(vet[2][1]==0){vet[2][1]=1;return 1;}}}
    if(vet[2][2]==p){if(vet[3][3]==p){if(vet[1][1]==0){vet[1][1]=1;return 1;}}}
    if(vet[2][2]==p){if(vet[3][2]==p){if(vet[1][2]==0){vet[1][2]=1;return 1;}}}
    if(vet[2][2]==p){if(vet[3][1]==p){if(vet[1][3]==0){vet[1][3]=1;return 1;}}}
    if(vet[2][2]==p){if(vet[2][1]==p){if(vet[2][3]==0){vet[2][3]=1;return 1;}}}
    if(vet[1][1]==p){if(vet[1][2]==p){if(vet[1][3]==0){vet[1][3]=1;return 1;}}}
    if(vet[1][1]==p){if(vet[2][1]==p){if(vet[3][1]==0){vet[3][1]=1;return 1;}}}
    if(vet[1][1]==p){if(vet[1][2]==p){if(vet[1][3]==0){vet[1][3]=1;return 1;}}}
    if(vet[1][1]==p){if(vet[1][3]==p){if(vet[1][1]==0){vet[1][1]=1;return 1;}}}
    if(vet[1][2]==p){if(vet[1][1]==p){if(vet[1][3]==0){vet[1][3]=1;return 1;}}}
    if(vet[1][2]==p){if(vet[1][3]==p){if(vet[1][1]==0){vet[1][1]=1;return 1;}}}
    if(vet[1][3]==p){if(vet[1][2]==p){if(vet[1][1]==0){vet[1][1]=1;return 1;}}}
    if(vet[1][3]==p){if(vet[1][1]==p){if(vet[1][2]==0){vet[1][2]=1;return 1;}}}
    if(vet[1][3]==p){if(vet[2][3]==p){if(vet[3][3]==0){vet[3][3]=1;return 1;}}}
    if(vet[1][3]==p){if(vet[2][1]==p){if(vet[2][3]==0){vet[2][3]=1;return 1;}}}
    if(vet[2][3]==p){if(vet[1][3]==p){if(vet[3][3]==0){vet[3][3]=1;return 1;}}}
    if(vet[2][3]==p){if(vet[3][3]==p){if(vet[1][3]==0){vet[1][3]=1;return 1;}}}
    if(vet[3][3]==p){if(vet[2][3]==p){if(vet[1][3]==0){vet[1][3]=1;return 1;}}}
    if(vet[3][3]==p){if(vet[1][3]==p){if(vet[2][3]==0){vet[2][3]=1;return 1;}}}
    if(vet[3][3]==p){if(vet[3][2]==p){if(vet[3][1]==0){vet[3][1]=1;return 1;}}}
    if(vet[3][3]==p){if(vet[3][1]==p){if(vet[3][2]==0){vet[3][2]=1;return 1;}}}
    if(vet[3][2]==p){if(vet[3][1]==p){if(vet[3][3]==0){vet[3][3]=1;return 1;}}}
    if(vet[3][2]==p){if(vet[3][3]==p){if(vet[3][1]==0){vet[3][1]=1;return 1;}}}
    if(vet[3][1]==p){if(vet[3][2]==p){if(vet[3][3]==0){vet[3][3]=1;return 1;}}}
    if(vet[3][1]==p){if(vet[3][3]==p){if(vet[3][1]==0){vet[3][1]=1;return 1;}}}
    if(vet[3][1]==p){if(vet[2][1]==p){if(vet[1][1]==0){vet[1][1]=1;return 1;}}}
    if(vet[3][1]==p){if(vet[1][1]==p){if(vet[2][1]==0){vet[2][1]=1;return 1;}}}
    if(vet[2][1]==p){if(vet[1][1]==p){if(vet[3][1]==0){vet[3][1]=1;return 1;}}}
    if(vet[2][1]==p){if(vet[3][1]==p){if(vet[1][1]==0){vet[1][1]=1;return 1;}}}
    return 0;
}
int computador_joga(){
    printf("\nO Computador Est%c Pensando ",160);
    for(m=0;m<10;m++){
        printf(".");
        for(f=0;f<10000;f++){
            for(e=0;e<30000;e++);
        }
    }
    printf("!");
    for(f=0;f<10000;f++){for(e=0;e<9000;e++){;}}
    r=raciocinio(1);/*se for 1 então computador achou lugar para joggar*/
    if(r==1){return 0;}
    r=raciocinio(2);
    if(r==1){return 0;}
    if(vet[1][1]==0){vet[1][1]=1;return 0;}
    if(vet[1][3]==0){vet[1][3]=1;return 0;}
    if(vet[3][3]==0){vet[3][3]=1;return 0;}
    if(vet[3][1]==0){vet[3][1]=1;return 0;}
    if(vet[1][2]==0){vet[1][2]=1;return 0;}
    if(vet[2][3]==0){vet[2][3]=1;return 0;}
    if(vet[3][2]==0){vet[3][2]=1;return 0;}
    if(vet[2][1]==0){vet[2][1]=1;return 0;}
    return 1;
}
int verifica_se_empatou(){
    int w=0;
    for(f=1;f<4;f++){
        for(e=1;e<4;e++){
            if(vet[f][e]==0){w=1;}
        }
    }
    return w;/*se w=0 então acabou a partida*/
}
void marca(){/*para jogar com X ou O */
    l7:
    gotoxy(23,22);
    printf("Voc%c Quer Jogar Com   X  ou  O ",136);
    scanf("%s",&c[0]);
    if((c[0]!='x' && c[0]!='X') && (c[0]!='o' && c[0]!='O')){goto l7;}
    if(c[0] =='x'|| c[0] =='X'){vjc=1;}/*voce joga com */
    if(c[0] =='o'|| c[0] =='O'){vjc=2;}
}
int tela(){
    int y1=5,x1=23,y2=y1;
    for(i=0;i<11;i++){
        if(i==4){y1=13;x1=10;y2=y1;}
        if(i==6){y1=13;x1=30;y2=y1;}
        for(j=0;j<7;j++){
            gotoxy(x1,y1);
            a=ja[i][j];
            for(b=0;b<7;b++){
                if(a % 2 != 0){printf("%c",219);}else{printf(" ");}
                a=a/2;
            }
            y1++;
        }
        x1=x1+8;
        y1=y2;
    }
    printf(" %c",169);
    gotoxy(5,1);printf("%c",201);/*+*/
    for(i=2;i<23;i++){
        gotoxy(5,i) ;printf("%c",186);/*¦*/
        gotoxy(72,i);printf("%c",186);
    }
    for(i=6;i<72;i++){
        gotoxy(i,1) ;printf("%c",205);/*-*/
        gotoxy(i,23);printf("%c",205);
        gotoxy(i,21);printf("%c",205);
    }
    gotoxy(72,1) ;printf("%c",187);/*+*/
    gotoxy(72,23);printf("%c",188);/*+*/
    gotoxy(5,23) ;printf("%c",200);/*+*/
    gotoxy(5,21) ;printf("%c",204);
    gotoxy(72,21);printf("%c",185);
    gotoxy(66,3) ;printf("%c%c%c",92,92,92);
    
    return 0;
}
int main(){
    tela();
    qjp=1;
    marca();
    do{
        l1:
        system("cls");
        printf("\nDigite   A B C   p/ Linha");
        printf("\nDigite   1 2 3   p/ Coluna  < ou  S para Parar >");
        gotoxy(10,16);printf("%c%c%c%c%c%c",201,205,205,205,205,187);
        gotoxy(10,20);printf("%c%c%c%c%c%c",200,205,205,205,205,188);
        gotoxy(10,17);printf("%c    %c"    ,186,186                );
        gotoxy(10,18);printf("%c    %c"    ,186,186                );
        gotoxy(10,19);printf("%c    %c"    ,186,186);gotoxy(12,18  );
        fflush(stdin);
        gets(c);
        if(c[0]=='a' || c[0]=='A'){a=1;}
        if(c[0]=='b' || c[0]=='B'){a=2;}
        if(c[0]=='c' || c[0]=='C'){a=3;}
        if(c[1]=='1'){b=1;}
        if(c[1]=='2'){b=2;}
        if(c[1]=='3'){b=3;}
        if(c[0]=='s'||c[0]=='S'){printf("\n\n");break;}
        if(strlen (c) > 2){      printf("\n\n\nS%c Pode Ser Duas Coordenadas   >>> Tecle <<<",224);getch();goto l1;}
        if(vet[a][b] != 0){       printf("\n\n\nEsta Posi%c%co Est%c Ocupada   >>> Tecle <<<",135,198,160);getch();goto l1;}
        if(c[0]!='a'&&c[0]!='b'&&c[0]!='c'){printf("\n\n\nS%c Pode Ser A B C   >>> Tecle <<<",224);getch();goto l1;}
        if(c[1]!='1'&&c[1]!='2'&&c[1]!='3'){printf("\n\n\nS%c Pode Ser 1 2 3   >>> Tecle <<<",224);getch();goto l1;}
        vet[a][b] = 2;/*voce joga*/
        system("cls");
        g = 0; h = 2; qg = 0;/* 2 é humano*/
        r=verifica_se_ganhou(g,h);/*se r=1 então humano ganhou*/
        system("cls");
        if(r == 1){printf("\nVoc%c Ganhou Essa Partida ",136);vg++;k=inicio(3);qg=1;}
        if(k == 27){goto l5;}else{if(r==1){marca();}}
        r=verifica_se_empatou();
        if(r == 0 && qg == 0 && k != 27){
            printf("\nEssa Partida Terminou Empatada   >>> Tecle <<<");
            getch();
            k = inicio(0);
            if(k == 27 ){goto l5;}else{if(r==0){marca();}}
            if(qjp == 1){qg=1;qjp=2;goto l3;}/*se for 1 é humano*/
            if(qjp == 2){qg=2;qjp=1;goto l4;}
        }
        l2:
        if(qg == 0){computador_joga();}
        system("cls");
        g= 0;h = 1;
        r=verifica_se_ganhou(g,h);desenha(1);/*se r=1 então computador ganhou*/
        if(r==1){printf("\nO Computador Ganhou Essa Partida ");cg++;;k=inicio(2);qg=2;}
        if(k==27){goto l5;}else{if(r==1){marca();}}
        l3:
        if(qg==1&&k!=27){qg=0;printf("\nO Computador Vai Iniciar A Partida   >>> Tecle <<<");getch();qjp=2;goto l2;}
        l4:
        if(qg==2){qg=0;printf("\nO Humano Vai Iniciar A Partida   >>> Tecle <<<");getch();qjp=1;goto l1;}
        r=verifica_se_empatou();
        if(r==0&&qg==0&&k!=27){
            printf("\nEssa Partida Terminou Empatada   >>> Tecle <<<");
            getch();
            k=inicio(0);
            if(k==27){goto l5;}
            if(qjp==1){qg=1;goto l3;}
            if(qjp==2){qg=2;goto l4;}
        }
        l5:
        if(k!=27){}
    }while(k!=27);
    return 0;
    system("pause");
}

