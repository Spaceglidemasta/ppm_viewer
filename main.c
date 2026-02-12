#include <stdio.h>
#include <stdlib.h>
#include "raylib.h"


int main(int argc, char const *argv[])
{
    
    if(argc != 2){
        printf("Invalid Argument count. Correct usage: ppm_viewer.exe <target>\n");
    }

    fopen(argv[1], "rb");


    return 0;
}
