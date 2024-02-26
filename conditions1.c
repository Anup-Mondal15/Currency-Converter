float bdt_to_usd=0.012 ,usd_to_bdt=84.82 ,bdt_to_inr=0.84 ,inr_to_bdt=1.19,bdt_to_eur=0.011,eur_to_bdt=93.53,bdt_to_pkr=1.821,pkr_to_bdt=0.55;bdt_to_aed=0.043,aed_to_bdt=23.09,bdt_to_cny=0.082,cny_to_bdt=12.23,bdt_to_hkd=0.092,hkd_to_bdt=10.92,bdt_to_huf=3.59,huf_to_bdt=0.28,bdt_to_idr=162.40,idr_to_bdt=0.0062,bdt_to_ils=0.041,ils_to_bdt=24.60,bdt_to_aud=0.018,aud_to_bdt=57.9383,bdt_to_brl=0.050,brl_to_bdt=20.125,bdt_to_gbp=0.009,gbp_to_bdt=110.809,bdt_to_cad=0.016,cad_to_bdt=64.53,bdt_to_clp=9.35,clp_to_bdt=0.108,bdt_to_jpy=1.28,jpy_to_bdt=0.78,bdt_to_krw=14.04,krw_to_bdt=0.071,bdt_to_myr=0.048,myr_to_bdt=20.64,bdt_to_mxn=0.22,mxn_to_bdt=4.51,bdt_to_nzd=0.018,nzd_to_bdt=54.90,bdt_to_rub=0.75,rub_to_bdt=1.33,bdt_to_twd=0.36,twd_to_bdt=2.80,bdt_to_php=0.60,php_to_bdt=1.67,bdt_to_sgd=0.016,sgd_to_bdt=62.07,bdt_to_zar=0.18,zar_to_bdt=5.70;

