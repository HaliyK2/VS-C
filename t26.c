#includestruct node
{
    int x,y,d;
} a[100000],p[100010];
int vis[100000],t,n;
long long juli(int x,int y,int xx,int yy)
{
    return (long long)((x-xx)*(x-xx)+(y-yy)*(y-yy));
}
int main()
{
    int i,j,m;
    scanf("%d%d",&n,&m);
    for(i=1; i<=n; i++)
        scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].d);
    for(i=1; i<=m; i++)
        scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].d);
 
    int l=0,r=m+1;
    while(++l<r)
    {
        for(i=1; i<=n; i++)
        {
            //用vis来记录是否已经入队
            if(vis[i]==0&&juli(p[l].x,p[l].y,a[i].x,a[i].y)<=(long long )p[l].d*p[l].d)//要是在范围内就加入队列变成排雷火箭
            {
                vis[i]=1;
                t++;
                p[r++]=a[i];
            }
        }
    }
    printf("%d",t);
    return 0;
}
