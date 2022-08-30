/*
 * Copyright (c) 2022 Martin Helmut Fieber <info@martin-fieber.se>
 */

#include <sol/sol.hpp>

#include "Core/Debug/Instrumentor.hpp"
#include "Core/Log.hpp"

int main() {
  try {
    APP_PROFILE_BEGIN_SESSION_WITH_FILE("App", "profile.json");

    sol::state lua{};
    lua.script_file("hello.lua");
    sol::function hello_fn{lua["hello"]};
    std::function<std::string(std::string)> hello{hello_fn};

    APP_INFO("Result: {}", hello("Mr. Anderson"));

    APP_PROFILE_END_SESSION();
  } catch (std::exception& e) {
    APP_ERROR("Main process terminated with: {}", e.what());
  }

  return 0;
}
