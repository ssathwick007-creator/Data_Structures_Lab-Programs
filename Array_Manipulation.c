#include<stdio.h>
void main(){
    int a[100], i, value, choice, pos, n;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);

    printf("Enter the arry of elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n1.insert");
    printf("\n2.delete");
    printf("\n3.modification");
    printf("\n4.replacement\n");

    printf("Enter your choice: \n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Welcome to incserting the element in the array\n");
            printf("Enter the position: \n");
            scanf("%d",&pos);

            printf("Enter the value: \n");
            scanf("%d",&value);
            for(i=n; i>pos; i--){
                a[i] = a[i-1];
            }

            a[pos] =  value;
            n++;
            break;

        case 2:
            printf("Welcome to deleting the value from the array🌟\n");
            printf("Enter the position to delete: \n");
            scanf("%d",&pos);

            printf("Enter the value: \n");
            scanf("%d",&value);
            for(i=pos; i>n-1; i++){
                a[i] = a[i+1];
            }
            n--;
            break;
        case 3:
            printf("Welcome to modifying the value in the array 💀\n");
            printf("Enter the position of modification: \n");
            scanf("%d", &pos);

            printf("Enter the value:\n");
            scanf("%d",&value);
            a[pos] = value;
            break;
        case 4:
            printf("Welcome to replacement the value in the array 💱\n");
            printf("Enter the position of replacement: \n");
            scanf("%d", &pos);

            printf("Enter the value:\n");
            scanf("%d",&value);
            a[pos] = value;
            break;
        default:
            printf("invalid choice");
    }
    printf("After array manipulation\n");
    for(i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
}