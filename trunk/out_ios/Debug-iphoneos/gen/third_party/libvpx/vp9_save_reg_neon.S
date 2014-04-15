@ This file was created from a .asm file
@  using the ads2gas_apple.pl script.

	.set WIDE_REFERENCE, 0
	.set ARCHITECTURE, 5
	.set DO1STROUNDING, 0
 @
 @  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 @
 @  Use of this source code is governed by a BSD-style license
 @  that can be found in the LICENSE file in the root of the source
 @  tree. An additional intellectual property rights grant can be found
 @  in the file PATENTS.  All contributing project authors may
 @  be found in the AUTHORS file in the root of the source tree.
 @


    .globl _vp9_push_neon
	.globl vp9_push_neon
    .globl _vp9_pop_neon
	.globl vp9_pop_neon

   @ ARM
   @ 
   @ PRESERVE8

.text
.p2align 2

_vp9_push_neon:
	vp9_push_neon: @
    vst1.i64            {d8, d9, d10, d11}, [r0]!
    vst1.i64            {d12, d13, d14, d15}, [r0]!
    bx              lr

    @

_vp9_pop_neon:
	vp9_pop_neon: @
    vld1.i64            {d8, d9, d10, d11}, [r0]!
    vld1.i64            {d12, d13, d14, d15}, [r0]!
    bx              lr

    @


