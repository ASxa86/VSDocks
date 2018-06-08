#pragma once

#include <QtWidgets/QDockWidget>
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
