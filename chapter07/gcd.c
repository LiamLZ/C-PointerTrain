
int gcd(int m,int n)
{
    if(m<=0 || n<=0)
    {
        return 0;
    }
    int r=m%n;
    if(r==0)
    {
        return n;
    }else
    {
        
        gcd(n,r);
    }
    
}