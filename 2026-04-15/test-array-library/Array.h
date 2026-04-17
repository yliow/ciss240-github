// file: Array.h

#ifndef ARRAY_H
#define ARRAY_H

void println(int x[], int start, int end);
bool array_isequal(int x[], int x_len, int y[], int y_len);
void array_concat(int x[], int & x_len, int y[], int y_len);
void array_pushback(int x[], int & x_len, int value);
void bubblesort(int x[], int start, int end);
int binarysrch(int x[], int start, int end, int target);

#endif

