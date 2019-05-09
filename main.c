#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    //local constant
    const float pst_rate = 9.5;
	const float gst_rate = 7.75;
	const float bonus_rate1 = 9.5;
	const float bonus_rate2 = 7;


	int cust_number,article_quantity;
	int bar_code;
	char article_name[20];
	float article_price,sub_total,gst,pst,total,tax_deductions;

	//input data statements

		printf("\t\tWelcome To Billing System\n");
		printf("\n Please Enter the following details. \n\n");


		printf("Article Name: \n");
		scanf("%s",article_name);

		printf("Customer Number: \n");
		scanf("%d",cust_number);

		printf("Bar code for article: \n");
        scanf("%d",&bar_code);

        printf("Price for article: \n");
        scanf("%f",&article_price);

        printf("\n\t***Enter 0 for none****");

        printf("No of article quantity purchased : \n");
        scanf("%d",&article_quantity);


        //Calculation Statements

        sub_total = article_price*article_quantity;
        if(article_quantity == 2 ){
            tax_deductions = (sub_total*bonus_rate1)/100;
            sub_total = sub_total - tax_deductions;
        }else if(article_quantity >= 3){
            tax_deductions = (sub_total*bonus_rate2)/100;
            sub_total = sub_total - tax_deductions;
        }else{
            return 0;
        }
        pst = (sub_total* pst_rate)/100;
        gst = ((sub_total + pst)*gst_rate)/100;
        total = sub_total + pst + gst;

        //print bill

          printf("\n");
    printf("\t\t\t====================================================\n");
	printf("\t\t\t\t      Electronics Store Bill\n");
	printf("\t\t\t====================================================\n");
	printf("\t\t\tQTY \t Description \t Unit Price$\t Total Price$ \t Bar code\n");
	printf("\t\t\t--- \t ----------- \t ---------- \t -----------\n\n");
	printf("\t\t\t                                           ---------\n\n");
	printf("\t\t\t                           SUBTOTAL       %10.2f   \n", sub_total);
	printf("\t\t\t                           TAX            %10.2f    \n", tax_deductions);
	printf("\t\t\t                           GST            %10.2f    \n", gst_rate);
	printf("\t\t\t                           PST            %10.2f    \n", pst_rate);
	printf("\t\t\t                           Total$         %10.2f     \n", total);
	printf("\t\t\t                           Customer         %s     \n", cust_number);

	printf("\t\t\t====================================================\n\n");
	printf("\t\t\t\t\t\tEnd of bill\n\n");


}

