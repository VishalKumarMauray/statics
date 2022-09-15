#include<iostream>
#include<conio.h>
#include<math.h>

float cf[20],b[20],xi[20],fi[20],fixi[40],fib[20];
int i,d,j,k,l,m,n,o,p,q,temp,size,e;
float mean,c=0,sum=0,sum1=0,sum2=0,median,var,sd;

void single()
{
 std::cout<<"\n\n1=mean deviation about mean\n2=mean deviation about median\n3=variance and standard deviation\n";
 std::cin>>d;
 switch(d)
 {
  case 1:
  {
   std::cout<<"enter the total number of elements ";
   std::cin>>size;
   std::cout<<"enter the elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>xi[i];
    sum=sum+xi[i];
   }
   mean=sum/size;
   std::cout<<"\nmean = "<<mean<<"\n";
   for(i=0;i<size;i++)
   {
    b[i]=mean-xi[i];
   }
   for(i=0;i<size;i++)
   {
    if(b[i]<0)
    {
     b[i]=b[i]*-1;
    }
   }
   for(i=0;i<size;i++)
   {
    sum1=sum1+b[i];
   }
   c=sum1/size;
   std::cout<<"\nmean deviation about the mean is "<<c;
  }
  break;

  case 2:
  {
   std::cout<<"enter the total number of element ";
   std::cin>>size;
   std::cout<<"enter the elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>xi[i];
   }
   for(i=0;i<size;i++)
   {
    for(j=i;j<size;j++)
    {
     if(xi[i]>xi[j])
     {
      temp=xi[i];
      xi[i]=xi[j];
      xi[j]=temp;
     }
    }
   }
   for(i=0;i<size;i++)
   {
    b[i]=xi[i];
   }
   if(size%2==0)
   {
    median=size/2;
    std::cout<<"median = "<<median;
   }
   else
   {
    median=(size+1)/2;
    q=median;
    std::cout<<"median = "<<median;
   }
   e=b[q-1];
   for(i=0;i<size;i++)
   {
    b[i]=e-b[i];
   }
   for(i=0;i<size;i++)
   {
    if(b[i]<0)
    {
     b[i]=b[i]*-1;
    }
   }
   for(i=0;i<size;i++)
   {
    sum=sum+b[i];
   }
   c=sum/size;
   std::cout<<"\nmean deviation about median "<<c;
  }
  break;

  case 3:
  {
   std::cout<<"enter the total number of elements ";
   std::cin>>size;
   std::cout<<"enter elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>xi[i];
    sum=sum+xi[i];
   }
   mean=sum/size;
   for(i=0;i<size;i++)
   {
    b[i]=mean-xi[i];
   }
   for(i=0;i<size;i++)
   {
    cf[i]=pow(b[i],2);
    sum1=sum1+cf[i];
   }
   var=sum1/size;
   sd=pow(var,0.5);
   std::cout<<"variation = "<<var<<"\n"<<"standard deviation = "<<sd;
  }
 break;
 }
}

