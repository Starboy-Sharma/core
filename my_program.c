// STACK IMPLEMENTATION BY PANKAJ SHARMA
#include <stdio.h>
#include<conio.h>

int stacks[5];
int tracker = -1;

int push(int x) {
    
    if (tracker > 4) {
        
        printf("STACK OVERFLOW :)");
        return 0;
    }
    
    tracker++;
    stacks[tracker] = x;

    
    return 1;
}


void pop() {
    
    if (tracker == -1) {
        printf("STACK IS EMPTY");
        return;
    }

    return tracker--;
}

void print_stack() {
    
    int t = tracker;
    
    for (int i = tracker; i >= 0; i--) {
        
        printf("%d", stacks[i]);
        printf("\t");
    }
    
    printf("\n");
}

int isEmpty()
{
    
    if (tracker > 5)
    {
        return 0;
    } else {
        return 1;
    }
}

int main()
{
    push(5);
    push(7);
    push(8);
    push(2);
    push(3);
    push(1);
    pop();

    print_stack();

    return 0;
}


            ******************************************************************************************************************



// QUEUE Impelmentation BY Pankaj Sharma
#include<stdio.h>
#include<conio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;


void insert(int item) {
    if (rear == MAX - 1) {
        printf("QUEUE IS OVERFLOW");
        return;
    }

    else {

        if (front == -1) {
            front = 0;
        }

        rear++;
        queue[rear] = item;
        return;
    }
}

void delete() {

    if (front == -1 || front > rear){
        printf("QUEUE IS UNDERFLOW");
    }

    front++;
    return;
}


void display() {

    if (front == -1) {
        printf("QUEUE IS EMPTY");
        return;
    }

    for (int i = front; i <= rear; i++) {

        printf("%d", queue[i]);
        printf("\t");
    }

    printf("\n");
}



 


void main() {

    insert(1);
    insert(5);
    insert(6);
    delete();
    insert(8);
    insert(3);
    delete();
    display();

    getch();
}



      ******************************************************************************************************************



// Double Linked List

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct node* root = NULL;

struct node {
    int data;
    struct node* next;
    struct node* prev;
};


void append()
{
    struct node* temp;
    
    temp = (struct node*) malloc(sizeof(struct node));
    
    printf("Enter node data : ");
    scanf("%d", &temp->data);
    
    temp->next = NULL;
    temp->prev = NULL;
    
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        
        while(p->next != NULL)
        {
            p = p->next;
        }

        p->next = temp;
        temp->prev = p;

    }
}


void print_link()
{
    struct node *temp;
    temp = root;

    while(temp != NULL)
    {
        printf("%d -----> ", temp->data);
        temp = temp->next;
    }
    
    printf("\n");
    
}


int length()
{
    int count = 0;
    
    
    struct node *temp;
    
    temp = root;
    
    
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    
    printf("Double Link List length is %d : \n", count);
    
    return count;
}

void delete_link()
{
    int loc;
    
    struct node *temp;
    
    printf("Enter location to delete_link \n");
    scanf("%d", &loc);
    
    if(loc > length())
    {
        printf("Invalida location for delete_link \n \n");
    }
    else if (loc == 1)
    {
        temp = root;
        
        root = temp->next;
        
        struct node *q;
        
        q = temp->next;
        
        q->prev = root;
        
    }
    else
    {
        int i = 0;
    }
    
}

int main()
{
    
    append();
    append();
    append();
    
    print_link();
    
    delete_link();
    
    print_link();
    
    return 0;
}











 ******************************************************************************************************************



// Single Linked List


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct node* root = NULL;

struct node {
  
  int data;
  struct node* link;
};

void append()
{
    struct node* temp;
    
    temp = (struct node*) malloc(sizeof(struct node));
    
    printf("Enter node data");
    scanf("%d", &temp->data);
    
    temp->link = NULL;
    
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        
        while(p->link != NULL)
        {
            p = p->link;
        }
        
        p->link = temp;
    }
}

int link_length()
{
    int count = 0;
    struct node* temp;
    temp = root;
    
    while(temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    
    return count;
}

void print_link()
{

    struct node* temp;
    temp = root;
    
    while(temp != NULL)
    {
        printf("your linked list has : %d \n", temp->data);
        temp = temp->link;
    }
    
}

void addatbegin()
{
    struct node* temp;
    
    // Assign dynamic memory to temp
    temp = (struct node*) malloc(sizeof(struct node));
    
    printf("Enter node data");
    scanf("%d", &temp->data);
    
    temp->link = NULL;
    
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->link = root;
        root = temp;
    }
}


void delete_link()
{
    int loc;
    printf("Enter the location you want to delete \n \n");
    scanf("%d", &loc);
    
    if (loc > link_length())
    {
        printf("Invalid location entered \n ");
    }
    else if (loc == 1)
    {
        struct node* temp;
        temp  = root;
        root  = temp->link;
        
        free(temp);
    }
    else 
    {
        struct node *p = root, *q;
        
        int i = 1;
        
        while (i < loc - 1)
        {
            p = p->link;
            i++;
        }
        
        q = p->link;
        
        p->link = q->link;
        
        q->link = NULL;
        free(q);
        
        
    }
}

int main()
{
    
    append();
    append();
    addatbegin();
    int length = link_length();
    print_link();
    delete_link();
    print_link();
    
    printf("The length is %d here... \n", length);
    return 0;
}








******************************************************************************************************************



// Binary Search





#include <stdio.h>
 
int main()
{
   int c, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);
 
   return 0;  
}




******************************************************************************************************************



// Sparse Matrix





#include <stdio.h>

void main(){
    int arr[2][2];
    int arr2[2][2];
    int result[2][2];
    int i,j,k;
    
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
                scanf("%d",&arr[i][j]);
         }
    }
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
                scanf("%d",&arr2[i][j]);
         }
    }
    
    for (i=0;i<3;i++){
         for (j=0;j<3;j++){
             result[i][j] =0;
                for(k=0;k<3;k++){
                    result[i][j]+= arr[i][k] * arr2[k][j]; 
                }
                
         }
         
    }
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
                if(result[i][j]!=0){
                    printf(" %d  %d %d \n ",(i+1),(j+1),result[i][j]);
                }
                
         }
        
    }
    getch();
}







