#include "YggdrasilMojangAccount.h"
QByteArray YggdrasilMojangAccount::jsonBuilder(QString email, QString password){
    QJsonObject objectData;
    QJsonObject infoData;
        infoData.insert("name", "Minecraft");
        infoData.insert("version", 1);
        objectData.insert("agent", infoData);
        objectData.insert("clientToken", "TzmCore");
        objectData.insert("password", password);
        objectData.insert("username", email);
        QJsonDocument document(objectData);
        QString data = QString(document.toJson());

        return data.toUtf8();
}

void YggdrasilMojangAccount::login(QString email, QString password){
    QByteArray data = jsonBuilder(email, password);
        netRequest->setUrl(mojangUrl);
        netRequest->setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        netRequest->setAttribute(QNetworkRequest::Attribute::RedirectPolicyAttribute, true);

        reply = accessManager->post(*netRequest, data);
        QEventLoop eventLoop;
        connect(reply, SIGNAL(finished()), &eventLoop, SLOT(quit()));
        eventLoop.exec();

        QString str = reply->readAll();

        return;
}
