#include <iostream>
using namespace std;
void insertionsort(int i,int array[],int size)
{
    if(i<size)
    {
        int j;
        int temp=array[i];
        for(j=i;j>0 && array[j-1]>temp;j--)
         array[j]=array[j-1];
         array[j]=temp;
         insertionsort(++i,array,size);
    }
}
int main()
{
    int p,q,array[10];
    cout<<"enter the elements";
    cin>>q;
    for(p=0;p<q;p++)
            cin>>array[p];
        insertionsort(0,array,q);
        cout<<("the sorted list is\n");
        for(p=0;p<q;p++)
        cout<<array[p]<<”\t”;
        cout<<"\n";
return 0;

}
