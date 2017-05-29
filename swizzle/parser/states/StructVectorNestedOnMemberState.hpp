#pragma once 
#include <swizzle/parser/ParserStateInterface.hpp>

namespace swizzle { namespace parser { namespace states {

    class StructVectorNestedOnMemberState : public ParserStateInterface
    {
    public:
        ParserState consume(const lexer::TokenInfo& token, NodeStack& nodeStack, TokenStack& tokenStack, ParserStateContext& context) override;
    };
}}}
