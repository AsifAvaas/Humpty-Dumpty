void levelThree(){


if(!gameOverLevelThree && starCollectlevelThree<14){

		iShowImage(-200,0,500,600,backgroundLevel3[0]);
		iShowImage(300,0,500,600,backgroundLevel3[1]);
		iShowImage(800,0,500,600,backgroundLevel3[2]);
		for (int i = 0; i < 4; i++){
			iShowImage(backgroundLevelThreeCoordinate[i].x,backgroundLevelThreeCoordinate[i].y, 500, 600, backgroundLevel3[i]);
		}
	




		iShowImage(100,500,healthWidth[healthIndex],46,health[healthIndex]);

		if (ballx + 60>obstacleCoordinateLevelThree[obstacleIndexLevelThree].x && ballx < obstacleCoordinateLevelThree[obstacleIndexLevelThree].x1 && bally + balljumpcoordinate>obstacleCoordinateLevelThree[obstacleIndexLevelThree].y1){
			x = true;

		}
		if (ballx > obstacleCoordinateLevelThree[obstacleIndexLevelThree].x1 || ballx + 50 <obstacleCoordinateLevelThree[obstacleIndexLevelThree].x){
			x = false;
		}
		if (x){
			bally = obstacleCoordinateLevelThree[obstacleIndexLevelThree].y1;
			balljumpcoordinate = 0;
			jump = false;
			jumpUp = false;
		}
		else{
			bally = 150;
		}


		iShowImage(obstacleCoordinateLevelThree[0].x,obstacleCoordinateLevelThree[0].y, 80, 150,obstacleImageLevelThree);
		iShowImage(obstacleCoordinateLevelThree[1].x,obstacleCoordinateLevelThree[1].y, 80, 150,obstacleImageLevelThree);
		iShowImage(obstacleCoordinateLevelThree[2].x,obstacleCoordinateLevelThree[2].y, 80, 150,obstacleImageLevelThree);
		iShowImage(obstacleCoordinateLevelThree[3].x,obstacleCoordinateLevelThree[3].y, 80, 150,obstacleImageLevelThree);
		iShowImage(obstacleCoordinateLevelThree[4].x,obstacleCoordinateLevelThree[4].y, 80, 150,obstacleImageLevelThree);
		iShowImage(obstacleCoordinateLevelThree[5].x,obstacleCoordinateLevelThree[5].y, 80, 150,obstacleImageLevelThree);


		iShowImage(starCoordinateLevelThree[0].x,starCoordinateLevelThree[0].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[1].x,starCoordinateLevelThree[1].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[2].x,starCoordinateLevelThree[2].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[3].x,starCoordinateLevelThree[3].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[4].x,starCoordinateLevelThree[4].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[5].x,starCoordinateLevelThree[5].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[6].x,starCoordinateLevelThree[6].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[7].x,starCoordinateLevelThree[7].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[8].x,starCoordinateLevelThree[8].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[9].x,starCoordinateLevelThree[9].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[10].x,starCoordinateLevelThree[10].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[11].x,starCoordinateLevelThree[11].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[12].x,starCoordinateLevelThree[12].y, 50, 50,star);
		iShowImage(starCoordinateLevelThree[13].x,starCoordinateLevelThree[13].y, 50, 50,star);


		iShowImage(enemyCoordinateLevelThree[0].x,enemyCoordinateLevelThree[0].y, 100, 100,enemyImageLevelThree);
		iShowImage(enemyCoordinateLevelThree[1].x,enemyCoordinateLevelThree[1].y, 100, 100,enemyImageLevelThree);
		iShowImage(enemyCoordinateLevelThree[2].x,enemyCoordinateLevelThree[2].y, 100, 100,enemyImageLevelThree);
		iShowImage(enemyCoordinateLevelThree[3].x,enemyCoordinateLevelThree[3].y, 100, 100,enemyImageLevelThree);
		iShowImage(enemyCoordinateLevelThree[4].x,enemyCoordinateLevelThree[4].y, 100, 100,enemyImageLevelThree);
		iShowImage(enemyCoordinateLevelThree[5].x,enemyCoordinateLevelThree[5].y, 100, 100,enemyImageLevelThree);
		iShowImage(enemyCoordinateLevelThree[6].x,enemyCoordinateLevelThree[6].y, 100, 100,enemyImageLevelThree);
		iShowImage(enemyCoordinateLevelThree[7].x,enemyCoordinateLevelThree[7].y, 100, 100,enemyImageLevelThree);

		iShowImage(lifeCoordinateLevelThree[0].x,lifeCoordinateLevelThree[0].y, 50, 50,heart);
		iShowImage(lifeCoordinateLevelThree[1].x,lifeCoordinateLevelThree[1].y, 50, 50,heart);
		iShowImage(lifeCoordinateLevelThree[2].x,lifeCoordinateLevelThree[2].y, 50, 50,heart);
		iShowImage(lifeCoordinateLevelThree[3].x,lifeCoordinateLevelThree[3].y, 50, 50,heart);
	




		
			
		iShowBMP2(ballx,bally+balljumpcoordinate,ballforward[ballindex],0);
			
		
		
	}else if(!gameOverLevelThree && starCollectlevelThree==14){
		iShowImage(0,0,screenWidth,screenHeight,levelDone);
		completedLEvelThree=true;
	}else{
		iShowImage(0,0,screenWidth,screenHeight,gameOver);
	}
	
	//cout<<enemyIndexLevelThree <<" "<<healthIndex<<endl;
}





