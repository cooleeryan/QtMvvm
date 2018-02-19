#ifndef QTMVVM_INPUTVIEWFACTORY_P_H
#define QTMVVM_INPUTVIEWFACTORY_P_H

#include "qtmvvmquick_global.h"
#include "inputviewfactory.h"

namespace QtMvvm {

class InputViewFactoryPrivate
{
public:
	InputViewFactoryPrivate();

	QHash<QByteArray, QUrl> simpleViews;
};

}

#endif // QTMVVM_INPUTVIEWFACTORY_P_H