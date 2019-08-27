#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class list
{
    private:
    node *head;
    public:
    list()
    {
    head = NULL;
        }
    void push(int data)
    {
        node *t = new node;
        t->next = head;
        t->data = data;
        head = t;
    }
int ifpresent(int val)
{   
    struct node*cur;
    for(cur=head;cur!=NULL;cur=cur->next)
    if(cur->data==val)
     return 1;
     return 0;
}
 list union1(list l2)
 {
    node *t1= head, *t2 = l2.head;
        list result;

        while(t1 != NULL)
        {
            result.push(t1->data);
            t1 = t1->next;
        }

        while(t2 != NULL)
        {
            if(!result.ifpresent(t2->data))
                result.push(t2->data);
            t2 = t2->next;
        }

        return result;

     
 }
 void display()
 {
     node*temp=new node;
     temp=head;
     while(temp!=NULL)
     {
         cout<<temp->data<<"\t";
         temp=temp->next;
     }
 }
};
 int main()
{
  list l1;
 list l2;
 
 int n,m;
 do{
     int x;
     cin>>x;
          l1.push(x);
 cout<<"enter one to continue";
 cin>>n;
 }while(n==1);
 do{
     int y;
     cin>>y;
     l2.push(y);
     cout<<"enter one to continue";
     cin>>m;
 }while(n==1);
 l1.display();
 l2.display();
 list l3=l1.union1(l2);
 l3.display();
}
