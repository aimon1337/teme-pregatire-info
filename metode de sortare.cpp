// Merge Sort
int a[500], n;
void ic(int i, int m, int j)
{
    int b[500];
    int x=i, k=1, y=m+1;
    while(x<=m && y<=j)
        if(a[x]<a[y])
            b[k++]=a[x++];
        else
            b[k++]=a[y++];
    while(x<=m)
        b[k++]=a[x++];
    while(y<=j)
        b[k++]=a[y++];
    int t=i;
    for(k=1; k<=(j-i)+1; ++k)
        a[t++]=b[k];
}
void ms(int i, int j)
{
    if(i<j)
    {
        int m=(i+j)/2;
        ms(i,m);
        ms(m+1,j);
        ic(i,m,j);
    }
}
 
 
// QuickSort
int x[1000],n;
int poz(int p, int u)
{
    int piv,aux,k;
    piv=x[p];
    while(p<u)
    {
        if(x[p]>x[u])
        {
            aux=x[p];
            x[p]=x[u];
            x[u]=aux;
        }
        if(x[p]==piv)
            u--;
        else
            p++;
    }
    k=p;
    return k;
}
void qs(int p, int u)
{
    int k;
    if(p<u)
    {
        k=poz(p,u);
        qs(p,k-1);
        qs(k+1,u);
    }
}
 
 
// Sortare prin insertie binara
int cb(int a[], int item, int li, int ls)
{
    if (ls <= li)
        return (item > a[li])? (li + 1): li;
    int mid = (li + ls)/2;
    if(item == a[mid])
        return mid+1;
    if(item > a[mid])
        return cb(a, item, mid+1, ls);
    return cb(a, item, li, mid-1);
}
 
void insertionSort(int a[], int n)
{
    int i, loc, j, k, sel;
 
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        sel = a[i];
        loc = cb(a, sel, 0, j);
        while (j >= loc)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = sel;
    }
}
