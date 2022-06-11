/*2. WAP to count the numbers of vowels, consonants, digits and special
symbols in a given string.*/

#include<stdio.h>
int main()
{
    char a[100];
    int i,len,vow,con,dig,sym,sps,s,s1;
    vow=con=dig=sym=sps=0;
    gets(a);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='
                O'||a[i]=='u'||a[i]=='U')
                {
                    vow++;
                }
                else if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
        {
            con++;
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            dig++;
        }
        else if(a[i]==' ')
        {
            sps++;
        }
        else
        {
            sym++;
        }
    }
    s=sps+sym;
    s1=s-sps;
    printf("The number of vowels= %d\n",vow);
    printf("The number of consonets = %d\n",con);
    printf("The number of digit = %d\n",dig);
    printf("The number of symbols = %d\n",s1);
    return 0;
}
