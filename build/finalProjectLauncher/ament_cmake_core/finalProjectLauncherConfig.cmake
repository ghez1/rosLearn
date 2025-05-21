# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_finalProjectLauncher_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED finalProjectLauncher_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(finalProjectLauncher_FOUND FALSE)
  elseif(NOT finalProjectLauncher_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(finalProjectLauncher_FOUND FALSE)
  endif()
  return()
endif()
set(_finalProjectLauncher_CONFIG_INCLUDED TRUE)

# output package information
if(NOT finalProjectLauncher_FIND_QUIETLY)
  message(STATUS "Found finalProjectLauncher: 0.0.0 (${finalProjectLauncher_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'finalProjectLauncher' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT finalProjectLauncher_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(finalProjectLauncher_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${finalProjectLauncher_DIR}/${_extra}")
endforeach()
