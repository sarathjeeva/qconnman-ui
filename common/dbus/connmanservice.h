/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c ConnmanService -p dbus/connmanservice -N ../introspection/service.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CONNMANSERVICE_H_1328805538
#define CONNMANSERVICE_H_1328805538

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface net.connman.Service
 */
class ConnmanService: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "net.connman.Service"; }

public:
    ConnmanService(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ConnmanService();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> ClearProperty(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("ClearProperty"), argumentList);
    }

    inline QDBusPendingReply<> Connect()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Connect"), argumentList);
    }

    inline QDBusPendingReply<> Disconnect()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Disconnect"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetProperties"), argumentList);
    }

    inline QDBusPendingReply<> MoveAfter(const QDBusObjectPath &in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("MoveAfter"), argumentList);
    }

    inline QDBusPendingReply<> MoveBefore(const QDBusObjectPath &in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("MoveBefore"), argumentList);
    }

    inline QDBusPendingReply<> Remove()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Remove"), argumentList);
    }

    inline QDBusPendingReply<> ResetCounters()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ResetCounters"), argumentList);
    }

    inline QDBusPendingReply<> SetProperty(const QString &in0, const QDBusVariant &in1)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0) << qVariantFromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("SetProperty"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void PropertyChanged(const QString &in0, const QDBusVariant &in1);
};

#endif
