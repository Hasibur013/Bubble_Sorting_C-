#include<iostream>
using namespace std;

void print(int a[], int n) //function to print array elements
{
    int i;
    cout<<"(";
    for(i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<")";
}
int bubble(int a[], int n) // function to implement bubble sort
{
    int i, j, temp;

    int action=0;

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            action++;
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                action=action+3;
            }
        }
    }

    return action;
}
int main()
{
    int i, j,temp,action,action2,action3;
    int a[10] = {1,3,7,5,2,4,6,8,9,10};
    int b[10]= {10,9,8,7,6,5,4,3,2,1};
    int c[10]= {1,10,2,9,3,8,4,7,5,6};

    int n = sizeof(a)/sizeof(a[0]);

    action=bubble(a, n);
    cout<<"\nList 1 sorted: ";
    print(a, n);
    cout<<" "<<action <<" "<<"Actions performed \n";

    action2=bubble(b, n);
    cout<<"\nList 2 sorted: ";
    print(b, n);
    cout<<" "<<action2 <<" "<<"Actions performed \n";

    action3=bubble(c, n);
    cout<<"\nList 3 sorted: ";
    print(c, n);
    cout<<" "<<action3 <<" "<<"Actions performed \n";
    return 0;
}