void doubl()
{
 std::cout<<"\n\n1=mean deviation about mean\n2=mean deviation about median\n3=variance and standard deviation\n";
 std::cin>>d;
 switch(d)
 {
  case 1:
  {
   std::cout<<"enter the total number of elements\n";
   std::cin>>size;
   std::cout<<"enter xi elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>xi[i];
   }
   std::cout<<"enter fi elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>fi[i];
    sum=sum+fi[i];
   }
   for(i=0;i<size;i++)
   {
    fixi[i]=xi[i]*fi[i];
    sum1=sum1+fixi[i];
   }
   mean=sum1/sum;
   for(i=0;i<size;i++)
   {
    b[i]=mean-xi[i];
   }
   for(i=0;i<size;i++)
   {
    if(b[i]<0)
    {
     b[i]=b[i]*-1;
    }
   }
   for(i=0;i<size;i++)
   {
    fib[i]=b[i]*fi[i];
    sum2=sum2+fib[i];
   }
   std::cout<<"\n";
   std::cout<<"xi\tfi\tfixi\t(xi-x)\tfi(xi-x)\n";
   for(i=0;i<size;i++)
   {
    std::cout<<xi[i]<<"\t";
    for(j=0;j<size;j++)
    {
     std::cout<<fi[i]<<"\t";
     for(k=0;k<size;k++)
     {
      std::cout<<fixi[i]<<"\t";
      for(l=0;l<size;l++)
      {
       std::cout<<b[i]<<"\t";
       for(m=0;m<size;m++)
       {
	std::cout<<fib[i]<<"\t";
	break;
       }
      break;
      }
     break;
     }
    break;
    }
    std::cout<<"\n";
   }
   std::cout<<"\n";
   std::cout<<"   \t"<<sum<<"\t"<<sum1<<"\t\t"<<sum2;
   std::cout<<"\nmean deviation about mean "<<sum2/sum;
  }
  break;

  case 2:
  {
   std::cout<<"enter the total number of elements\n";
   std::cin>>size;
   std::cout<<"enter xi elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>xi[i];
   }
   std::cout<<"enter fi elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>fi[i];
    e=e+fi[i];
   }
   for(i=0;i<size;i++)
   {
    cf[i]=cf[i-1]+fi[i];
   }
   if(e%2==0)
   {
    mean=e/2;
    for(i=0;i<size;i++)
    {
     if(mean<cf[i])
     {
      n=i;
      break;
     }
    }
    mean=(e/2)+1;
    for(i=0;i<size;i++)
    {
     if(mean<cf[i])
     {
      temp=i;
      break;
     }
    }
    median=(xi[n]+xi[temp])/2;
    std::cout<<"median is "<<median<<"\n";
   }
   else
   {
    mean=(e+1)/2;
    for(i=0;i<size;i++)
    {
     if(mean<cf[i])
     {
      n=i;
      break;
     }
    }
    median=xi[n];
    std::cout<<"median = "<<median;
   }
   for(i=0;i<size;i++)
   {
    b[i]=median-xi[i];
   }
   for(i=0;i<size;i++)
   {
    if(b[i]<0)
    {
     b[i]=b[i]*-1;
    }
   }
   for(i=0;i<size;i++)
   {
    fib[i]=fi[i]*b[i];
    sum1=sum1+fib[i];
   }
   std::cout<<"\n";
   std::cout<<"xi\tfi\tcf\t(xi-x)\tfi(xi-x)\n";
   for(i=0;i<size;i++)
   {
    std::cout<<xi[i]<<"\t";
    for(j=0;j<size;j++)
    {
     std::cout<<fi[i]<<"\t";
     for(k=0;k<size;k++)
     {
      std::cout<<cf[i]<<"\t";
      for(l=0;l<size;l++)
      {
       std::cout<<b[i]<<"\t";
       for(m=0;m<size;m++)
       {
	std::cout<<fib[i]<<"\t";
	break;
       }
      break;
      }
     break;
     }
    break;
    }
    std::cout<<"\n";
   }
   std::cout<<"\n";
   std::cout<<"   \t"<<e<<"\t "<<"\t\t"<<sum1;

   std::cout<<"\nmean deviation about median "<<sum1/e<<"\n";
  }
  break;

  case 3:
  {
   std::cout<<"enter the total number of elements\n";
   std::cin>>size;
   std::cout<<"enter xi elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>xi[i];
   }
   std::cout<<"enter fi elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>fi[i];
    sum=sum+fi[i];
   }
   for(i=0;i<size;i++)
   {
    fixi[i]=xi[i]*fi[i];
    sum1=sum1+fixi[i];
   }
   mean=sum1/sum;
   for(i=0;i<size;i++)
   {
    b[i]=mean-xi[i];
   }
   for(i=0;i<size;i++)
   {
    cf[i]=pow(b[i],2);
   }
   for(i=0;i<size;i++)
   {
    fib[i]=cf[i]*fi[i];
    sum2=sum2+fib[i];
   }
   std::cout<<"\n";
   std::cout<<"xi\tfi\tfixi\t(xi-x)\t(xi-x)2\tfi(xi-x)\n";
   for(i=0;i<size;i++)
   {
    std::cout<<xi[i]<<"\t";
    for(j=0;j<size;j++)
    {
     std::cout<<fi[i]<<"\t";
     for(k=0;k<size;k++)
     {
      std::cout<<fixi[i]<<"\t";
      for(l=0;l<size;l++)
      {
       std::cout<<b[i]<<"\t";
       for(m=0;m<size;m++)
       {
	std::cout<<cf[i]<<"\t";
	for(n=0;n<size;n++)
	{
	 std::cout<<fib[i]<<"\t";
	 break;
	}
	break;
       }
      break;
      }
     break;
     }
    break;
    }
    std::cout<<"\n";
   }
   std::cout<<"\n";
   std::cout<<"   \t"<<sum<<"\t"<<sum1<<"\t\t\t"<<sum2;
   var=sum2/sum;
   sd=pow(var,0.5);
   std::cout<<"\nvariation = "<<var<<"\n"<<"standard deviation = "<<sd;

  break;
  }
 }
}

