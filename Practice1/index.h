#define screenWidth 1100
#define screenHeight 600
#define jumplimit 200


struct buttonCordinate
{
	int x;
	int y;
}bCordinate[3];

struct levelCordiante
{
	int lx;
	int ly;
}lCordinate[3];



/*
function iDraw() is called again and again by the system.

*/


struct Coordinate{
	int x, y,x1,y1;
};

int backgroundLevel1[4];
int backgroundLevel2[4];
int backgroundLevel3[4];


Coordinate backgroundLevelOneCoordinate[4];
Coordinate backgroundLevelTwoCoordinate[4];
Coordinate backgroundLevelThreeCoordinate[4];


bool musicOn=true;

char bc[1][40]={"images\\backg.bmp"};
int bcIndex=0 ;
int ballindex=0;
char ballforward[12][100]={"images\\Ball1.bmp","images\\Ball2.bmp","images\\Ball3.bmp","images\\Ball4.bmp","images\\Ball5.bmp","images\\Ball6.bmp","images\\Ball7.bmp","images\\Ball8.bmp","images\\Ball9.bmp","images\\Ball10.bmp","images\\Ball11.bmp","images\\Ball12.bmp"};

char button[10][30]={"images\\play.bmp","images\\highsc.bmp","images\\help.bmp"};
char homemenu[50]={"images\\menu.bmp"};
char play[100]={"images\\levelbk.bmp"};
char highscore[100]={"images\\high.bmp"};
char help[100]={"images\\hlpBK.bmp"};
char coin[20]={"images\\c1.bmp"};
char coin1[25]={"images\\c2.bmp"};


int levelIndex=0;
char level[20][30]={"images\\level1.bmp","images\\level2.bmp","images\\level3.bmp","images\\level4.bmp","images\\level5.bmp"};


bool jump=false,jumpUp=false;

int ballx=500,bally=70;
int balljumpcoordinate=0;

                 
int levelState=-1;
int gameState=-1;
int gameOver;
int levelDone;

bool x=false;
bool menuMusic = true, gameMusic = false;



/*_______________________________Level 1________________________________*/

Coordinate obstacleCoordinateLevelOne[5];
Coordinate starCoordinateLevelOne[7];
Coordinate enemyCoordinateLevelOne[4];
Coordinate lifeCoordinateLevelOne[2];

int obstacleIndexLevelOne;
int starIndexLevelOne;
int enemyIndexLevelOne;
int lifeIndexLevelOne;



int starCollectlevelOne;

int enemyImageLevelOne;
int obstacleImageLevelOne;
int star;
int heart;
int health[5];
int healthIndex=2;
int healthWidth[5];
bool gameOverLevelOne=false;
bool completedLEvelOne=false;


/*_______________________________Level 2________________________________*/

Coordinate obstacleCoordinateLevelTwo[6];
Coordinate starCoordinateLevelTwo[12];
Coordinate enemyCoordinateLevelTwo[6];
Coordinate lifeCoordinateLevelTwo[2];

int obstacleIndexLevelTwo;
int starIndexLevelTwo;
int enemyIndexLevelTwo;
int lifeIndexLevelTwo;

int enemyImageLevelTwo;
int obstacleImageLevelTwo;
int starCollectlevelTwo;


bool gameOverLevelTwo=false;
bool completedLEvelTwo=false;


/*_______________________________Level 3________________________________*/

Coordinate obstacleCoordinateLevelThree[7];
Coordinate starCoordinateLevelThree[14];
Coordinate enemyCoordinateLevelThree[9];
Coordinate lifeCoordinateLevelThree[4];

int obstacleIndexLevelThree;
int starIndexLevelThree;
int enemyIndexLevelThree;
int lifeIndexLevelThree;
int starCollectlevelThree;

int enemyImageLevelThree;
int obstacleImageLevelThree;

bool gameOverLevelThree=false;
bool completedLEvelThree=false;


/*______________________________highscore________________________________*/

int lineCount = 0;

struct Score {
	char name[25];
	int time;
};



char nameInput[30];
char nameSave[30];
int nameIndex = 0;

int timeCounter;
int enterNameImage;

int highScoreImage;

















