//
//  main.c
//  19.06.20.01
//
//  Created by s20181105879 on 2019/6/20.
//  Copyright © 2019 s20181105879. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <fstream>
using namespace std;
char s[100000000];


struct students{
    char xueyaun[100];
    long long id;
    char name[20];
    char sex[10];
    char banji[30];
    double avg;
    double sum;
    double sore[7];
    long long phone;
}a[3];

struct teacher{
    
    char name[30];
    int  id;
    double sore[100];
    char sex[10];
    
}b[7];

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp=NULL;
    //    ofstream st("/Users/s20181105879/Desktop/st.txt");
//std w
    fp=fopen("tea.txt", "w");
    if(!fp)
    {
        printf("open false\n");
        return  0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
 
    
// std r
//   cin.pgets(s,1000000,fp);
    
    fp=fopen("tea.txt", "r");
    if(!fp)
    {
        printf("open false\n");
        return  0;
    }
    for(int i=0;i<100;i++)
    {
        fscanf(fp,"%s",a[i].name);
        fscanf(fp,"%lld" ,&a[i].id);
        fscanf(fp,"%s",a[i].xueyaun);
        fscanf(fp,"%s",a[i].banji);
        fscanf(fp,"%s",a[i].sex);
        a[i].sum=0;
        for(int j=0;i<7;j++)
        {
            fscanf(fp,"%lf",&a[i].sore[j]);
        }
        sort(a[i].sore,a[i].sore+7);
        for(int j=1;j<6;j++)
        {
            a[i].sum+=a[i].sore[j];
        }
        a[i].avg=a[i].sum/5;
        fscanf(fp,"%lld" ,&a[i].phone);
    }
    fclose(fp);
    
    
    
    
    
// tea r
    fp=fopen("tea.txt", "r");
    if(!fp)
    {
        printf("open false\n");
        return  0;
    }
    
    
    for(int i=0;i<7;i++)
    {
        fscanf(fp,"%d",&b[i].id);
        fscanf(fp, "%s",b[i].name);
        fscanf(fp,"%s",b[i].sex);
        for(int j=0;j<100;j++)
        {
            fscanf(fp, "%lf",&b[i].sore[j]);
            b[i].sore[j]=a[j].sore[i];
        }
    }
    fclose(fp);
    
    
    
    
    
    
    
    return 0;
}
