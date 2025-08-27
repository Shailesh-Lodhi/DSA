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