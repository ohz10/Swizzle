#include <swizzle/lexer/TokenInfo.hpp>
#include <swizzle/Exceptions.hpp>

#include <sstream>

namespace swizzle { namespace types { namespace utils {

    void checkFloatValue(const boost::string_view& underlying, const lexer::TokenInfo& token, const std::string& errorMessage)
    {
        // NOTE: I would like to validate the values we're given don't overflow the storage type, but
        // I'm not certain how to do that. 
        if(underlying == "f32")
        {
            float f = 0.0;
            std::stringstream ss(token.token().value().to_string());
            ss >> f;
            
            return;
        }
        
        if(underlying == "f64")
        {
            double d = 0.0;
            std::stringstream ss(token.token().value().to_string());
            ss >> d;
            
            return;
        }
        
        throw SyntaxError(errorMessage + ": " + underlying.to_string(), token);
    }
}}}
