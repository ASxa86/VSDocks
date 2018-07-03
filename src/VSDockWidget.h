#pragma once

#ifdef WIN32
#pragma warning(push, 0)
#endif

#include <QtWidgets/QDockWidget>

#ifdef WIN32
#pragma warning(pop)
#endif

#include "Export.h"

namespace vsdocks
{
	class VSDOCKS_EXPORT VSDockWidget : public QDockWidget
	{
		Q_OBJECT

	public:
		VSDockWidget(QWidget* parent = nullptr);
		virtual ~VSDockWidget();
	};
}
