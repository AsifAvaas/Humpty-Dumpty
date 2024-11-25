void levelTwo(){
	
	if(!gameOverLevelTwo && starCollectlevelTwo<12){


		iShowImage(-200,0,500,600,backgroundLevel2[0]);
		iShowImage(300,0,500,600,backgroundLevel2[1]);
		iShowImage(800,0,500,600,backgroundLevel2[2]);

		for (int i = 0; i < 4; i++){
			iShowImage(backgroundLevelTwoCoordinate[i].x,backgroundLevelTwoCoordinate[i].y, 500, 600, backgroundLevel2[i]);
		}
	
		iShowImage(100,500,healthWidth[healthIndex],46,health[healthIndex]);

		if (ballx + 60>obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].x && ballx < obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].x1 && bally + balljumpcoordinate>obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].y1){
			x = true;

		}
		if (ballx > obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].x1 || ballx + 50 <obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].x){
			x = false;
		}
		if (x){
			bally = obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].y1;
			balljumpcoordinate = 0;
			jump = false;
			jumpUp = false;
		}
		else{
			bally = 70;
		}


		iShowImage(obstacleCoordinateLevelTwo[0].x,obstacleCoordinateLevelTwo[0].y, 80, 150,obstacleImageLevelTwo);
		iShowImage(obstacleCoordinateLevelTwo[1].x,obstacleCoordinateLevelTwo[1].y, 80, 150,obstacleImageLevelTwo);
		iShowImage(obstacleCoordinateLevelTwo[2].x,obstacleCoordinateLevelTwo[2].y, 80, 150,obstacleImageLevelTwo);
		iShowImage(obstacleCoordinateLevelTwo[3].x,obstacleCoordinateLevelTwo[3].y, 80, 150,obstacleImageLevelTwo);
		iShowImage(obstacleCoordinateLevelTwo[4].x,obstacleCoordinateLevelTwo[4].y, 80, 150,obstacleImageLevelTwo);
		iShowImage(obstacleCoordinateLevelTwo[5].x,obstacleCoordinateLevelTwo[5].y, 80, 150,obstacleImageLevelTwo);



		iShowImage(starCoordinateLevelTwo[0].x,starCoordinateLevelTwo[0].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[1].x,starCoordinateLevelTwo[1].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[2].x,starCoordinateLevelTwo[2].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[3].x,starCoordinateLevelTwo[3].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[4].x,starCoordinateLevelTwo[4].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[5].x,starCoordinateLevelTwo[5].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[6].x,starCoordinateLevelTwo[6].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[7].x,starCoordinateLevelTwo[7].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[8].x,starCoordinateLevelTwo[8].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[9].x,starCoordinateLevelTwo[9].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[10].x,starCoordinateLevelTwo[10].y, 50, 50,star);
		iShowImage(starCoordinateLevelTwo[11].x,starCoordinateLevelTwo[11].y, 50, 50,star);



		iShowImage(enemyCoordinateLevelTwo[0].x,enemyCoordinateLevelTwo[0].y, 100, 100,enemyImageLevelTwo);
		iShowImage(enemyCoordinateLevelTwo[1].x,enemyCoordinateLevelTwo[1].y, 100, 100,enemyImageLevelTwo);
		iShowImage(enemyCoordinateLevelTwo[2].x,enemyCoordinateLevelTwo[2].y, 100, 100,enemyImageLevelTwo);
		iShowImage(enemyCoordinateLevelTwo[3].x,enemyCoordinateLevelTwo[3].y, 100, 100,enemyImageLevelTwo);
		iShowImage(enemyCoordinateLevelTwo[4].x,enemyCoordinateLevelTwo[4].y, 100, 100,enemyImageLevelTwo);
		iShowImage(enemyCoordinateLevelTwo[5].x,enemyCoordinateLevelTwo[5].y, 100, 100,enemyImageLevelTwo);

		iShowImage(lifeCoordinateLevelTwo[0].x,lifeCoordinateLevelTwo[0].y, 50, 50,heart);
		iShowImage(lifeCoordinateLevelTwo[1].x,lifeCoordinateLevelTwo[1].y, 50, 50,heart);
	




		
		iShowBMP2(ballx,bally+balljumpcoordinate,ballforward[ballindex],0);
			
		
		
	}else if(!gameOverLevelTwo && starCollectlevelTwo==12){
		iShowImage(0,0,screenWidth,screenHeight,levelDone);
		completedLEvelTwo=true;
	}else{
		iShowImage(0,0,screenWidth,screenHeight,gameOver);
	}
	//cout<<starIndexLevelTwo<<endl;

}

