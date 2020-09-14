cmake_minimum_required(VERSION 3.10)

project(learn_cpp LANGUAGES CXX)

if (MSVC)
	 add_compile_options(/W4)
else ()
	 add_compile_options(-Wall -Wextra -Wpedantic)
endif()					  

add_executable(learn hello.cpp)


# add_library()		
#
# target_compile_features() -> enable c++ features used in your project to set
#	the correct std
#
# -DCMAKE_BUILD_TYPE=
# 	Pick from Release, RelWithDebInfo, Debug, or sometimes
# -DCMAKE_INSTALL_PREFIX=
# 	The location to install to. System install on UNIX would often be /usr/local
# 	(the default), user directories are often ~/.local, or you can pick a
# 	folder. 
# -DBUILD_SHARED_LIBS=
# 	You can set this ON or OFF to control the default for shared libraries (the
# 	author can pick one vs. the other explicitly instead of using the default,
# 	though) 
# -DBUILD_TESTING=
# 	This is a common name for enabling tests, not all packages use it, though,
# 	sometimes with good reason.
