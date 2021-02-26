#ifndef SLIDE_H
#define SLIDE_H

#include <stdlib.h>

#define SLIDE_RIGHT 'R'
#define SLIDE_LEFT 'L'

int slide_line(int *line, size_t size, int direction);
void moveRight(int *line, size_t size);
void moveLeft(int *line, size_t size);

#endif /* SLIDE_H */
