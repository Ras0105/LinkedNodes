#ifndef NODE_H
#define NODE_H

struct node {
    int info;
    node *next;
    node *prev;
};

node* createnode(int item);
node* createLL();
node* getstart();
void displayLL(node* start);
int count(node* start);
void appendNode(node* start);
void insertNode(node* &start);
void searchNode(node * start,node *&ptr,node *&save, int &num);
void displaynodeinfo(node *&save, node *&ptr, int &num);
void deleteNode(node* start);
void sortList(node * start);
void mergeList(node * start);
void  splitList(node * start);
void setstart(node *s);
#endif