void rightArrowLevelTwo(){

	if (ballx+60 > starCoordinateLevelTwo[starIndexLevelTwo].x && ballx<starCoordinateLevelTwo[starIndexLevelTwo].x1 ){
		
		
		if( bally + balljumpcoordinate< starCoordinateLevelTwo[starIndexLevelTwo].y){
			starCoordinateLevelTwo[starIndexLevelTwo].y=-20000;
			starCollectlevelTwo++;
		}
		starIndexLevelTwo++;
	}
	if (ballx>enemyCoordinateLevelTwo[enemyIndexLevelTwo].x1 && enemyIndexLevelTwo<6){
		enemyIndexLevelTwo++;
	}

	if (ballx>lifeCoordinateLevelTwo[lifeIndexLevelTwo].x1 && lifeIndexLevelTwo<2){
		lifeIndexLevelTwo++;
	}
	if (ballx+60>lifeCoordinateLevelTwo[lifeIndexLevelTwo].x && bally+ balljumpcoordinate < lifeCoordinateLevelTwo[lifeIndexLevelTwo].y1 && lifeCoordinateLevelTwo[lifeIndexLevelTwo].y<200){
		if ( healthIndex < 5){
			 healthIndex++;
		}
		
		lifeCoordinateLevelTwo[lifeIndexLevelTwo].y += 10000;
		lifeIndexLevelTwo++;
		

	}

	if (obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].x1 < ballx && obstacleIndexLevelTwo <= 5){
		obstacleIndexLevelTwo++;
		
	}
	if (ballx + 60>enemyCoordinateLevelTwo[enemyIndexLevelTwo].x && bally + balljumpcoordinate < enemyCoordinateLevelTwo[enemyIndexLevelTwo].y1){
		healthIndex--;
		if(healthIndex==-1)
			gameOverLevelTwo=true;
		//cout<<healthIndex<<endl;
		for (int i = 0; i < 6; i++){
			obstacleCoordinateLevelTwo[i].x +=600;
			obstacleCoordinateLevelTwo[i].x1 += 600;
		}
		for (int i = 0; i < 12; i++){
			starCoordinateLevelTwo[i].x += 600;
			starCoordinateLevelTwo[i].x1 += 600;
		}


		
		for (int i = 0; i < 6; i++){
			enemyCoordinateLevelTwo[i].x  += 600;
			enemyCoordinateLevelTwo[i].x1 += 600;
		}
		for (int i = 0; i < 2; i++){
			lifeCoordinateLevelTwo[i].x += 600;
			lifeCoordinateLevelTwo[i].x1 +=600;
		}
		
	}
	if (ballx+ 60 <= obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].x || (balljumpcoordinate + bally) >= obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].y1 || bally+50 <= obstacleCoordinateLevelTwo[obstacleIndexLevelTwo].y)
	{
		for (int i = 0; i < 6; i++){
			obstacleCoordinateLevelTwo[i].x -= 10;
			obstacleCoordinateLevelTwo[i].x1 -= 10;
		}
		for (int i = 0; i < 12; i++){
			starCoordinateLevelTwo[i].x -= 10;
			starCoordinateLevelTwo[i].x1 -= 10;
		}

		
		for (int i = 0; i < 4; i++){
			backgroundLevelTwoCoordinate[i].x -= 10;
			if (backgroundLevelTwoCoordinate[i].x <= -600)
				backgroundLevelTwoCoordinate[i].x = 1400;
		}
		for (int i = 0; i < 6; i++){
			enemyCoordinateLevelTwo[i].x -= 10;
			enemyCoordinateLevelTwo[i].x1 -= 10;
		}
		for (int i = 0; i < 2; i++){
			lifeCoordinateLevelTwo[i].x -= 10;
			lifeCoordinateLevelTwo[i].x1 -= 10;
		}
		
	}
	

}


