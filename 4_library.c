// a
void insertatlast(int a[], int n, int key)
{
    a[n] = key;
    return;
}
// b
void insertatfirst(int a[],int n,int key){
    for(int i=n;i>0;i--)
    a[i]=a[i-1];
    a[0]=key;
    return ;
}
// c
void insertIteamAtIndex(int arr[], int n, int index, int num)
{
    if (index > n)
        printf("index is not valid\n");
    else
    {
        for (int i = n - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = num;
        n++;
    }
}
// d
void deleteItemfromlast(int a[],int n){
   int x;
    x=a[n-1];
    n--;
}
// e
void deleteIteamfromstart(int a[],int n){
    int x;
    x=a[0];
    for(int i=0;i<n-1;i++)
    a[i]=a[i+1];
    n--;
}
// f
void deleteIteamFromIndex(int arr[],int n, int index){
     if(index>n-1)
    printf("index is not valid\n");
    else{
    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
}
// g
int findItemUnsorted(int a[], int n, int key)
{

  for (int i = 0; i < n; i++)
  {
    if (a[i] == key)
      return i;
  }
  return -1;
}
// h
int findItemSorted(int a[],int n,int key)
{ 
    int s=0,l=n;
    while(s<=l){
    int m=(s+l)/2;
     if(a[m]==key)
     return m;
     else if(a[m]>key)
  l=m-1;
  else 
  s=m+1;
    }
    return -1;
}
// i
void sortArray(int a[],int n){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[j]<a[i]){
            int t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
    }
}
}
// j
int* extractSubest(int a[], int n, int i, int j)
{ 
 int r[100];
    int size=j-i+1;
    int k=0;
    for(int x=i;x<=j;x++){
        r[k++]=a[x];
    }
    return r;
}
// k
void deletesubset(int a[],int n,int i,int j){
    int del[j-i+1];
for(int x=i;x<j+1;x++){
del[x]=a[x];
}
}
// l
int* splitIntoTwoArray(int a[], int n)
{ int l1=n/2,l2=n-n/2;
   static int a1[100],a2[100];
    for(int i=0;i<l1;i++)
    a1[i]=a[i];
    for(int i=l1;i<n;i++)
   a2[i]=a[i];
   return a1;
}
// m
int *CloneArray(int a[],int n,int b[])
{
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    return b;
}
// n
void ShiftLeftArray(int a[],int n,int r)
{
    int i=0;
    for(;i<n-r;i++)
    {
        a[i] = a[i+r];
    }
    for(int j=i;j<n;j++)
    {
        a[j]=0;
    }
}
// o
void ShiftRightArray(int a[],int n,int r)
{
    int i=n-1;
    for(;i>r-1;i--)
    {
        a[i] = a[i-r];
    }

    for(int j=i;j>=0;j--)
    {
        a[j]=0;
    }
}
// p
void RotateArrayClockwise(int a[],int n,int r)
{
    int i=n-1;
    for(;i>r-1;i--)
    {
        a[i] = a[i-r];
    }

    for(int j=i;j>=0;j--)
    {
        a[j]=0;
    }
}
// q
int FindMin(int A[],int n){
    int i=0;
    int min =A[i];
    for(int j=1;j<n;j++)
    {
        if(A[i] > A[j])
        {
            i=j;
        }
    }
return i;
}
// r
void RotateArrayAntiClockwise(int a[],int n,int r)
{
    int i=0;
    for(;i<n-r;i++)
    {
        a[i] = a[i+r];
    }
    for(int j=i;j<n;j++)
    {
        a[j]=0;
    }
}
// s
int FindMax(int A[],int n){
    int i=0;
    int man =A[i];
    for(int j=1;j<n;j++)
    {
        if(A[i] < A[j])
        {
            i=j;
        }
    }
return i;
}
// t
void FillArrayPseudoRandom(int A[], int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        A[i] = rand();
    }
}
// u
void FillArrayTrueRandom(int A[], int n)
{
   
    for (int i = 0; i < n; i++)
    {
        A[i] = rand();
    }
    return A;
}
// v
int * IncreaseArraySize(int A[], int n, int m)
{
   int *arr = (int *)calloc(m,sizeof(int));
    for(int i=0;i<n;i++)
    {
        arr[i]=A[i];
    }
  return arr;
}
// w
void SetArrayToZero(int A[],int n){
    for(int j=1;j<n;j++)
    {
        A[j]=0;
    }
}
// x
void DeleteArray(int a[], int n)
{
  if(n>0){
    int delete[n];

    for (int i = 0; i < n; i++)
    {
        delete[i] = a[i];
    }
  }
    free(a);
}
// y
void DeleteallitemofarrayArray(int a[], int n)
{
  if(n>0){
    int delete[n];

    for (int i = 0; i < n; i++)
    {
        delete[i] = a[i];
    }
  }
    free(a);
}
// z
int * AllocateArray(int A[],int n)
{
    // int* Ar = (int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        A[i]=0;
    }
    return A;
}