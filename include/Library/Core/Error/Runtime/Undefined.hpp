////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library ▸ Core
/// @file           Library/Core/Error/Runtime/Undefined.hpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __Library_Core_Error_Runtime_Undefined__
#define __Library_Core_Error_Runtime_Undefined__

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

/// @brief                      Undefined variable error class

class Undefined : public RuntimeError
{

    public:

                                Undefined                                   (   const   String&                     aVariableName                               ) ;

                                // Undefined                                   (   const   String&                     aScope,
                                //                                                 const   String&                     aVariableName                               ) ;

                                ~Undefined                                  ( ) ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
