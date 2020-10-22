// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Calc.h"
#include <string>

void drawRect(int topLeftX, int topLeftY, int bottomRightX, int bottomRightY,int bufWidth, int bufHeight, int *buffer[]);
void display(int bufWidth, int bufHeight, int *buffer[], std::string drawSymbol, std::string emptySymbol);
void clear(int bufWidth, int bufHeight, int *buffer[]);
int** create(int bufWidth, int bufHeight);
void removeBuff(int bufWidth, int bufHeight, int *buffer[]);

int main(int argc, char *argv[])
{
	int width = 10;
	int height = 10;
	std::string drawSymbols = "##";
	std::string drawEmpty = "  ";

	int **buffer = create(width, height);

	int topLeftX = 1;
	int topLeftY = 1;

	int bottomRightX = 9;
	int bottomRightY = 9;

	clear(width, height, buffer);
	drawRect(topLeftX, topLeftY, bottomRightX, bottomRightY, width, height, buffer);
	display(width, height, buffer, drawSymbols, drawEmpty);
	
	removeBuff(width, height, buffer);
	return 0;
}

void drawRect(int topLeftX, int topLeftY, int bottomRightX, int bottomRightY, int bufWidth, int bufHeight, int *buffer[]) {
	for (int i = 0; i < bufHeight; i++) {
		for (int j = 0; j < bufWidth; j++) {
			if (i == topLeftY || i == bottomRightY) {
				//Draw horizontal
				if (j >= topLeftX && j <= bottomRightX) {
					buffer[i][j] = 1;
				}
			}
			if (i > topLeftY && i < bottomRightY) {
				if (j == topLeftX || j == bottomRightX) {
					buffer[i][j] = 1;
				}
			}
		}
	}
}

void display(int bufWidth, int bufHeight, int *buffer[], std::string drawSymbol, std::string emptySymbol) {
	for (int i = 0; i < bufHeight; i++) {
		for (int j = 0; j < bufWidth; j++) {
			std::string item = buffer[i][j] == 0 ? emptySymbol : drawSymbol;
			std::cout << item;
		}
		std::cout << std::endl;
	}
}

void clear(int bufWidth, int bufHeight, int *buffer[]) {
	for (int i = 0; i < bufHeight; i++) {
		for (int j = 0; j < bufWidth; j++) {
			buffer[i][j] = 0;
		}
	}
}

int** create(int bufWidth, int bufHeight) {
	int **buffer = new int *[bufHeight];

	for (int i = 0; i < bufHeight; i++) {
		buffer[i] = new int[bufWidth];
	}
	return buffer;
}

void removeBuff(int bufWidth, int bufHeight, int *buffer[]) {
	for (int i = 0; i < bufHeight; i++) {
		delete [] buffer[i];
	}
	delete [] buffer;
}