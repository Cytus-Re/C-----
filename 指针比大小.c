    /* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
     
    #include <stdio.h>  
      
    void swap(int *, int *);  
    int input(int *, int );  
    int output(int *, int );  
    int main()  
    {  
    // �ֱ�����2*n��n<100)���������������������У��Ƚ϶�Ӧ  
    // ����Ԫ�أ�����Сֵ������a�����У��ϴ�ֵ��������b��   
        int n, k, a[100], b[100];  
        scanf("%d", &n);  
        input(a, n);  
        input(b, n);  
        for ( k=0; k<n; k++ )  
        {   if( a[k] > b[k] )   
                swap(&a[k], &b[k]);   
        }  
        output(a, n);  
        output(b, n);   
        return 0;  
    }  
    void swap(int *a,int *b){
    	int t;
    	t=*a;
    	*a=*b;
    	*b=t;
	}
	int input(int *a,int n){
		int i;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		return 0;
	}
	int output(int *a,int n){
		int i;
		for(i=0;i<n;i++){
			printf("%d,",a[i]);
		}
		printf("\n");
		return 0;
	}
      
    /* PRESET CODE END - NEVER TOUCH CODE ABOVE */  
