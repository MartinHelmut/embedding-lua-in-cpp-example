include(FetchContent)

FetchContent_Declare(
  doctest
  GIT_REPOSITORY "https://github.com/onqtam/doctest.git"
  GIT_TAG v2.4.9
)
add_subdirectory(doctest)

FetchContent_Declare(
  fmt
  GIT_REPOSITORY "https://github.com/fmtlib/fmt.git"
  GIT_TAG 9.0.0
)
add_subdirectory(fmt)

FetchContent_Declare(
  spdlog
  GIT_REPOSITORY "https://github.com/gabime/spdlog.git"
  GIT_TAG v1.10.0
)
add_subdirectory(spdlog)

FetchContent_Declare(
  sol2
  GIT_REPOSITORY "https://github.com/ThePhD/sol2.git"
  GIT_TAG v3.3.0
)
add_subdirectory(sol2)

FetchContent_Declare(
  lua
  GIT_REPOSITORY "https://github.com/lua/lua.git"
  GIT_TAG v5.4.4
)
add_subdirectory(lua)
