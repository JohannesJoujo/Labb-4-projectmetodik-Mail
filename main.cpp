//johannes joujo labb 4

#include <iostream>
#include "MailBox.h"
void Show( MailBox& mb);

int main() {

    Email hej("Anders",  "lab 1","2001-01-18");
    Email hej2("Anders",  "lab 2","2002-02-28");

    CompWhoDateSubject WhoDateSubject;
    CompDateWhoSubject DateWhoSubject;
    CompSubjectWheDate SubjectWheDate;

    Email jag;
    Email jag2;


    jag("Anders",  "lab 3","2001-01-18");
    jag2("Anders",  "lab 2","2002-02-28");

    std::cout<<"\n-----------------CompWhoDateSubject-----------------------------\n";
    std::cout<<"Comparing hej and hej2\n";
    std::cout<<"hej:  "<<hej<<"hej2: "<<hej2;
    std::cout<<"\n";

    if(WhoDateSubject(hej,hej2)){
        std::cout<<"hej is less\n";
    }
    else{
        std::cout<<"hej is not less\n";
    }
    std::cout<<"---------------------------------------------------------\n\n";

    std::cout<<"-----------------CompSubjectWheDate-----------------------------\n";

    std::cout<<"Comparing hej and hej2\n";
    std::cout<<"hej:  "<<hej<<"hej2: "<<hej2;
    std::cout<<"\n";

    if(SubjectWheDate(hej,hej2)){
        std::cout<<"hej is less\n";
    }
    else{
        std::cout<<"hej is not less\n";
    }

    std::cout<<"---------------------------------------------------------\n\n";

    std::cout<<"-----------------CompDateWhoSubject-----------------------------\n";
    std::cout<<"Comparing jag and jag2\n";
    std::cout<<"jag:  "<<jag<<"jag2: "<<jag2;
    std::cout<<"\n";

    if(DateWhoSubject(jag,jag2)){
        std::cout<<"jag is less\n";
    }
    else{
        std::cout<<"jag is not less\n";
    }
    std::cout<<"---------------------------------------------------------\n\n";



    MailBox benim(3);
    Show(benim);

    benim("Anders",  "2002-07-28","lab 2");
    //Show(benim);

    benim("Johannes",  "2000-02-12","Math");
    //Show(benim);

    benim("jagj", "1973-11-21", "DATA");
    //Show(benim);

    benim("Extraperson", "1973-12-20", "DATA 2");
    //Show(benim);

    benim("Extraperson2", "1973-12-21", "DATA 3");
    //Show(benim);
    std::cout<<"-----------------SortSubject-----------------------------\n";
    benim.SortSubject();
    Show(benim);
    std::cout<<"---------------------------------------------------------\n\n";

    std::cout<<"-----------------SortWho---------------------------------\n";
    benim.SortWho();
    Show(benim);
    std::cout<<"---------------------------------------------------------\n\n";


    std::cout<<"-----------------SortDate--------------------------------\n";
    benim.SortDate();
    Show(benim);
    std::cout<<"---------------------------------------------------------\n";

    return 0;
}
void Show( MailBox &mb) {
    for(auto &e: mb)
    std::cout << e<<"\n";
}



