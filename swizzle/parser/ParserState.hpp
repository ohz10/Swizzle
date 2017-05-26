#pragma once 
#include <cstdint>
#include <ostream>

namespace swizzle { namespace parser {

    enum class ParserState : std::uint8_t {
        Init,
        StartNamspace,
        NamespaceValue,
        NamespaceFirstColon,
        NamespaceSecondColon,
        TranslationUnit,
        StartImport,
        ImportValue,
        ImportFirstColon,
        ImportSecondColon,
        StartUsing,
        UsingName,
        UsingReadEqual,
        UsingTypeRead,
        UsingFirstColon,
        UsingSecondColon,
        StartEnum,
        EnumName,
        EnumColonRead,
        EnumUnderlyingType,
        EnumStartScope,
        EnumField,
        EnumFieldEqualRead,
        EnumFieldValueRead,
        StartBitfield,
        BitfieldName,
        BitfieldColonRead,
        BitfieldUnderlyingType,
        BitfieldStartScope,
        BitfieldField,
        BitfieldFieldColonRead,
        BitfieldStartPosition,
        BitfieldFirstDot,
        BitfieldSecondDot,
        BitfieldEndPosition,
        StartStruct,
        StructName,
        StructStartScope,
        StructFieldLabel,
        StructFieldNamespaceOrType,
        StructFieldNamespaceFirstColon,
        StructFieldNamespaceSecondColon,
        StructFieldName,
        StructStartArray,
        StructVector,
        StructVectorNestedOnMember,
        StructStartVariableBlock,
        StructVariableBlockColonRead,
        StructVariableBlockOnField,
        StructVariableBlockOnNestedField,
        StructVariableBlockBeginCases,
        StructVariableBlockCaseValue,
        StructVariableBlockCaseValueRead,
        StructVariableBlockCaseValueColonRead,
        StructVariableBlockNamespaceFirstColonRead,
        StructVariableBlockNamespaceSecondColonRead,
    };

    std::ostream& operator<<(std::ostream& os, const ParserState state);
}}