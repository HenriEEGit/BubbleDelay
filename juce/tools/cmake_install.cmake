# Install script for directory: C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/RNBO_JUCE_EXAMPLE")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/modules/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/extras/Build/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3" TYPE FILE FILES
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/JUCEConfigVersion.cmake"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/JUCEConfig.cmake"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/JUCECheckAtomic.cmake"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/JUCEHelperTargets.cmake"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/JUCEModuleSupport.cmake"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/JUCEUtils.cmake"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/JuceLV2Defines.h.in"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/LaunchScreen.storyboard"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/PIPAudioProcessor.cpp.in"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/PIPAudioProcessorWithARA.cpp.in"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/PIPComponent.cpp.in"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/PIPConsole.cpp.in"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/RecentFilesMenuTemplate.nib"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/UnityPluginGUIScript.cs.in"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/checkBundleSigning.cmake"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/copyDir.cmake"
    "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/thirdparty/juce/extras/Build/CMake/juce_runtime_arch_detection.cpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/JUCE-7.0.3" TYPE EXECUTABLE FILES "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/Debug/juce_lv2_helper.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/JUCE-7.0.3" TYPE EXECUTABLE FILES "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/Release/juce_lv2_helper.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/JUCE-7.0.3" TYPE EXECUTABLE FILES "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/MinSizeRel/juce_lv2_helper.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/JUCE-7.0.3" TYPE EXECUTABLE FILES "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/RelWithDebInfo/juce_lv2_helper.exe")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3/LV2_HELPER.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3/LV2_HELPER.cmake"
         "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/CMakeFiles/Export/5748570a9df4d816050333fed8cb462b/LV2_HELPER.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3/LV2_HELPER-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3/LV2_HELPER.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3" TYPE FILE FILES "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/CMakeFiles/Export/5748570a9df4d816050333fed8cb462b/LV2_HELPER.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3" TYPE FILE FILES "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/CMakeFiles/Export/5748570a9df4d816050333fed8cb462b/LV2_HELPER-debug.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3" TYPE FILE FILES "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/CMakeFiles/Export/5748570a9df4d816050333fed8cb462b/LV2_HELPER-minsizerel.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3" TYPE FILE FILES "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/CMakeFiles/Export/5748570a9df4d816050333fed8cb462b/LV2_HELPER-relwithdebinfo.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-7.0.3" TYPE FILE FILES "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/CMakeFiles/Export/5748570a9df4d816050333fed8cb462b/LV2_HELPER-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Users/henri/Desktop/BubbleDelay/BubbleDelay/juce/tools/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