void rightArrowLevelThree(){
	
	if (ballx+60 > starCoordinateLevelThree[starIndexLevelThree].x && ballx<starCoordinateLevelThree[starIndexLevelThree].x1 ){
		
		
		

		if( bally + balljumpcoordinate< starCoordinateLevelThree[starIndexLevelThree].y){
			starCoordinateLevelThree[starIndexLevelThree].y=-20000;
			starCollectlevelThree++;
		}
		starIndexLevelThree++;
	}
	if (ballx>enemyCoordinateLevelThree[enemyIndexLevelThree].x1 && enemyIndexLevelThree<8){
		enemyIndexLevelThree++;
	}

	if (ballx>lifeCoordinateLevelThree[lifeIndexLevelThree].x1 && lifeIndexLevelThree<4){
		lifeIndexLevelThree++;
	}
	if (ballx+60>lifeCoordinateLevelThree[lifeIndexLevelThree].x && bally+ balljumpcoordinate < lifeCoordinateLevelThree[lifeIndexLevelThree].y1 && lifeCoordinateLevelThree[lifeIndexLevelThree].y<200){
		if ( healthIndex < 4){
			 healthIndex++;
		}
		
		lifeCoordinateLevelThree[lifeIndexLevelThree].y += 10000;
		lifeIndexLevelThree++;
		

	}

	if (obstacleCoordinateLevelThree[obstacleIndexLevelThree].x1 < ballx && obstacleIndexLevelThree <= 6){
		obstacleIndexLevelThree++;
		
	}
	if (ballx + 60>enemyCoordinateLevelThree[enemyIndexLevelThree].x && bally + balljumpcoordinate < enemyCoordinateLevelThree[enemyIndexLevelThree].y1){
		healthIndex--;
		if(healthIndex==-1)
			gameOverLevelThree=true;
		//cout<<healthIndex<<endl;
		for (int i = 0; i < 6; i++){
			obstacleCoordinateLevelThree[i].x +=600;
			obstacleCoordinateLevelThree[i].x1 += 600;
		}
		for (int i = 0; i < 14; i++){
			starCoordinateLevelThree[i].x += 600;
			starCoordinateLevelThree[i].x1 += 600;
		}


		
		for (int i = 0; i < 8; i++){
			enemyCoordinateLevelThree[i].x  += 600;
			enemyCoordinateLevelThree[i].x1 += 600;
		}
		for (int i = 0; i < 4; i++){
			lifeCoordinateLevelThree[i].x += 600;
			lifeCoordinateLevelThree[i].x1 +=600;
		}
		
	}
	if (ballx+ 60 <= obstacleCoordinateLevelThree[obstacleIndexLevelThree].x || (balljumpcoordinate + bally) >= obstacleCoordinateLevelThree[obstacleIndexLevelThree].y1 || bally+50 <= obstacleCoordinateLevelThree[obstacleIndexLevelThree].y)
	{
		for (int i = 0; i < 6; i++){
			obstacleCoordinateLevelThree[i].x -= 10;
			obstacleCoordinateLevelThree[i].x1 -= 10;
		}
		for (int i = 0; i < 14; i++){
			starCoordinateLevelThree[i].x -= 10;
			starCoordinateLevelThree[i].x1 -= 10;
		}

		
		for (int i = 0; i < 4; i++){
			backgroundLevelThreeCoordinate[i].x -= 10;
			if (backgroundLevelThreeCoordinate[i].x <= -600)
				backgroundLevelThreeCoordinate[i].x = 1400;
		}
		for (int i = 0; i < 8; i++){
			enemyCoordinateLevelThree[i].x -= 10;
			enemyCoordinateLevelThree[i].x1 -= 10;
		}
		for (int i = 0; i < 4; i++){
			lifeCoordinateLevelThree[i].x -= 10;
			lifeCoordinateLevelThree[i].x1 -= 10;
		}
		
	}







}


