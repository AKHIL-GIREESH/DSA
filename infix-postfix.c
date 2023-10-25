#include<stdio.h>
#include<string.h>

char expString[50],popVal,opArray[50],postFix[50];
int top = -1;

void PUSH(char element){
		top++;
		for(int i=0;i<top-1;i++){
			printf("%c",opArray[i]);
		}
		printf("\n");
		opArray[top] = element;
}

char POP(){
		popVal = opArray[top];
		top--;
		return popVal;
}

int ISP(char operator){
	if( operator == '(')
		return 0;
	else if(operator == '+' || operator == '-')
		return 1;
	else if (operator == '/' || operator == '*')
		return 2;
	else if (operator == '^')
		return 3;
}

int ICP(char operator){
	if( operator == '(')
		return 4;
	else if(operator == '+' || operator == '-')
		return 1;
	else if (operator == '/' || operator == '*')
		return 2;
	else if (operator == '^')
		return 4;
}

void main(){
		int len,i=0,j=0;
		char element,x;
		printf("Input the Infix Expression");
		scanf("%s",expString);
		
		len = strlen(expString);
		printf("%d",len);
		expString[len] = ')';
		PUSH('(');
		
		while(top!=-1){
		    //printf("hiw");
			element = expString[i];
			i++;
			if(element ==')'){
			    printf("hi1\n");
				x = POP();
				while(x!='('){
					postFix[j]=x;
					j++;
					x=POP();
				}
				
			}else if(element == '(' || element == '^' || element == '/' || element == '+' || element == '-' || element == '*'){
			    printf("hi3\n");
				x = POP();
				if(ISP(x)>=ICP(element)){
					while(ISP(x)>=ICP(element)){
						postFix[j] = x;
						j++;
						x = POP();
					}
					PUSH(x);
					PUSH(element);
				}else if(ISP(x)<ICP(element)){
					PUSH(x);
					PUSH(element);
				}
			}else{
				printf("hi2\n");
				postFix[j]=element;
				j++;
			}
			
		}
		
		for(int i=0;i<len;i++){
			printf("%c",postFix[i]);
		}
		
		// 10+15/(3+2)) 
}