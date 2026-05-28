#include "../node.h"
#include <bits/stdc++.h>
using namespace std;

void insertNode(node * &start){
    node *nptr,*save,*ptr;int item,number;char ch;
    ptr=start;

    cout<<endl<<"a. Insert After A Node\nb. Insert Before A Node"<<endl;
    cout<<"Enter Your Choice: ";cin>>ch;
    cout<<endl<<"Enter Location (Node Position, taking node count as 1,2,3...): ";
    cin>>number;
    cout<<endl<<"Enter New Node Info To Insert: ";
    cin>>item;
    int max_count=count(start);
    if(max_count>number){
        switch(ch){
            case 'a':   nptr=createnode(item);

                        ptr=start;
                        
                        for(int i=1;i<number+1;i++){
                            save=ptr;
                            ptr=ptr->next;
                        }
                        nptr->next=ptr;
                        save->next=nptr; 
                        break;


            case 'b':   nptr=createnode(item);

                        ptr=start;
                        if(number==1){
                            nptr->next=ptr;
                            setstart(nptr);
                        }
                        else{
                        for(int i=1;i<number;i++){
                            save=ptr;
                            ptr=ptr->next;
                        }
                        nptr->next=ptr;
                        save->next=nptr;}
                        break;

            default:break;
        }
    }
    else{
        ptr=start;
        while(ptr->next!=nullptr){
            ptr=ptr->next;
        }
        nptr=createnode(item);
        ptr->next=nptr;
    } 
}