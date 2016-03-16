#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int n;
		
	n = atoi(argv[1]);
	srand(atoi(argv[2]));

	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	char **square;

	square = new char*[n];

	int wymiar = 3; 
 
	for (int i = 0; i<n; i++){
		square[i] = new char[n];
		for (int j = 0; j<n; j++){
			int losowa = 97 + rand() % 25;
			square[i][j] = (char) losowa;
		}
	}
	
	return square;
}

void drawCharSquare(char **square, int n)
{
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			cout << square[i][j] << " ";
		}
		cout << endl;
	}
}