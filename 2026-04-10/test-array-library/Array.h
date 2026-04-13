// file: Array.h

#ifndef ARRAY_H
#define ARRAY_H

void println(int x[], int start, int end);
bool array_isequal(int x[], int x_len, int y[], int y_len);
bool array_concat(int x[], int & x_len, int y[], int y_len);
void array_pushback(int x[], int & x_len, int value);

#endif

