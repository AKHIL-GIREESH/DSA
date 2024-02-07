#include<stdio.h>

char stack[20],top=-1;

void PUSH(char _v){
    stack[++top] = _v;
}

char POP(){
    return stack[top--];
}

void main(){
    char *s = "({[])",x,flag=0;
    while(*s != '\0'){
        if(*s == '(' || *s == '[' || *s == '{' ){
            PUSH(*s);
        }else{
            x = POP();
            if(*s == ')'){
                if(x != '('){
                    flag=1;
                    break;
                }
            }else if(*s == '}'){
                if(x != '{'){
                    flag=1;
                    break;
                }
            }else if(*s == ']'){
                if(x != '['){
                    flag=1;
                    break;
                }
            }
        }
        s++;
    }
    

    (!flag && top==-1)?printf("balanced"):printf("!balanced");
    
}