# include <stdio.h>
#include<string.h>
//structure

struct product_details
{
    char brand_name[100];
    char product_name[100];
    int identification_no;
    double price;
    char colour[100];
    int stock;
    char dealer[100];
    int offer;
    int sold;
    int reorder_quantity;

};


struct category
{
int no_of_products;
struct product_details pro[10];
char category_name[100];
};


struct purchaser_details
{

    char purchaser_ID[100];
    char purchaser_name[100];
    char address[200];
    int count_of_products_purchased;
    struct product_details pro[100];
    int date,month,year;
     int ratings;
     char review[100];
};

/*********************************************************************************************************************************************/
//Function for question 5

void Display_Offers(struct category cat[])
{
    for(int i=0; i<5; i++)
    {
           printf("\ncategory name : %s\n",cat[i].category_name);
        for(int j=0;j<cat[i].no_of_products;j++)
        {
        if(cat[i].pro[j].offer > 0)
        {
               printf("product name : %s\n",cat[i].pro[j].product_name);
               printf("brand name : %s\n",cat[i].pro[j].brand_name);
               printf("product identification number : %d\n",cat[i].pro[j].identification_no);
               printf("price : %lf\n",cat[i].pro[j].price);
               printf("colour : %s\n",cat[i].pro[j].colour);
               printf("stock : %d\n",cat[i].pro[j].stock);
               printf("offer : %d\n\n",cat[i].pro[j].offer);
        }

        }

    }
}
/*********************************************************************************************************************************************/
//Function for question 2

void recommend_products(struct purchaser_details purchaser,struct category cat[])
{

    for(int i=0;i<purchaser.count_of_products_purchased; i++)
    {
        for(int j=0;j<5;j++)
        {

        for(int k=0;k<cat[j].no_of_products;k++)
        {
           if(strcmp(purchaser.pro[i].brand_name,cat[j].pro[k].brand_name)==0||strcmp(purchaser.pro[i].product_name,cat[j].pro[k].product_name)==0)
           {
           {
               printf("product name : %s\n",cat[j].pro[k].product_name);
               printf("brand name : %s\n",cat[j].pro[k].brand_name);
               printf("product identification number : %d\n",cat[j].pro[k].identification_no);
               printf("price : %lf\n",cat[j].pro[k].price);
               printf("colour : %s\n",cat[j].pro[k].colour);
               printf("stock : %d\n",cat[j].pro[k].stock);
               printf("offer : %d\n",cat[j].pro[k].offer);
           }

        }
    }
    }
    }

}




