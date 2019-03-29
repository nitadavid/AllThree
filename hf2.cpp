#include<iostream>
using namespace std;
int n=5;
int M[100]={35565,533,244,104,87,18};

int read_data() {}
int compute_data(){}

int RSD_heap(int nume_nod,int heap_size)
{
    if (nume_nod<=heap_size)
    { cout<<M[nume_nod]<<" ";
       RSD_heap(nume_nod*2,heap_size);
       RSD_heap(nume_nod*2+1,heap_size);}
}

int find_heap(int nume_nod,int heap_size,int value)
{
    if (M[nume_nod]==value) return 1;
    else {
            if (nume_nod<=heap_size) { cout<<"1 ";
                                                       find_heap(nume_nod*2,heap_size,value);
                                                       cout<<"0 ";
                                                       find_heap(nume_nod*2+1,heap_size,value);}
           }
return 0;
}

int main()
{ read_data();
   compute_data();
   RSD_heap(1,n);
   cout<<endl;
   cout<<"Some huffman code : "<<endl;
   find_heap(1,n,87);
}
