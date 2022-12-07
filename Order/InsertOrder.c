//插入排序:直接插入排序
void InsertOrder(int *a,int n)
{
    int i,j;
    //存放"哨兵”
    int temp=a[0];
    //i第2到第n个元素需要排序
    //出现a[i]>a[i-1]的时候，这一趟不走，否则a[0]放哨兵
    for(i=2;i<=n && a[i]<a[i-1];i++)
    {
        //放”哨兵“
        a[0]=a[i];
        for(j=i-1;j>=1 && a[j]>a[0];j--)
        {
            a[j+1]=a[j];
        }
        //出现a[j]小于a[0]哨兵的时候，已经有序，哨兵归位a[j+1]的位置
        a[j+1]=a[0];
    }
    //返回原来a[0]的位置
    a[0]=temp;
}

//插入排序:折半插入排序
void BinaryInsertOrder(int *a,int n)
{
    int i,j;
    int temp=a[0];
    int low,mid,high;
    for(i=2;i<=n && a[i]<a[i-1];i++)
    {
        a[0]=a[i];
        low=1,high=i-1;
        while (low<=high)
        {
            mid=(low+high)/2;
            if(a[mid]>a[0])
            {
                high=mid-1;
            }
            else if(a[mid]<a[0])
            {
                low=mid+1;
            }
            else if(a[mid]==a[0])
            {
                low=mid+1;
                break;
            }
        }
        //结束后high在low前面，从low开始的位置都要往后移动
        //low的位置"哨兵归位"
        for(j=i-1;j>=low;j--)
        {
            a[j+1]=a[j];
        }
        a[low]=a[0];
    }
    a[0]=temp;
}