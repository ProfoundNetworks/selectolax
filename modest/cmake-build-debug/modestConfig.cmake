
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was modestConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

#include(CMakeFindDependencyMacro)
# NOTE Had to use find_package because find_dependency does not support COMPONENTS or MODULE until 3.8.0
#find_package(Boost 1.55 REQUIRED COMPONENTS regex)

# prevent including it several times
if(NOT modest_FOUND)
   include("${PACKAGE_PREFIX_DIR}/lib/modest/cmake/modest.cmake")
   check_required_components(modest})
endif()
