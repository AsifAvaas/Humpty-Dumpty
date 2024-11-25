
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>


using namespace std;


void showhighScore(){
	
	
	FILE *fp2;
	if (fopen_s(&fp2, "highscore.txt", "r") != 0) {
	cout << "Failed to open the file." << endl;
	return;
	}

	Score score_after_sorting[3]; 
	
	for (int i = 0; i <3; i++) {
		char a[25];
		int b;

		if (fscanf_s(fp2, "%s %d", a, sizeof(a), &b) == EOF) {
		cout << "Error reading from the file." << endl;
		break; 
		}

		strcpy_s(score_after_sorting[i].name, a);
		score_after_sorting[i].time = b;
	}




	fclose(fp2);




	int a1, a2, a3;

	a1 = score_after_sorting[0].time;
	char numStr1[20];
	sprintf_s(numStr1, "%d", a1);
	strcat_s(numStr1, sizeof(numStr1), " sec");

	a2 = score_after_sorting[1].time;
	char numStr2[20];
	sprintf_s(numStr2, "%d", a2);
	strcat_s(numStr2, sizeof(numStr2), " sec");

	a3 = score_after_sorting[2].time;
	char numStr3[20];
	sprintf_s(numStr3, "%d", a3);
	strcat_s(numStr3, sizeof(numStr3), " sec");

	iSetColor(0,0,0);
	iText(235, 300, score_after_sorting[0].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(670, 300, numStr1, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(235, 240, score_after_sorting[1].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(670, 240, numStr2, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(235, 175, score_after_sorting[2].name, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(670, 175, numStr3, GLUT_BITMAP_TIMES_ROMAN_24);



	

	
	





}
void highScoreSorting(){






	FILE *fp1;
	if (fopen_s(&fp1, "highscore.txt", "r") != 0) {
		cout << "Failed to open the file." << endl;
		return;
	}

	int cha;
	lineCount = 0;
	while ((cha = fgetc(fp1)) != EOF) {
		if (cha == '\n') {
			lineCount++;
		}
	}

	fclose(fp1);


	if (lineCount > 30){
		lineCount = 30;
	}
	
	if (fopen_s(&fp1, "highscore.txt", "r") != 0) {
		cout << "Failed to open the file." << endl;
		return;
	}

	Score score_bfore_sorting[30]; 
	Score temp;
	for (int i = 0; i < lineCount; i++) {
		char a[25];
		int b;

		if (fscanf_s(fp1, "%s %d", a, sizeof(a), &b) == EOF) {
			cout << "Error reading from the file." << endl;
			break; 
		}

		strcpy_s(score_bfore_sorting[i].name, a);
		score_bfore_sorting[i].time = b;
	}



	fclose(fp1);

	for (int i = 0; i < lineCount; i++){

		for (int j = i + 1; j < lineCount; j++){
			if (score_bfore_sorting[i].time > score_bfore_sorting[j].time){
				temp = score_bfore_sorting[i];
				score_bfore_sorting[i] = score_bfore_sorting[j];
				score_bfore_sorting[j] = temp;
			}
		}



	}
	if (fopen_s(&fp1, "highscore.txt", "w") != 0) {
		cout << "Failed to open the file." << endl;
		return;
	}

	for (int i = 0; i < lineCount; i++){
		fprintf_s(fp1, "%s %d\n", score_bfore_sorting[i].name, score_bfore_sorting[i].time);
	}

	fclose(fp1);


	//cout << lineCount << endl;

}

void highScoreInput(){


	iPauseTimer(0);
	iSetColor(0, 0, 0);
	iText(435, 310, nameInput, GLUT_BITMAP_TIMES_ROMAN_24);
	


}

void highScoreSave(){
	FILE *fp;

	// file opened in append mode

	if (fopen_s(&fp, "highscore.txt", "a") != 0) {
		cout << "Failed to open the file." << endl;
		return;
	}
	if(timeCounter!=0){

		fprintf_s(fp, "%s %d\n", nameSave, timeCounter);
	}
	fclose(fp);

}

