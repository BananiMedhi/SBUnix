#include <stdio.h>
#include <stdlib.h>
#include<sys/dirent.h>
#include <string.h>

int main(int argc, char* argv[], char* envp[]){
    
    // writing code for ls-- list all files/ folders in the current directory

     char c_cwd[100];
     //char inp[100];	
     getcwd(c_cwd,100);
     //strcpy(inp, c_cwd);	

    
    if (argc >= 2){
          strcat(c_cwd,argv[1]);
    } else
          getcwd(c_cwd, 100);

    readdir(c_cwd);
    return 1;	
  
}
