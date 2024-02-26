#include <stdio.h>
#include <stdlib.h>

    system("color 9");
    printf("\n\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t\t\t\t\t    A simple and intuitive currency converter \n\n\n\n\n\n\n");

    printf("\t 1.View All possible Currency Conversation \n");
    printf("\t 2.View Currency with Continents \n");
    printf("\t 3.System Maintenance \n");


    printf("\n\n\t Please Continue with (1,2,3)\n \t ==>");
    scanf("%d",&x);

    if(x==1)
    {

        conditions1();

    }
    else
    {
        if(x==2)
        {
            continent();
        }
        else if(x==3)
        {

printf("\n\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t\t\t\t\t\t\t  Admin Panel \n\n\n\n\n\n\n");
admin();


        }
        else
        {
            printf("\n\n\t Wrong Choice");
        }
    }

    printf("\n\n\n\n\n\n");
    return 0;
}
