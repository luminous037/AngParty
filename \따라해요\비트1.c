void route1(){ //4박자
	int num;
	int index = 0;
	for (int i = 0; i < 4; i++) {
		num = rand()%2;
		srand(time(NULL));
		if (num == 0) {
			printf("챙 쳐");
			t[index] = time(NULL);
		}
		else if (num == 1) {
			printf("북 쳐");
			t[index] = time(NULL);
		}
		index++;
		Sleep(700);
	}
}
