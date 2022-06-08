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

void Taomoi(TOADO moi){
	moi.x= tuongtrai+1 +rand()% (tuongphai-1-(tuongtrai+1)+1);
	moi.y= tuongtren+1 +rand()% (tuongduoi-1-(tuongtren+1) +1);
	gotoxy(moi.x,moi.y);
	cout<<"$";
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
void ktanmoi(SNAKE snake, TOADO moi){
	if(snake.dot[0].x==moi.x && snake.dot[0].y==moi.y){
		for(int i=snake.n; i>0; i--){
			snake.dot[i]=snake.dot[i-1];
		}
		snake.n=snake.n-1;
		snake.n++;
	}
	
}
void themdot(SNAKE &snake){
	
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
	if(snake.dot[0].x == tuongtren)
		return true;
	if(snake.dot[0].x == tuongduoi)
		return true;
	if(snake.dot[0].x == tuongtrai)
		return true;
	if(snake.dot[0].x == tuongphai)
		return true;
}
void ktGameOver(SNAKE snake){
	if(gameover(snake)==true){
		Sleep(250);
		system("cls");
		cout<<"GAME OVER";
	}	
}
int main(){
	SNAKE snake; 
	TOADO moi;
	TOADO dotcuoi;
	int huongdi= 4;
	bodySnake(snake);
	vetuong();
	Taomoi(moi);
	while(true){
		hienthi(snake,dotcuoi);
		dotcuoi=dichuyen(snake,huongdi);
		ktanmoi(snake,moi);
		Sleep(200);
	}

}

