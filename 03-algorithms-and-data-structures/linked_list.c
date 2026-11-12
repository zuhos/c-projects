#include <stdio.h>


//Node for linked list
typedef struct Node {
    int data;
    struct Node *next;

} Node;



int main(void){

    // Create nodes
    Node n_3 = {40, NULL}; 
    Node n_2 = {30, &n_3}; 
    Node n_1 = {20, &n_2};
 
    //Temp is first node 
    Node *temp = &n_1;
    
    //Iterate over nodes
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;

        if(temp == NULL){
            printf("Null");
        }
    }

    return 0;

}