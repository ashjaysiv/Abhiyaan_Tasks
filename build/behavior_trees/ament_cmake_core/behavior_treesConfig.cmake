# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_behavior_trees_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED behavior_trees_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(behavior_trees_FOUND FALSE)
  elseif(NOT behavior_trees_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(behavior_trees_FOUND FALSE)
  endif()
  return()
endif()
set(_behavior_trees_CONFIG_INCLUDED TRUE)

# output package information
if(NOT behavior_trees_FIND_QUIETLY)
  message(STATUS "Found behavior_trees: 0.0.0 (${behavior_trees_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'behavior_trees' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${behavior_trees_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(behavior_trees_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${behavior_trees_DIR}/${_extra}")
endforeach()
