#ifndef MOTEUR_H_INCLUDED
#define MOTEUR_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<SDL2/SDL.h>

typedef struct position
{
	int x;
	int y;
}position;

typedef struct dimension
{
	int height;
	int width;
}dimension;

typedef struct objet
{
	int v_h;	
	position pos;
	dimension dim;
}objet;

#endif
