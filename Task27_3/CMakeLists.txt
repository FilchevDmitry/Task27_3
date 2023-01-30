
cmake_minimum_required (VERSION 3.8)
SET (SOURSE 
		Task27_3.cpp
  "company.cpp" "team.cpp")
SET (HEADERS	
  "company.h" "team.h")
add_executable (office "${SOURSE}" "${HEADERS}")


