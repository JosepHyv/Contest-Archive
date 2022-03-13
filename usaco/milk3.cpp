/*
ID: sonnyak1
LANG: C++11
TASK: milk3
*/
#include <stdio.h>
int A, B, C;
int CB[21][21]; // All states

void readFile() {
    FILE *f;
    f = fopen("milk3.in", "r");
    fscanf(f, "%d%d%d", &A, &B, &C);
    fclose(f);
}

void writeFile() {
    FILE *f; int i;
    f = fopen("milk3.out", "w");
    for(i = 0; i <= C; i++) {
        if(CB[i][C - i] == 1) {
            if((i != C-B) && (i != 0)) fprintf(f, " ");
            fprintf(f, "%d", i);
        }
    }
    fprintf(f, "\n");
    fclose(f);
}

// do brute-force search, c/b: current state
void search(int c, int b) {
    int a;
    if(CB[c][b] == 1) return; // already searched
    CB[c][b] = 1;
    a = C-b-c; // calc amount in A
    // do all moves:
    // c->b
    if(B < c+b) search(c - (B - b), B);
    else search(0, c + b);
    // b->c
    if(C < c+b) search(C, b - (C - c));
    else search(c + b, 0);
    // c->a
    if(A < c+a) search(c - (A - a), b);
    else search(0, b);
    // a->c
    if(C < c+a) search(C, b);
    else search(c + a, b);
    // b->a
    if(A < b+a) search(c, b - (A - a));
    else search(c, 0);
    // a->b
    if(B < b+a) search(c, B);
    else search(c, b + a);
   }
   
int main () {
    readFile();
    search(C, 0);
    writeFile();
    return 0;
}
