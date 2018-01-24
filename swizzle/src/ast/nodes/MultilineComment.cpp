#include <swizzle/ast/nodes/MultilineComment.hpp>

#include <swizzle/ast/AncestorInfo.hpp>
#include <swizzle/ast/VisitorInterface.hpp>

namespace swizzle { namespace ast { namespace nodes {

    MultilineComment::MultilineComment(const lexer::TokenInfo& info)
        : info_(info)
    {
    }

    const lexer::TokenInfo& MultilineComment::info() const
    {
        return info_;
    }

    void MultilineComment::accept(VisitorInterface& visitor, AncestorInfo& ancestors, const Node::Depth depth)
    {
        visitor(ancestors, *this);
        
        if(depth == Depth::One) return;
        ancestors.push(*this);
        
        for(auto& child : children())
        {
            child->accept(visitor, ancestors, depth);
        }
        
        ancestors.pop();
    }

}}}