void leftArrowLevelTwo(){

	if (ballx + 70 < enemyCoordinateLevelTwo[enemyIndexLevelTwo - 1].x && enemyIndexLevelTwo > 0){
		enemyIndexLevelTwo--;
	}
	if (ballx+70<lifeCoordinateLevelTwo[lifeIndexLevelTwo-1].x1 && lifeIndexLevelTwo>0){
		lifeIndexLevelTwo--;
	}
	if (ballx<lifeCoordinateLevelTwo[lifeIndexLevelTwo - 1].x1 && bally + balljumpcoordinate< lifeCoordinateLevelTwo[lifeIndexLevelTwo - 1].y1 && lifeIndexLevelTwo>0 && lifeCoordinateLevelTwo[lifeIndexLevelTwo - 1].y<200){
		if (healthIndex < 5){
			healthIndex++;
		}

		lifeCoordinateLevelTwo[lifeIndexLevelTwo-1].y += 10000;
		

	}
	if (ballx< starCoordinateLevelTwo[starIndexLevelTwo-1].x1){
		if(bally + balljumpcoordinate<starCoordinateLevelTwo[starIndexLevelTwo-1].y){
			starCoordinateLevelTwo[starIndexLevelTwo-1].y=-20000;
			starCollectlevelTwo++;
		}
		starIndexLevelTwo--;
	}
	
	if (obstacleCoordinateLevelTwo[obstacleIndexLevelTwo - 1].x1 - 20 > ballx && obstacleIndexLevelTwo>0){
		obstacleIndexLevelTwo--;

	}
	 
	if (ballx < enemyCoordinateLevelTwo[enemyIndexLevelTwo - 1].x1 && bally + balljumpcoordinate< 150 && enemyIndexLevelTwo>0){
		//printf("true\n");
		//printf("ZenX = %d coordinate = %d\n", zenX, thornCoordinateLevel2[tIndexLevel2 -  1].x1);
		//printf("%d \n", zenY + jumpIndex);
		healthIndex--;
		if(healthIndex==-1)
			gameOverLevelTwo=true;
		//cout<<healthIndex<<endl;
		for (int i = 0; i < 6; i++){
			obstacleCoordinateLevelTwo[i].x += 600;
			obstacleCoordinateLevelTwo[i].x1 += 600;
		}
		for (int i = 0; i < 12; i++){
			starCoordinateLevelTwo[i].x += 600;
			starCoordinateLevelTwo[i].x1 += 600;
		}



		for (int i = 0; i < 6; i++){
			enemyCoordinateLevelTwo[i].x += 600;
			enemyCoordinateLevelTwo[i].x1 += 600;
		}
		for (int i = 0; i < 2; i++){
			lifeCoordinateLevelTwo[i].x += 600;
			lifeCoordinateLevelTwo[i].x1 += 600;
		}


	}


	if (ballx >= obstacleCoordinateLevelTwo[obstacleIndexLevelTwo - 1].x1 || (balljumpcoordinate + bally) >= obstacleCoordinateLevelTwo[obstacleIndexLevelTwo - 1].y1 || bally + 70 <= obstacleCoordinateLevelTwo[obstacleIndexLevelTwo - 1].y)
	{
		for (int i = 0; i < 6; i++){
			obstacleCoordinateLevelTwo[i].x += 10;
			obstacleCoordinateLevelTwo[i].x1 += 10;
		}
		for (int i = 0; i < 12; i++){
			starCoordinateLevelTwo[i].x += 10;
			starCoordinateLevelTwo[i].x1 += 10;
		}

		for (int i = 0; i < 4; i++){
			backgroundLevelTwoCoordinate[i].x += 10;
			if (backgroundLevelTwoCoordinate[i].x >= 1400)
				backgroundLevelTwoCoordinate[i].x = -600;
		}
		for (int i = 0; i < 6; i++){
			enemyCoordinateLevelTwo[i].x += 10;
			enemyCoordinateLevelTwo[i].x1 += 10;
		}
		for (int i = 0; i < 2; i++){
			lifeCoordinateLevelTwo[i].x += 10;
			lifeCoordinateLevelTwo[i].x1 += 10;
		}
		
	}


}

