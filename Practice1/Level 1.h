void levelOne(){
	if(!gameOverLevelOne && starCollectlevelOne<7){


		iShowImage(-200,0,500,600,backgroundLevel1[0]);
		iShowImage(300,0,500,600,backgroundLevel1[1]);
		iShowImage(800,0,500,600,backgroundLevel1[2]);

		for (int i = 0; i < 4; i++){
			iShowImage(backgroundLevelOneCoordinate[i].x,backgroundLevelOneCoordinate[i].y, 500, 600, backgroundLevel1[i]);
		}
	




		iShowImage(100,500,healthWidth[healthIndex],46,health[healthIndex]);

		if (ballx + 60>obstacleCoordinateLevelOne[obstacleIndexLevelOne].x && ballx < obstacleCoordinateLevelOne[obstacleIndexLevelOne].x1 && bally + balljumpcoordinate>obstacleCoordinateLevelOne[obstacleIndexLevelOne].y1){
			x = true;

		}
		if (ballx > obstacleCoordinateLevelOne[obstacleIndexLevelOne].x1 || ballx + 50 <obstacleCoordinateLevelOne[obstacleIndexLevelOne].x){
			x = false;
		}
		if (x){
			bally = obstacleCoordinateLevelOne[obstacleIndexLevelOne].y1;
			balljumpcoordinate = 0;
			jump = false;
			jumpUp = false;
		}
		else{
			bally = 70;
		}


		iShowImage(obstacleCoordinateLevelOne[0].x,obstacleCoordinateLevelOne[0].y, 80, 150,obstacleImageLevelOne);
		iShowImage(obstacleCoordinateLevelOne[1].x,obstacleCoordinateLevelOne[1].y, 80, 150,obstacleImageLevelOne);
		iShowImage(obstacleCoordinateLevelOne[2].x,obstacleCoordinateLevelOne[2].y, 80, 150,obstacleImageLevelOne);
		iShowImage(obstacleCoordinateLevelOne[3].x,obstacleCoordinateLevelOne[3].y, 80, 150,obstacleImageLevelOne);
		iShowImage(obstacleCoordinateLevelOne[4].x,obstacleCoordinateLevelOne[4].y, 80, 150,obstacleImageLevelOne);




		iShowImage(starCoordinateLevelOne[0].x,starCoordinateLevelOne[0].y, 50, 50,star);
		iShowImage(starCoordinateLevelOne[1].x,starCoordinateLevelOne[1].y, 50, 50,star);
		iShowImage(starCoordinateLevelOne[2].x,starCoordinateLevelOne[2].y, 50, 50,star);
		iShowImage(starCoordinateLevelOne[3].x,starCoordinateLevelOne[3].y, 50, 50,star);
		iShowImage(starCoordinateLevelOne[4].x,starCoordinateLevelOne[4].y, 50, 50,star);
		iShowImage(starCoordinateLevelOne[5].x,starCoordinateLevelOne[5].y, 50, 50,star);
		iShowImage(starCoordinateLevelOne[6].x,starCoordinateLevelOne[6].y, 50, 50,star);


		iShowImage(enemyCoordinateLevelOne[0].x,enemyCoordinateLevelOne[0].y, 100, 50,enemyImageLevelOne);
		iShowImage(enemyCoordinateLevelOne[1].x,enemyCoordinateLevelOne[1].y, 100, 50,enemyImageLevelOne);
		iShowImage(enemyCoordinateLevelOne[2].x,enemyCoordinateLevelOne[2].y, 100, 50,enemyImageLevelOne);
		iShowImage(enemyCoordinateLevelOne[3].x,enemyCoordinateLevelOne[3].y, 100, 50,enemyImageLevelOne);

		iShowImage(lifeCoordinateLevelOne[0].x,lifeCoordinateLevelOne[0].y, 50, 50,heart);
		iShowImage(lifeCoordinateLevelOne[1].x,lifeCoordinateLevelOne[1].y, 50, 50,heart);
	




		
			
		iShowBMP2(ballx, bally+balljumpcoordinate , ballforward[ballindex],0);
			
		
		
	}else if(!gameOverLevelOne && starCollectlevelOne==7){
		iShowImage(0,0,screenWidth,screenHeight,levelDone);
		completedLEvelOne=true;
	}else{
		iShowImage(0,0,screenWidth,screenHeight,gameOver);
	}
	

}

