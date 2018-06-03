/*
███████████████████████████
███████▀▀▀░░░░░░░▀▀▀███████
████▀░░░░░Creator░░░░░▀████
███│░░░░░░░░Of░░░░░░░░░│███
██▌│░░░░DEWA NANDA░░░░░│▐██
██░└┐░░░░░░░░░░░░░░░░░┌┘░██
██░░└┐░░░░░░░░░░░░░░░┌┘░░██
██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██
██▌░│██████▌░░░▐██████│░▐██
███░│▐███▀▀░░▄░░▀▀███▌│░███
██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██
██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██
████▄─┘██▌░░░░░░░▐██└─▄████
█████░░▐█─┬┬┬┬┬┬┬─█▌░░█████
████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████
█████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████
███████▄░░░░░░░░░░░▄███████
██████████▄▄▄▄▄▄▄██████████
███████████████████████████
*/

#ifndef DEWGRAPHICLIB_H_INCLUDED
#define DEWGRAPHICLIB_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <array>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;
int arraystr(string *p);
extern void setColor(int value);
extern void gotoxy(int x, int y);
extern void createFontSmall(string teks,int y, int, int);
extern int menu(string teks[],int maks, string font, int x,int y);
extern void createFontSmall(string teks,int y,int fx, int fy);
extern int random(int ,int);


#endif // DEWGRAPHICLIB_H_INCLUDED