/*********************************************************************************************************************************************/
int main ()
{
//We defined 5 categories named
int choice;
struct purchaser_details purchaser;
struct category cat[5];
//Take input
   strcpy(cat[0].category_name ,"footwear");
   strcpy(cat[1].category_name ,"electronics");
   strcpy(cat[2].category_name ,"furniture");
   strcpy(cat[3].category_name ,"books");
   strcpy(cat[4].category_name ,"sports");

//category footwear
//product 1
cat[0].no_of_products=6;
strcpy(cat[0].pro[0].product_name ,"sneakers");
strcpy(cat[0].pro[0].brand_name ,"sparx");
cat[0].pro[0].identification_no = 27461;
cat[0].pro[0].price = 687;
strcpy(cat[0].pro[0].colour,"white");
cat[0].pro[0].stock = 30;
strcpy(cat[0].pro[0].dealer,"relaxo_footwear");
cat[0].pro[0].offer = 15;
cat[0].pro[0].sold = 40;
cat[0].pro[0].reorder_quantity = 50;
//product 2
strcpy(cat[0].pro[1].product_name ,"sneakers");
strcpy(cat[0].pro[1].brand_name ,"adidas");
cat[0].pro[1].identification_no = 27462;
cat[0].pro[1].price = 1299;
strcpy(cat[0].pro[1].colour,"black");
cat[0].pro[1].stock = 25;
strcpy(cat[0].pro[1].dealer,"adidas_marketing");
cat[0].pro[1].offer = 57;
cat[0].pro[1].sold = 30;
cat[0].pro[1].reorder_quantity = 50;
//product 3
strcpy(cat[0].pro[2].product_name ,"sandals");
strcpy(cat[0].pro[2].brand_name ,"adidas");
cat[0].pro[2].identification_no = 27463;
cat[0].pro[2].price = 1214;
strcpy(cat[0].pro[2].colour,"blue");
cat[0].pro[2].stock = 50;
strcpy(cat[0].pro[2].dealer,"adidas_marketing");
cat[0].pro[2].offer = 55;
cat[0].pro[2].sold = 70;
cat[0].pro[2].reorder_quantity = 50;
//product 4
strcpy(cat[0].pro[3].product_name ,"slippers");
strcpy(cat[0].pro[3].brand_name ,"sketchers");
cat[0].pro[3].identification_no = 27464;
cat[0].pro[3].price = 974;
strcpy(cat[0].pro[3].colour,"black");
cat[0].pro[3].stock = 55;
strcpy(cat[0].pro[3].dealer,"sketchers_south_asia");
cat[0].pro[3].offer = 43;
cat[0].pro[3].sold = 60;
cat[0].pro[3].reorder_quantity = 50;
//product 5
strcpy(cat[0].pro[4].product_name ,"slides");
strcpy(cat[0].pro[4].brand_name ,"crocs");
cat[0].pro[4].identification_no = 27465;
cat[0].pro[4].price = 2406;
strcpy(cat[0].pro[4].colour,"navy_blue");
cat[0].pro[4].stock = 35;
strcpy(cat[0].pro[4].dealer,"crocs_india_pvt");
cat[0].pro[4].offer = 5;
cat[0].pro[4].sold = 20;
cat[0].pro[0].reorder_quantity = 50;
//product 6
strcpy(cat[0].pro[5].product_name ,"running_shoe");
strcpy(cat[0].pro[5].brand_name ,"puma");
cat[0].pro[5].identification_no = 27466;
cat[0].pro[5].price = 1214;
strcpy(cat[0].pro[5].colour,"rhubarb_black");
cat[0].pro[5].stock =65 ;
strcpy(cat[0].pro[5].dealer,"puma_pvt");
cat[0].pro[5].offer = 50;
cat[0].pro[5].sold = 40;
cat[0].pro[0].reorder_quantity = 50;


//category electronics
//product 1
cat[1].no_of_products=8;
strcpy(cat[1].pro[0].product_name ,"buds");
strcpy(cat[1].pro[0].brand_name ,"noise");
cat[1].pro[0].identification_no = 12340;
cat[1].pro[0].price = 1799;
strcpy(cat[1].pro[0].colour,"white");
cat[1].pro[0].stock = 40;
strcpy(cat[1].pro[0].dealer,"noise_store");
cat[1].pro[0].offer = 51;
cat[1].pro[0].sold = 100;
cat[1].pro[0].reorder_quantity = 52;
//product 2
strcpy(cat[1].pro[1].product_name ,"headphones");
strcpy(cat[1].pro[1].brand_name ,"noise");
cat[1].pro[1].identification_no = 12341;
cat[1].pro[1].price = 1499;
strcpy(cat[1].pro[1].colour,"army_green");
cat[1].pro[1].stock = 35;
strcpy(cat[1].pro[1].dealer,"noise_store");
cat[1].pro[1].offer = 70;
cat[1].pro[1].sold = 120;
cat[1].pro[1].reorder_quantity = 52;
//product 3
strcpy(cat[1].pro[2].product_name ,"neckband");
strcpy(cat[1].pro[2].brand_name ,"noise");
cat[1].pro[2].identification_no = 12342;
cat[1].pro[2].price = 1199;
strcpy(cat[1].pro[2].colour,"blue");
cat[1].pro[2].stock = 50;
strcpy(cat[1].pro[2].dealer,"appario_pvt_ltd");
cat[1].pro[2].offer = 60;
cat[1].pro[2].sold = 150;
cat[1].pro[2].reorder_quantity = 52;

//product 4
strcpy(cat[1].pro[3].product_name ,"airdopes");
strcpy(cat[1].pro[3].brand_name ,"boat");
cat[1].pro[3].identification_no = 12343;
cat[1].pro[3].price = 1199;
strcpy(cat[1].pro[3].colour,"black");
cat[1].pro[3].stock = 45;
strcpy(cat[1].pro[3].dealer,"appario_pvt_ltd");
cat[1].pro[3].offer = 73;
cat[1].pro[3].sold = 200;
cat[1].pro[3].reorder_quantity = 52;

//product 5
strcpy(cat[1].pro[4].product_name ,"headphones");
strcpy(cat[1].pro[4].brand_name ,"boat");
cat[1].pro[4].identification_no = 12344;
cat[1].pro[4].price = 1299;
strcpy(cat[1].pro[4].colour,"yellow");
cat[1].pro[4].stock = 55;
strcpy(cat[1].pro[4].dealer,"appario_pvt_ltd");
cat[1].pro[4].offer = 64;
cat[1].pro[4].sold = 120;
cat[1].pro[4].reorder_quantity = 52;

//product 6
strcpy(cat[1].pro[5].product_name ,"smartband");
strcpy(cat[1].pro[5].brand_name ,"sony");
cat[1].pro[5].identification_no = 12345;
cat[1].pro[5].price = 3808;
strcpy(cat[1].pro[5].colour,"white");
cat[1].pro[5].stock = 100;
strcpy(cat[1].pro[5].dealer,"sony_pvt");
cat[1].pro[5].offer = 30;
cat[1].pro[5].sold = 30;
cat[1].pro[5].reorder_quantity = 52;

//product 7
strcpy(cat[1].pro[6].product_name ,"phone");
strcpy(cat[1].pro[6].brand_name ,"realme");
cat[1].pro[6].identification_no = 12346;
cat[1].pro[6].price = 13799;
strcpy(cat[1].pro[6].colour,"white");
cat[1].pro[6].stock = 102;
strcpy(cat[1].pro[6].dealer,"ace_delhi");
cat[1].pro[6].offer = 19;
cat[1].pro[6].sold = 200;
cat[1].pro[6].reorder_quantity = 52;

//product 8
strcpy(cat[1].pro[7].product_name ,"phone");
strcpy(cat[1].pro[7].brand_name ,"redmi");
cat[1].pro[7].identification_no = 12347;
cat[1].pro[7].price = 12490;
strcpy(cat[1].pro[7].colour,"blue");
cat[1].pro[7].stock = 66;
strcpy(cat[1].pro[7].dealer,"redmi_store");
cat[1].pro[7].offer = 22;
cat[1].pro[7].sold = 120;
cat[1].pro[7].reorder_quantity = 52;

//category furniture
//product 1
cat[2].no_of_products=6;
strcpy(cat[2].pro[0].product_name ,"sofa");
strcpy(cat[2].pro[0].brand_name ,"rosewood");
cat[2].pro[0].identification_no = 98760;
cat[2].pro[0].price = 35999;
strcpy(cat[2].pro[0].colour,"brown");
cat[2].pro[0].stock = 43;
strcpy(cat[2].pro[0].dealer,"home_furniture");
cat[2].pro[0].offer = 40;
cat[2].pro[0].sold = 35;
cat[2].pro[0].reorder_quantity = 50;

//product 2
strcpy(cat[2].pro[1].product_name ,"sofa");
strcpy(cat[2].pro[1].brand_name ,"sleepyhead");
cat[2].pro[1].identification_no = 98761;
cat[2].pro[1].price = 34999;
strcpy(cat[2].pro[1].colour,"blue");
cat[2].pro[1].stock = 20;
strcpy(cat[2].pro[1].dealer,"retail");
cat[2].pro[1].offer = 17;
cat[2].pro[1].sold = 55;
cat[2].pro[1].reorder_quantity = 100;

//product 3
strcpy(cat[2].pro[2].product_name ,"chair");
strcpy(cat[2].pro[2].brand_name ,"wakefit");
cat[2].pro[2].identification_no = 98762;
cat[2].pro[2].price = 15599;
strcpy(cat[2].pro[2].colour,"black");
cat[2].pro[2].stock = 70;
strcpy(cat[2].pro[2].dealer,"sunon");
cat[2].pro[2].offer =25;
cat[2].pro[2].sold = 200;
cat[2].pro[2].reorder_quantity = 100;

//product 4
strcpy(cat[2].pro[3].product_name ,"chair");
strcpy(cat[2].pro[3].brand_name ,"furnicom");
cat[2].pro[3].identification_no = 98763;
cat[2].pro[3].price = 13399;
strcpy(cat[2].pro[3].colour,"brown");
cat[2].pro[3].stock = 300;
strcpy(cat[2].pro[3].dealer,"furnicom_chairs");
cat[2].pro[3].offer = 50;
cat[2].pro[3].sold = 300;
cat[2].pro[3].reorder_quantity = 100;

//product 5
strcpy(cat[2].pro[4].product_name ,"table");
strcpy(cat[2].pro[4].brand_name ,"indigo");
cat[2].pro[4].identification_no = 98764;
cat[2].pro[4].price = 17999;
strcpy(cat[2].pro[4].colour,"brown");
cat[2].pro[4].stock = 50;
strcpy(cat[2].pro[4].dealer,"amazon");
cat[2].pro[4].offer = 63;
cat[2].pro[4].sold = 80;
cat[2].pro[4].reorder_quantity = 100;

//product 6
strcpy(cat[2].pro[5].product_name ,"table");
strcpy(cat[2].pro[5].brand_name ,"kawachi");
cat[2].pro[5].identification_no = 98765;
cat[2].pro[5].price = 18000;
strcpy(cat[2].pro[5].colour,"white");
cat[2].pro[5].stock = 65;
strcpy(cat[2].pro[5].dealer,"sunon");
cat[2].pro[5].offer = 23;
cat[2].pro[5].sold = 120;
cat[2].pro[5].reorder_quantity = 100;

//category books
//product 1
cat[3].no_of_products=7;
strcpy(cat[3].pro[0].product_name ,"oliver_twist");
strcpy(cat[3].pro[0].brand_name ,"classmate");
cat[3].pro[0].identification_no = 54320;
cat[3].pro[0].price = 199;
strcpy(cat[3].pro[0].colour,"brown");
cat[3].pro[0].stock = 150;
strcpy(cat[3].pro[0].dealer,"repro_books");
cat[3].pro[0].offer = 0;
cat[3].pro[0].sold = 300;
cat[3].pro[0].reorder_quantity = 250;

//product 2
strcpy(cat[3].pro[1].product_name ,"ignited_minds");
strcpy(cat[3].pro[1].brand_name ,"classmate");
cat[3].pro[1].identification_no = 54321;
cat[3].pro[1].price = 132;
strcpy(cat[3].pro[1].colour,"white");
cat[3].pro[1].stock = 200;
strcpy(cat[3].pro[1].dealer,"cocoblu_retail");
cat[3].pro[1].offer = 34;
cat[3].pro[1].sold = 100;
cat[3].pro[1].reorder_quantity = 250;

//product 3
strcpy(cat[3].pro[2].product_name ,"hobbit");
strcpy(cat[3].pro[2].brand_name ,"arihant");
cat[3].pro[2].identification_no = 54322;
cat[3].pro[2].price = 499;
strcpy(cat[3].pro[2].colour,"green");
cat[3].pro[2].stock = 200;
strcpy(cat[3].pro[2].dealer,"harpercollins");
cat[3].pro[2].offer = 0;
cat[3].pro[2].sold = 50;
cat[3].pro[1].reorder_quantity = 250;

//product 4
strcpy(cat[3].pro[3].product_name ,"theory_of_everything");
strcpy(cat[3].pro[3].brand_name ,"cengage");
cat[3].pro[3].identification_no = 54323;
cat[3].pro[3].price = 147;
strcpy(cat[3].pro[3].colour,"red");
cat[3].pro[3].stock = 300;
strcpy(cat[3].pro[3].dealer,"jaico");
cat[3].pro[3].offer = 0;
cat[3].pro[3].sold = 400;
cat[3].pro[3].reorder_quantity = 250;

//product 5
strcpy(cat[3].pro[4].product_name ,"astronomy");
strcpy(cat[3].pro[4].brand_name ,"arihant");
cat[3].pro[4].identification_no = 54324;
cat[3].pro[4].price = 471;
strcpy(cat[3].pro[4].colour,"yellow");
cat[3].pro[4].stock = 250;
strcpy(cat[3].pro[4].dealer,"bookevent");
cat[3].pro[4].offer = 68;
cat[3].pro[4].sold = 430;
cat[3].pro[4].reorder_quantity = 150;

//product 6
strcpy(cat[3].pro[5].product_name ,"sherlock_holmes");
strcpy(cat[3].pro[5].brand_name ,"cengage");
cat[3].pro[5].identification_no = 54325;
cat[3].pro[5].price = 199;
strcpy(cat[3].pro[5].colour,"pink");
cat[3].pro[5].stock = 230;
strcpy(cat[3].pro[5].dealer,"cocoblu_retail");
cat[3].pro[5].offer = 54;
cat[3].pro[5].sold = 275;
cat[3].pro[5].reorder_quantity = 150;

//product 7
strcpy(cat[3].pro[6].product_name ,"word_power");
strcpy(cat[3].pro[6].brand_name ,"cengage");
cat[3].pro[6].identification_no = 54323;
cat[3].pro[6].price = 147;
strcpy(cat[3].pro[6].colour,"red");
cat[3].pro[6].stock = 300;
strcpy(cat[3].pro[6].dealer,"jaico");
cat[3].pro[6].offer = 0;
cat[3].pro[6].sold = 420;
cat[3].pro[6].reorder_quantity = 250;


//category sports equipment
cat[4].no_of_products=6;
//product 1
strcpy(cat[4].pro[0].product_name ,"racquet");
strcpy(cat[4].pro[0].brand_name ,"yonex");
cat[4].pro[0].identification_no = 45670;
cat[4].pro[0].price = 2999;
strcpy(cat[4].pro[0].colour,"red");
cat[4].pro[0].stock = 200;
strcpy(cat[4].pro[0].dealer,"prokick");
cat[4].pro[0].offer = 28;
cat[4].pro[0].sold = 35;
cat[4].pro[0].reorder_quantity = 230;

//product 2
strcpy(cat[4].pro[1].product_name ,"cock");
strcpy(cat[4].pro[1].brand_name ,"yonex");
cat[4].pro[1].identification_no = 45671;
cat[4].pro[1].price = 1030;
strcpy(cat[4].pro[1].colour,"yellow");
cat[4].pro[1].stock = 210;
strcpy(cat[4].pro[1].dealer,"retailez");
cat[4].pro[1].offer = 0;
cat[4].pro[1].sold = 300;
cat[4].pro[1].reorder_quantity = 230;

//product 3
strcpy(cat[4].pro[2].product_name ,"bat");
strcpy(cat[4].pro[2].brand_name ,"ceat");
cat[4].pro[2].identification_no = 45672;
cat[4].pro[2].price = 466;
strcpy(cat[4].pro[2].colour,"cream");
cat[4].pro[2].stock = 300;
strcpy(cat[4].pro[2].dealer,"kansal");
cat[4].pro[2].offer = 63;
cat[4].pro[2].sold = 50;
cat[4].pro[2].reorder_quantity = 230;

//product 4
strcpy(cat[4].pro[3].product_name ,"basket_ball");
strcpy(cat[4].pro[3].brand_name ,"cosco");
cat[4].pro[3].identification_no = 45673;
cat[4].pro[3].price = 4999;
strcpy(cat[4].pro[3].colour,"blue");
cat[4].pro[3].stock = 100;
strcpy(cat[4].pro[3].dealer,"brand_villa");
cat[4].pro[3].offer = 45;
cat[4].pro[3].sold = 8;
cat[4].pro[3].reorder_quantity = 230;

//product 5
strcpy(cat[4].pro[4].product_name ,"cricket_ball");
strcpy(cat[4].pro[4].brand_name ,"cosco");
cat[4].pro[4].identification_no = 45674;
cat[4].pro[4].price = 360;
strcpy(cat[4].pro[4].colour,"green");
cat[4].pro[4].stock = 100;
strcpy(cat[4].pro[4].dealer,"retailez");
cat[4].pro[4].offer = 0;
cat[4].pro[4].sold = 200;
cat[4].pro[4].reorder_quantity = 230;

//product 6
strcpy(cat[4].pro[5].product_name ,"bat");
strcpy(cat[4].pro[5].brand_name ,"mrf");
cat[4].pro[5].identification_no = 45675;
cat[4].pro[5].price = 466;
strcpy(cat[4].pro[5].colour,"cream");
cat[4].pro[5].stock = 300;
strcpy(cat[4].pro[5].dealer,"jrs_world");
cat[4].pro[5].offer = 60;
cat[4].pro[5].sold = 60;
cat[4].pro[5].reorder_quantity = 230;


/*********************************************************************************************************/
//Q4
//registration_facility
        printf("\n!!!Please register yourself !!!\n");
        printf("Enter ID of purchaser : ");
        scanf("%s",purchaser.purchaser_ID);
        printf("Enter name of purchaser : ");
        scanf("%s",purchaser.purchaser_name);
        printf("Enter address of purchaser : ");
        scanf("%s",purchaser.address);


/*********************************************************************************************************/
//Purchaser details
        printf("Enter number of products purchased by purchaser : ");
        scanf("%d",&purchaser.count_of_products_purchased);

    for(int j=0; j<purchaser.count_of_products_purchased;j++)
    {
   printf("Enter name of the product : ");
   scanf("%s",purchaser.pro[j].product_name);
   printf("Enter brand name of the product : ");
   scanf("%s",purchaser.pro[j].brand_name);
   printf("Enter  of the price of the product : ");
   scanf("%lf",&purchaser.pro[j].price);
   printf("Enter colour of the product : ");
   scanf("%s",purchaser.pro[j].colour);
   printf("Enter name of the dealer : ");
   scanf("%s",purchaser.pro[j].dealer);
   printf("Enter the date/month/year of purchase\n");
   scanf("%d%d%d",&purchaser.date,&purchaser.month,&purchaser.year);

}


/*********************************************************************************************************/
//Q1
printf("\n!!!!Identifying bestseller product!!!\n");
char user_brand_name[100];
char user_category_name[100];
char user_colour[100];
char user_product_name[100];
double user_price;
printf("Enter user brand name : ");
scanf("%s",user_brand_name);
printf("Enter user_product_name : ");
scanf("%s",user_product_name);
printf("Enter category : ");
scanf("%s",user_category_name);
printf("Enter user_colour : ");
scanf("%s",user_colour);
printf("Enter affordable price : ");
scanf("%lf",&user_price);
struct product_details best_seller;

for(int i=0; i<5; i++)
{
  if(strcmp(user_category_name,cat[i].category_name)==0)
  {
      int max_sold=0;
      for(int j=0;j<cat[i].no_of_products;j++)
      if(max_sold<cat[i].pro[j].sold && cat[i].pro[j].price<user_price )
        {
        max_sold=cat[i].pro[j].sold;
        best_seller=cat[i].pro[j];
        }
  }
}
               printf("\n\nBest seller is : \n");
               printf("product name : %s\n",best_seller.product_name);
               printf("brand name : %s\n",best_seller.brand_name);
               printf("product identification number : %d\n",best_seller.identification_no);
               printf("price : %lf\n",best_seller.price);
               printf("colour : %s\n",best_seller.colour);
               printf("stock : %d\n",best_seller.stock);
               printf("offer : %d\n",best_seller.offer);

/*********************************************************************************************************/
//Q2
printf("\n\n!!!Recommended products!!!\n");
recommend_products(purchaser,cat);
/*********************************************************************************************************/
//Q3
printf("\n!!!Category wise and Dealerwise list!!!\n");
struct category cat_temp;
cat_temp.no_of_products=0;
for(int i=0; i<5; i++)
{
    cat_temp.no_of_products=0;
  for(int j=0;j<cat[i].no_of_products;j++)
  {
      if(cat[i].pro[j].stock<cat[i].pro[j].reorder_quantity)
      {
        cat_temp.pro[cat_temp.no_of_products]=cat[i].pro[j];
        cat_temp.no_of_products++;
      }
  }
  int sorted=0;
  for(int a=0;((a<cat_temp.no_of_products)&&(sorted==0));a++)
  {
      sorted=1;
      for(int b=0; ((b<cat_temp.no_of_products-a-1) && (sorted==1)); b++ )
      {
          if(cat_temp.pro[b].stock > cat_temp.pro[b+1].stock)
          {
              struct product_details pro_temp=cat_temp.pro[b] ;
              cat_temp.pro[b] = cat_temp.pro[b+1];
              cat_temp.pro[b+1] =pro_temp;
              sorted=0;
          }
      }
  }
  printf("\n%s\n",cat[i].category_name);
  for(int x=0; x<cat_temp.no_of_products;x++)
  {
   printf("product name : %s\n",cat_temp.pro[x].product_name);
   printf("stock = %d\n",cat_temp.pro[x].stock);
   printf("brand name : %s\n",cat_temp.pro[x].brand_name);
   printf("product identification number : %d\n",cat_temp.pro[x].identification_no);
   printf("price : %lf\n",cat_temp.pro[x].price);
   printf("colour : %s\n",cat_temp.pro[x].colour);
   printf("offer : %d\n\n",cat_temp.pro[x].offer);
  }
}

/*********************************************************************************************************/
//Q5
printf("\n!!!Hurry up!!\nWe have exclusive offers on these products : \n");
Display_Offers(cat);
}
