void route1(){ //4박자
	int num;
	int index = 0;
	for (int i = 0; i < 4; i++) {
		num = rand()%2; // 북 or 챙
		srand(time(NULL));
		if (num == 0) {  //0이면 챙 제시
			printf("챙 쳐 ");
			t[index] = time(NULL);
			order[index] = num;
		}
		else if (num == 1) { //1 이면 북 제시
			printf("북 쳐 ");
			t[index] = time(NULL);
			order[index] = num;
		}
		index++;
		if (i == 3) return 0;
		else Sleep(800); //탁 -> 탁 사이 시간
	}
}

void route2() { //5박자
	int num;
	int index = 0;
	for (int i = 0; i < 5; i++) {
		num = rand() % 2; // 북 or 챙
		srand(time(NULL));
		if (num == 0) {  //0이면 챙 제시
			printf("챙 쳐 ");
			t[index] = time(NULL);
			order[index] = num;
		}
		else if (num == 1) { //1 이면 북 제시
			printf("북 쳐 ");
			t[index] = time(NULL);
			order[index] = num;
		}
		index++;
		if (i == 0) Sleep(370);
		else if (i == 4) Sleep(860);
		else Sleep(500);
	}
}

void Showbit() {
	for (int i = 0; i < 4; i++) {
		if(i==0) Sleep(1000);
		route1();
		Sleep(3500);
		route2();
		Sleep(3000);
	}
	return;
}