void rightArrowLevelOne(){

	
	if (ballx+60 > starCoordinateLevelOne[starIndexLevelOne].x && ballx<starCoordinateLevelOne[starIndexLevelOne].x1 ){
		
		
		

		if( bally + balljumpcoordinate< starCoordinateLevelOne[starIndexLevelOne].y){
			starCoordinateLevelOne[starIndexLevelOne].y=-20000;
			starCollectlevelOne++;
		}
		starIndexLevelOne++;
	}
	if (ballx>enemyCoordinateLevelOne[enemyIndexLevelOne].x1 && enemyIndexLevelOne<4){
		enemyIndexLevelOne++;
	}

	if (ballx>lifeCoordinateLevelOne[lifeIndexLevelOne].x1 && lifeIndexLevelOne<2){
		lifeIndexLevelOne++;
	}
	if (ballx+60>lifeCoordinateLevelOne[lifeIndexLevelOne].x && bally+ balljumpcoordinate < lifeCoordinateLevelOne[lifeIndexLevelOne].y1 && lifeCoordinateLevelOne[lifeIndexLevelOne].y<200){
		if ( healthIndex < 5){
			 healthIndex++;
		}
		
		lifeCoordinateLevelOne[lifeIndexLevelOne].y += 10000;
		lifeIndexLevelOne++;
		

	}

	if (obstacleCoordinateLevelOne[obstacleIndexLevelOne].x1 < ballx && obstacleIndexLevelOne <= 5){
		obstacleIndexLevelOne++;
		
	}


	if (ballx + 60>enemyCoordinateLevelOne[enemyIndexLevelOne].x && bally + balljumpcoordinate <= enemyCoordinateLevelOne[enemyIndexLevelOne].y1){
		healthIndex--;
		if(healthIndex==-1)
			gameOverLevelOne=true;
		
		for (int i = 0; i < 5; i++){
			obstacleCoordinateLevelOne[i].x +=600;
			obstacleCoordinateLevelOne[i].x1 += 600;
		}
		for (int i = 0; i < 7; i++){
			starCoordinateLevelOne[i].x += 600;
			starCoordinateLevelOne[i].x1 += 600;
		}


		
		for (int i = 0; i < 4; i++){
			enemyCoordinateLevelOne[i].x  += 600;
			enemyCoordinateLevelOne[i].x1 += 600;
		}
		for (int i = 0; i < 2; i++){
			lifeCoordinateLevelOne[i].x += 600;
			lifeCoordinateLevelOne[i].x1 +=600;
		}
		
	}


	if (ballx+ 60 <= obstacleCoordinateLevelOne[obstacleIndexLevelOne].x || (balljumpcoordinate + bally) >= obstacleCoordinateLevelOne[obstacleIndexLevelOne].y1 || bally+50 <= obstacleCoordinateLevelOne[obstacleIndexLevelOne].y)
	{
		for (int i = 0; i < 5; i++){
			obstacleCoordinateLevelOne[i].x -= 10;
			obstacleCoordinateLevelOne[i].x1 -= 10;
		}
		for (int i = 0; i < 7; i++){
			starCoordinateLevelOne[i].x -= 10;
			starCoordinateLevelOne[i].x1 -= 10;
		}

		
		for (int i = 0; i < 4; i++){
			backgroundLevelOneCoordinate[i].x -= 10;
			if (backgroundLevelOneCoordinate[i].x <= -600)
				backgroundLevelOneCoordinate[i].x = 1400;
		}
		for (int i = 0; i < 4; i++){
			enemyCoordinateLevelOne[i].x -= 10;
			enemyCoordinateLevelOne[i].x1 -= 10;
		}
		for (int i = 0; i < 2; i++){
			lifeCoordinateLevelOne[i].x -= 10;
			lifeCoordinateLevelOne[i].x1 -= 10;
		}
		
	}



	
}


