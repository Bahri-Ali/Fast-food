#include<stdio.h>
#include<stdbool.h>
int main(){
    int order,old,price,order_taille,order_type,etud,promo,number_order,price_tariba,price_totale,price2=0,N=0;
    bool etudiant,code_promo,older,stop=true,dariba,num_order;
    printf("hello,please folowing the steps\n");
    while(stop==true){
        printf("1.pizza\n2.taco\n3.salade\n4.exet\n");
        scanf("%d",&order);
        price2+=price;
        if ((order>0) && (order<4))
        {   printf("what your needs in your order\n1.3chees\n2.chiken\n3.beef\n4.tuna\n");
            scanf("%d",order_type);
            printf("please chouse your order taille\n1.M\n2.L\n3.XL\n");
            scanf("%d",&order_taille);
            if (order==1)
            {//pizza
                switch (order_type)
                {//wache habe ydire
                // taille and prix
                case 1:
                    order_taille==1?price=2000:order_taille==2?price=2500:order_taille==3?price=4000:printf("please chouse validy chois");
                    break;
                case 2:
                    order_taille==1?price=3500:order_taille==2?price=4000:order_taille==3? price=4500:printf("please chouse validy chois");
                    break;
                case 3:
                    order_taille==1?price=3000:order_taille==2?price=40:order_taille==3?price=50:printf("please chouse validy chois");
                    break;
                case 4:
                    order_taille==1?price=2000:order_taille==2?price=3000:order_taille==3?price=3500:printf("please chouse validy chois");
                    break;    
                }
            }else if(order==2) {
                switch (order_type)
                {
                case 1:
                    order_taille==1?price=2000:order_taille==2?price=3000:order_taille==3?price=4000:printf("please chouse validy chois");
                    break;           
                case 2:
                    order_taille==1?price=2500:order_taille==2?price=3000:order_taille==3?price=3500:printf("please chouse validy chois");
                    break;  
                case 3:
                    order_taille==1?price=2000:order_taille==2?price=2500:order_taille==3?price=3000:printf("please chouse validy chois");
                    break;
                case 4:
                    order_taille==1?price=2000:order_taille==2?price=3500:order_taille==3?price=4000:printf("please chouse validy chois");
                    break;    
                }
            }else if(order==3){
                switch (order_type)
                {
                case 1:
                    order_taille==1?price=2000:order_taille==2?price=2500:order_taille==3?price=4000:printf("please chouse validy chois");
                    break;
                case 2:
                    order_taille==1?price=2000:order_taille==2?price=2500:order_taille==3?price=4000:printf("please chouse validy chois");
                    break;
                case 3:
                    order_taille==1?price=2000:order_taille==2?price=2500:order_taille==3?price=4000:printf("please chouse validy chois");
                    break;
                case 4:
                    order_taille==1?price=2000:order_taille==2?price=2500:order_taille==3?price=4000:printf("please chouse validy chois");
                    break;
                }
            }
            printf("are you etudiant\n1.yes \n2.no\n");
            scanf("%d",&etud);
            etud==1?etudiant=true:etudiant==false;
            if (etudiant==true)
            {
                price=price*30/100;
            }else{
                printf("how old are you please?\n");
                scanf("%d",&old);
                old>=50?older=true:false;
                if (older==true)
                {
                    price=price*20/100;
                }else if (older==true){
                    printf("do you have code promo?\n1.yes\n2.no\n");
                    scanf("%d",&promo);
                    promo==1?code_promo=true:false;
                    code_promo==true?price=price*10/100:price;
                }
            }
            printf("price is %d ",price,"\n");
        }else if(order==4){
            printf("thank you\n");
        }else{
            printf("The value is undefined\n");
        }
        printf("\ndo you want a nother order\n1.yes\n2.no\n");
        scanf("%d",&number_order);
        number_order==1?num_order=true:false;
        if (number_order==1)
        {   
            price_tariba=price*19/100+price;
            price_totale=price_tariba+price_totale+price2;
            printf("price totale is ",&price_totale,"\n");
        }else if (number_order==2)
        {
            printf("thank you \n");
            stop=false;
        }
    } 
}