void leftArrowLevelThree(){


	if (ballx + 70 < enemyCoordinateLevelThree[enemyIndexLevelThree - 1].x && enemyIndexLevelThree > 0){
		enemyIndexLevelThree--;
	}
	if (ballx+70<lifeCoordinateLevelThree[lifeIndexLevelThree-1].x1 && lifeIndexLevelThree>0){
		lifeIndexLevelThree--;
	}
	if (ballx<lifeCoordinateLevelThree[lifeIndexLevelThree - 1].x1 && bally + balljumpcoordinate< lifeCoordinateLevelThree[lifeIndexLevelThree - 1].y1 && lifeIndexLevelThree>0 && lifeCoordinateLevelThree[lifeIndexLevelThree - 1].y<200){
		if (healthIndex < 4){
			healthIndex++;
		}

		lifeCoordinateLevelThree[lifeIndexLevelThree-1].y += 10000;
		

	}
	if (ballx< starCoordinateLevelThree[starIndexLevelThree-1].x1){
		if(bally + balljumpcoordinate<starCoordinateLevelThree[starIndexLevelThree-1].y){
			starCoordinateLevelThree[starIndexLevelThree-1].y=-20000;
			starCollectlevelThree++;
		}
		starIndexLevelThree--;
	}
	if (obstacleCoordinateLevelThree[obstacleIndexLevelThree - 1].x1 - 40 > ballx && obstacleIndexLevelThree>0){
		obstacleIndexLevelThree--;

	}
	 
	if (ballx < enemyCoordinateLevelThree[enemyIndexLevelThree - 1].x1 && bally + balljumpcoordinate< 150 && enemyIndexLevelThree>0){
		
		healthIndex--;
		if(healthIndex==-1)
			gameOverLevelThree=true;
		//cout<<healthIndex<<endl;
		for (int i = 0; i < 6; i++){
			obstacleCoordinateLevelThree[i].x += 600;
			obstacleCoordinateLevelThree[i].x1 += 600;
		}
		for (int i = 0; i < 14; i++){
			starCoordinateLevelThree[i].x += 600;
			starCoordinateLevelThree[i].x1 += 600;
		}



		for (int i = 0; i < 8; i++){
			enemyCoordinateLevelThree[i].x += 600;
			enemyCoordinateLevelThree[i].x1 += 600;
			
		}
		for (int i = 0; i < 4; i++){
			lifeCoordinateLevelThree[i].x += 600;
			lifeCoordinateLevelThree[i].x1 += 600;
		}


	}


	if (ballx >= obstacleCoordinateLevelThree[obstacleIndexLevelThree - 1].x1 || (balljumpcoordinate + bally) >= obstacleCoordinateLevelThree[obstacleIndexLevelThree - 1].y1 || bally + 70 <= obstacleCoordinateLevelThree[obstacleIndexLevelThree - 1].y || obstacleIndexLevelThree==0)
	{
		for (int i = 0; i < 6; i++){
			obstacleCoordinateLevelThree[i].x += 10;
			obstacleCoordinateLevelThree[i].x1 += 10;
		}
		for (int i = 0; i < 14; i++){
			starCoordinateLevelThree[i].x += 10;
			starCoordinateLevelThree[i].x1 += 10;
		}

		for (int i = 0; i < 4; i++){
			backgroundLevelThreeCoordinate[i].x += 10;
			if (backgroundLevelThreeCoordinate[i].x >= 1400)
				backgroundLevelThreeCoordinate[i].x = -600;
		}
		for (int i = 0; i < 8; i++){
			enemyCoordinateLevelThree[i].x += 10;
			enemyCoordinateLevelThree[i].x1 += 10;
		}
		for (int i = 0; i < 4; i++){
			lifeCoordinateLevelThree[i].x += 10;
			lifeCoordinateLevelThree[i].x1 += 10;
		}
		
	}
	





}


