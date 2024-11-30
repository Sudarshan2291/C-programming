#include <stdio.h>


// Array 3: Q1:-

// int main()
// {   
//     int len1;
//     printf("Enter number of elements in arr1: ");
//     scanf("%d",&len1);
//     int arr1[len1];
//     for(int i=0; i<len1; i++){
//         printf("%d enter the element in array", i);
//         scanf("%d",&arr1[i]);
//     }
//     int arr2[len1];
//     for(int i=0; i<len1; i++){
//         int *ptr1 = &arr1[i];
//         arr2[i] = *ptr1;
//         printf("%d",arr2[i]);
//     }
// }


// Array 3: Q2:-
// void main(){
//     int len1;
//     printf("Enter number opf elements in array: ");
//     scanf("%d", &len1);
//     int arr1[len1];
//     for(int i=0; i<len1; i++){
//         printf("enter the %d th element: ");
//         scanf("%d",&arr1[i]);
//     }
//     int arr2[len1];
//     for(int i=0; i<len1; i++){
//         arr2[i] = *(arr1+(len1-i-1));
//     }
//     printf("Array 2:\n");
//     for(int i=0; i<len1; i++){
//         printf("%d\n", *(arr2+i));
//     }
// }


// Array 3 Q3:-
// void main(){
//     int len1;
//     printf("Enter Number of Elements in Array1: ");
//     scanf("%d", &len1);
//     int arr1[len1];
//     int sum1=0;
//     for(int i=0; i<len1; i++){
//         printf("Enter %d th element in Array1: ");
//         scanf("%d",&arr1[i]);
//         sum1= sum1+arr1[i];
//     }
//     int len2;
//     printf("Enter Number of Elements in Array2: ");
//     scanf("%d", &len2);
//     int arr2[len2];
//     int sum2=0;
//     for(int i=0; i<len2; i++){
//         printf("Enter %d th element in Array2: ");
//         scanf("%d",&arr2[i]);
//         sum2= sum2+arr2[i];
//     }
//     if(sum1 == sum2){
//         printf("Sum of both Arrays is the Same");
//     }else{
//         printf("Sum of both Arrays is not Same");
//     }
    
// }

// Array3 Q4:
// void main(){
//     int len1;
//     printf("Enter the number of elements in Array1: ");
//     scanf("%d",&len1);
//     int arr1[len1];
//     for(int i=0; i<len1; i++){
//         printf("Enter the %d th element in Array1: ",i);
//         scanf("%d",&arr1[i]);
//     }
//     int len2;
//     printf("Enter number of elements in Array2:");
//     scanf("%d",&len2);
//     int arr2[len2];
//     for(int i=0; i<len2; i++){
//         printf("Enter the %d th element Array2: ",i);
//         scanf("%d",&arr2[i]);
//     }
//     if(len1==len2){
//         printf("Both arrays length are equal ");
//     }else{
//         printf("Both Arrays length are unequal ");
        
//     }

// }

// Array3 Q5:

// void main(){
//     int len1;
//     printf("Enter the number of elements in Array1: ");
//     scanf("%d",&len1);
//     int arr1[len1];
//     if(len1>0){
//         for(int i=0; i<len1; i++){
//         printf("Enter the %dth Element",i);
//         scanf("%d",&arr1[i]);
//     }
//     }else{
//         printf("Enter valid value of length of Array");
//         }
//     int flag = 0;
//     int len2;
//     printf("Enter the number of elements in Array2: ");
//     scanf("%d",&len2);
//     int arr2[len2];
//     if(len2>0){
//     for(int i=0; i<len2; i++){
//         printf("Enter the %dth Element", i);
//         scanf("%d",&arr2[i]);
//         if(arr1[i] != arr2[i]){
//             flag = 1;
//         }
//     }
//     }else{
//         printf("Enter valid value of length of Array");
//     }
    
//     if(1){
//         printf("Both Arrays have different elements");
//     }else{
//         printf("Both Arrays have same elements");
//     }
    
    
// }

// Array3 Q6:

