/* Mobile package purchasing system  */

/*    HEADER FILES    */
#include <iostream>
#include <conio.h>

using namespace std;

/*    PUBLIC VARIABLES   */
int i, bal, req, reciever;
char input;

/*    MAIN SERVICE CLASS   */
class Main_srv
{
public:
    void main_menu();
    void pkg_service();
    void other_service();
    void change_lang();
    void my_account();
    void choose();
    void receiver_number();
    void confirm();
    void confirm_no();
    void success();
} service;

/*    PACKAGE SERVICE CLASS    */
class Pkg_srv
{
public:
    void voice_pkg();
    void internet_pkg();
    void voice_plus_pkg();
    void flexi_pkg();
    void premium_pkg();
    void long_term_pkg();
    void inter_call_pkg();
    void morning_pkg();
    void sms_pkg();
} pckg;

/*    VOICE SERVICE CLASS    */
class Voice_srv
{
public:
    void daily_voice();
    void weekly_voice();
    void monthly_voice();
    void night_voice();
} voice;

/*    INTERNET SERVICE CLASS    */
class Internet_srv
{
public:
    void daily_int();
    void weekly_int();
    void monthly_int();
    void night_int();
} internet;

/*    VOICE PLUS SERVICE CLASS   */
class Voice_plus_srv
{
public:
    void daily_srv();
    void weekly_srv();
    void monthly_srv();
} voice_plus;

/*    FLEXI SERVICE CLASS   */
class Flexi_srv
{
public:
    void daily_flexi();
    void weekly_flexi();
    void monthly_flexi();
} flexi;

/*    PREMIUM SERVICE CLASS   */
class Premium_srv
{
public:
    void monthly_premium();
} prem;

/*    LONG TERM SERVICE CLASS   */
class Long_term_srv
{
public:
    void quarterly();
    void yearly();
} long_term;

/* INTERNATIONAL CALL SERVICE CLASS */
class Inter_call_srv
{
public:
    void weekly_call();
    void bi_weekly_call();
    void monthly_call();
} inter_call;

/*    MORNING SERVICE CLASS   */
class Morning_srv
{
public:
    void morn_1();
    void morn_2();
} morning;

/*    SMS SERVICE CLASS   */
class SMS_srv
{
public:
    void daily_sms();
    void weekly_sms();
    void monthly_sms();
} sms;