void levelThreeCoordinate(){

	int sum = -200;
	for (int i = 0; i <4; i++){
		backgroundLevelThreeCoordinate[i].y = 0;
		backgroundLevelThreeCoordinate[i].x = sum;
		sum += 500;
	}


	obstacleCoordinateLevelThree[0].x=1200;
	obstacleCoordinateLevelThree[1].x=2200;
	obstacleCoordinateLevelThree[2].x=4600;
	obstacleCoordinateLevelThree[3].x=5600;
	obstacleCoordinateLevelThree[4].x=6500;
	obstacleCoordinateLevelThree[5].x=7500;
	obstacleCoordinateLevelThree[6].x=77500;
	obstacleCoordinateLevelThree[6].x1=77500;

	for(int i=0;i<6;i++){
		obstacleCoordinateLevelThree[i].x1=obstacleCoordinateLevelThree[i].x+80;
		obstacleCoordinateLevelThree[i].y=140;
		obstacleCoordinateLevelThree[i].y1=obstacleCoordinateLevelThree[i].y+150;
	}

	starCoordinateLevelThree[0].x=1000;
	starCoordinateLevelThree[1].x=1070;
	starCoordinateLevelThree[2].x=1450;
	starCoordinateLevelThree[3].x=1900;
	starCoordinateLevelThree[4].x=3400;
	starCoordinateLevelThree[5].x=3470;
	starCoordinateLevelThree[6].x=3850;
	starCoordinateLevelThree[7].x=4900;
	starCoordinateLevelThree[8].x=4970;
	starCoordinateLevelThree[9].x=6100;
	starCoordinateLevelThree[10].x=6170;
	starCoordinateLevelThree[11].x=7200;
	starCoordinateLevelThree[12].x=8700;
	starCoordinateLevelThree[13].x=8770;


	for(int i=0;i<14;i++){
		starCoordinateLevelThree[i].x1=starCoordinateLevelThree[i].x+50;
		starCoordinateLevelThree[i].y=160;
		starCoordinateLevelThree[i].y1=starCoordinateLevelThree[i].y+50;
	}


	enemyCoordinateLevelThree[0].x=1700;
	enemyCoordinateLevelThree[1].x=2500;
	enemyCoordinateLevelThree[2].x=3100;
	enemyCoordinateLevelThree[3].x=4000;
	enemyCoordinateLevelThree[4].x=5200;
	enemyCoordinateLevelThree[5].x=6900;
	enemyCoordinateLevelThree[6].x=7800;
	enemyCoordinateLevelThree[7].x=8400;
	enemyCoordinateLevelThree[8].x=18400;
	enemyCoordinateLevelThree[8].x1=18400;
	for(int i=0;i<8;i++){
		enemyCoordinateLevelThree[i].x1=enemyCoordinateLevelThree[i].x+100;
		enemyCoordinateLevelThree[i].y=150;
		enemyCoordinateLevelThree[i].y1=enemyCoordinateLevelThree[i].y+100;
	}


	lifeCoordinateLevelThree[0].x=2800;
	lifeCoordinateLevelThree[1].x=3700;
	lifeCoordinateLevelThree[2].x=5900;
	lifeCoordinateLevelThree[3].x=8100;

	
	for(int i=0;i<4;i++){
		lifeCoordinateLevelThree[i].x1=lifeCoordinateLevelThree[i].x+50;
		lifeCoordinateLevelThree[i].y=160;
		lifeCoordinateLevelThree[i].y1=lifeCoordinateLevelThree[i].y+50;
	}

	healthWidth[0]=46;
	healthWidth[1]=92;
	healthWidth[2]=137;
	healthWidth[3]=177;
	healthWidth[4]=222;


	 obstacleIndexLevelThree=0;
	 starIndexLevelThree=0;
	 enemyIndexLevelThree=0;
	 lifeIndexLevelThree=0;
	 starCollectlevelThree=0;
	 healthIndex=2;
	 completedLEvelThree=false;
	 gameOverLevelThree=false;



}
