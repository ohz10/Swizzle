#include <swizzle/parser/states/ImportFirstColonState.hpp>

#include <swizzle/Exceptions.hpp>
#include <swizzle/lexer/TokenInfo.hpp>
#include <swizzle/parser/NodeStack.hpp>
#include <swizzle/parser/TokenStack.hpp>

namespace swizzle { namespace parser { namespace states {

    ParserState ImportFirstColonState::consume(const lexer::TokenInfo& token, NodeStack&, TokenStack&)
    {
        const auto type = token.token().type();

        if(type == lexer::TokenType::colon)
        {
            return ParserState::StartImport;
        }

        throw SyntaxError("Expectd : as a part of a namespace, found '" + token.token().to_string() + "'", token);
    }
}}}
