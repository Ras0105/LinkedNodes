#include <bits/stdc++.h>
#include "node.h"
using namespace std;

int main(){
    cout<<"WELCOME TO THE LINKED NODES SHOW!!"<<endl;
    int ch,co=0;
    node *start=nullptr,*ptr,*save;
    do{
        
        cout<<"The Linked List Operations Are AS Follows:-"<<endl;
        cout<<"1. Creation"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Count Nodes"<<endl;
        cout<<"4. Search A Specific Node\n\ta- By Node Number\n\tb- By Node Value"<<endl;
        cout<<"5. Append A Node"<<endl;
        cout<<"6. Insert A Node\n\ta- After\n\tb- Before"<<endl;
        cout<<"7. Delete A Node\n\ta- By Node Number\n\tb- By Value"<<endl;
        cout<<"8. Sort The List"<<endl;
        cout<<"9. Merge With Another List"<<endl;
        cout<<"10. Split The List"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        cin>>ch;
        cin.ignore();
        
        switch(ch){
            case 0: 
                break;
            case 1: start=createLL();    
                    cin.ignore();   
                    getchar();        
                    break;
            case 2: if(start==nullptr){
                        cout<<"List Is Empty, Nothing To Display\nCreate List First(option 1)"<<endl;
                        break;
                     }
                    start=getstart();
                    displayLL(start);
                //     cin.ignore();
                    getchar();
                    break;
            case 3: if(start==nullptr){
                        cout<<"List Is Empty, Nothing To Display\nCreate List First(option 1)"<<endl;
                        break;
                     }
                     start=getstart();
                    co=count(start);
                    cout<<endl<<"There Are "<<co<<" Nodes";

                //     cin.ignore();
                    getchar();
                    break;
            case 4: if(start==nullptr){
                        cout<<"List Is Empty, Nothing To Display\nCreate List First(option 1)"<<endl;
                        break;
                     }
                    start=getstart();
                    ptr=start;
                    save=start;
                    int num;char c;
                    searchNode(start,ptr,save,num);
                    cout<<endl<<"Press 0 To Display Searched Node's Info (else press anything): "; cin>>c;cin.ignore();
                    if(c=='0')
                        displaynodeinfo(save,ptr,num);
                    else;
                    cin.ignore();
                    getchar();
                    break;
            case 5: if(start==nullptr){
                        cout<<"List Is Empty, Nothing To Display\nCreate List First(option 1)"<<endl;
                        break;
                     }
                    start=getstart();
                    appendNode(start);
                    cin.ignore();
                    getchar();
                    break;
            case 6: if(start==nullptr){
                        cout<<"List Is Empty, Nothing To Display\nCreate List First(option 1)"<<endl;
                        break;
                     }
                    start=getstart();
                    insertNode(start);
                    cin.ignore();
                    getchar();
                    break;
            case 7: if(start==nullptr){
                        cout<<"List Is Empty, Nothing To Display\nCreate List First(option 1)"<<endl;
                        break;
                     }
                    start=getstart();
                    deleteNode(start);
                //     cin.ignore();
                    getchar();
                    break;
            case 8: if(start==nullptr){
                        cout<<"List Is Empty, Nothing To Display\nCreate List First(option 1)"<<endl;
                        break;
                     }
                    start=getstart();
                    sortList(start);
                //     cin.ignore();
                    getchar();
                    break;
            case 9: if(start==nullptr){
                        cout<<"List Is Empty, Nothing To Display\nCreate List First(option 1)"<<endl;
                        break;
                     }
                    start=getstart();
                    mergeList(start);
                //     cin.ignore();
                    getchar();
                    break;
            case 10: if(start==nullptr){
                        cout<<"List Is Empty, Nothing To Display\nCreate List First(option 1)"<<endl;
                        break;
                     }
                     start=getstart(); 
                     splitList(start);

                     cout<<endl<<"Press Enter To Proceed: ";
                //      cin.ignore();
                     getchar();
                     break;
            default: cout<<"Error!!"<<endl<<"Please Enter Correct Value (0-10)"<<endl;
                     cout<<endl<<"Press Enter To Proceed: ";
                //      cin.ignore();
                     getchar();
                     break;    
            }
        cout<<"To Exit, Press 0"<<endl;
        system("cls");
        if(ch!=0)
        cout<<"WELCOME TO THE LINKED NODES SHOW!!"<<endl;
        else
        cout<<"Good Bye....See you Soon!!"<<endl; 
    }while(ch!=0);
    return 0;
}