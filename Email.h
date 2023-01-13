//
// Created by Johannes Joujo on 2022-12-08.
//

#ifndef UNTITLED4_EMAIL_H
#define UNTITLED4_EMAIL_H

#include <iostream>

class Email {
private:
    std::string who;
    std::string date;
    std::string subject;

public:
    Email()=default;
    Email(std::string who, std::string date, std::string subject);

    Email operator()(std::string who, std::string date, std::string subject);

    friend std::ostream &operator<<(std::ostream &os, const Email &mail);

    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWheDate;

     std::string GetName() const;
     std::string GetDate() const;
     std::string GetSubject() const;

     void SetName(std::string newname);
     void SetDate(std::string newdate);
     void SetSubject(std::string newsubject);


};

struct CompWhoDateSubject {
    bool operator()(const Email &lhs, const Email &rhs) {
        if (lhs.who != rhs.who) {
            return lhs.who < rhs.who;
        }
        if (lhs.date != rhs.date) {
            return lhs.date < rhs.date;
        }
        return lhs.subject < rhs.subject;
    }
};


struct CompDateWhoSubject {
    bool operator()(const Email &lhs, const Email &rhs) {
        if (lhs.date != rhs.date) {
            return lhs.date < rhs.date;
        }
        if (lhs.who != rhs.who) {
            return lhs.who < rhs.who;
        }
        if (lhs.subject != rhs.subject) {
            return lhs.subject < rhs.subject;
        }
        return lhs.date <= rhs.date;
    }
};

struct CompSubjectWheDate {
    bool operator()(const Email &lhs, const Email &rhs) {
        if (lhs.subject != rhs.subject) {
            return lhs.subject < rhs.subject;
        }
        if (lhs.date != rhs.date) {
            return lhs.date < rhs.date;
        }
        if (lhs.who != rhs.who) {
            return lhs.who < rhs.who;
        }
        return lhs.subject <= rhs.subject;
    }
};

#endif //UNTITLED4_EMAIL_H