void leftArrowLevelOne(){
	

	if (ballx + 70 < enemyCoordinateLevelOne[enemyIndexLevelOne - 1].x && enemyIndexLevelOne > 0){
		enemyIndexLevelOne--;
	}
	if (ballx+70<lifeCoordinateLevelOne[lifeIndexLevelOne-1].x1 && lifeIndexLevelOne>0){
		lifeIndexLevelOne--;
	}
	if (ballx<lifeCoordinateLevelOne[lifeIndexLevelOne - 1].x1 && bally + balljumpcoordinate< lifeCoordinateLevelOne[lifeIndexLevelOne - 1].y1 && lifeIndexLevelOne>0 && lifeCoordinateLevelOne[lifeIndexLevelOne - 1].y<200){
		if (healthIndex < 5){
			healthIndex++;
		}

		lifeCoordinateLevelOne[lifeIndexLevelOne-1].y += 10000;
		

	}
	if (ballx< starCoordinateLevelOne[starIndexLevelOne-1].x1){
		if(bally + balljumpcoordinate<starCoordinateLevelOne[starIndexLevelOne-1].y){
			starCoordinateLevelOne[starIndexLevelOne-1].y=-20000;
			starCollectlevelOne++;
		}
		starIndexLevelOne--;
	}
	if (obstacleCoordinateLevelOne[obstacleIndexLevelOne - 1].x1 - 20 > ballx && obstacleIndexLevelOne>0){
		obstacleIndexLevelOne--;

	}
	 
	if (ballx < enemyCoordinateLevelOne[enemyIndexLevelOne - 1].x1 && bally + balljumpcoordinate< 150 && enemyIndexLevelOne>0){
		
		healthIndex--;
		if(healthIndex==-1)
			gameOverLevelOne=true;
		//cout<<healthIndex<<endl;
		for (int i = 0; i < 5; i++){
			obstacleCoordinateLevelOne[i].x += 600;
			obstacleCoordinateLevelOne[i].x1 += 600;
		}
		for (int i = 0; i < 7; i++){
			starCoordinateLevelOne[i].x += 600;
			starCoordinateLevelOne[i].x1 += 600;
		}



		for (int i = 0; i < 4; i++){
			enemyCoordinateLevelOne[i].x += 600;
			enemyCoordinateLevelOne[i].x1 += 600;
		}
		for (int i = 0; i < 2; i++){
			lifeCoordinateLevelOne[i].x += 600;
			lifeCoordinateLevelOne[i].x1 += 600;
		}


	}


	if (ballx >= obstacleCoordinateLevelOne[obstacleIndexLevelOne - 1].x1 || (balljumpcoordinate + bally) >= obstacleCoordinateLevelOne[obstacleIndexLevelOne - 1].y1 || bally + 70 <= obstacleCoordinateLevelOne[obstacleIndexLevelOne - 1].y)
	{
		for (int i = 0; i < 5; i++){
			obstacleCoordinateLevelOne[i].x += 10;
			obstacleCoordinateLevelOne[i].x1 += 10;
		}
		for (int i = 0; i < 7; i++){
			starCoordinateLevelOne[i].x += 10;
			starCoordinateLevelOne[i].x1 += 10;
		}

		for (int i = 0; i < 4; i++){
			backgroundLevelOneCoordinate[i].x += 10;
			if (backgroundLevelOneCoordinate[i].x >= 1400)
				backgroundLevelOneCoordinate[i].x = -600;
		}
		for (int i = 0; i < 4; i++){
			enemyCoordinateLevelOne[i].x += 10;
			enemyCoordinateLevelOne[i].x1 += 10;
		}
		for (int i = 0; i < 2; i++){
			lifeCoordinateLevelOne[i].x += 10;
			lifeCoordinateLevelOne[i].x1 += 10;
		}
		
	}
	

}

void levelOneCoordinate(){


	int sum = -200;
	for (int i = 0; i <4; i++){
		backgroundLevelOneCoordinate[i].y = 0;
		backgroundLevelOneCoordinate[i].x = sum;
		sum += 500;
	}


	obstacleCoordinateLevelOne[0].x=900;
	obstacleCoordinateLevelOne[1].x=1400;
	obstacleCoordinateLevelOne[2].x=1900;
	obstacleCoordinateLevelOne[3].x=3200;
	obstacleCoordinateLevelOne[4].x=4100;

	for(int i=0;i<5;i++){
		obstacleCoordinateLevelOne[i].x1=obstacleCoordinateLevelOne[i].x+80;
		obstacleCoordinateLevelOne[i].y=60;
		obstacleCoordinateLevelOne[i].y1=obstacleCoordinateLevelOne[i].y+150;
	}

	starCoordinateLevelOne[0].x=1550;
	starCoordinateLevelOne[1].x=1620;
	starCoordinateLevelOne[2].x=2700;
	starCoordinateLevelOne[3].x=2770;
	starCoordinateLevelOne[4].x=2840;
	starCoordinateLevelOne[5].x=4700;
	starCoordinateLevelOne[6].x=4770;


	for(int i=0;i<7;i++){
		starCoordinateLevelOne[i].x1=starCoordinateLevelOne[i].x+50;
		starCoordinateLevelOne[i].y=80;
		starCoordinateLevelOne[i].y1=starCoordinateLevelOne[i].y+50;
	}


	enemyCoordinateLevelOne[0].x=1100;
	enemyCoordinateLevelOne[1].x=2450;
	enemyCoordinateLevelOne[2].x=3600;
	enemyCoordinateLevelOne[3].x=4450;

	for(int i=0;i<4;i++){
		enemyCoordinateLevelOne[i].x1=enemyCoordinateLevelOne[i].x+100;
		enemyCoordinateLevelOne[i].y=70;
		enemyCoordinateLevelOne[i].y1=enemyCoordinateLevelOne[i].y+50;
	}


	lifeCoordinateLevelOne[0].x=2200;
	lifeCoordinateLevelOne[1].x=3900;

	
	for(int i=0;i<2;i++){
		lifeCoordinateLevelOne[i].x1=lifeCoordinateLevelOne[i].x+50;
		lifeCoordinateLevelOne[i].y=80;
		lifeCoordinateLevelOne[i].y1=lifeCoordinateLevelOne[i].y+50;
	}

	healthWidth[0]=46;
	healthWidth[1]=92;
	healthWidth[2]=137;
	healthWidth[3]=177;
	healthWidth[4]=222;


	 obstacleIndexLevelOne=0;
	 starIndexLevelOne=0;
	 enemyIndexLevelOne=0;
	 lifeIndexLevelOne=0;
	 starCollectlevelOne=0;
	 healthIndex=2;
	 completedLEvelOne=false;
	 gameOverLevelOne=false;
}











