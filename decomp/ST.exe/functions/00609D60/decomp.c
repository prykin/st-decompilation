#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::LoadImagSpr */

undefined4 __thiscall STFieldC::LoadImagSpr(STFieldC *this,uint param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  code *pcVar3;
  uint *puVar4;
  int errorCode;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  char *text;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  uint *local_c;
  uint local_8;

  pDVar1 = this->field_0234;
  local_10 = 0;
  if (pDVar1 == (DArrayTy *)0x0) {
    return 0;
  }
  if (param_1 < pDVar1->count) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, param_1) (runtime stride) */
    local_c = (uint *)(pDVar1->elementSize * param_1 + (int)pDVar1->data);
  }
  else {
    local_c = (uint *)0x0;
  }
  if ((local_c != (uint *)0x0) && (local_c[1] != 0xffffffff)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    puVar4 = local_c;
    if (errorCode != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar6 = ReportDebugMessage(s_E____titans_nick_to_field_cpp_007cf850,0x248,0,errorCode,
                                 &DAT_007a4ccc,s_STFieldC__LoadImagSpr_007cf898);
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(errorCode,0,s_E____titans_nick_to_field_cpp_007cf850,0x24a);
      return 0xffff;
    }
    uVar2 = *local_c;
    if (uVar2 < 4) {
      text = (&PTR_s_pics_g_007cf6d0)[uVar2];
      piVar8 = DAT_00806764;
    }
    else {
      text = (&PTR_s_pics_g_007cf6d0)[uVar2];
      piVar8 = DAT_00806774;
    }
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (piVar8,CASE_1D,text,0xffffffff,0,1,0,(undefined4 *)0x0);
    FUN_006e8660(PTR_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar5 + 9),
                 *(uint *)((int)puVar5 + 0xd),*(int *)(&DAT_007cf6f0 + *puVar4 * 8) / 2,
                 *(int *)(&DAT_007cf6f4 + *puVar4 * 8) / 2 - 0xe,0);
    FUN_006e98e0(PTR_00807598,local_8,0,*(undefined4 *)puVar5,*(int *)((int)puVar5 + 0x21),1);
    FUN_006ea270(PTR_00807598,local_8,0,0);
    FUN_006ea5e0(PTR_00807598,local_8,0,0);
    FUN_006ea960(PTR_00807598,local_8,(float)(int)puVar4[3] * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)puVar4[4] * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)puVar4[5] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(PTR_00807598,local_8,0);
    puVar4[1] = 1;
    puVar4[0xf] = local_8;
    g_currentExceptionFrame = local_54.previous;
  }
  return local_10;
}

