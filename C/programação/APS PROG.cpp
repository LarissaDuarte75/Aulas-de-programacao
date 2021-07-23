#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;
char tmp_mapa [18] [32];

char mapa[18] [32] = {
	"+#############################+",
	"|                             |",
	"|                             |",
	"|##  ########### ##  #########|",
	"|    |                      ##|",
	"| |  |### |  |            |   |",
	"| |       |  |  |###  |   |  ||",
	"| | ######|  |  |     ##      |",
	"| |             |###  |      ||",
	"| |####  ###          |       |",
	"|          ######  ####### ###|",
	"|                             |",
	"|#  ###  ####    ###   #######|",
	"|                             |",
	"|                             |",
	"+#############################+"
};

void mostrar_mapa (){
	for(int i = 0; i<18;i++);{
		printf("%s\n",mapa[I]);
	
}

}
void gotoxy(short x,short y){
	HANDLE yStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = {x,y};
	SetConsoleCursorPosition (hStdout,position);
}

class Fantasma {
	public: 
	Fantasma(int x, int y){
		
	this x = x;
	this y = y;
	
	}

void move_x(int p){
	if(mapa[y] [x + p]=='.')x += p;
		

}

void move_x(int p){
	if(mapa[y + p] [x] =='.')y += p;
		
}

void move(int p, int q){
	x += p;
	y += q;
	
}

int get_x(){
	return x;
	
}

int get_y(){
	return y;

}

void desenho(char p){
	mapa[x] [y] = p;
	gotoxy (x,y);
	printf("%c",p);
	
}
private: int x; int y;

};

struct andar{
	short andar_count;
	short x;
	short y;
	short back;
};

struct target{
	short x;
	short y;
};

vector <target> walk_queue;
vector <walk> VFSArray;

void AddArray(int x, int y, int wc, int back;){
	if(tmp_mapa[y] [x]=='.' || mp_mapa[y] [x]=='.'){
		tmp_mapa[y] [x] ='#';
		walktmp;
		tmp.x = x;
		tmp.y = y;
		tmp.walk_count = wc;
		tmp.back = back;
		BFSArray.push_back(tmp);
	}
	
}

void achando_chao(int sx; int sy, int x, int y){
	memcpy(tmp_mapa,mapa,sizeof(mapa));
	BFSArray.clear();
	walk tmp;
	tmp.x = sx;
	tmp.y = sy;
	tmp.walk_count = 0;
	tmp.back = -1;
	BFSArray.push_back(tmp);
	int i = 0;
	while (i - BFSArray.size()){
		if (BFSArray[i].x == x && BFSArray[i].y == y){
			walk_queue.clear();
			target tmp2;
			while(BFSArray[i].walk_count != 0){
				
		tmp2.x = BFSArray[i].x;
				tmp2.y = BFSArray[i].y;
				walk_queue.push_back( tmp2 );

				i = BFSArray[i].back;
			}

			break;
		}

		AddArray( BFSArray[i].x+1, BFSArray[i].y, BFSArray[i].walk_count+1, i );
		AddArray( BFSArray[i].x-1, BFSArray[i].y, BFSArray[i].walk_count+1, i );
		AddArray( BFSArray[i].x, BFSArray[i].y+1, BFSArray[i].walk_count+1, i );
		AddArray( BFSArray[i].x, BFSArray[i].y-1, BFSArray[i].walk_count+1, i );
		i++;
	}

	BFSArray.clear();
}
int main () 
{int I;
bool running = true;
  int x = 15;
  int y = 16;
  int old_x;
  int old_y;
  int ex = 1; 
  int ey = 1;
  int pts = 0;
  
  printf("instrucao:\n1. as setas movem seu heroi \n2. pegue os pontos produzidos pelo fantasma para marcar pontos \n3. tome cuidado como fantasma \n\n ");
  printf("1 -> para iniciar\n 2 -> para sair\n\nInput :  ");
  scanf("%d", &I);
  system("pause");
  
  
  
  
  
  
  
  
  
  
  
  
}
