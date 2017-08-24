//*********Ver.0001********
//For church presentation<<<song slides and bg instrumentals>>>
//compatible with powerpoint 2013
//works with SDA Song Database "S S D" 
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main () {
    char progName[10];      //file name<<power point file" song lyrics in slides"
    char ext[5] = ".pps";  //extention for power point 2013
    char ext2[5] = ".mp3"; //extention for corresponding song instrumental
    char progName2[10]; //corresponding song instrumental
    next:
    printf("\nENTER HYMAL NUMBER:  ");
    scanf("%s", progName);
    strcpy(progName2,progName);
    strcat(progName2,ext2);
    system(progName2);
    strcat(progName,ext);
    system(progName);
    goto next;
    return 0;
            }
            /*programmers:
            kiyingi denis paul
            Mbusulwa Allan */
            //Baaya Job

