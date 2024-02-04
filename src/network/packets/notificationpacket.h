#ifndef NOTIFICATIONPACKET_H
#define NOTIFICATIONPACKET_H

#include <abstractpacket.h>

#include <QByteArray>
#include <QJsonValue>
#include <QString>
#include <QStringList>

class NotificationPacket : public AbstractPacket
{
  public:
    NotificationPacket() = default;
    ~NotificationPacket() = default;

    QString header() const override;
    bool fromJsonValue(const QJsonValue &value) override;
    QByteArray toJson() const override;

  private:
    QStringList messages;
};

#endif // NOTIFICATIONPACKET_H