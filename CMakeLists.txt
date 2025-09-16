[
  {
    "label": "CMake: Configure (Debug)",
    "command": "bash",
    "args": [
      "-lc",
      "cmake -S \"$ZED_WORKTREE_ROOT\" -B \"$ZED_WORKTREE_ROOT/build\" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON"
    ]
  },
  {
    "label": "CMake: Build",
    "command": "bash",
    "args": [
      "-lc",
      "cmake --build \"$ZED_WORKTREE_ROOT/build\" -j"
    ]
  },
  {
    "label": "CMake: Run (app)",
    "command": "bash",
    "args": [
      "-lc",
      "\"$ZED_WORKTREE_ROOT/build/app\""
    ],
    "reveal": "always"
  },
  {
    "label": "CMake: Build & Run",
    "command": "bash",
    "args": [
      "-lc",
      "cmake -S \"$ZED_WORKTREE_ROOT\" -B \"$ZED_WORKTREE_ROOT/build\" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON && cmake --build \"$ZED_WORKTREE_ROOT/build\" -j && \"$ZED_WORKTREE_ROOT/build/app\""
    ],
    "reveal": "always"
  }
]
