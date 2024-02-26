
float bdt_to_usd,usd_to_bdt ,bdt_to_inr ,inr_to_bdt,bdt_to_eur,eur_to_bdt,bdt_to_pkr,pkr_to_bdt,bdt_to_aed,aed_to_bdt,bdt_to_cny,cny_to_bdt,bdt_to_hkd,hkd_to_bdt,bdt_to_huf,huf_to_bdt,bdt_to_idr,idr_to_bdt,bdt_to_ils,ils_to_bdt,bdt_to_aud,aud_to_bdt,bdt_to_brl,brl_to_bdt,bdt_to_gbp,gbp_to_bdt,bdt_to_cad,cad_to_bdt,bdt_to_clp,clp_to_bdt,bdt_to_jpy,jpy_to_bdt,bdt_to_krw,krw_to_bdt,bdt_to_myr,myr_to_bdt,bdt_to_mxn,mxn_to_bdt,bdt_to_nzd,nzd_to_bdt,bdt_to_rub,rub_to_bdt,bdt_to_twd,twd_to_bdt,bdt_to_php,php_to_bdt,bdt_to_sgd,sgd_to_bdt,bdt_to_zar,zar_to_bdt;



void current_rate(){

    int i;

printf("\tPlease Select The Currency To Be Updated \n\n\n\n");
printf("\tPress 1 For BDT to USD \n\tPress 2 For USD to BDT \n\tPress 3 For BDT to INR \n\tPress 4 For INR to BDT \n\t"
           "Press 5 For BDT to EUR \n\tPress 6 For EUR to BDT \n\tPress 7 For BDT to PKR \n\tPress 8 For PKR to BDT \n\t"
           "Press 9 For BDT to AED \n\tPress 10 For AED to BDT \n\n\n\n\tPress 11 to convert BDT to CNY \n\tPress 12 to convert CNY to BDT \n\tPress 13 to convert BDT to HKD \n"
               "\tPress 14 to convert HKD to BDT \n\tPress 15 to convert BDT to HUF \n\tPress 16 to convert HUF to BDT \n"
               "\tPress 17 to convert BDT to IDR \n\tPress 18 to convert IDR to BDT \n\tPress 19 to convert BDT to ILS \n"
               "\tPress 20 to convert ILS to BDT \n\n \tPress 21 to convert BDT to AUD \n\tPress 22 to convert AUD to BDT \n\tPress 23 to convert BDT to BRL"
           "\n\tPress 24 to convert BRL to BDT \n\t"
           "Press 25 to convert BDT to GBP \n\tPress 26 to convert GBP to BDT \n\tPress 27 to convert BDT to CAD \n\tPress 28 to convert CAD to BDT \n\t"
           "Press 29 to convert BDT to CLP \n\tPress 30 to convert CLP to BDT \n\n\ \tPress 31 to convert BDT to  JPY \n\tPress 32 to convert  JPY to BDT \n\tPress 33 to convert BDT to  KRW\n\tPress 34 to convert  KRW to BDT \n\t"
           "Press 35 to convert BDT to  MYR \n\tPress 36 to convert  MYR to BDT \n\tPress 37 to convert BDT to  MXN \n\tPress 38 to convert  MXN to BDT \n\t"
           "Press 39 to convert BDT to  NZD \n\tPress 40 to convert  NZD to BDT \n\n\ \tPress 41 to convert BDT to RUB \n\tPress 42 to convert RUB to BDT \n\tPress 43 to convert BDT to TWD \n\tPress 44 to convert TWD to BDT \n\t"
           "Press 45 to convert BDT to PHP \n\tPress 46 to convert PHP to BDT \n\tPress 47 to convert BDT to SGD \n\tPress 48 to convert SGD to BDT \n\t"
           "Press 49 to convert BDT to ZAR \n\tPress 50 to convert ZAR to BDT \n\n");
scanf("%d",&i);

switch(i)
{


    case 1:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO UNITED STATES DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f USD\n", bdt_to_usd);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_usd);
        break;

    case 2:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 UNITED STATES DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 USD = %.3f BDT\n", usd_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &usd_to_bdt);
        break;

    case 3:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO INDIAN RUPEE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f INR\n", bdt_to_inr);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_inr);
        break;

    case 4:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INDIAN RUPEE TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 INR = %.3f BDT\n", inr_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &inr_to_bdt);
        break;

    case 5:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO EURO \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f EUR\n", bdt_to_eur);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_eur);
        break;

        case 6:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 EURO TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 EUR = %.3f BDT\n", eur_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &eur_to_bdt);
        break;

    case 7:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO PAKISTANI RUPEE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f PKR\n", bdt_to_pkr);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_pkr);
        break;

    case 8:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PAKISTANI RUPEE TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 PKR = %.3f BDT\n", pkr_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &pkr_to_bdt);
        break;

    case 9:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO UAE DIRHAM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f AED\n", bdt_to_aed);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_aed);
        break;

    case 10:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 UAE DIRHAM TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 AED = %.3f BDT\n", aed_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &aed_to_bdt);
        break;

    case 11:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO CHINESE YUAN RENMINBI \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f CNY\n", bdt_to_cny);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_cny);
        break;

    case 12:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHINESE YUAN RENMINBI TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 CNY = %.3f BDT\n", cny_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &cny_to_bdt);
        break;

    case 13:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO HONG KONG DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f HKD\n", bdt_to_hkd);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_hkd);
        break;

    case 14:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 HONG KONG DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 HKD = %.3f BDT\n", hkd_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &hkd_to_bdt);
        break;

    case 15:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO HUNGARIAN FORINT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f HUF\n", bdt_to_huf);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_huf);
        break;

    case 16:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 HUNGARIAN FORINT TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 HUF = %.3f BDT\n", huf_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &huf_to_bdt);
        break;

    case 17:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO INDONESIAN RUPIAH \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f IDR\n", bdt_to_idr);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_idr);
        break;

    case 18:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INDONESIAN RUPIAH TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 IDR = %.3f BDT\n",idr_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &idr_to_bdt);
        break;

    case 19:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO ISRAELI NEW SHEKEL \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f ILS\n", bdt_to_ils);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_ils);
        break;

    case 20:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ISRAELI NEW SHEKEL TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 ILS = %.3f BDT\n", ils_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &ils_to_bdt);
        break;

    case 21:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO AUSTRALIAN DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f AUD\n", bdt_to_aud);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_aud);
        break;

    case 22:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AUSTRALIAN DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 AUD= %.4f BDT\n", aud_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &aud_to_bdt);
        break;

    case 23:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO BRAZILIAN REAL\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f BRL\n", bdt_to_brl);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_brl);
        break;

    case 24:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BRAZILIAN REAL TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BRL = %.3f BDT\n", brl_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &brl_to_bdt);
        break;

    case 25:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO BRITISH POUND \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f GBP\n", bdt_to_gbp);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_gbp);
        break;

    case 26:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BRITISH POUND TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 GBP = %.3f BDT\n", gbp_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &gbp_to_bdt);
        break;

    case 27:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO CANADIAN DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f CAD\n", bdt_to_cad);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_cad);
        break;

    case 28:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CANADIAN DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 CAD = %.3f BDT\n", cad_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &cad_to_bdt);
        break;

    case 29:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO CHILEAN PESO \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f CLP\n", bdt_to_clp);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_clp);
        break;

    case 30:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHILEAN PESO TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 CLP = %.3f BDT\n", clp_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &clp_to_bdt);
        break;

    case 31:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO JAPANESE YEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f JPY\n", bdt_to_jpy);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_jpy);
        break;

    case 32:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 JAPANESE YEN TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 JPY = %.3f BDT\n", jpy_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &jpy_to_bdt);
        break;

    case 33:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO KOREAN WON \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f KRW\n", bdt_to_krw);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_krw);
        break;

    case 34:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 KOREAN WON TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 KRW = %.3f BDT\n", krw_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &krw_to_bdt);
        break;

    case 35:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO MALAYSIAN RINGGIT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f MYR\n", bdt_to_myr);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_myr);
        break;

    case 36:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MALAYSIAN RINGGIT TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 MYR = %.3f BDT\n", myr_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &myr_to_bdt);
        break;

    case 37:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO MEXICAN PESO \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f MXN\n", bdt_to_mxn);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_mxn);
        break;

    case 38:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MEXICAN PESO TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 MXN = %.3f BDT\n", mxn_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &mxn_to_bdt);
        break;

    case 39:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO NEW ZEALAND DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f NZD\n", bdt_to_nzd);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_nzd);
        break;

    case 40:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NEW ZEALAND DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 NZD = %.3f BDT\n", nzd_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &nzd_to_bdt);
        break;

    case 41:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO RUSSIAN RUBLE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f RUB\n", bdt_to_rub);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_rub);
        break;

    case 42:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 RUSSIAN RUBLE TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 RUB = %.3f BDT\n", rub_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &rub_to_bdt);
        break;

    case 43:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO TAIWAN DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f TWD\n", bdt_to_twd);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_twd);
        break;

    case 44:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TAIWAN DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tAs a Current Rate 1 TWD = %.3f BDT\n", twd_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &twd_to_bdt);
        break;

    case 45:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO PHILIPPINE PESO \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f PHP\n", bdt_to_php);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_php);
        break;

    case 46:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PHILIPPINE PESO TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 PHP = %.3f BDT\n", php_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &php_to_bdt);
        break;

    case 47:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO SINGAPORE DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f SGD\n", bdt_to_sgd);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_sgd);
        break;

    case 48:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SINGAPORE DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 SGD = %.3f BDT\n", sgd_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &sgd_to_bdt);
        break;

    case 49:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO SOUTH AFRICAN RAND \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 BDT = %.3f ZAR\n", bdt_to_zar);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &bdt_to_zar);
        break;

    case 50:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SOUTH AFRICAN RAND TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\n\tCurrent Rate 1 ZAR = %.3f BDT\n", zar_to_bdt);
        printf("\tEnter the Rate to be Update: ");
        scanf("%f", &zar_to_bdt);
        break;

    default:
        printf("\tWrong Choice!");






}





}
