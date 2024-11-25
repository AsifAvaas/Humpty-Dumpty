# include <iostream>
using namespace std;
# include "iGraphics.h"
#include "index.h"
#include "ImageLoading.h"
#include "Level 1.h"
#include "Level 2.h"
#include "Level 3.h"
#include "highscore.h"


void setAll();
void timer();
void music();
void iDraw()
{
	//place your drawing codes here
	iClear();
	
	if(gameState==-1){

		//Homemenu
		iShowBMP(0,0,homemenu);
		for(int i=0;i<3 ;i++)
		{
			iShowBMP2(bCordinate[i].x,bCordinate[i].y,button[i],0);

		}

	}
	
	else if(gameState==0)
	{
		
		if(levelState == -1){

			//Homemenu
			iShowBMP(0,0,play);
			for(int i=0;i<3 ;i++)
			{
				iShowBMP2(lCordinate[i].lx,lCordinate[i].ly,level[i],0);		
	
			}
		}
		else if(levelState==0)
		{
			 levelOne();
			
		}
		else if(levelState==1)
		{
			levelTwo();
			

		}
		else if(levelState==2)
		{
			levelThree();
			
		}
		else if(levelState==3){
			iShowImage(0,0,screenWidth,screenHeight,enterNameImage);
			
			highScoreInput();
		}
	}
	
	
	
	else if(gameState==1)
	{
		iShowImage(0,0,screenWidth,screenHeight,highScoreImage);
		
		showhighScore();
	}
	else if(gameState==2)
	{
		iShowBMP(0,0,help);
	}

	//cout<<levelState<<endl;
	

}

void iPassiveMouse(int mx, int my)
{
	;
}


/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	
	
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/


/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(gameState==-1)
		{
			for(int i=0;i<3;i++){
			if(mx>= bCordinate[i].x && mx<=bCordinate[i].x+200 && my>=bCordinate[i].y && my<=bCordinate[i].y+125)
			{
				gameState=i;
				if(gameState==0){
					gameMusic = true;
					menuMusic = false;
					music();


				}
				if(gameState==1){
					highScoreSorting();
				}
				

			}
			
		}
		
		}
		
		if(gameState==0 && levelState==-1){
			for(int i=0;i<3;i++){
				if(mx>= lCordinate[i].lx && mx<=lCordinate[i].lx+150 && my>=lCordinate[i].ly && my<=lCordinate[i].ly+150)
				{
					levelState=i;
					if(levelState==0){
						timeCounter = 0;
						iResumeTimer(0);
					}
					setAll();
				

				}

		
			}
		}
		
	}
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here

	}
}
void iKeyboard(unsigned char key)
{
	if(gameState==0 && levelState==3){
		if (key != '\b' && key!='\r'){

			nameInput[nameIndex] = key;
			nameIndex++;
			nameInput[nameIndex] = '\0';
			


		}
		else if(key=='\b'){
			if (nameIndex <= 0){
				nameIndex = 0;
			}
			else{
				nameIndex--;
			}
			nameInput[nameIndex] = '\0';

		}
		else if (key == '\r'){

			strcpy_s(nameSave, nameInput);
			strcpy_s(nameInput, "");
			nameIndex = 0;


			highScoreSave();



			gameState=-1;
			levelState=-1;
			menuMusic = true;
			gameMusic = false;
			music();


		}
	}
	if (key == 27)
	{
		gameState=-1;
		levelState=-1;
		setAll();
		iPauseTimer(0);
		timeCounter = 0;
		menuMusic = true;
		gameMusic = false;
		music();
	}
	if (key == 'q' && gameState==-1)
	{
		exit(0);
	}
	if (key == ' ' && completedLEvelOne)
	{
		levelState=1;
		 setAll();
	}
	if (key == ' ' && completedLEvelTwo)
	{
		levelState=2;
		 setAll();
	}
	if (key == ' ' && completedLEvelThree)
	{
		levelState=3;
		
		 setAll();
	}
	if (key == 'm')
	{
		if (menuMusic==true){
			menuMusic = false;
		}
		else if (gameMusic==true){
			gameMusic = false;
		}
		else if (gameState==0){
			gameMusic = true;
		}
		else{
			menuMusic = true;
		}

		music();


	}
	
	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}


	

	if (key == GLUT_KEY_UP)
	{
		
		if(!jump){
			jump=true;
			jumpUp=true;
		}
		
		
		
	}
	if (key == GLUT_KEY_RIGHT){
		        

		ballindex++;
		if(ballindex>=12){
			ballindex=0;
		}




		if(levelState==0)
		rightArrowLevelOne();
		if(levelState==1)
		rightArrowLevelTwo();
		if(levelState==2)
		rightArrowLevelThree();
		
		
		
	}
	if (key == GLUT_KEY_LEFT){
		
		ballindex--;
		
		if(ballindex<0){
			ballindex=11;
		}


		if(levelState==0)
		leftArrowLevelOne();
		if(levelState==1)
		leftArrowLevelTwo();
		if(levelState==2)
		leftArrowLevelThree();
		
	
	}
	
	//place your codes for other keys here
}
void change(){
	if(jump){
		if(jumpUp){
			balljumpcoordinate+=15;
			if(balljumpcoordinate>=jumplimit){
				jumpUp=false;
			}
		}else{
			balljumpcoordinate-=15;
			if(balljumpcoordinate<0){
				jump=false;
				balljumpcoordinate=0;
			}
		}
	}
	
}



void setAll(){
	levelOneCoordinate();
	levelTwoCoordinate();
	levelThreeCoordinate();
	
}

void timer(){
	timeCounter++;
	

}
void music(){
	if (menuMusic){
		PlaySound("music//menu.wav", NULL, SND_LOOP | SND_ASYNC);
	}else if (gameMusic){
		PlaySound("music//game.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	else{
		PlaySound(NULL, NULL, 0);
	}

}
int main()
{
	setAll();
	music();
	iSetTimer(1000, timer);
	iSetTimer(60,change);
	iPauseTimer(0);
	
	iInitialize(screenWidth, screenHeight, "Humpty Dumpty");

	int sum1=100;
	
	for(int i=2;i>=0;i--)
	{
		bCordinate[i].x=100;
		bCordinate[i].y=sum1;
		sum1+=150;

	}
	int sum2=250;
	
	for(int i=0;i<=3;i++)
	{
		lCordinate[i].lx=sum2;
		sum2+=250;
		lCordinate[i].ly=300;
	

	}

	loadingImage();



	cout<<"WELCOME TO HUMPTY DUMPTY....................."<<endl;


	iStart(); // it will start drawing

	return 0;
}

