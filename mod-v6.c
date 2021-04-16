#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This program simulates features of the v6 file system (add more details later)

main() {
    FILE *filesys = NULL; //initialize file input
    size_t nlines = 0;
    char a[1800] = ""; 
    char command[100]; //command from user input inialization 
    printf("--Command Options-- \n q to quit \n openfs file_name\n initfs n1 n2\n count-free\n" );
    int q = 1; //q is the quit command - part of the while loop condition

    while(q){

        printf("Enter a command: ");
        fgets(command, 100, stdin);
        if(strcmp(command, "q\n") == 0){ //if user wants to quit then exit out of loop and program
            printf("Exiting...");
            q = 0;
        }else if(strstr(command, "openfs") != NULL){ //open the file that contains info about file system
            

        }else if(strstr(command, "initfs")!= NULL){
        

        }else if(strstr(command, "count-free")!= NULL){


        }else{
            printf("Sorry invalid input, try again! \n");
        }
    }

    return 0;
}