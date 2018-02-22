#pragma once 
#include <swizzle/ast/Node.hpp>
#include <swizzle/lexer/TokenInfo.hpp>

#include <string>

namespace swizzle { namespace ast {
    class VisitorInterface;
}}

namespace swizzle { namespace ast { namespace nodes {

    class VariableBlock : public Node
    {
    public:
        VariableBlock(const lexer::TokenInfo& keyword);

        const lexer::TokenInfo& keyword() const;

        void variableOnField(const lexer::TokenInfo& variableOnField);
        const lexer::TokenInfo& variableOnField() const;

        void accept(VisitorInterface& visitor, AncestorInfo& ancestors, const Depth depth = Depth::All) override;

    private:
        const lexer::TokenInfo keyword_;
        lexer::TokenInfo variableOnFieldInfo_;       // field we're variable on
    };
}}}
