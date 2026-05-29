#include "../node.h"
#include <bits/stdc++.h>
using namespace std;

void searchNode(node * start,node *&ptr,node *&save,int &number){
    ptr=start;char ch;int item,c;
    cout<<endl<<"a. Search By Node Value\nb. Search By Node Number"<<endl;
    cout<<"Enter Your Choice: ";cin>>ch;
    switch(ch){
        case 'a': cout<<endl<<"Enter Node Value: ";
                  cin>>item;
                  ptr=start;
                  number=1;
                  while(ptr!=nullptr){
                    if(ptr->info==item){
                        return;
                    }
                    number++;
                    save=ptr;
                    ptr=ptr->next;
                    

                }
                    break;
        case 'b':  
                   cout<<endl<<"Enter Node Number as 1,2,3,4...: ";
                   cin>>number;
                   ptr=start;
                    for(int i=0; i<number-1;i++){
                    save=ptr;
                    ptr=ptr->next;
                    }
                    break;
        default:    cout<<endl<<"Wrong Choice!!";
                    ptr=nullptr;
                    break;
        }
    
    cout<<endl;
}
void displaynodeinfo(node *&save, node *&ptr, int &num){
    cout<<endl<<"The Value of The Searched Node Is: "<<ptr->info;
    cout<<endl<<"The Node Number Of The Searched Node Is: "<<num;
    if(ptr->next==nullptr)
    cout<<endl<<"The Value of The Searched Node's Neighbours Is: "<<"Just Before: "<<save->info;
    else if(save==ptr)
    cout<<endl<<"The Value of The Searched Node's Neighbours Is: "<<"Just After: "<<ptr->next->info;
    else
    cout<<endl<<"The Value of The Searched Node's Neighbours Is: "<<"Just Before: "<<save->info<<"\t"<<"Just After: "<<ptr->next->info;

    
}