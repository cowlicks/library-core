////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/Core
/// @file           Library/Core/Error/RuntimeError.hpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        TBD

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __Library_Core_Error_RuntimeError__
#define __Library_Core_Error_RuntimeError__

#include <Library/Core/Types/String.hpp>
#include <Library/Core/Error/Exception.hpp>

#include <stdexcept>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace library
{
namespace core
{
namespace error
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using library::core::types::String ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @brief                      Runtime error class

class RuntimeError : public Exception
{

    public:

                                RuntimeError                                (   const   String&                     aMessage                                    ) ;

                                RuntimeError                                (   const   String&                     aScope,
                                                                                const   String&                     aMessage                                    ) ;

                                ~RuntimeError                               ( ) ;

        virtual const char*     what                                        ( ) const noexcept override ;

    private:

        String                  message_ ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////