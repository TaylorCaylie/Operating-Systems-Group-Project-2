#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

// This program simulates features of the v6 file system (add more details later)

int main(int argc, char *argv[]) {
    FILE *filesys = NULL; //initialize file input
    size_t nlines = 0;
    char a[1800] = ""; 
    char command[100]; //command from user input inialization 
    char* open[2];
    int i;
    printf("--Command Options-- \n q to quit \n openfs file_name\n initfs n1 n2\n count-free\n" );
    int q = 1; //q is the quit command - part of the while loop condition

    while(q){

        printf("Enter a command: ");
        fgets(command, 100, stdin);
        if(strcmp(command, "q\n") == 0){ //if user wants to quit then exit out of loop and program
            printf("Exiting...");
            q = 0;
        }else if(strstr(command, "openfs") != NULL){ //open the file that represents the disk drive
            char* token = strtok(command, " ");
            i=0; //access indices 
            while(token!= NULL){ //parce the input to get filename
                open[i++] = token;
                token = strtok(NULL, " ");
            } //the filename is in open[1]

            // -----testing-----
            // for(i=0; i< 2; ++i){ 
            //     printf("%s\n", open[i]);
            // }

        }else if(strstr(command, "initfs")!= NULL){
        

        }else if(strstr(command, "count-free")!= NULL){


        }else{
            printf("Sorry invalid input, try again! \n");
        }
    }

    return 0;
}