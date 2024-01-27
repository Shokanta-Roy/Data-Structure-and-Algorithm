//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/
#include<iostream>
using namespace std;

int myAlgorithm(int n)
{
    int x=n+10;//110
    x=x/2;//55
    return x;//55
    //Here the complexity is a constant number, so we
    //can say that, the complexity is O(1);
}

int myAlgorithm2(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum= sum+i;
        if(sum>=1000) break;
    }
    return sum;
    //Here the complexity Depends on the value of n, so we
    //can say that, the complexity is O(n);
}

int myAlgorithm3(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            sum=sum+(i+j);
        }
    }
    return sum;
    //Inner loop is working as n+(n-1)+(n-3)+...+1
    //= n*(n+1)/2
    //= (n^2 +n)/2
    //Here the complexity Depends on the value of n, so we
    //can say that, the complexity is O(n^2);
}

//It's a function of Binary Search.
int myAlgorithm4(int n, int *val, int key)
{
    int low=1,high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(key<val[mid]) low=mid-1;
        if(key>val[mid]) high=mid+1;
        if(key==val[mid]) return 1;
    }
    return 0;
    //Everytime low+high=n+1 or n is divided by 2;
    //Here the complexity Depends on the value of n, so we
    //can say that, the complexity is O(log 2 base of n);
}
//Recursive Function
int myAlgorithm5(int n)
{
    if(n==1) return 1;
    return n*myAlgorithm5(n-1);
    //In this algorithm, maximum depth is n;
    //So, we can say the complexity is O(n);
}

//Extra:
//If f(n)= n^2 +3n + 112, complexity will be O(n^2);
//If f(n)= n^3 +999n + 112, complexity will be O(n^3);
//If f(n)= 6* log(n)+ n* log n, complexity will be O(n* log n);
//If f(n)= 2^n + n2 +100, complexity will be O(2^n); this is called EXPONENTIAL COMPLEXITY;
int main()
{
    int m=1000;
    //int result=myAlgorithm(m);//55
    //int result=myAlgorithm2(m);//1035
    //int result=myAlgorithm3(m);//501000500
    cout<<result<<endl;
    return 0;
}

//Here is another topic:
int myAlgorithm101(char *s)
{
    int c=0;
    for(int i=0;i<strlrn(s);i++)
    {
        if(s[i]=='a') c++;
    }
    return c;
    //Here the Complexity is O(|s|^2).Because strlen() have a own loop of s length;
    //For solving this complexity problem, we can make a integer about the length of the string
    //and the run the for loop.
    //Let's see the optimize form of this code in myAlgorithm102();
}
int myAlgorithm102(char *s)
{
    int c=0;
    int x=strlen(s);
    for(int i=0;i<x;i++)
    {
        if(s[i]=='a') c++;
    }
    return c;
    //Here the Complexity is O(|s|);
}
