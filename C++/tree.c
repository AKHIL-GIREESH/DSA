#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h> 

#define RESET   "\033[0m"
#define BRIGHT_YELLOW "\033[93m"
#define WHITE   "\033[37m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define BROWN   "\033[38;5;94m"

char r1ball, r2ball, r3ball, r4ball, blink1, blink2;

void printTree(char star) {
    system("clear"); 
    printf("\n\n");
    printf(BRIGHT_YELLOW"                %c\n"RESET, star);
    printf(RED"                ^\n"RESET);
    
    //r1
    printf(GREEN"               ~*~\n"RESET);
    printf(WHITE"            %c"RESET, r1ball); //light
    
    if (blink1 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink1);//blink
    else
    	printf(GREEN"%c"RESET, blink1);
    		
    printf(GREEN"*~*~*"RESET);
    
     if (blink1 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink1);//blink
    else
    	printf(GREEN"%c"RESET, blink1);
    
    printf(WHITE"%c\n"RESET, r1ball);
    
    //r2
    printf(GREEN"              ~*~*~\n"RESET);
    printf(GREEN"            ~*~*~*~*~\n"RESET);
    printf(WHITE"        %c"RESET, r2ball); //light
    
    if (blink2 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink2);//blink
    else
    	printf(GREEN"%c"RESET, blink2);
    
    printf(GREEN"*~*~*~"RESET);
    
     if (blink1 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink1);//blink
    else
    	printf(GREEN"%c"RESET, blink1);
    	
    printf(GREEN"~*~*~*"RESET);
    
    if (blink2 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink2);//blink
    else
    	printf(GREEN"%c"RESET, blink2);
    
    printf(WHITE"%c\n"RESET, r2ball); //light
    
    //r3
    printf(GREEN"            ~*~*~*~*~\n"RESET);
    printf(GREEN"          ~*~*~*~*~*~*~\n"RESET);
    printf(GREEN"        ~*~*~*~*~*~*~*~*~\n"RESET);
    
    printf(WHITE"     %c"RESET, r3ball); //light
    
    if (blink1 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink1);//blink
    else
    	printf(GREEN"%c"RESET, blink1);
    	
    
    
    printf(GREEN"*~*~*~*~*"RESET);
    
    if (blink2 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink2);//blink
    else
    	printf(GREEN"%c"RESET, blink2);
    	
    printf(GREEN"*~*~*~*~*"RESET);	
    
    if (blink1 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink1);//blink
    else
    	printf(GREEN"%c"RESET, blink1);
    
    
    printf(WHITE"%c\n"RESET, r3ball); //light
    
    //r4
    printf(GREEN"         ~*~*~*~*~*~*~*~\n"RESET);
    printf(GREEN"       ~*~*~*~*~*~*~*~*~*~\n"RESET);
    printf(GREEN"     ~*~*~*~*~*~*~*~*~*~*~*~\n"RESET);
    printf(WHITE"  %c"RESET, r4ball); //light
    
    if (blink2 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink2);//blink
    else
    	printf(GREEN"%c"RESET, blink2);
    
    printf(GREEN"*~*~*~*~*~*~"RESET);
    
    if (blink1 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink1);//blink
    else
    	printf(GREEN"%c"RESET, blink1);
    	
    printf(GREEN"~*~*~*~*~*~*"RESET);
    
    if (blink2 != '~')
	printf(BRIGHT_YELLOW"%c"RESET, blink2);//blink
    else
    	printf(GREEN"%c"RESET, blink2);
    
    printf(WHITE"%c\n"RESET, r4ball); //light
    printf(BROWN"               |||\n"RESET);
    printf(BROWN"               |||\n"RESET);
    printf(BROWN"               |||\n"RESET);
    
    printf("\nEnter ctrl + c to exit\n");
   // printf("I have added some animations too! please run the code\n");
}

void main() {
    char star1 = '*';
    char star2 = 'x';
    char ball1 = '@';
    char ball2 = ' ';
    
  /*
    ball2 = '@';
    blink1 = blink2 = 'x';
    r1ball= r2ball= r3ball =  r4ball = '@';
    printTree(star2);
    
    */
   
    while (1) {
    	 blink1 = 'x';
    	 blink2 = '~';
    	 r1ball = '@';
        printTree(star1);
        r1ball = ' ';
        r2ball = '@';
        usleep(300000); 
        printTree(star2);
        r2ball = ' ';
        r3ball = '@';
        blink1 = '~';
        blink2 = 'x';
        usleep(300000); 
        printTree(star1);
        r3ball = ' ';
        r4ball = '@';
        usleep(300000); 
        printTree(star2);
        r4ball = ' ';
        usleep(300000); 
        
    }
    
    
}
