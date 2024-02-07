#include<stdio.h>
#include<string.h>
#include<math.h>

char infix[20],postfix[20],Stack[20];
int top=-1,Top=-1,Stack2[20];

void PUSH(char val){
    Stack[++top] = val;
}

char POP(){
    return Stack[top--];
}

void PUSHM(int val){
    Stack2[++Top] = val;
}

int POPM(){
    return Stack2[Top--];
}

int ISP(char v){
    if(v == ')'){
        return 0;
    }else if(v == '^'){
        return 3;
    }else if(v == '*'){
        return 2;
    }else if(v == '/'){
        return 2;
    }else if(v == '-'){
        return 1;
    }else if(v == '+'){
        return 1;
    }
}

int ICP(char v){
    if(v == ')'){
        return 4;
    }else if(v == '^'){
        return 3;
    }else if(v == '*'){
        return 2;
    }else if(v == '/'){
        return 2;
    }else if(v == '-'){
        return 1;
    }else if(v == '+'){
        return 1;
    }
}

void reverseString(){
    int start=0,end=strlen(infix)-1;
    char temp;
    
    printf("test");
    while(start<end){
        temp = infix[start];
        infix[start] = infix[end];
        infix[end] = temp;
        
        start++;
        end--;
    }
    
    for(int i=0;i<strlen(infix);i++){
        printf("%c",infix[i]);
    }
}

void main(){
    int i=0,j=0,xx,y;
    char item,x;
    printf("Input the infix expression : ");
    scanf("%s",infix);
    
    printf("test");
    
    reverseString();
    
    infix[strlen(infix)] = '(';
    PUSH(')');
    
    while(top!=-1){
        item = infix[i];
        i++;
    //     //printf("%c",item);
        
        if(item == '('){
            x = POP();
            while(x != ')'){
                postfix[j] = x;
                j++;
                x = POP();
            }
        }else if(item == ')' || item == '+' || item == '-' || item == '*' || item == '/' || item == '^'){
            x = POP();
            while(ISP(x)>ICP(item)){
                postfix[j] = x;
                j++;
                x=POP();
            }
            PUSH(x);
            PUSH(item);
        }else{
            postfix[j] = item;
            j++;
        }
    }
    
    postfix[j] = '\0';
    
    printf("%s",postfix);
    
    //reverseString2();
    
    // for(int i=0;i<strlen(postfix);i++){
    //     printf("%c",postfix[i]);
    // }
    // printf("\n");
    
    //postfix[j]='\0';
    i=0;
    item = postfix[i];
    while(item != '\0'){
        if(item == '+' || item == '-' || item == '*' || item == '/' || item == '^'){
            xx = POPM();
            y = POPM();
            printf("%d",xx);
            if(item == '+'){
                PUSHM(xx+y);
            }else if(item == '-'){
                PUSHM(xx-y);
            }else if(item == '*'){
                PUSHM(xx*y);
            }else if(item == '/'){
                PUSHM(xx/y);
            }else{
                PUSHM(pow(xx,y));
            }
        }else{
            printf("Input the number : ");
            scanf("%d",&y);
            PUSHM(y);
        }
        i++;
        item = postfix[i];
    }
    
    printf("%d",POPM());
    
    
}