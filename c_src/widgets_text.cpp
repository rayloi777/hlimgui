#include "utils.h"

HL_PRIM void HL_NAME(text)(vstring* text)
{
    ImGui::TextUnformatted(convertString(text));
}

HL_PRIM void HL_NAME(text_colored)(vimvec4* col, vstring* text)
{
    ImGui::TextColored(col, "%s", convertString(text));
}

HL_PRIM void HL_NAME(text_disabled)(vstring* text)
{
    ImGui::TextDisabled("%s", convertStringNullAsEmpty(text));
}

HL_PRIM void HL_NAME(text_wrapped)(vstring* text)
{
    ImGui::TextWrapped("%s", convertStringNullAsEmpty(text));
}

HL_PRIM void HL_NAME(label_text)(vstring* label, vstring* text)
{
    ImGui::LabelText(convertString(label), "%s", convertString(text));
}

HL_PRIM void HL_NAME(bullet_text)(vstring* text)
{
    ImGui::BulletText("%s", convertStringNullAsEmpty(text));
}

DEFINE_PRIM(_VOID, text, _STRING);
DEFINE_PRIM(_VOID, text_colored, _IMVEC4 _STRING);
DEFINE_PRIM(_VOID, text_disabled, _STRING);
DEFINE_PRIM(_VOID, text_wrapped, _STRING);
DEFINE_PRIM(_VOID, label_text, _STRING _STRING);
DEFINE_PRIM(_VOID, bullet_text, _STRING);
