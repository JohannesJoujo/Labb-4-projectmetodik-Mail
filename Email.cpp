//
// Created by Johannes Joujo on 2022-12-08.
//

#include "Email.h"

#include <utility>
std::string Email::GetName() const
{
    return who;
}

std::string Email::GetDate() const
{
    return date;
}

std::string Email::GetSubject() const
{
    return subject;
}

void Email::SetName(std::string newname)
{
    who=std::move(newname);
}

void Email::SetDate(std::string newdate)
{
    date=std::move(newdate);
}

void Email::SetSubject(std::string newsubject)
{
    subject= std::move(newsubject);
}

Email::Email(std::string who, std::string date, std::string subject):
    who(std::move(who)),date(std::move(date)),subject(std::move(subject)) {
}

std::ostream &operator<<(std::ostream &os, const Email &mail) {
    os << mail.who << " " << mail.subject << " " << mail.date << std::endl;
    return os;
}

Email Email::operator()(std::string who, std::string date, std::string subject) {
    this->who=who;
    this->date=date;
    this->subject=subject;
    return {std::move(who),std::move(date),std::move(subject)};
}


