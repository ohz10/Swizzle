#include <swizzle/parser/states/BitfieldColonReadState.hpp>

#include <swizzle/lexer/TokenInfo.hpp>
#include <swizzle/parser/NodeStack.hpp>
#include <swizzle/parser/ParserStateContext.hpp>
#include <swizzle/parser/TokenStack.hpp>

namespace swizzle { namespace parser { namespace states {

    ParserState BitfieldColonReadState::consume(const lexer::TokenInfo& token, NodeStack& nodeStack, TokenStack& tokenStack, ParserStateContext& context)
    {
        // TODO: implement
        return ParserState::Init;
    }
}}}
