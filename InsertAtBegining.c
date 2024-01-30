// Insertion operation in the linked list at the end, at the begining , at the middle

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

int main(){
   struct node *head = NULL;
   
   //display the list(LinkedList)
   
}
void InsertAtBegining(struct node ** head , int data){
    

}
//function to create a node every time I just need to pass the data which I want 
// to add in the LinkedList
struct node* createnode(int passed_data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = passed_data;
    newnode -> next = NULL;
    return newnode;

}