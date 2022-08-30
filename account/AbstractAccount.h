#ifndef ABSTRACTACCOUNT_H
#define ABSTRACTACCOUNT_H

#include <QObject>
#include <QString>

class AbstractAccount : public QObject
{
    Q_OBJECT
public:
    AbstractAccount() {}
    virtual ~AbstractAccount() {}

    QString getUsername();
    QString getUuid();
    QString getAccessToken();
    QString getUserType();

private:
    QString username;
    QString uuid;
    QString accessToken;
    QString userType;
};



#endif // ABSTRACTACCOUNT_H