void conditions1(){




int i;
    float usd, bdt, inr, eur, pkr, aed, cny, hkd, huf, idr, ils,aud, brl, gbp, cad, clp , null,rub, twd, php, sgd, zar, jpy, krw , myr, mxn, nzd;



system("color 9");



printf("\n\n\t\t\t\t\t\tCURRENCY CONVERTER SYSTEM");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n");
    printf("\tPress 1 to convert BDT to USD \n\tPress 2 to convert USD to BDT \n\tPress 3 to convert BDT to INR \n\tPress 4 to convert INR to BDT \n\t"
           "Press 5 to convert BDT to EUR \n\tPress 6 to convert EUR to BDT \n\tPress 7 to convert BDT to PKR \n\tPress 8 to convert PKR to BDT \n\t"
           "Press 9 to convert BDT to AED \n\tPress 10 to convert AED to BDT \n\n\tPress 0 for Next Page =>  \n\n\n\n");
    printf("\tEnter your choice: ");
    scanf("%d", &i);

    switch(i)
    {
    //Press 1 to convert BDT to USD
    case 1:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO UNITED STATES DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        usd = bdt * bdt_to_usd;
        printf("\n\tAs a Current Rate 1 BDT = %.3f USD\n", bdt_to_usd);
        printf("\n\t%0.3f BDT = %0.3f USD \n\n\n\n", bdt, usd);
        break;

    //Press 2 to convert USD to BDT
    case 2:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 UNITED STATES DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in USD: ");
        scanf("%f", &usd);
        bdt = usd * usd_to_bdt;
        printf("\n\tAs a Current Rate 1 USD = %.3f BDT\n", usd_to_bdt);
        printf("\n\t%0.3f USD = %0.3f BDT \n\n\n\n", usd, bdt);
        break;

    //Press 3 to convert BDT to INR
    case 3:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO INDIAN RUPEE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        inr = bdt * bdt_to_inr;
        printf("\n\tAs a Current Rate 1 BDT = %.3f INR\n", bdt_to_inr);
        printf("\n\t%0.3f BDT = %0.3f INR \n\n\n\n", bdt, inr);
        break;

    //Press 4 to convert INR to BDT
    case 4:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INDIAN RUPEE TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in INR: ");
        scanf("%f", &inr);
        bdt = inr * inr_to_bdt;
        printf("\n\tAs a Current Rate 1 INR = %.3f BDT\n", inr_to_bdt);
        printf("\n\t%0.3f INR = %0.3f BDT \n\n\n\n", inr, bdt);
        break;

    //Press 5 to convert BDT to EUR
    case 5:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO EURO \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        eur = bdt * bdt_to_eur;
        printf("\n\tAs a Current Rate 1 BDT = %.3f EUR\n", bdt_to_eur);
        printf("\n\t%0.3f BDT = %0.3f EUR \n\n\n\n", bdt, eur);
        break;

    //Press 6 to convert EUR to BDT
    case 6:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 EURO TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in EUR: ");
        scanf("%f", &eur);
        bdt = eur * eur_to_bdt;
        printf("\n\tAs a Current Rate 1 EUR = %.3f BDT\n", eur_to_bdt);
        printf("\n\t%0.3f EUR = %0.3f BDT \n\n\n\n", eur, bdt);
        break;

    //Press 1 to convert BDT to PKR
    case 7:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO PAKISTANI RUPEE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        pkr = bdt * bdt_to_pkr;
        printf("\n\tAs a Current Rate 1 BDT = %.3f PKR\n", bdt_to_pkr);
        printf("\n\t%0.3f BDT = %0.3f PKR \n\n\n\n", bdt, pkr);
        break;

    //Press 8 to convert PKR to BDT
    case 8:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PAKISTANI RUPEE TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in PKR: ");
        scanf("%f", &pkr);
        bdt = pkr * pkr_to_bdt;
        printf("\n\tAs a Current Rate 1 PKR = %.3f BDT\n", pkr_to_bdt);
        printf("\n\t%0.3f PKR = %0.3f BDT \n\n\n\n", pkr, bdt);
        break;

    //Press 9 to convert BDT to AED
    case 9:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO UAE DIRHAM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        aed = bdt * bdt_to_aed;
        printf("\n\tAs a Current Rate 1 BDT = %.3f AED\n", bdt_to_aed);
        printf("\n\t%0.3f BDT = %0.3f AED \n\n\n\n", bdt, aed);
        break;

    //Press 10 to convert AED to BDT
    case 10:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 UAE DIRHAM TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in AED: ");
        scanf("%f", &aed);
        bdt = aed * aed_to_bdt;
        printf("\n\tAs a Current Rate 1 AED = %.3f BDT\n", aed_to_bdt);
        printf("\n\t%0.3f AED = %0.3f BDT \n\n\n\n", aed, bdt);
        break;

     //line break statement (0)

    case 0:
        printf("\n\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
        printf("\n\n\n\n\tPress 11 to convert BDT to CNY \n\tPress 12 to convert CNY to BDT \n\tPress 13 to convert BDT to HKD \n"
               "\tPress 14 to convert HKD to BDT \n\tPress 15 to convert BDT to HUF \n\tPress 16 to convert HUF to BDT \n"
               "\tPress 17 to convert BDT to IDR \n\tPress 18 to convert IDR to BDT \n\tPress 19 to convert BDT to ILS \n"
               "\tPress 20 to convert ILS to BDT \n\n\tPress 00 for Next Page =>  \n\n\n\n");
printf("\tEnter your choice: ");
scanf("%d", &i);



switch(i)
    {
//press 11 to convert BDT to CNY
case 11:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO CHINESE YUAN RENMINBI \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter Amount in BDT: ");
    scanf("%f", &bdt);
    cny = bdt * bdt_to_cny;
    printf("\n\tAs aCurrent Rate 1 BDT = %.3f CNY\n", bdt_to_cny);
    printf("\n\t%0.3f BDT = %0.3f CNY \n\n\n\n", bdt, cny);
    break;

      //press 12 to convert CNY to BDT
case 12:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHINESE YUAN RENMINBI TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter amount in CNY: ");
    scanf("%f", &cny);
    bdt = cny * cny_to_bdt;
    printf("\n\tAs a Current Rate 1 CNY = %.3f BDT\n", cny_to_bdt);
    printf("\n\t%0.3f CNY = %0.3f BDT \n\n\n\n", cny, bdt);
    break;
    //press 13 to convert BDT to HKD
case 13:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO HONG KONG DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter Amount in BDT: ");
    scanf("%f", &bdt);
    hkd = bdt * bdt_to_hkd;
    printf("\n\tAs a Current Rate 1 BDT = %.3f HKD\n", bdt_to_hkd);
    printf("\n\t%0.3f BDT = %0.3f HKD \n\n\n\n", bdt, hkd);
    break;
    //press 14 to convert HKD to BDT
case 14:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 HONG KONG DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter Amount in HKD: ");
    scanf("%f", &hkd);
    bdt = hkd * hkd_to_bdt;
    printf("\n\tAs a Current Rate 1 HKD = %.3f BDT\n", hkd_to_bdt);
    printf("\n\t%0.3f BDT = %0.3 HKD \n\n\n\n", hkd, bdt);
    break;
    //press 15 to convert BDT to HUF
case 15:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO HUNGARIAN FORINT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter Amount in BDT: ");
    scanf("%f", &bdt);
    huf = bdt * bdt_to_huf;
    printf("\n\tAs a Current Rate 1 BDT = %.3f HUF\n", bdt_to_huf);
    printf("\n\t%0.3f BDT = %0.3f HUF \n\n\n\n", bdt, huf);
    break;
    //press 16 to convert HUF to BDT
case 16:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 HUNGARIAN FORINT TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter Amount in HUF: ");
    scanf("%f", &huf);
    bdt = huf * huf_to_bdt;
    printf("\n\tAs a Current Rate 1 HUF = %.3f BDT\n", huf_to_bdt);
    printf("\n\t%0.3f HUF = %0.3f BDT \n\n\n\n", huf, bdt);
    break;
    //press 17 to convert BDT to IDR
case 17:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO INDONESIAN RUPIAH \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter Amount in BDT: ");
    scanf("%f", &bdt);
    idr = bdt * bdt_to_idr;
    printf("\n\tAs a Current Rate 1 BDT = %.3f IDR\n", bdt_to_idr);
    printf("\n\t%0.3f BDT = %0.3f IDR \n\n\n\n", bdt, idr);
    break;
    //press 18 to convert IDR to BDT
case 18:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INDONESIAN RUPIAH TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter Amount in IDR: ");
    scanf("%f", &idr);
    bdt = idr * idr_to_bdt;
    printf("\n\tAs a Current Rate 1 IDR = %.3f BDT\n",idr_to_bdt);
    printf("\n\t%0.4f IDR = %0.4f BDT \n\n\n\n", idr, bdt);
    break;
    //press 19 to convert BDT to ILS
case 19:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO ISRAELI NEW SHEKEL \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter Amount in BDT: ");
    scanf("%f", &bdt);
    ils = bdt * bdt_to_ils;
    printf("\n\tAs a Current Rate 1 BDT = %.3f ILS\n", bdt_to_ils);
    printf("\n\t%0.3f BDT = %0.3f ILS \n\n\n\n", bdt, ils);
    break;
    //press 20 to convert ILS to BDT
case 20:
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ISRAELI NEW SHEKEL TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
    printf("\tEnter Amount in ILS: ");
    scanf("%f", &ils);
    bdt = ils * ils_to_bdt;
    printf("\n\tAs a Current Rate 1 ILS = %.3f BDT\n", ils_to_bdt);
    printf("\n\t%0.3f ILS = %0.3f BDT \n\n\n\n", ils, bdt);
    break;



         //line break statement (00)

    case 00:
        printf("\n\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
         printf("\tPress 21 to convert BDT to AUD \n\tPress 22 to convert AUD to BDT \n\tPress 23 to convert BDT to BRL"
           "\n\tPress 24 to convert BRL to BDT \n\t"
           "Press 25 to convert BDT to GBP \n\tPress 26 to convert GBP to BDT \n\tPress 27 to convert BDT to CAD \n\tPress 28 to convert CAD to BDT \n\t"
           "Press 29 to convert BDT to CLP \n\tPress 30 to convert CLP to BDT \n\n\tPress 000 for Next Page =>  \n\n\n\n");
    printf("\tEnter your choice: ");
    scanf("%d", &i);




  switch(i)
    {
    //Press 21 to convert BDT to USD
    case 21:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO AUSTRALIAN DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        aud = bdt * bdt_to_aud;
        printf("\n\tAs a Current Rate 1 BDT = %.3f AUD\n", bdt_to_aud);
        printf("\n\t%0.3f BDT = %0.3f USD \n\n\n\n", bdt, aud);
        break;

    //Press 2 to convert USD to BDT
    case 22:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AUSTRALIAN DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in aud: ");
        scanf("%f", &aud);
        bdt = aud * aud_to_bdt;
        printf("\n\tAs a Current Rate 1 AUD= %.4f BDT\n", aud_to_bdt);
        printf("\n\t%0.3f USD = %0.3f BDT \n\n\n\n", aud, bdt);
        break;

    //Press 1 to convert BDT to USD
    case 23:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO BRAZILIAN REAL\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        brl = bdt * bdt_to_brl;
        printf("\n\tAs a Current Rate 1 BDT = %.3f BRL\n", bdt_to_brl);
        printf("\n\t%0.3f BDT = %0.3f BRL \n\n\n\n", bdt, brl);
        break;

    //Press 2 to convert USD to BDT
    case 24:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BRAZILIAN REAL TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in BRL: ");
        scanf("%f", &brl);
        bdt = brl * brl_to_bdt;
        printf("\n\tAs a Current Rate 1 BRL = %.3f BDT\n", brl_to_bdt);
        printf("\n\t%0.3f BRL = %0.3f BDT \n\n\n\n", brl, bdt);
        break;

    //Press 1 to convert BDT to USD
    case 25:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO BRITISH POUND \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        gbp = bdt * bdt_to_gbp;
        printf("\n\tAs a Current Rate 1 BDT = %.3f GBP\n", bdt_to_gbp);
        printf("\n\t%0.3f BDT = %0.3f GBP \n\n\n\n", bdt, gbp);
        break;

    //Press 2 to convert USD to BDT
    case 26:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BRITISH POUND TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in GBP: ");
        scanf("%f", &gbp);
        bdt = gbp * gbp_to_bdt;
        printf("\n\tAs a Current Rate 1 GBP = %.3f BDT\n", gbp_to_bdt);
        printf("\n\t%0.3f GBP = %0.3f BDT \n\n\n\n", gbp, bdt);
        break;

    //Press 1 to convert BDT to USD
    case 27:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO CANADIAN DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        cad = bdt * bdt_to_cad;
        printf("\n\tAs a Current Rate 1 BDT = %.3f CAD\n", bdt_to_cad);
        printf("\n\t%0.3f BDT = %0.3f CAD \n\n\n\n", bdt, cad);
        break;

    //Press 2 to convert USD to BDT
    case 28:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CANADIAN DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in CAD: ");
        scanf("%f", &cad);
        bdt = cad * cad_to_bdt;
        printf("\n\tAs a Current Rate 1 CAD = %.3f BDT\n", cad_to_bdt);
        printf("\n\t%0.3f CAD = %0.3f BDT \n\n\n\n", cad, bdt);
        break;

    //Press 1 to convert BDT to USD
    case 29:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO CHILEAN PESO \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        clp = bdt * bdt_to_clp;
        printf("\n\tAs a Current Rate 1 BDT = %.3f CLP\n", bdt_to_clp);
        printf("\n\t%0.3f BDT = %0.3f CLP \n\n\n\n", bdt, clp);
        break;

    //Press 2 to convert USD to BDT
    case 30:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHILEAN PESO TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in CLP: ");
        scanf("%f", &clp);
        bdt = clp * clp_to_bdt;
        printf("\n\tAs a Current Rate 1 CLP = %.3f BDT\n", clp_to_bdt);
        printf("\n\t%0.3f CLP = %0.3f BDT \n\n\n\n", clp, bdt);
        break;



        //line break statement (000)

    case 000:
        printf("\n\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
         printf("\tPress 31 to convert BDT to JPY \n\tPress 32 to convert JPY to BDT \n\tPress 33 to convert BDT to KRW\n\tPress 34 to convert KRW to BDT \n\t"
           "Press 35 to convert BDT to MYR \n\tPress 36 to convert MYR to BDT \n\tPress 37 to convert BDT to MXN \n\tPress 38 to convert MXN to BDT \n\t"
           "Press 39 to convert BDT to NZD \n\tPress 40 to convert NZD to BDT \n\n\tPress 0000 for Next Page =>  \n\n\n\n");
    printf("\tEnter your choice: ");
    scanf("%d", &i);


switch(i)
    {
    //Press 31 to convert BDT to JPY
    case 31:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO JAPANESE YEN \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        jpy = bdt * bdt_to_jpy;
        printf("\n\tAs a Current Rate 1 BDT = %.3f JPY\n", bdt_to_jpy);
        printf("\n\t%0.3f BDT = %0.3f JPY \n\n\n\n", bdt, jpy);
        break;

    //Press 32 to convert JPY to BDT
    case 32:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 JAPANESE YEN TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in JPY: ");
        scanf("%f", &jpy);
        bdt = jpy * jpy_to_bdt;
        printf("\n\tAs a Current Rate 1 JPY = %.3f BDT\n", jpy_to_bdt);
        printf("\n\t%0.3f JPY = %0.3f BDT \n\n\n\n", jpy, bdt);
        break;

     //Press 33 to convert BDT to KRW
    case 33:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO KOREAN WON \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        krw = bdt * bdt_to_krw;
        printf("\n\tAs a Current Rate 1 BDT = %.3f KRW\n", bdt_to_krw);
        printf("\n\t%0.3f BDT = %0.3f KRW \n\n\n\n", bdt, krw);
        break;

    //Press 34 to convert KRW to BDT
    case 34:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 KOREAN WON TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in KRW: ");
        scanf("%f", &krw);
        bdt = krw * krw_to_bdt;
        printf("\n\tAs a Current Rate 1 KRW = %.3f BDT\n", krw_to_bdt);
        printf("\n\t%0.3f KRW = %0.3f BDT \n\n\n\n", krw, bdt);
        break;

      //Press 35 to convert BDT to MYR
    case 35:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO MALAYSIAN RINGGIT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        myr = bdt * bdt_to_myr;
        printf("\n\tAs a Current Rate 1 BDT = %.3f MYR\n", bdt_to_myr);
        printf("\n\t%0.3f BDT = %0.3f MYR \n\n\n\n", bdt, myr);
        break;

    //Press 36 to convert MYR to BDT
    case 36:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MALAYSIAN RINGGIT TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in MYR: ");
        scanf("%f", &myr);
        bdt = myr * myr_to_bdt;
        printf("\n\tAs a Current Rate 1 MYR = %.3f BDT\n", myr_to_bdt);
        printf("\n\t%0.3f MYR = %0.3f BDT \n\n\n\n", myr, bdt);
        break;

     //Press 37 to convert BDT to MXN
    case 37:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO MEXICAN PESO \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        mxn = bdt *  bdt_to_mxn;
        printf("\n\tAs a Current Rate 1 BDT = %.3f MXN\n", bdt_to_mxn);
        printf("\n\t%0.3f BDT = %0.3f MXN \n\n\n\n", bdt, mxn);
        break;

    //Press 38 to convert MXN to BDT
    case 38:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MEXICAN PESO TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in MXN: ");
        scanf("%f", &mxn);
        bdt = mxn * mxn_to_bdt;
        printf("\n\tAs a Current Rate 1 MXN = %.3f BDT\n", mxn_to_bdt);
        printf("\n\t%0.3f MXN = %0.3f BDT \n\n\n\n", mxn, bdt);
        break;

         //Press 39 to convert BDT to NJD
    case 39:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO NEW ZEALAND DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        nzd = bdt * bdt_to_nzd;
        printf("\n\tAs a Current Rate 1 BDT = %.3f NZD\n", bdt_to_nzd);
        printf("\n\t%0.3f BDT = %0.3f NZD \n\n\n\n", bdt, nzd);
        break;

    //Press 40 to convert NZD to BDT
    case 40:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NEW ZEALAND DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in NZD: ");
        scanf("%f", &nzd);
        bdt = nzd * nzd_to_bdt;
        printf("\n\tAs a Current Rate 1 NZD = %.3f BDT\n", nzd_to_bdt);
        printf("\n\t%0.3f NZD = %0.3f BDT \n\n\n\n", nzd, bdt);
        break;


        case 0000:
        printf("\n\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
        printf("\tPress 41 to convert BDT to RUB \n\tPress 42 to convert RUB to BDT \n\tPress 43 to convert BDT to TWD \n\tPress 44 to convert TWD to BDT \n\t"
           "Press 45 to convert BDT to PHP \n\tPress 46 to convert PHP to BDT \n\tPress 47 to convert BDT to SGD \n\tPress 48 to convert SGD to BDT \n\t"
           "Press 49 to convert BDT to ZAR \n\tPress 50 to convert ZAR to BDT \n\n\t Thanks.. For Using Our Application \n\n\n\n");
    printf("\tEnter your choice: ");
    scanf("%d", &i);

    switch(i)
    {
    //Press 41 to convert BDT to RUB
    case 41:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO RUSSIAN RUBLE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        rub = bdt * bdt_to_rub;
        printf("\n\tAs a Current Rate 1 BDT = %.3f RUB\n", bdt_to_rub);
        printf("\n\t%0.3f BDT = %0.3f RUB \n\n\n\n", bdt, rub);
        break;

    //Press 42 to convert RUB to BDT
    case 42:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 RUSSIAN RUBLE TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in RUB: ");
        scanf("%f", &rub);
        bdt = rub * rub_to_bdt;
        printf("\n\tAs a Current Rate 1 RUB = %.3f BDT\n", rub_to_bdt);
        printf("\n\t%0.3f RUB = %0.3f BDT \n\n\n\n", rub, bdt);
        break;

         //Press 43 to convert BDT to TWD
    case 43:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO TAIWAN DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        twd = bdt * bdt_to_twd;
        printf("\n\tAs a Current Rate 1 BDT = %.3f TWD\n", bdt_to_twd);
        printf("\n\t%0.3f BDT = %0.3f TWD \n\n\n\n", bdt, twd);
        break;

    //Press 44 to convert TWD to BDT
    case 44:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TAIWAN DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in TWD: ");
        scanf("%f", &twd);
        bdt = twd * twd_to_bdt;
        printf("\n\tAs a Current Rate 1 TWD = %.3f BDT\n", twd_to_bdt);
        printf("\n\t%0.3f TWD = %0.3f BDT \n\n\n\n", twd, bdt);
        break;

         //Press 45 to convert BDT to PHP
    case 45:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO PHILIPPINE PESO \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        php = bdt * bdt_to_php;
        printf("\n\tAs a Current Rate 1 BDT = %.3f PHP\n", bdt_to_php);
        printf("\n\t%0.3f BDT = %0.3f PHP \n\n\n\n", bdt, php);
        break;

    //Press 46 to convert PHP to BDT
    case 46:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PHILIPPINE PESO TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in PHP: ");
        scanf("%f", &php);
        bdt = php * php_to_bdt;
        printf("\n\tAs a Current Rate 1 PHP = %.3f BDT\n", php_to_bdt);
        printf("\n\t%0.3f PHP = %0.3f BDT \n\n\n\n", php, bdt);
        break;

         //Press 47 to convert BDT to SGD
    case 47:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO SINGAPORE DOLLAR \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        sgd = bdt * bdt_to_sgd;
        printf("\n\tAs a Current Rate 1 BDT = %.3f SGD\n", bdt_to_sgd);
        printf("\n\t%0.3f BDT = %0.3f SGD \n\n\n\n", bdt, sgd);
        break;

    //Press 48 to convert SGD to BDT
    case 48:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SINGAPORE DOLLAR TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in SGD: ");
        scanf("%f", &sgd);
        bdt = sgd * sgd_to_bdt;
        printf("\n\tAs a Current Rate 1 SGD = %.3f BDT\n", sgd_to_bdt);
        printf("\n\t%0.3f SGD = %0.3f BDT \n\n\n\n", sgd, bdt);
        break;

         //Press 49 to convert BDT to ZAR
    case 49:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BANGLADESHI TAKA TO SOUTH AFRICAN RAND \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter Amount in BDT: ");
        scanf("%f", &bdt);
        zar = bdt * bdt_to_zar;
        printf("\n\tAs a Current Rate 1 BDT = %.3f ZAR\n", bdt_to_zar);
        printf("\n\t%0.3f BDT = %0.3f ZAR \n\n\n\n", bdt, zar);
        break;

    //Press 50 to convert ZAR to BDT
    case 50:
        printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SOUTH AFRICAN RAND TO BANGLADESHI TAKA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");
        printf("\tEnter amount in ZAR: ");
        scanf("%f", &zar);
        bdt = zar * zar_to_bdt;
        printf("\n\tAs a Current Rate 1 ZAR = %.3f BDT\n", zar_to_bdt);
        printf("\n\t%0.3f ZAR = %0.3f BDT \n\n\n\n", zar, bdt);
        break;

    default:
        printf("\tWrong Choice!");


}


    }


    }



    }


    }


















}
