#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "jsflib::jsflib" for configuration "MinSizeRel"
set_property(TARGET jsflib::jsflib APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(jsflib::jsflib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_MINSIZEREL "CXX"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/lib/jsflib.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS jsflib::jsflib )
list(APPEND _IMPORT_CHECK_FILES_FOR_jsflib::jsflib "${_IMPORT_PREFIX}/lib/jsflib.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
