//-----------------------------------------------------------------------------
// boost mpl/vector/vector40_c.hpp header file
// See http://www.boost.org for updates, documentation, and revision history.
//-----------------------------------------------------------------------------
//
// Copyright (c) 2000-02
// Aleksey Gurtovoy
//
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose is hereby granted without fee, 
// provided that the above copyright notice appears in all copies and 
// that both the copyright notice and this permission notice appear in 
// supporting documentation. No representations are made about the 
// suitability of this software for any purpose. It is provided "as is" 
// without express or implied warranty.

#ifndef BOOST_MPL_VECTOR_VECTOR40_C_HPP_INCLUDED
#define BOOST_MPL_VECTOR_VECTOR40_C_HPP_INCLUDED

#if !defined(BOOST_MPL_PREPROCESSING_MODE)
#   include "boost/mpl/vector/vector30_c.hpp"
#   include "boost/mpl/vector/vector40.hpp"
#endif

#include "boost/mpl/aux_/config/use_preprocessed.hpp"
#include "boost/mpl/aux_/config/vector.hpp"

#if defined(BOOST_MPL_USE_PREPROCESSED_HEADERS) && \
    !defined(BOOST_MPL_PREPROCESSING_MODE)

#   if !defined(BOOST_MPL_TYPEOF_BASED_VECTOR_IMPL)
#       define BOOST_MPL_PREPROCESSED_HEADER vector40_c.hpp
#   else
#       define BOOST_MPL_PREPROCESSED_HEADER lite_vector40_c.hpp
#   endif
#   include "boost/mpl/aux_/include_preprocessed.hpp"

#else

#   include "boost/preprocessor/iterate.hpp"
#   include "boost/config.hpp"

namespace boost {
namespace mpl {

#   define BOOST_PP_ITERATION_PARAMS_1 \
    (3,(31, 40, "boost/mpl/vector/aux_/numbered_c.hpp"))
#   include BOOST_PP_ITERATE()

} // namespace mpl
} // namespace boost

#endif // BOOST_MPL_USE_PREPROCESSED_HEADERS

#endif // BOOST_MPL_VECTOR_VECTOR40_C_HPP_INCLUDED