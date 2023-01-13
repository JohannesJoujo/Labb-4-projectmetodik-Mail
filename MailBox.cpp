//
// Created by Johannes Joujo on 2022-12-08.
//

#include "MailBox.h"

#include <utility>

void MailBox::SortDate() {
    std::sort(mailbox.begin(), mailbox.end(),  CompDateWhoSubject());
}

void MailBox::SortWho() {
    std::sort(mailbox.begin(), mailbox.end(), CompWhoDateSubject());
}

void MailBox::SortSubject() {
    std::sort(mailbox.begin(), mailbox.end(), CompSubjectWheDate());
}

MailBox::MailBox(size_t size) {
    mailbox.reserve(size);
}

std::vector<Email> MailBox::operator()(const std::string& name, const std::string& date, const std::string& subject) {
    mailbox.emplace_back(name,date,subject);
    return mailbox;
}

std::vector<Email>::iterator MailBox::begin() {
    return std::vector<Email, std::allocator<Email>>::iterator(mailbox.begin());
}

std::vector<Email>::iterator MailBox::end() {
    return std::vector<Email, std::allocator<Email>>::iterator(mailbox.end());
}







