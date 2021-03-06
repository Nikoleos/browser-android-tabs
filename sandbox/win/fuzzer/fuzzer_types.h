// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SANDBOX_FUZZER_TYPES_H_
#define SANDBOX_FUZZER_TYPES_H_

#include <stdint.h>

// This file defines Windows types for the sandbox_ipc_fuzzer target, which
// currently only compiles on Linux.
//
// It also disables Windows exception handling to ensure any crashes are
// captured by the fuzzing harness.

// Disable exceptions.
#if defined(__try)
#undef __try
#endif
#define __try if(true)
#if defined(__except)
#undef __except
#endif
#define __except(...) if(false)

// Windows types used in sandbox.
typedef void* HANDLE;
typedef uint32_t DWORD;
typedef int32_t LONG;
typedef uint32_t ULONG;
typedef uint32_t* ULONG_PTR;
typedef LONG NTSTATUS;
typedef void PROCESS_INFORMATION;

// __stdcall is used in one place. TODO(wfh): replace with WINAPI.
#define __stdcall

#endif  // SANDBOX_FUZZER_TYPES_H_