/*    CLASS METHOD DEFINITIONS  */
void Main_srv::main_menu()
{
    system("cls");
    cout << "\nWelcome to Ethio Gebeta\n";
    cout << "\n\t1.For Package service";
    cout << "\n\t2.Additional Service";
    cout << "\n\t3.Change Language";
    cout << "\n\t4.My Account(package)";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        choose();
        break;
    case '2':
        other_service();
        break;
    case '3':
        change_lang();
        break;
    case '4':
        my_account();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Main_srv::pkg_service()
{
    system("cls");
    cout << "\nPackage Service";
    cout << "\n\t1.Voice Package";
    cout << "\n\t2.Internet Package";
    cout << "\n\t3.Voice Plus Package";
    cout << "\n\t4.Flexi Package";
    cout << "\n\t5.Unlimited Premium Package";
    cout << "\n\t6.Longterm Validity Package";
    cout << "\n\t7.International Call Package";
    cout << "\n\t8.Morning Package";
    cout << "\n\t9.SMS Package";
    cout << "\n\t*.Go back";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        pckg.voice_pkg();
        break;
    case '2':
        pckg.internet_pkg();
        break;
    case '3':
        pckg.voice_plus_pkg();
        break;
    case '4':
        pckg.flexi_pkg();
        break;
    case '5':
        pckg.premium_pkg();
        break;
    case '6':
        pckg.long_term_pkg();
        break;
    case '7':
        pckg.inter_call_pkg();
        break;
    case '8':
        pckg.morning_pkg();
        break;
    case '9':
        pckg.sms_pkg();
        break;
    case '*':
        service.choose();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Main_srv::other_service()
{
    system("cls");
    cout << "\nAdditional Services not Available";
    cout << "\n\t*.Go back";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '*':
        main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Main_srv::change_lang()
{
    system("cls");
    cout << "\nChoose Language";
    cout << "\n\t1.For Amharic";
    cout << "\n\t2.For English";
    cout << "\n\t3.Fot Tigrigna";
    cout << "\n\t*.Go back";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        break;
    case '2':
        break;
    case '3':
        break;
    case '*':
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Main_srv::my_account()
{
    system("cls");
    cout << "\nYour Account";
    cout << "\n\t1.Subscribe";
    cout << "\n\t*.Go back";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        break;
    case '*':
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Main_srv::choose()
{
    system("cls");
    cout << "\nPackage ";
    cout << "\n\t1.For Yourself";
    cout << "\n\t2.For Gift";
    cout << "\n\t*.Go back";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    if (input == '1')
    {
        i = 1;
    }
    else if (input == '2')
    {
        i = 2;
    }
    switch (input)
    {
    case '1':
        pkg_service();
        break;
    case '2':
        pkg_service();
        break;
    case '*':
        main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Main_srv::receiver_number()
{
    system("cls");
    cout << "\nWho will Recieve the Gift";
    cout << "\n\nEnter thier Phone Number: ";
    cin >> reciever;
    confirm_no();
}

void Main_srv::confirm()
{
    if (i == 1)
    {
        cout << "\nYou have selected the package you want to buy";
        cout << "\n\t1.Confirm";
        cout << "\n\t  Other key to cancel";
        cout << "\n\nEnter your choice: ";
        cin >> input;
        switch (input)
        {
        case '1':
            success();
            break;
        default:
            "\nProcess Canceled";
            break;
        }
    }
    else
    {
        service.receiver_number();
    }
}

void Main_srv::confirm_no()
{
    system("cls");
    cout << "\nYou will send the package to " << reciever;
    cout << "\n\t1.Confirm";
    cout << "\n\t*.Back";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        success();
        break;
    case '*':
        service.receiver_number();
        break;
    default:
        "\nProcess Canceled";
        break;
    }
}

void Main_srv::success()
{
    system("cls");
    if (bal >= req)
    {
        bal -= req;
        cout << "\nDear customer your operation is completed Successfully";
    }
    else
    {
        cout << "\nDear customer your balance is insufficient for this service";
    }
}

void Pkg_srv::voice_pkg()
{
    system("cls");
    cout << "\nVoice Package";
    cout << "\n\t1.Daily";
    cout << "\n\t2.Weekly";
    cout << "\n\t3.Monthly";
    cout << "\n\t4.Night";
    cout << "\n\t*.Go back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        voice.daily_voice();
        break;
    case '2':
        voice.weekly_voice();
        break;
    case '3':
        voice.monthly_voice();
        break;
    case '4':
        voice.night_voice();
        break;
    case '*':
        service.choose();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Pkg_srv::internet_pkg()
{
    system("cls");
    cout << "\nInternet Package";
    cout << "\n\t1.Daily";
    cout << "\n\t2.Weekly";
    cout << "\n\t3.Monthly";
    cout << "\n\t4.Night";
    cout << "\n\t*.Go back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        internet.daily_int();
        break;
    case '2':
        internet.weekly_int();
        break;
    case '3':
        internet.monthly_int();
        break;
    case '4':
        internet.night_int();
        break;
    case '*':
        service.choose();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Pkg_srv::voice_plus_pkg()
{
    system("cls");
    cout << "\nVoice Plus Package";
    cout << "\n\t1.Daily";
    cout << "\n\t2.Weekly";
    cout << "\n\t3.Monthly";
    cout << "\n\t*.Go back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        voice_plus.daily_srv();
        break;
    case '2':
        voice_plus.weekly_srv();
        break;
    case '3':
        voice_plus.monthly_srv();
        break;
    case '*':
        service.choose();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Pkg_srv::flexi_pkg()
{
    system("cls");
    cout << "\nFlexi Package";
    cout << "\n\t1.Daily";
    cout << "\n\t2.Weekly";
    cout << "\n\t3.Monthly";
    cout << "\n\t*.Go back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        flexi.daily_flexi();
        break;
    case '2':
        flexi.weekly_flexi();
        break;
    case '3':
        flexi.monthly_flexi();
        break;
    case '*':
        service.choose();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Pkg_srv::premium_pkg()
{
    system("cls");
    cout << "\nUnlimited Premium Package";
    cout << "\n\t1.Monthly";
    cout << "\n\t*.Go back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        prem.monthly_premium();
        break;
    case '*':
        service.choose();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Pkg_srv::long_term_pkg()
{
    system("cls");
    cout << "\nLong term Validity Package";
    cout << "\n\t1.Quartelry Package";
    cout << "\n\t2.Yearly Package";
    cout << "\n\t*.Go back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        long_term.quarterly();
        break;
    case '2':
        long_term.yearly();
        break;
    case '*':
        service.choose();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Pkg_srv::inter_call_pkg()
{
    system("cls");
    cout << "\nInternational call package: valid only for 11 countries. Vist ethio web or call 994";
    cout << "\n\t1.Weekly Package";
    cout << "\n\t2.Bi-Weekly Package";
    cout << "\n\t3.Monthly Package";
    cout << "\n\t*.Go back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        inter_call.weekly_call();
        break;
    case '2':
        inter_call.bi_weekly_call();
        break;
    case '3':
        inter_call.monthly_call();
        break;
    case '*':
        service.choose();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Pkg_srv::morning_pkg()
{
    system("cls");
    cout << "\nMorning Package";
    cout << "\n\t1.Birr 2 for 8 Min and 5 SMS";
    cout << "\n\t2.Birr 2 for 25MB and 5 SMS";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 2;
        morning.morn_1();
        break;
    case '2':
        req = 2;
        morning.morn_2();
        break;
    case '*':
        service.choose();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Pkg_srv::sms_pkg()
{
    system("cls");
    cout << "\nSMS Package";
    cout << "\n\t1.Daily";
    cout << "\n\t2.Weekly";
    cout << "\n\t3.Monthly";
    cout << "\n\t*.Go back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        sms.daily_sms();
        break;
    case '2':
        sms.weekly_sms();
        break;
    case '3':
        sms.monthly_sms();
        break;
    case '*':
        service.choose();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Voice_srv::daily_voice()
{
    system("cls");
    cout << "\nDaily";
    cout << "\n\t1.Birr 3 for 12 Min";
    cout << "\n\t2.Birr 5 for 20 Min ";
    cout << "\n\t3.Birr 10 for 45 Min ";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 3;
        service.confirm();
        break;
    case '2':
        req = 5;
        service.confirm();
        break;
    case '3':
        req = 10;
        service.confirm();
        break;
    case '*':
        pckg.voice_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Voice_srv::weekly_voice()
{
    system("cls");
    cout << "\nWeekly";
    cout << "\n\t1.Birr 15 for 70 Min";
    cout << "\n\t2.Birr 20 for 100 Min";
    cout << "\n\t3.Birr 25 for 130 Min";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 15;
        service.confirm();
        break;
    case '2':
        req = 20;
        service.confirm();
        break;
    case '3':
        req = 25;
        service.confirm();
        break;
    case '*':
        pckg.voice_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Voice_srv::monthly_voice()
{
    system("cls");
    cout << "\nMonthly";
    cout << "\n\t1.Birr 35 for 125 Min";
    cout << "\n\t2.Birr 50 for 185 Min";
    cout << "\n\t3.Birr 95 for 375 Min";
    cout << "\n\t4.Birr 120 for 500 Min";
    cout << "\n\t5.Birr 200 for 1000 Min";
    cout << "\n\t6.Birr 380 for 2000 Min";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 35;
        service.confirm();
        break;
    case '2':
        req = 50;
        service.confirm();
        break;
    case '3':
        req = 95;
        service.confirm();
        break;
    case '4':
        req = 120;
        service.confirm();
        break;
    case '5':
        req = 200;
        service.confirm();
        break;
    case '6':
        req = 380;
        service.confirm();
        break;
    case '*':
        pckg.voice_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Voice_srv::night_voice()
{
    system("cls");
    cout << "\nNight";
    cout << "\n\t1.Birr 3 for 60 Min";
    cout << "\n\t2.Birr 6 for 140 Min";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 3;
        service.confirm();
        break;
    case '2':
        req = 6;
        service.confirm();
        break;
    case '*':
        pckg.voice_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Internet_srv::daily_int()
{
    system("cls");
    cout << "\nDaily";
    cout << "\n\t1.Birr 3 for 35MB";
    cout << "\n\t2.Birr 5 for 75MB ";
    cout << "\n\t3.Birr 12 for 200MB";
    cout << "\n\t4.Birr 25 for 500MB";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 3;
        service.confirm();
        break;
    case '2':
        req = 5;
        service.confirm();
        break;
    case '3':
        req = 12;
        service.confirm();
        break;
    case '4':
        req = 25;
        service.confirm();
        break;
    case '*':
        pckg.internet_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Internet_srv::weekly_int()
{
    system("cls");
    cout << "\nWeekly";
    cout << "\n\t1.Birr 24 for 300MB";
    cout << "\n\t2.Birr 35 for 600MB ";
    cout << "\n\t3.Birr 56 for 1GB";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 24;
        service.confirm();
        break;
    case '2':
        req = 35;
        service.confirm();
        break;
    case '3':
        req = 56;
        service.confirm();
        break;
    case '*':
        pckg.internet_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Internet_srv::monthly_int()
{
    system("cls");
    cout << "\nMonthly";
    cout << "\n\t1.Birr 35 for 500MB";
    cout << "\n\t2.Birr 60 for 1GB ";
    cout << "\n\t3.Birr 105 for 2GB";
    cout << "\n\t4.Birr 200 for 4GB";
    cout << "\n\t5.Birr 420 for 10GB";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 35;
        service.confirm();
        break;
    case '2':
        req = 60;
        service.confirm();
        break;
    case '3':
        req = 105;
        service.confirm();
        break;
    case '4':
        req = 200;
        service.confirm();
        break;
    case '5':
        req = 420;
        service.confirm();
        break;
    case '*':
        pckg.internet_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Internet_srv::night_int()
{
    system("cls");
    cout << "\nNight";
    cout << "\n\t1.Birr 3 for 70MB";
    cout << "\n\t2.Birr 5 for 160MB ";
    cout << "\n\t3.Birr 10 for 300MB";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 3;
        service.confirm();
        break;
    case '2':
        req = 5;
        service.confirm();
        break;
    case '3':
        req = 10;
        service.confirm();
        break;
    case '*':
        pckg.internet_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Voice_plus_srv::daily_srv()
{
    system("cls");
    cout << "\nDaily";
    cout << "\n\t1.Birr 12 for 12 Min, 160MB and 10 SMS";
    cout << "\n\t2.Birr 35 for 28 Min, 590MB and 10 SMS";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 12;
        service.confirm();
        break;
    case '2':
        req = 35;
        service.confirm();
        break;
    case '*':
        pckg.voice_plus_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Voice_plus_srv::weekly_srv()
{
    system("cls");
    cout << "\nWeekly";
    cout << "\n\t1.Birr 50 for 70 Min, 590MB and 50 SMS";
    cout << "\n\t2.Birr 76 for 100 Min, 1GB and 50 SMS";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 50;
        service.confirm();
        break;
    case '2':
        req = 76;
        service.confirm();
        break;
    case '*':
        pckg.voice_plus_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Voice_plus_srv::monthly_srv()
{
    system("cls");
    cout << "\nMonthly";
    cout << "\n\t1.Birr 140 for 125 Min, 2FB and 50 SMS";
    cout << "\n\t2.Birr 200 for 375 Min, 2GB and 50 SMS";
    cout << "\n\t3.Birr 1663 for 1250 Min, Unlimited internet and 50 SMS";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 140;
        service.confirm();
        break;
    case '2':
        req = 200;
        service.confirm();
        break;
    case '3':
        req = 1663;
        service.confirm();
        break;
    case '*':
        pckg.voice_plus_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Flexi_srv::daily_flexi()
{
    system("cls");
    cout << "\nDaily";
    cout << "\n\t1.Birr 15 for 390 Flexi";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 15;
        service.confirm();
        break;
    case '*':
        pckg.flexi_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Flexi_srv::weekly_flexi()
{
    system("cls");
    cout << "\nWeekly";
    cout << "\n\t1.Birr 50 for 1320 Flexi";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 50;
        service.confirm();
        break;
    case '*':
        pckg.flexi_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Flexi_srv::monthly_flexi()
{
    system("cls");
    cout << "\nMonthly";
    cout << "\n\t1.Birr 100 for 2280 Flexi";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 100;
        service.confirm();
        break;
    case '*':
        pckg.flexi_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Premium_srv::monthly_premium()
{
    system("cls");
    cout << "\nMonthly";
    cout << "\n\t1.Birr 1510 Unlimited Voice";
    cout << "\n\t2.Birr 1510 for Unlimited Internet";
    cout << "\n\t3.Birr 2545 for Unlimited Voice and Internet";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 1510;
        service.confirm();
        break;
    case '2':
        req = 1510;
        service.confirm();
        break;
    case '3':
        req = 2545;
        service.confirm();
        break;
    case '*':
        pckg.premium_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Long_term_srv::quarterly()
{
    system("cls");
    cout << "\nQuarterly";
    cout << "\n\t1.Birr 825 for 450 Min, 12GB and 150 SMS";
    cout << "\n\t2.Birr 1095 for 1500 Min, 12GB and 150 SMS";
    cout << "\n\t3.Birr 4227 for 450 Min, Unlimited Data and 150 SMS";
    cout << "\n\t4.Birr 5205 for Unlimited voice, 12GB and Unlimited SMS";
    cout << "\n\t5.Birr 6872 for Unlimited";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 825;
        service.confirm();
        break;
    case '2':
        req = 1095;
        service.confirm();
        break;
    case '3':
        req = 4227;
        service.confirm();
        break;
    case '4':
        req = 5205;
        service.confirm();
        break;
    case '5':
        req = 6872;
        service.confirm();
        break;
    case '*':
        pckg.long_term_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Long_term_srv::yearly()
{
    system("cls");
    cout << "\nYearly";
    cout << "\n\t1.Birr 18,324 for Unlimited Internet,Voice and SMS";
    cout << "\n\t2.Birr 10,872 for Unlimited Voice and Unlimited SMS";
    cout << "\n\t3.Birr 10,872 for Unlimited Data and Unlimited SMS";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 18324;
        service.confirm();
        break;
    case '2':
        req = 10872;
        service.confirm();
        break;
    case '3':
        req = 10872;
        service.confirm();
        break;
    case '*':
        pckg.long_term_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Inter_call_srv::weekly_call()
{
    system("cls");
    cout << "\nWeekly";
    cout << "\n\t1.Birr 59 for 10 Minute";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 59;
        service.confirm();
        break;
    case '*':
        pckg.inter_call_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Inter_call_srv::bi_weekly_call()
{
    system("cls");
    cout << "\nBi-Weekly";
    cout << "\n\t1.Birr 100 for 20 Minute";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 100;
        service.confirm();
        break;
    case '*':
        pckg.inter_call_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void Inter_call_srv::monthly_call()
{
    system("cls");
    cout << "\nMonthly";
    cout << "\n\t1.Birr 195 for 50 Minute";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 195;
        service.confirm();
        break;
    case '*':
        pckg.inter_call_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void SMS_srv::daily_sms()
{
    system("cls");
    cout << "\nDaily";
    cout << "\n\t1.Birr 2 for 20SMS";
    cout << "\n\t2.Birr 3 for 30SMS";
    cout << "\n\t3.Birr 5 for 80SMS";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 2;
        service.confirm();
        break;
    case '2':
        req = 3;
        service.confirm();
        break;
    case '3':
        req = 5;
        service.confirm();
        break;
    case '*':
        pckg.sms_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void SMS_srv::weekly_sms()
{
    system("cls");
    cout << "\nWeekly";
    cout << "\n\t1.Birr 10 for 165SMS";
    cout << "\n\t2.Birr 15 for 333SMS";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 10;
        service.confirm();
        break;
    case '2':
        req = 15;
        service.confirm();
        break;
    case '*':
        pckg.sms_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

void SMS_srv::monthly_sms()
{
    system("cls");
    cout << "\nDaily";
    cout << "\n\t1.Birr 30 for 656SMS";
    cout << "\n\t2.Birr 50 for 1313SMS";
    cout << "\n\t*.Back";
    cout << "\n\t#.Back to Main Menu";
    cout << "\n\nEnter your choice: ";
    cin >> input;
    switch (input)
    {
    case '1':
        req = 30;
        service.confirm();
        break;
    case '2':
        req = 50;
        service.confirm();
        break;
    case '*':
        pckg.sms_pkg();
        break;
    case '#':
        service.main_menu();
        break;
    default:
        cout << "\nINVALID INPUT! ";
        break;
    }
}

/***** MAIN FUNCTION *****/
int main()
{
    system("cls");
    // your initial mobile balance
    bal = 100;
    Main_srv start;
    start.main_menu();

    getch();
    return 0;
}
