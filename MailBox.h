//
// Created by Johannes Joujo on 2022-12-08.
//

#ifndef UNTITLED4_MAILBOX_H
#define UNTITLED4_MAILBOX_H

#include <iostream>
#include "Email.h"
#include <utility>
#include <vector>
class MailBox
{
private:
    std::vector<Email> mailbox;

public:
    std::vector<Email> operator()(const std::string& name, const std::string& date, const std::string& subject);
    MailBox(size_t size);
    void SortWho();
    void SortDate();
    void SortSubject();
    std::vector<Email>::iterator begin();
    std::vector<Email>::iterator end();

};


#endif //UNTITLED4_MAILBOX_H
