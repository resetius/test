#include <string.h>
#include <stdio.h>

int f() { }

int romanToInt(char * s){
    int l = strlen(s);
    int i;
    int A[256];
    int sum = 0;
    A['I'] = 1;
    A['V'] = 5;
    A['X'] = 10;
    A['L'] = 50;
    A['C'] = 100;
    A['D'] = 500;
    A['M'] = 1000;
    for (i = 0; i < l; i = i+1) {
        if (i < l-1 && A[s[i]] < A[s[i+1]]) {
            sum += A[s[i+1]]-A[s[i]];
            i++;
        } else {
            sum += A[s[i]];
        }
    }
    return sum;
}
