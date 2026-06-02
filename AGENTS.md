# AGENTS.md

BrodoEngine is a single-author personal C++ game engine project (learning / research — see `README.md`). This file guides OpenCode and similar agents working in the repo.

## Current state

Repository is in early bootstrap. Only `README.md`, `LICENSE`, and `.gitignore` are committed. There is no source code, no `CMakeLists.txt`, no test harness, no CI, and no repo-local OpenCode config.

## Implied toolchain (from `.gitignore`, not yet in use)

The `.gitignore` is preconfigured for a C++ project using **CMake** and **vcpkg**:
- CMake artifacts: `build/`, `build-*/`, `CMakeFiles/`, `CMakeCache.txt`, `cmake_install.cmake`, `compile_commands.json`, `Makefile`
- vcpkg: `vcpkg_installed/`
- Standard C/C++ build outputs: `*.o`, `*.obj`, `*.so`, `*.dylib`, `*.dll`, `*.a`, `*.lib`, `*.exe`, `*.out`, plus `*.gch`/`*.pch`

These are hints about the intended toolchain, not decisions already made. Confirm with the user before creating `CMakeLists.txt`, a vcpkg manifest, or a project layout.

## Working conventions

- Single-author project — keep diffs focused, avoid drive-by refactors.
- Do not add CI, pre-commit hooks, linters, formatters, or OpenCode config without being asked.
- Do not invent project structure (directories, target names, namespaces, module layout) the user has not specified.
- License is MIT (2026, n1Sh1) — preserve the existing notice in new files when appropriate.

## Verification

There are no build, lint, typecheck, or test commands. Do not attempt to build or test until a build system is in place. If asked to "run the tests" or "build the project" before that exists, say so and ask whether to scaffold the tooling first.

## Things to confirm with the user before real work

When kicking off non-trivial work, ask about: C++ standard, target platform(s), windowing/rendering backends, test framework, vcpkg manifest mode vs classic, and any coding-style rules (clang-format, naming). Do not assume defaults silently.
