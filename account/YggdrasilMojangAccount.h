#ifndef YGGDRASILMOJANGACCOUNT_H
#define YGGDRASILMOJANGACCOUNT_H

#include "AbstractAccount.h"
#include <QByteArray>
#include <QJsonObject>

class YggdrasilMojangAccount : public AbstractAccount {
public:
    YggdrasilMojangAccount(){}
    ~YggdrasilMojangAccount(){}
protected:
    QByteArray jsonBuilder(QString email, QString password);
    void login(QString email, QString password);
};

#endif // YGGDRASILMOJANGACCOUNT_H
