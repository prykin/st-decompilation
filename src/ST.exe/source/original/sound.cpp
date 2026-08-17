#include "st/generated.hpp"
// Generated translation unit: source/original/sound.cpp

// 00568C50 SoundClassTy::CheckFader
#line 4 "decomp/ST.exe/functions/00568C50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\sound.cpp
   SoundClassTy::CheckFader */

void __thiscall st::fn_00568C50(SoundClassTy *this)

{
  SoundClassTy *pSVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  InternalExceptionFrame local_50;
  uint local_c;
  SoundClassTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\sound.cpp"),0x205,0,iVar3,st::mutable_c_string("%s"),
                               "SoundClassTy::CheckFader");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return;
  }
  if (local_8->field_0DFB == 0) {
    if (-1 < local_8->field_0E03) {
      st::fn_006C1BA0(local_8->field_0E03);
    }
    pSVar2->field_0E03 = -1;
  }
  if (-1 < pSVar2->field_0E03) {
    st::fn_006C1F00(pSVar2->field_0E03,&local_c,nullptr);
    if (local_c == 1) {
      /* ST_CALLSITE[00568CC4]: CALL dword ptr [0x0085bedc] */
      DVar4 = st::external_000000DA();
      uVar5 = DVar4 - pSVar2->field_0DFF;
      if ((uint)pSVar2->field_0DFB < uVar5) {
        st::fn_006C1BA0(pSVar2->field_0E03);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      st::fn_006C1CE0
                (pSVar2->field_0E03,
                 DAT_0080730a - (int)((DAT_0080730a + 4000) * uVar5) / (int)pSVar2->field_0DFB);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    pSVar2->field_0E03 = -1;
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

