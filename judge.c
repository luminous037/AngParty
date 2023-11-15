int judge(float t) {
	if (t < 0.7 && t>0.65) {
		score(1);
	}
	else if ((t <= 0.65 && t>=0.6) && (t >= 0.7 && t <= 0.75)) {
		score(2);
	}
	else {
		score(3);
	}
}
