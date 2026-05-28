#include "../node.h"
#include <bits/stdc++.h>
using namespace std;
// node* createnode(int item){
//     node *ptr=new node;
//     ptr->next=nullptr;
//     ptr->info=item;
//     return ptr;
// }
void appendNode(node * start){
    node * ptr=start,*nptr;int item;
    while(ptr->next!=nullptr){
        ptr=ptr->next;
    }
    cout<<endl<<"Enter New Node Info To Append: ";
    cin>>item;
    nptr=createnode(item);
    ptr->next=nptr;
    // nptr->next=nullptr;
}