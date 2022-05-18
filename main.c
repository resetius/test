#include <string.h>
#include <stdio.h>
#include "roman2int.h"
#include "roman2int.h"

int main() {
    char input[1000];
    int x;
    scanf("%s", input);
    x = romanToInt(input);
    printf("result='%d'\n", x);


    return 0;
}
