#ifndef TZMCORE_GLOBAL_H
#define TZMCORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TZMCORE_LIBRARY)
#  define TZMCORE_EXPORT Q_DECL_EXPORT
#else
#  define TZMCORE_EXPORT Q_DECL_IMPORT
#endif

#endif // TZMCORE_GLOBAL_H