void levelTwoCoordinate(){

int sum = -200;
	for (int i = 0; i <4; i++){
		backgroundLevelTwoCoordinate[i].y = 0;
		backgroundLevelTwoCoordinate[i].x = sum;
		sum += 500;
	}


	obstacleCoordinateLevelTwo[0].x=1000;
	obstacleCoordinateLevelTwo[1].x=2600;
	obstacleCoordinateLevelTwo[2].x=3000;
	obstacleCoordinateLevelTwo[3].x=4100;
	obstacleCoordinateLevelTwo[4].x=4700;
	obstacleCoordinateLevelTwo[5].x=6000;

	for(int i=0;i<6;i++){
		obstacleCoordinateLevelTwo[i].x1=obstacleCoordinateLevelTwo[i].x+80;
		obstacleCoordinateLevelTwo[i].y=60;
		obstacleCoordinateLevelTwo[i].y1=obstacleCoordinateLevelTwo[i].y+150;
	}

	starCoordinateLevelTwo[0].x=1300;
	starCoordinateLevelTwo[1].x=1370;
	starCoordinateLevelTwo[2].x=1440;
	starCoordinateLevelTwo[3].x=3300;
	starCoordinateLevelTwo[4].x=3370;
	
	starCoordinateLevelTwo[5].x=3800;
	starCoordinateLevelTwo[6].x=3870;
	starCoordinateLevelTwo[7].x=5400;
	starCoordinateLevelTwo[8].x=5470;
	starCoordinateLevelTwo[9].x=5540;
	starCoordinateLevelTwo[10].x=6200;
	starCoordinateLevelTwo[11].x=6270;


	for(int i=0;i<12;i++){
		starCoordinateLevelTwo[i].x1=starCoordinateLevelTwo[i].x+50;
		starCoordinateLevelTwo[i].y=80;
		starCoordinateLevelTwo[i].y1=starCoordinateLevelTwo[i].y+50;
	}


	enemyCoordinateLevelTwo[0].x=1700;
	enemyCoordinateLevelTwo[1].x=2200;
	enemyCoordinateLevelTwo[2].x=3500;
	enemyCoordinateLevelTwo[3].x=4450;
	enemyCoordinateLevelTwo[4].x=5100;
	enemyCoordinateLevelTwo[5].x=5700;

	for(int i=0;i<6;i++){
		enemyCoordinateLevelTwo[i].x1=enemyCoordinateLevelTwo[i].x+100;
		enemyCoordinateLevelTwo[i].y=70;
		enemyCoordinateLevelTwo[i].y1=enemyCoordinateLevelTwo[i].y+50;
	}


	lifeCoordinateLevelTwo[0].x=2000;
	lifeCoordinateLevelTwo[1].x=4250;

	
	for(int i=0;i<2;i++){
		lifeCoordinateLevelTwo[i].x1=lifeCoordinateLevelTwo[i].x+50;
		lifeCoordinateLevelTwo[i].y=80;
		lifeCoordinateLevelTwo[i].y1=lifeCoordinateLevelTwo[i].y+50;
	}

	healthWidth[0]=46;
	healthWidth[1]=92;
	healthWidth[2]=137;
	healthWidth[3]=177;
	healthWidth[4]=222;


	 obstacleIndexLevelTwo=0;
	 starIndexLevelTwo=0;
	 enemyIndexLevelTwo=0;
	 lifeIndexLevelTwo=0;
	 starCollectlevelTwo=0;
	 healthIndex=2;
	 completedLEvelTwo=false;
	 gameOverLevelTwo=false;


}
