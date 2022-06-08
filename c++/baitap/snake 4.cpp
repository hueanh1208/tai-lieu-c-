#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<mylib.h>
#include<ctime>
#include<kmin_console.h>
#define tuongtren 1
#define tuongduoi 25
#define tuongtrai 1 
#define tuongphai 110
using namespace std;
struct TOADO{
	int x,y;
};
struct SNAKE{
	TOADO dot[100];
	int n;// so dot
};
/*
struct TAOMOI{
	TOADO td;
};*/
int n=3;
void bodySnake(SNAKE &snake){
	snake.n=3;
	snake.dot[0].x=2;
	snake.dot[1].x=1;
	snake.dot[2].x=0;
	snake.dot[0].y=	snake.dot[1].y=snake.dot[2].y=0;
	
	
}
void hienthi(SNAKE snake){
	for(int i=0; i<n; i++){
		gotoxy(snake.dot[i].x,snake.dot[i].y);
		cout<<"*";
	}
}
TOADO dichuyen(SNAKE &snake, int huong){
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
}
void nhapphim(int &huong){
	if(kbhit()){
        char key=getch(); 
        switch(key){
        	case 'w':	huong=1; break;
        	case 's':	huong=2; break;
        	case 'a':	huong=3; break;
        	case 'd':	huong=4; break;
		}
	}
		
}
TOADO hienthimoi(){
	int x= tuongtrai+1 +rand()% (tuongphai-1-(tuongtrai+1)+1);
	int y= tuongtren+1 +rand()% (tuongduoi-1-(tuongtren+1) +1);
	gotoxy(x,y);
	cout<<"&";
	TOADO moi;
	moi.x=x;
	moi.y=y;
	return moi;
}
bool ktanmoi(SNAKE snake,TOADO moi){
	if(snake.dot[0].x==moi.x && snake.dot[0].y==moi.y)
		return true;
	else
		return false;
}
void themdot(SNAKE &snake){
	snake.n=snake.n-1;
	n++;
}

int main(){
	SNAKE snake;
	TOADO moi;
	int huong= 4;
	bodySnake(snake);
	while(true){
		system("cls");
		nhapphim(huong);
		hienthi(snake);
		dichuyen(snake,huong);
		
		Sleep(500);
}

}

