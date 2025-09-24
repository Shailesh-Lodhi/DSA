#include <stdio.h>
#define size 9
int arr[size],ind=-1;
void insert_beg(int x){
    if(ind<size-1){
        for(int i=ind;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        ind++;
    }else{
        printf("Array is full");
    }
}

void insert(int x){
    if(ind<size-1){
        ind++;
        arr[ind]=x;
    }else{
        printf("Array is full");
    }
}
void insert_pos(int x , int pos){
    if(ind<size-1){
        pos=pos -1;
        if(pos>=0&&pos<=ind+1){
            for(int i=ind;i>=pos;i--){
                arr[i+1]=arr[i];
            }
            arr[pos]=x;
            ind++;
        }else{
            printf("Invalid index");
        }
    }else{
        printf("Array is Full");
    }
}
void del_f(){
    if(ind>-1){
        for(int i=0;i<ind;i++){
            arr[i]=arr[i+1];
        }
        arr[ind]="\0";
        ind--;
    }else{
        printf("Array is empty");
    }
}
void upd_pos(int x, int pos){
    if(ind>-1){
        arr[pos]=x;
    }else{
        printf("Array is empty");
    }
}
void traverse(){
    printf("\n");
    for(int i=0;i<=ind;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    insert_beg(23);
    traverse();
    insert_beg(13);
    traverse();
    insert_beg(12);
    traverse();
    insert_beg(123);
    traverse();
    insert(454);
    traverse();
    insert_pos(67,5);
    traverse();
    traverse();
}


// ************************** LINKED LIST ****************************


#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node *head = NULL, *ptr;
int count = 0;
void insert(int x)
{
    ptr = (node *)malloc(sizeof(node));
    ptr->data = x;
    if (head == NULL)
    {
        ptr->next = NULL;
    }
    else
    {
        ptr->next = head;
    }
    head = ptr;
    count++;
}
void insert_last(int x)
{
    ptr = (node *)malloc(sizeof(node));
    ptr->data = x;
    ptr->next = NULL;
    if(head == NULL){
        head = ptr;
    }
    else
    {
        node *ptr1 = head;
        while (ptr1->next != NULL)
        {
            ptr1 = ptr1->next;
        }
        ptr1->next = ptr;
    }
    count++;
}

node *tail = NULL;

void insertlast(int x)
{
    ptr = (node *)malloc(sizeof(node));
    ptr->data = x;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        tail->next = ptr;
    }
    tail = ptr;
    count++;
}
void insert_pos(int x, int p)
{
    if (p >= 1 && p <= count + 1)
    {
        ptr = (node *)malloc(sizeof(node));
        ptr->data = x;
        if (p == 1)
        {
            insert(x);
        }
        else if (p == count + 1)
        {
            insert_last(x);
        }
        else
        {
            node *ptr1 = head;
            for (int i = 1; i < p - 1; i++)
            {
                ptr1 = ptr1->next;
            }
            ptr->next = ptr1->next;
            ptr1->next = ptr;
            count++;
        }
    }
}
void del()
{
    if (head != NULL)
    {
        ptr = head;
        head = head->next;
        free(ptr);
    }
}

void de_l()
{
    if (head != NULL)
    {
        node *ptr1;
        ptr = head;
        if (head->next == NULL)
        {
            head = NULL;
        }
        else
        {

            while (ptr->next != NULL)
            {
                ptr1 = ptr;
                ptr = ptr->next;
            }
        }
        free(ptr);
        ptr1->next = NULL;
        count--;
    }
}

void delpos(int p)
{
    ptr = head;
    node *ptr1;
    if (p >= 1 && p <= count)
    {
        if (head != NULL)
        {
            if (p == 1)
            {
                head = head->next;
            }
            else
            {
                for (int i = 1; i < p; i++)
                {
                    ptr1 = ptr;
                    ptr = ptr->next;
                }
                ptr1->next = ptr->next;
            }
            count--;
            free(ptr);
        }
        else
        {
            printf("\n list is empty ");
        }
    }
    else
    {
        printf("\n position invalid");
    }
}

void updByPos(int val, int pos)
{
    if (pos < 1 || pos > count)
    {
        printf("\nInvalid Position....");
    }
    else
    {
        ptr = head;
        for (int i = 1; i < pos; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = val;
    }
}

void updByValue(int value, int newvalue)
{
    if (head != NULL)
    {
        ptr = head;
        int x = 0;
        while (ptr != NULL)
        {
            if (ptr->data == value)
            {
                ptr->data = newvalue;
                x++;
                break;
            }
            ptr = ptr->next;
        }
        if (x > 0)
        {
            printf("value updated");
        }
        else
        {
            printf("not upd");
        }
    }
}

void traverse()
{
    ptr = head;
    printf("\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
