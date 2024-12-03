#include<stdio.h>

void main()
{
    int base_salary;
    float HRA,MA,DA,TA,PF,PT=200,gross,nettotal;
    char name[20];

    printf("emplopyee name:");
    scanf("%s",&name);
    printf("base_salary :");
    scanf("%d",&base_salary);
    
    HRA=base_salary*0.1;
    MA=base_salary*0.08;
    DA=base_salary*0.06;
    TA=base_salary*0.06;
    PF=base_salary*0.1;  

    gross=HRA+MA+DA+TA;
    nettotal=gross-PF-PT;


    printf("\n employee name is :%s",name);
    printf("\n base_salary is :%d",base_salary);
    printf("\n gross salasy is :%f",gross);
    printf("\n nettotal is :%f",nettotal);


}