

#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

int main(int argc, char **argv)
{
  
    int n = 3;
    int from = 1;
    int dest = 2;
    if (argc ==  1) {
      n=3;
      from=1;
      dest=2;
       
    }
    else if(argc == 2){
      from=1;
      dest=2;
      n= atoi(argv[1]);
    }
    else  if(argc == 4 ) {
       n= atoi(argv[1]);
        from= atoi(argv[2]);
	 dest= atoi(argv[3]);
	 if(from == dest){
	   printf("Invalid input the two towers cannot be the same! Closing program...");
	   exit(0);
	   
	 }
	 
      
    }
    
    towers(n, from, dest);
    exit(0);
}
