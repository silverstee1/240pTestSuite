#ifndef FONT_H
#define FONT_H

#include "system.h"

extern int fw; // font width
extern int fh; // font height
extern int fhR; // font height real
 
int loadFont();
void releaseFont();

unsigned int measureString(char *str);

void useReducedWidthSpace(int enable);

void drawString(int x, int y, int r, int g, int b, char *str);
void drawStringS(int x, int y, int r, int g, int b, char *str);
void drawStringB(int x, int y, int r, int g, int b, char *str);
void drawStringC(int y, int r, int g, int b, char *text);

#endif