#pragma once

#include <QtWidgets/QWidget>
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
