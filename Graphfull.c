#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int vertex;
    struct node* link;
}* GPTR[20],*ptr = NULL;
int n, i, j, m, v, op, top = -1, dfs[20], bfs[20], s[20], q[20], df, bf, front = -1, rear = -1;
void DFS(int);
void BFS(int);
void push(int m);
int pop();
void enqueue(int it);
int dequeue();
int search(int m[], int size, int o);
main()
{
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        GPTR[i] = NULL;
    for (i = 1; i <= n; i++) 
    {
        printf("Enter the number of adjacent vertices for vertex %d: ", i);
        scanf("%d", &m);
        ptr = GPTR[i];
        for (j = 1; j <= m; j++) 
        {
            printf("Enter the vertex: ");
            scanf("%d", &v);
            struct node* p=(struct node*)malloc(sizeof(struct node));
            p->vertex=v;
            p->link=NULL;
            if(ptr==NULL) 
            {
                GPTR[i] = p;
                ptr=p;
            }
             else 
            {
                ptr->link=p;
                ptr=p;
            }
        }
    }

    do 
    {
        printf("\nMENU\n1: DFS\n2: BFS\n3-EXIT\n");
        printf("Enter the option: ");
        scanf("%d",&op);

        switch (op) 
        {
		    case 1:	printf("enter the vertex from which traversal has to begin: ");
				    scanf("%d",&df);
				    DFS(df);
				    break;
				    
		    case 2: printf("enter the vertex from which traversal has to begin: ");
				    scanf("%d",&bf);
				    BFS(bf);
				    break;
				   
		    default:printf("EXIT\n");
		  }
    } while(op>=1 && op<=2);
}

void DFS(int v1)
 {
    int u=v1,j=0;
    push(u);
    while(top!=-1)
     {
        u=pop();
        if(search(dfs,j,u)==0)
         {
            dfs[j]=u;
            j++;
            ptr=GPTR[u];
            while(ptr!=NULL) 
            {
                push(ptr->vertex);
                ptr=ptr->link;
            }
        }
    }
   for(i=0;i<n;i++)
        if(dfs[i]!=0)
         printf("%d \t",dfs[i]);
}
void BFS(int v1) 
{
    int u=v1,j=0;
    enqueue(u);
    while(front!=-1)
     {
        u=dequeue();
        if(search(bfs,j,u)==0) 
        {
            bfs[j]=u;
            j++;
            ptr=GPTR[u];
            while(ptr!= NULL)
             {
                enqueue(ptr->vertex);
                ptr=ptr->link;
            }
        }
    }
   for(i=0;i<n;i++)
       if(bfs[i]!=0)
         printf("%d \t",bfs[i]);
        
}
void push(int m) 
{
    top++;
    s[top]=m;
}
int pop() 
{
    int h;
    h=s[top];
    top--;
    return h;
}
int dequeue() 
{
    int it;
    if(front==rear) 
    {
      it=q[front];
      front=-1;
      rear=-1;
    } 
    else
    {
      it=q[front];
      front++;
    }

 return it;
}
void enqueue(int it) 
{
    if (front == -1 && rear == -1) 
    {
     rear++;
     q[rear] = it;
     front++;
    } 
    else 
    {
     rear++;
     q[rear] = it;
    }
}
int search(int m[],int size,int o) 
{
    for (int k=0;k<size;k++)
        if (m[k]==o)
          return 1;
	 return 0;
}
