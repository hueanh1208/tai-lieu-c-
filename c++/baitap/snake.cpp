#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<mylib.h>
#include<ctime>
#include<kmin_console.h>
using namespace std;

const int tuongtren = 1;
const int tuongduoi = 25;
const int tuongtrai = 1; 
const int tuongphai = 50;

struct TOADO{
	int x,y;
};
struct SNAKE{
	TOADO dot[20];
	int n;// chieu dai dot
};
int n=3;

void bodySnake(SNAKE &snake){
	snake.n=3;
	snake.dot[0].x=10;
	snake.dot[1].x=9;
	snake.dot[2].x=8;
	snake.dot[0].y=	snake.dot[1].y=snake.dot[2].y=10;
	
}
void hienthi(SNAKE snake,TOADO dotcuoi){
	for(int i=0; i<n; i++){
		gotoxy(snake.dot[i].x,snake.dot[i].y);
		cout<<"*";
	}	
	gotoxy(dotcuoi.x,dotcuoi.y);
	cout<<" ";
}

TOADO Taomoi(){
	TOADO moi;
	int x= 2 +rand()% 23;
	int y= 2 +rand()% 48;
	gotoxy(x,y);
	cout<<"$";
	moi.x=x;
	moi.y=y;
	return moi;
}
TOADO dichuyen(SNAKE &snake,int &huong){
	if(kbhit()){
        char key=getch(); 
        if(key=='w'||key=='W') huong=1;    
        else if(key=='s'||key=='S') huong=2; 		
        else if(key=='a'||key=='A') huong=3;
		else if(key=='d'||key=='D') huong=4;  
	}
	TOADO dotcuoi=snake.dot[n-1];
	for(int i=snake.n - 1; i>0; i--){
		snake.dot[i]=snake.dot[i-1];
	}
	switch(huong){
		case 1: snake.dot[0].y--;//len
				break;
		case 2: snake.dot[0].y++;//xuong
				break;
		case 3: snake.dot[0].x--;//trai
				break;		
		case 4: snake.dot[0].x++;//phai
				break; 
	}
	return dotcuoi;
}

int ktanmoi(SNAKE snake, TOADO moi){
	if(snake.dot[0].x==moi.x && snake.dot[0].y==moi.y)
		return true;
	else 
		return false;
}
void themdot(SNAKE &snake){
	snake.dot[n++]=snake.dot[n];
	snake.n++;
}
void vetuong(){
	for(int i=tuongtrai;i<=tuongphai; i++){//tuong tren
		gotoxy(i,tuongtren);
		cout<<'@';	
	}
	for(int j=tuongtrai; j<=tuongphai; j++){//tuong duoi
		gotoxy(j,tuongduoi);
		cout<<'@';
	}	
	for(int k=tuongtren; k<=tuongduoi; k++){//tuong trai
		gotoxy(tuongtrai,k);
		cout<<'@';
	}
	for(int l=tuongtren; l<=tuongduoi; l++){//tuong phai
		gotoxy(tuongphai,l);
		cout<<'@';
	}
}
bool gameover(SNAKE snake){
	if(snake.dot[0].y== 1)
		return true;
	if(snake.dot[0].y == 25)
		return true;
	if(snake.dot[0].x == 1)
		return true;
	if(snake.dot[0].x == 50)
		return true;
}
void ktGameOver(SNAKE snake){

		Sleep(250);
		clrscr();
		cout<<"GAME OVER";
		
}
int main(){
	SNAKE snake; 
	TOADO dotcuoi;
	int huongdi= 4;
	bodySnake(snake);
	TOADO moi=Taomoi();
	int diem;
	while(true){
		vetuong();
		hienthi(snake,dotcuoi);
		dotcuoi=dichuyen(snake,huongdi);
		if(ktanmoi(snake,moi)==true){
			moi=Taomoi();
			themdot(snake);
			diem++;
			gotoxy(60,2);
			cout<<"Diem: "<<diem;
		}
		if(gameover(snake)==true){
			break;
		}
		Sleep(200);
	}
	ktGameOver(snake);
}