// void main(){
//     int len1;
//     printf("Enter the number of elements in array1: ");
//     scanf("%d",&len1);
//     int arr1[len1];
//     for(int i=0; i<len1; i++){
//         printf("enter the %dth elements in Array1 ",i);
//         scanf("%d",&arr1[i]);
//     }
//     int len2;
//     printf("Enter the number of elemnts in array2");
//     scanf("%d",&len2);
//     int arr2[len2];
//     for(int i=0; i<len2; i++){
//         printf("enter the %dth elements in Array2 ",i);
//         scanf("%d",&arr2[i]);
//     }
//     int flag = 0;
//     if(len1==len2){
//     for (int i=0; i<len1; i++){
//             if(arr1[i]!=arr2[i]){
//                 flag = 1;
//             }
//         }
//       }else{
//         flag = 1;
//       }
//     if(flag){
//         printf("Both Arrays are not Equal");
//     }else{
//         printf("Both Arrays are Equal");
//     }
// }

// Array3 Q7:

// void main(){
//     int len1;
//     printf("Enter the number of Elements in Array1: ");
//     scanf("%d",&len1);
//     int arr1[len1];
//     for(int i=0; i<len1; i++){
//         printf("Enter the %dth element: ",i+1);
//         scanf("%d",&arr1[i]);
//     }
//     int len2;
//     printf("Enter the number of Elements in Array2: ");
//     scanf("%d",&len2);
//     int arr2[len2];
//     for(int i=0; i<len2; i++){
//         printf("Enter the %dth element: ",i+1);
//         scanf("%d",&arr2[i]);
//     }
//     if(len1>=len2){
//         int arr3[len1];
//         for(int i=0; i<len1; i++){
//             if(i<len2){
//                arr3[i]= arr1[i]+arr2[i];
//             }else{
//                 arr3[i]= arr1[i];
//             }
//          printf("%d ",arr3[i]);
//         }
//     }else{
//         int arr3[len2];
//         for(int i=0; i<len2; i++){
//             if(i<len1){
//                arr3[i]= arr1[i]+arr2[i];
//             }else{
//                 arr3[i]= arr1[i];
//             }
//         printf("%d ",arr3[i]);
//     }
//         }
//     }

// Array Q8:
// void main(){
//     int len1;
//     printf("Enter the number of Elements in Array1: ");
//     scanf("%d",&len1);
//     int arr1[len1];
//     for(int i=0; i<len1; i++){
//         printf("Enter the %dth element: ",i+1);
//         scanf("%d",&arr1[i]);
//     }
//     int len2;
//     printf("Enter the number of Elements in Array2: ");
//     scanf("%d",&len2);
//     int arr2[len2];
//     for(int i=0; i<len2; i++){
//         printf("Enter the %dth element: ",i+1);
//         scanf("%d",&arr2[i]);
//     }
//     int cnt1 = 0;
//     int cnt2 = 0;
//     for(int i=0; i<(len1+len2); i++){
//         if(i%2==0){
//             printf("%d |",arr1[cnt1]);
//             cnt1++;
//         }else{
//             printf("%d |",arr2[cnt2]);
//             cnt2++;
//         }
//     }
// }

// Array Q9

// void main(){
//     int len1;
//     printf("Enter the number of Elements in Both Arrays: ");
//     scanf("%d",&len1);
//     int arr1[len1];
//     for(int i=0; i<len1; i++){
//         printf("Enter the %dth element: ",i+1);
//         scanf("%d",&arr1[i]);
//     }
//     int arr2[len1];
//     for(int i=0; i<len1; i++){
//         printf("Enter the %dth element: ",i+1);
//         scanf("%d",&arr2[i]);
//     }
//     for(int i=0; i<len1; i++){
//         int temp = arr1[i];
//         arr1[i] = arr2[i];
//         arr2[i] = temp;
//         printf("%d|",arr1[i]);
//     }
//     printf("\n");

//     for(int i=0; i<len1; i++){
//         printf("%d|",arr2[i]);
//     }
// }

// Array3 Q10:

void main(){
    int len1;
    int sum1 = 0;
    int sum2 = 0;
    printf("Enter the number of Elements in Array1: ");
    scanf("%d",&len1);
    int arr1[len1];
    for(int i=0; i<len1; i++){
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr1[i]);
        if(i%2 == 0){
            sum1 = sum1 + arr1[i];
        }
    }
    int len2;
    printf("Enter the number of Elements in Array2: ");
    scanf("%d",&len2);
    int arr2[len2];
    for(int i=0; i<len2; i++){
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr2[i]);
        if(i%2 != 0){
            sum2 = sum2 + arr1[i];
        }
    }
    printf("Sum of even index elements in array1 = %d\n", sum1);
    printf("Sum of odd index elements in array2 = %d\n", sum2);
}