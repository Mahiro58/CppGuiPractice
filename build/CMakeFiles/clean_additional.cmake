# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CppGuiPractice_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CppGuiPractice_autogen.dir/ParseCache.txt"
  "CMakeFiles/StroustrupGUI_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/StroustrupGUI_autogen.dir/ParseCache.txt"
  "CppGuiPractice_autogen"
  "StroustrupGUI_autogen"
  )
endif()
