#ifndef UTILS_H
#define UTILS_H

#include <QJsonObject>
#include <QJsonDocument>
#include <QDebug>

QJsonObject qStringToQJsonObject(QString jsonString){
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonString.toLocal8Bit().data());
    if (jsonDocument.isNull()){
        qDebug() << "jsonString is NULL" << jsonString.toLocal8Bit().data();
    }
    return jsonDocument.object();
}

#endif // UTILS_H
