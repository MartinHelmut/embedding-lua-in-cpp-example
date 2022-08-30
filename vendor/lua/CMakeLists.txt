message(STATUS "Fetching Lua ...")

project(Lua LANGUAGES C)
set(CMAKE_C_STANDARD 17)

FetchContent_GetProperties(lua)
if (NOT lua_POPULATED)
  FetchContent_Populate(lua)
endif ()

add_library(lua
  ${lua_SOURCE_DIR}/lapi.c ${lua_SOURCE_DIR}/lcode.c
  ${lua_SOURCE_DIR}/lctype.c ${lua_SOURCE_DIR}/ldebug.c
  ${lua_SOURCE_DIR}/ldo.c ${lua_SOURCE_DIR}/ldump.c
  ${lua_SOURCE_DIR}/lfunc.c ${lua_SOURCE_DIR}/lgc.c
  ${lua_SOURCE_DIR}/llex.c ${lua_SOURCE_DIR}/lmem.c
  ${lua_SOURCE_DIR}/lobject.c ${lua_SOURCE_DIR}/lopcodes.c
  ${lua_SOURCE_DIR}/lparser.c ${lua_SOURCE_DIR}/lstate.c
  ${lua_SOURCE_DIR}/lstring.c ${lua_SOURCE_DIR}/ltable.c
  ${lua_SOURCE_DIR}/ltm.c ${lua_SOURCE_DIR}/lundump.c
  ${lua_SOURCE_DIR}/lvm.c ${lua_SOURCE_DIR}/lzio.c
  ${lua_SOURCE_DIR}/lauxlib.c ${lua_SOURCE_DIR}/lbaselib.c
  ${lua_SOURCE_DIR}/lcorolib.c ${lua_SOURCE_DIR}/ldblib.c
  ${lua_SOURCE_DIR}/liolib.c ${lua_SOURCE_DIR}/lmathlib.c
  ${lua_SOURCE_DIR}/loadlib.c ${lua_SOURCE_DIR}/loslib.c
  ${lua_SOURCE_DIR}/lstrlib.c ${lua_SOURCE_DIR}/ltablib.c
  ${lua_SOURCE_DIR}/lutf8lib.c ${lua_SOURCE_DIR}/linit.c)

target_include_directories(lua PUBLIC ${lua_SOURCE_DIR})

FetchContent_MakeAvailable(lua)
