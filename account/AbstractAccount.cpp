#include "AbstractAccount.h"
QString AbstractAccount::getUsername(){
    return username;
}

QString AbstractAccount::getUuid(){
    return uuid;
}

QString AbstractAccount::getAccessToken(){
    return accessToken;
}

QString AbstractAccount::getUserType(){
    return userType;
}
