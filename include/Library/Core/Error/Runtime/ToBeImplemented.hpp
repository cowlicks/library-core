////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/Core
/// @file           Library/Core/Error/Runtime/ToBeImplemented.hpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __Library_Core_Error_Runtime_ToBeImplemented__
#define __Library_Core_Error_Runtime_ToBeImplemented__

#include <Library/Core/Types/String.hpp>
#include <Library/Core/Error/RuntimeError.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace library
{
namespace core
{
namespace error
{
namespace runtime
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using library::core::types::String ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @brief                      To be implemented error class

class ToBeImplemented : public RuntimeError
{

    public:

                                ToBeImplemented                             ( ) ;
                                
                                ToBeImplemented                             (   const   String&                     aFunctionName                               ) ;

                                // ToBeImplemented                             (   const   String&                     aScope,
                                //                                                 const   String&                     aFunctionName                               ) ;

                                ~ToBeImplemented                            ( ) ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////