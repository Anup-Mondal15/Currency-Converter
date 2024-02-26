void admin()
{

    int y,a;
    char username[10];
    char password[10];

    printf("\n\n\t Enter your username:\n\t ==> ");
    scanf("%s",&username);

    printf("\n\t Enter your password:\n\t ==> ");
    scanf("%s",&password);

    if(strcmp(username,"risfat")==0)
    {
        if(strcmp(password,"111")==0)
        {

            printf("\n\n\tPassword Matched!\n\tLOADING");
            for(y=0; y<=30; y++)
            {

                printf(".");
            }
            printf("\n\n\n");

            printf("\t 1.View Current Currency Rates \n");
            printf("\t 2.Update Currency Rates \n");
            printf("\t 3.Exit \n");


            printf("\n\n\t Please Continue with (1,2,3)\n \t ==>");
            scanf("%d",&a);


            if(a==1)
            {

                printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Current Currency Rates \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");

                current_rate();

            }
            else
            {

                if(a==2)
                {

                    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Update Currency Rates \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");

                    current_rate();

                }
                else
                {
                    if(a==3)
                    {

                        onexit();


                    }
                    else
                    {
                        printf("\nWrong Input");
                    }
                }

            }

        }
        else
        {
            printf("\nWrong Password");
        }
    }
    else
    {
        printf("\nWrong Username");


    }


}


