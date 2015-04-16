#ifndef EXTENSIONSRTS_H
#define EXTENSIONSRTS_H

#include <QObject>
#include <QHash>
#include <QSharedPointer>
#include <QJsonValue>
#include <QJsonObject>
#include "include/Extensions/Stubs/stub.h"

namespace Extensions {

    class RuntimeSupport : public QObject
    {
        Q_OBJECT
    public:
        explicit RuntimeSupport(QObject *parent = 0);
        ~RuntimeSupport();

        QJsonObject handleRequest(const QJsonObject &request);
        quint32 presentObject(QSharedPointer<Stubs::Stub> stub);
    signals:

    public slots:

    private:
        QHash<quint32, QSharedPointer<Stubs::Stub>> m_pointers;
    };

}

#endif // EXTENSIONSRTS_H