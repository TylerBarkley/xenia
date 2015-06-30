/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2014 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#include "xenia/gpu/gl4/gl4_gpu_flags.h"

DEFINE_bool(thread_safe_gl, false,
            "Only allow one GL context to be active at a time.");

DEFINE_bool(disable_gl_context_reset, false,
            "Do not aggressively reset the GL context (helps with capture "
            "programs such as OBS or FRAPS).");

DEFINE_bool(gl_debug, false, "Enable OpenGL debug validation layer.");
DEFINE_bool(gl_debug_output, false, "Dump ARB_debug_output to stderr.");
DEFINE_bool(gl_debug_output_synchronous, true,
            "ARB_debug_output will synchronize to be thread safe.");

DEFINE_bool(vendor_gl_extensions, false,
            "Enable vendor-specific (NV, AMD, etc) GL extensions.");

DEFINE_bool(disable_framebuffer_readback, false,
            "Disable framebuffer readback.");
DEFINE_bool(disable_textures, false, "Disable textures and use colors only.");