
#include <stdio.h>
#include <string.h>
int main()
{
	char str[1000],a[1000]= {'\0'};
	int n=0,m=0,t=0,i=0;
	char ch;
	scanf("%s",str);
	do {
		scanf("%c",&ch);
	} while(ch==' ');//������Ŀ˵����ո�����������Ū��ѭ�� 
	scanf("%d",&n);
	int temp=0,l=0,s=0,fu=0;
	l=strlen(str);
	//������� 
	if(str[0]=='-') {
		fu=1;
		l--;
		for(s=0; str[s]!='\0'; s++) {
			str[s]=str[s+1];
		}
		str[l]='\0';
	}
	//��С���㲢ȥ������t��С����ǰ��λ����m��С������λ�� 
	int ent2=0;
	for(i=0; i<l; i++) {
		if(str[i]=='.') {
			m=l-i-1;
			t=i;
			ent2=1;
			continue;
		}
		a[temp]=str[i];
		temp++;
	}
	l=strlen(a);
	
	if(ent2==0)t=l;//���������������Ĵ�����С����ǰλ�����Ǵ��� 
	if(fu)printf("-");
	int ent=0;
	//n���������ǰ�Ƶ�λ�� 
	if(n>0) {//���� 
		if(n<=m)//С����ǰ���ò�0 
		{ 
			l++; 
			for(i=l-1; i>=t+n; i--) {
				a[i+1]=a[i];
			}
			a[t+n]='.';//��С����
			 
			if(m-n<=8) {//���λ������8λ 
				for(i=0; i<l; i++) {
					if(a[i]=='0'&&ent==0)//Ϊ�˴����������0.XX�ģ��������λ��0 
					 {
						ent=1;
						continue;
					}
					printf("%c",a[i]);
					ent=1;
				}//���� 
				for(i=8-m+n; i>0; i--) {
					printf("0");
				}
			}
			 else {//��8λ����� 
				for(i=0; i<8+l-m+n; i++) {
					if(a[i]=='0'&&ent==0) {
						ent=1;
						continue;
					}
					printf("%c",a[i]);
					ent=1;
				}
			}
		} 
		else {//С����ǰҪ���� 
			for(i=0; i<l; i++) {//��ȫ����� 
				if(a[i]=='0'&&ent==0) {
					ent=1;
					continue;
				}
				printf("%c",a[i]);
				ent=1;
			}//���� 
			for(i=1; i<=n-m; i++) {
				printf("0");
			}//���8λ 
			printf(".00000000");
		}
		printf("\n");
		
	} else if(n==0) {//���� 
		if(ent2==0)printf("%s.00000000\n",a);
		else {
			if(m<=8) {
                printf("%s",str);
				for(i=0; i<8-m; i++) {
					printf("0");
				}
			} else
				for(i=0; i<8+t+1; i++) {
					printf("%c",str[i]);
				}
			printf("\n");
		}

	}

//ǰ�� 
	else {
		n=-n;
		if(t>n) {
			l++;
			for(i=l-1; i>=t-n; i--) {
				a[i+1]=a[i];
			}
			a[t-n]='.';
			if(m+n<=8) {
				printf("%s",a);
				for(i=8-m-n; i>0; i--) {
					printf("0");
				}
			} else {
				for(i=0; i<8+l-m-n; i++) {
					printf("%c",a[i]);
				}
			} 
		} //����ͬ�� 
		else {
			printf("0.");
			if(n-t<=8){
			for(i=1; i<=n-t; i++) {
				printf("0");
			}
			if(m+n<=8) {
				printf("%s",a);
				for(i=8-m-n; i>0; i--) { 
					printf("0");
				} 
			}else {
				for(i=0; i<8-n+t; i++) {
					printf("%c",a[i]);
				}
			}
		}
		else printf("00000000");
		}
		printf("\n");
	}
	return 0;
}
