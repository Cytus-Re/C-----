    /* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
     
    #include <stdio.h>  
    #include <stdlib.h>  
    #include <math.h>  
      
    int * input( int );           
    int PrimCount( int *, int );      
    int isPrim( int );   
      
   
    int * input(int n) // ����n�����������ڶ�̬����Ŀռ���  
    { 
      int i;
	  int static a[100];
	  for(i=0;i<n;i++){
	  	scanf("%d",&a[i]);
	  } 
	  return a;
    // n����Ҫ�������������  
    // �������ܣ�����洢n�������Ŀռ䣬����n�����������ڸÿռ���  
    // ��������ֵ��ָ����ڴ�ռ��ָ��  
    // ���º����������д  
     
    } 
     
    int PrimCount( int *p, int n)  // ͳ��n�������е���������  
    { int sum=0,i=0;
      for(i=0;i<n;i++){
      	//printf("p=%d",p[i]);
      	if(isPrim(p[i]))sum++;
	  }
	  return sum;
    // p��ָ���ͳ�Ƶ������׵�ַ  
    // n�������б������������  
    // �������ܣ�ͳ��ָ��p��ָ�ռ�������������  
    // ��������ֵ��ͳ�ƽ�� 
    // ���º����������д  
    } 
      
      
    int isPrim(int x)  
    {   int i;  
        if ( x==2 ) return 1;       // ������������1  
        if ( x<=1 || x%2==0 )    return 0;   // ��������������0   
        for ( i=3; i<=sqrt(x); i+=2 )  
            if ( x%i==0 )   return 0;   // ��������������0   
        return 1;           // ������������1   
    }  
      
    int main()  
    {   int n, count, *p;  
      
        scanf("%d", &n);        // ������������n  
        p = input( n );         // ���ú�������n������   
        count = PrimCount( p, n );  // ���������м���   
        printf("PrimCount=%d\n", count);  
        return 0;  
    }  
      
    /* PRESET CODE END - NEVER TOUCH CODE ABOVE */  
