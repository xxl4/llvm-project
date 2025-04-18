//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

_CLC_OVERLOAD _CLC_DECL long atom_dec(volatile global long *p);
_CLC_OVERLOAD _CLC_DECL unsigned long atom_dec(volatile global unsigned long *p);
_CLC_OVERLOAD _CLC_DECL long atom_dec(volatile local long *p);
_CLC_OVERLOAD _CLC_DECL unsigned long atom_dec(volatile local unsigned long *p);
