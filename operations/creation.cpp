#include "../node.h"
#include <bits/stdc++.h>
using namespace std;

node* createnode(int item){
    node *ptr=new node;
    ptr->next=nullptr;
    ptr->info=item;
    return ptr;
}

node *start=nullptr;
void setstart(node *s){
    start=s;
}
node *getstart(){
    return start;
}

node * createLL(){
    start=nullptr;node *save,*ptr;
    int item,n;
    cout<<"How Many Integers You Want To Add To Your Linked List? : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Enter Element "<<i<<" : ";
        cin>>item;
        ptr=createnode(item);
        if(start==nullptr){
            start=ptr;
            save=ptr;
        }
        else{
            save->next=ptr;
            save=ptr;
        }
    }
return start;
}
