#ifndef YGGDRASILMOJANGACCOUNT_H
#define YGGDRASILMOJANGACCOUNT_H

#include "AbstractAccount.h"
#include "util/Utils.h"

#include <QByteArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QEventLoop>

#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkProxy>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkAccessManager>

// Mojang 正版验证服务器
#define mojangUrl (QUrl("https://authserver.mojang.com/authenticate"))

#define TzmCore ("TzmCore")

class YggdrasilMojangAccount : public AbstractAccount {
public:
    YggdrasilMojangAccount(){}
    ~YggdrasilMojangAccount(){}
    void login(QString email, QString password);

protected:
    QByteArray jsonBuilder(QString email, QString password);

    QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
    QNetworkReply *reply = nullptr;
    QNetworkRequest *netRequest = new QNetworkRequest();
};

#endif // YGGDRASILMOJANGACCOUNT_H
