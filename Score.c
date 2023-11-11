int score(int score)
{
	int life = 1;
	int sum = 0;
	//Bad일 경우
	if (score == 0) {
		sum += 0; life--;
	}
	//perfect일 경우
	else if (score >= -0.1 && score <= 0.1) {
		sum += 30;
	}
	//Good일 경우
	else if (score >= -0.5 && score <= 0.5) {
		sum += 10;
	}
	//생명이 '0'미만이 된 경우
	if (life < 0) return 0;

	//점수출력
	printf("Score = %d", score);
}
