/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::Control System

Interfaces:
***********************************************************************/

#ifndef VCZH_PRESENTATION_CONTROLS_GUILABELCONTROLS
#define VCZH_PRESENTATION_CONTROLS_GUILABELCONTROLS

#include "GuiBasicControls.h"

namespace vl
{
	namespace presentation
	{
		namespace controls
		{

/***********************************************************************
Label
***********************************************************************/

			/// <summary>A control to display a text.</summary>
			class GuiLabel : public GuiControl, public Description<GuiLabel>
			{
				GUI_SPECIFY_CONTROL_TEMPLATE_TYPE(LabelTemplate)
			protected:
				Color									textColor;

			public:
				/// <summary>Create a control with a specified style controller.</summary>
				/// <param name="_controlTemplate">The control template.</param>
				GuiLabel(ControlTemplateType* _controlTemplate);
				~GuiLabel();

				/// <summary>Get the text color.</summary>
				/// <returns>The text color.</returns>
				Color									GetTextColor();
				/// <summary>Set the text color.</summary>
				/// <param name="value">The text color.</param>
				void									SetTextColor(Color value);
			};
		}
	}
}

#endif
