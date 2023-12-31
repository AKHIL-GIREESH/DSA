#include<stdio.h>
#include<string.h>

char infix[50],postfix[50],stackk[50],top=-1;

int ISP(char elem){
    if(elem == '('){
        return 0;
    }
    else if(elem == '^'){
        return 3;
    }else if(elem == '/' || elem == '*'){
        return 2;
    }else{
        return 1;
    }
}

int ICP(char elem){
    if(elem == '(' || elem == '^'){
        return 4;
    }else if(elem == '/' || elem == '*'){
        return 2;
    }else{
        return 1;
    }
}

void PUSH(char c){
    top++;
    stackk[top] = c;
}

char POP(){
    char c;
    c = stackk[top];
    top--;
    return c;
}

void main(){
    char x,y;
    int i=0,j = 0,len;
   printf("Input the infix expression : ");
   scanf("%s",infix);
  
  len = strlen(infix);
  printf("%d",len);
  
  infix[len] = ')';
  
   PUSH('(');
   while(top != -1){
       printf("check1");
       x = infix[i];
       i++;
       if(x <= 'z' && x >= 'a'){
           postfix[j] = x;
           j++;
       }else if(x == ')'){
           y = POP();
           while(y != '('){
               postfix[j] = y;
               j++;
               y = POP();
           }
           PUSH(y);
       }else{
           y = POP();
           while(ISP(y) >= ICP(x)){
               postfix[j] = y;
               j++;
               y = POP();
           }
           PUSH(y);
           PUSH(x);
       }
   }
   
   for(int k=0;k<strlen(postfix);k++){
			printf("%c",postfix[k]);
	}
   printf("%s",postfix);
}
