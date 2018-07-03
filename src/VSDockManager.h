#pragma once

#ifdef WIN32
#pragma warning(push, 0)
#endif

#include <QtWidgets/QWidget>

#ifdef WIN32
#pragma warning(pop)
#endif

#include "Export.h"

namespace vsdocks
{
	class VSDOCKS_EXPORT VSDockManager : public QWidget
	{
		Q_OBJECT

	public:
		VSDockManager(QWidget* parent = nullptr);
		virtual ~VSDockManager();
	};
}
