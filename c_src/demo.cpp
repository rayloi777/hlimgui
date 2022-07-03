#include "utils.h"

HL_PRIM void HL_NAME(show_demo_window)(bool* p_open)
{
	ImGui::ShowDemoWindow(p_open);
}

HL_PRIM void HL_NAME(show_metrics_window)(bool* p_open)
{
	ImGui::ShowMetricsWindow(p_open);
}

HL_PRIM void HL_NAME(show_stack_tool_window)(bool* p_open)
{
	ImGui:: ShowStackToolWindow(p_open);
}

HL_PRIM void HL_NAME(show_about_window)(bool* p_open)
{
	ImGui::ShowAboutWindow(p_open);
}

HL_PRIM void HL_NAME(show_style_editor)(ImGuiStyle* hl_style)
{
	if (hl_style != nullptr) {
		ImGui::ShowStyleEditor(hl_style);
	}
	else
	{
		ImGui::ShowStyleEditor(NULL);
	}
}

HL_PRIM bool HL_NAME(show_style_selector)(vstring* label)
{
	return ImGui::ShowStyleSelector(convertString(label));
}

HL_PRIM void HL_NAME(show_font_selector)(vstring* label)
{
	ImGui::ShowFontSelector(convertString(label));
}

HL_PRIM void HL_NAME(show_user_guide)()
{
	ImGui::ShowUserGuide();
}

HL_PRIM vbyte* HL_NAME(get_version)()
{
	return getVByteFromCStr(ImGui::GetVersion());
}

DEFINE_PRIM(_VOID, show_demo_window, _REF(_BOOL));
DEFINE_PRIM(_VOID, show_metrics_window, _REF(_BOOL));
DEFINE_PRIM(_VOID, show_stack_tool_window, _REF(_BOOL));
DEFINE_PRIM(_VOID, show_about_window, _REF(_BOOL));
DEFINE_PRIM(_VOID, show_style_editor, _STRUCT);
DEFINE_PRIM(_BOOL, show_style_selector, _STRING);
DEFINE_PRIM(_VOID, show_font_selector, _STRING);
DEFINE_PRIM(_VOID, show_user_guide, _NO_ARG);
DEFINE_PRIM(_BYTES, get_version, _NO_ARG);

