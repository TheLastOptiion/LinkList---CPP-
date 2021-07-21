#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node { 
      public:
      	int data;
      	Node *prev;
      	Node *next;
};

Node *str=NULL,*q;

void insert_doubly(int n){

   Node *p = new Node; 

   if( str==NULL) {
   		 str=p;
   		 p->data=n;
   		 p->prev=NULL;
   		 p->next=NULL;
   		 q=p;
   }
   else {
   	    p->data=n;
   	    p->next=NULL;
   	    p->prev=q;
   	    q->next=p;
		    q=p;
   }
 
}

void travarse_next(Node *p) {

   while(p) {
     cout<<p->data<<" ";
     p=p->next;
   }

}


void travarse_prev(Node *p) {
   while(p) {
     cout<<p->data<<" ";
     p=p->prev;
   }
}

int main() {

	     freopen("E:\\Comp-Prog\\input.txt", "r",stdin );
        freopen("E:\\Comp-Prog\\output.txt","w",stdout);
        freopen("E:\\Comp-Prog\\error.txt", "w",stderr);

      for(int i=0;i<10;i++)
       insert_doubly(i);
       travarse_next(str);
       cout<<"\n--------------------\n";
       travarse_prev(q);

    

}
