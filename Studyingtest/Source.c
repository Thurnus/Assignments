#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

int main() {
	//priklad1(); //signed a unsigned vyrazy
	//priklad2(); //vypis stringu
	//priklad3(); //pouziti definovanych vyrazu, vypocet kruhu
	//priklad4(); //explicitni pretypovani
	//priklad5(); //podminka existence reseni v oboru R
	//priklad6(); //hledani korenu
	//priklad7(); //bodovany ukol
	//priklad8(); //znamka
	//priklad9(); //zjisteni charu
	priklad10();
}

int priklad1() {
	char var_char;
	char unsigned var_uchar;

	var_char = 127;
	printf("%d\n", var_char);
	var_char = 'a';
	printf("%d\n", var_char);
	var_char = -127;
	printf("%d\n", var_char);
	var_char = 128;
	printf("%d\n", var_char);

	var_uchar = 127;
	printf("%d\n", var_uchar);
	var_uchar = 'a';
	printf("%d\n", var_uchar);
	var_uchar = -125;
	printf("%d\n", var_uchar);
	var_uchar = 128;
	printf("%d\n", var_uchar);
}

int priklad2() {
	char* string1 = "\tMama vola: \n\"Ahoj Pepo\041\"";
	printf("%s\n", string1);

	char* string2 = "\tMama vola: \n\"Ahoj Pepo\041\"";
	printf("%s\n", string2);

	char string3[50] = "\tMama vola: \n\"Ahoj Pepo\041\"";
	printf("%s\n", string3);
}

int priklad3() {
	int r;
	float pi = PI;
	printf("Zadej velikost polomeru: ");
	int count = scanf("%d", &r);
	float obvod = (2 * pi * r);
	float obsah = (pi * r * r);
	int d = r * 2;
	printf("Polomer je %d.\n", r);
	printf("Prumer je %d.\n\n", d);
	printf("Obvod kruhu je %f.\n", obvod);
	printf("Obsah kruhu je %f.\n", obsah);
	return 0;
}

int priklad4() {
	int i1 = 10;
	double f1;
	f1 = sqrt((double)i1);

	float f2 = 10.23;
	int i2;
	i2 = (int)f2;
}

int priklad5() {
	int a, b, c, d;
	double x1, x2;

	printf("Zadej koeficient a: ");
	scanf("%d", &a);
	printf("\nZadej koeficient b: ");
	scanf("%d", &b);
	printf("\nZadej koeficient c: ");
	scanf("%d", &c);

	d = (int)pow(b, 2) - 4 * a * c;
	(d > 0 ? printf("\nRovnice ma reseni v oboru realnych cisel.") : printf("Rovnice nema reseni v oboru realnych cisel."));
	return;
}

int priklad6() {
	int a, b, c, d;
	double x1, x2;
	printf("Zadej koeficient a: ");
	scanf("%d", &a);
	printf("\nZadej koeficient b: ");
	scanf("%d", &b);
	printf("\nZadej koeficient c: ");
	scanf("%d", &c);
	d = (int)pow(b, 2) - 4 * a * c;
	(d > 0 ? x1 = (-b + sqrt((double)d) / (2 * a)), x2 = (-b - sqrt((double)d) / (2 * a)), printf("Koreny jsou %.2f a %.2f\n", x1, x2) 
		: (d < 0 ? printf("Rovnice nema reseni v oboru realnych cisel.") : (x1 = (-b/(2*a))), printf("Koren je %.0f", x1)));
	return;
}

int priklad7() {
	int a;
	printf("Zadejte cislo: ");
	int count = scanf("%d", &a);
	if (a%2 == 0) {
		if ((a%3 == 0)) {
			printf("\nCislo %d je delitelne 2 i 3.", a);
		}
		else {
			printf("\nCislo %d je delitelne 2.", a);
		}
	}
	else {
		if ((a%3 == 0)) {
			printf("\nCislo %d je delitelne 3.", a);
		}
		else {
			printf("\nCislo %d neni delitelne 2 ani 3.",a);
		}
	}
}

int priklad8()
{
	int body;
	char znamka;
	printf("Zadejte pocet bodu: ");
	int sfc = scanf("%d", &body);
	if (body > 100 || body < 0) {
		printf("Zadan neplatny pocet bodu.\n");
	}
	else {
		if (body <= 100 && body >= 90) {
			znamka = 'A';
		}

		if (body < 90 && body >= 80) {
			znamka = 'B';
		}

		if (body < 80 && body >= 76) {
			znamka = 'C';
		}

		if (body < 76 && body >= 71) {
			znamka = 'D';
		}

		if (body <71 && body >= 60) {
			znamka = 'E';
		}

		if (body < 60 && body >= 0) {
			znamka = 'F';
		}
		printf("Znamka je %c\n", znamka);
	}
	
	return 0;
}

int priklad9()
{
	char znak;
	printf("Zadejte znak: ");
	scanf("%c", &znak);

	if (znak >= 'A' && znak <= 'Z') {
		printf("velke pismeno %c\n", znak);
	} else if (znak >= 'a' && znak <= 'z') {
		printf("male pismeno %c\n", znak);
	}
	else if (znak >= '0' && znak <= '9') {
		printf("cislice %c\n", znak);
	}
	else if (znak == '!')  {
		printf("vykricnik\n");
	}
	else if (znak == '?') {
		printf("otaznik\n");
	}
	else if (znak == '*') {
		printf("hvezdicka\n");
	}
	else if (znak == '@') {
		printf("zavinac\n");
	}
	else if (znak == '#') {
		printf("krizek\n");
	}
	else if (znak == '^') {
		printf("striska\n");
	}
	else printf("jiny znak\n");
}

int priklad10()
{
	printf("Prvocisla: ");
	for (int i = 0; i < 100; i++) {
		int count = 0;

		for (int a = 1; a <= i; a++) {
			if (i % a == 0) count++;
		}
		
		if (count == 2) {
			printf("%d ", i);
		}
	}
}