void triple()
{
 int x,y,low[20],upp[20];
 float h;
 std::cout<<"\n\n1=mean deviation about mean\n2=mean deviation about median\n3=variance and standard deviation\n";
 std::cin>>d;
 switch(d)
 {
  case 1:
  {
   std::cout<<"enter the total number of elements ";
   std::cin>>size;
   for(i=0;i<size;i++)
   {
    std::cout<<"enter the class ";
    std::cin>>x>>y;
    low[i]=x;
    upp[i]=y;
    xi[i]=(x+y)/2;
   }
   std::cout<<"\nenter fi elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>fi[i];
    sum=sum+fi[i];
   }
   for(i=0;i<size;i++)
   {
    fixi[i]=xi[i]*fi[i];
    sum1=sum1+fixi[i];
   }
   mean=sum1/sum;
   for(i=0;i<size;i++)
   {
    b[i]=mean-xi[i];
   }
   for(i=0;i<size;i++)
   {
    if(b[i]<0)
    {
     b[i]=b[i]*-1;
    }
   }
   for(i=0;i<size;i++)
   {
    fib[i]=b[i]*fi[i];
    sum2=sum2+fib[i];
   }
   std::cout<<"\n";
   std::cout<<"class\txi\tfi\tfixi\t(xi-x)\tfi(xi-x)\n";
   for(i=0;i<size;i++)
   {
    std::cout<<low[i]<<"-"<<upp[i]<<"\t";
    for(j=0;j<size;j++)
    {
     std::cout<<xi[i]<<"\t";
     for(k=0;k<size;k++)
     {
      std::cout<<fi[i]<<"\t";
      for(l=0;l<size;l++)
      {
       std::cout<<fixi[i]<<"\t";
       for(m=0;m<size;m++)
       {
	std::cout<<b[i]<<"\t";
	for(n=0;n<size;n++)
	{
	 std::cout<<fib[i]<<"\t";
	 break;
	}
	break;
       }
      break;
      }
     break;
     }
    break;
    }
    std::cout<<"\n";
   }
   std::cout<<"\n";
   std::cout<<"   \t\t"<<sum<<"\t"<<sum1<<"\t\t"<<sum2;
   std::cout<<"\nmean deviation about mean "<<sum2/sum;
  }
  break;

  case 2:
  {
   std::cout<<"enter the total number of elements\n";
   std::cin>>size;
   for(i=0;i<size;i++)
   {
    std::cout<<"enter the class ";
    std::cin>>x>>y;
    low[i]=x;
    upp[i]=y;
    h=y-x;
    xi[i]=(x+y)/2;
   }
   std::cout<<"enter fi elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>fi[i];
    e=e+fi[i];
   }
   for(i=0;i<size;i++)
   {
    cf[i]=cf[i-1]+fi[i];
   }
   if(e%2==0)
   {
    mean=e/2;
    for(i=0;i<size;i++)
    {
     if(mean<cf[i])
     {
      n=i;
      break;
     }
    }
    o=low[n];
    p=fi[n];
    q=cf[n-1];
    median=mean-q;
    median=median/p;
    median=median*h;
    median=median+o;
    std::cout<<"median is "<<median<<"\n";
   }
   else
   {
    mean=(e+1)/2;
    for(i=0;i<size;i++)
    {
     if(mean<cf[i])
     {
      n=i;
      break;
     }
    }
    o=low[n];
    p=fi[n];
    q=cf[n-1];
    median=mean-q;
    median=median/p;
    median=median*h;
    median=median+o;
    std::cout<<"median is "<<median<<"\n";
   }
   }
   for(i=0;i<size;i++)
   {
    b[i]=median-xi[i];
   }
   for(i=0;i<size;i++)
   {
    if(b[i]<0)
    {
     b[i]=b[i]*-1;
    }
   }
   for(i=0;i<size;i++)
   {
    fib[i]=fi[i]*b[i];
    sum1=sum1+fib[i];
   }
   std::cout<<"\n";
   std::cout<<"class\txi\tfi\tcf\t(xi-x)\tfi(xi-x)\n";
   for(i=0;i<size;i++)
   {
    std::cout<<low[i]<<"-"<<upp[i]<<"\t";
    for(j=0;j<size;j++)
    {
     std::cout<<xi[i]<<"\t";
     for(k=0;k<size;k++)
     {
      std::cout<<fi[i]<<"\t";
      for(l=0;l<size;l++)
      {
       std::cout<<cf[i]<<"\t";
       for(m=0;m<size;m++)
       {
	std::cout<<b[i]<<"\t";
	for(n=0;n<size;n++)
	{
	 std::cout<<fib[i]<<"\t";
	 break;
	}
	break;
       }
      break;
      }
     break;
     }
    break;
    }
    std::cout<<"\n";
   }
   std::cout<<"\n";
   std::cout<<"   \t\t"<<e<<"\t "<<"\t\t"<<sum1;
   std::cout<<"\nmean deviation about median "<<sum1/e<<"\n";
   break;

  case 3:
   std::cout<<"enter the total number of elements\n";
   std::cin>>size;
   for(i=0;i<size;i++)
   {
    std::cout<<"enter the class ";
    std::cin>>x>>y;
    low[i]=x;
    upp[i]=y;
    xi[i]=(x+y)/2;
   }
   std::cout<<"enter fi elements\n";
   for(i=0;i<size;i++)
   {
    std::cin>>fi[i];
    e=e+fi[i];
   }
   for(i=0;i<size;i++)
   {
    fixi[i]=xi[i]*fi[i];
    sum1=sum1+fixi[i];
   }
   mean=sum1/e;
   for(i=0;i<size;i++)
   {
    b[i]=mean-xi[i];
   }
   for(i=0;i<size;i++)
   {
    cf[i]=pow(b[i],2);
   }
   for(i=0;i<size;i++)
   {
    fib[i]=cf[i]*fi[i];
    sum2=sum2+fib[i];
   }
   std::cout<<"\n";
   std::cout<<"class\txi\tfi\tfixi\t(xi-x)2\tfi(xi-x)\n";
   for(i=0;i<size;i++)
   {
    std::cout<<low[i]<<"-"<<upp[i]<<"\t";
    for(j=0;j<size;j++)
    {
     std::cout<<xi[i]<<"\t";
     for(k=0;k<size;k++)
     {
      std::cout<<fi[i]<<"\t";
      for(l=0;l<size;l++)
      {
       std::cout<<fixi[i]<<"\t";
       for(m=0;m<size;m++)
       {
	std::cout<<cf[i]<<"\t";
	for(n=0;n<size;n++)
	{
	 std::cout<<fib[i]<<"\t";
	 break;
	}
	break;
       }
      break;
      }
     break;
     }
    break;
    }
    std::cout<<"\n";
   }
   std::cout<<"\n";
   std::cout<<"   \t\t"<<e<<"\t"<<sum1<<"\t\t\t"<<sum2;
   var=sum2/e;
   sd=pow(var,0.5);
   std::cout<<"\nvariation = "<<var<<"\n"<<"standard deviation = "<<sd;

  break;
 }
}

int main(void)
{
int z;
std::cout<<"\n1=when only xi is given\n2=when xi and fi both are given\n3=when range is given in place of xi\n";
std::cin>>z;
switch(z)
{
case 1:
    mean=0;
    median=0;
    var=0;
    sd=0;
    single();
break;

case 2:
    mean=0;
    median=0;
    var=0;
    sd=0;
    doubl();
break;

case 3:
    mean=0;
    median=0;
    var=0;
    sd=0;
    triple();
break;

default :
    std::cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Made by:- Vishal Kumar Mauray\n";

}
getch();
}
