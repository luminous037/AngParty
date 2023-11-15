int sum = 0;
int life = 1;
int score(int score)
{
	
	//perfect일 경우
	if (score==1) {
		printf("Perfect!");
		sum += 30;
	}
	//Good일 경우
	else if (score==2) {
		printf("Good!");
		sum += 10;
	}
	//Bad일 경우
	else if (score == 3) {
		printf("Miss..");
		sum += 0;
		life--;
	}

	//생명이 '0'미만이 된 경우
	if (life <0) {
		printf("Game over");
		return 0;
	}

	//점수출력
	printf("Score = %d\n", sum);
}
