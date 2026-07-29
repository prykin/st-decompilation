#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::LoadImagSpr */

undefined4 __thiscall STTmMineC::LoadImagSpr(STTmMineC *this,uint param_1,int param_2)

{
  STTmMineC_field_0336DArray *pSVar1;
  uint uVar2;
  code *pcVar3;
  STTmMineC *pSVar4;
  STTmMineC_field_0336Element *pSVar5;
  int errorCode;
  ushort *puVar6;
  int iVar7;
  undefined4 uVar8;
  ST3DSMAPContext **ppSVar9;
  InternalExceptionFrame local_58;
  undefined4 local_14;
  STTmMineC *local_10;
  STTmMineC_field_0336Element *element_0336;
  uint local_8;

  pSVar1 = this->field_0336;
  local_14 = 0;
  if (pSVar1 == (STTmMineC_field_0336DArray *)0x0) {
    return 0;
  }
  if (param_1 < pSVar1->count) {
    element_0336 = DArrayAt<STTmMineC_field_0336Element>(pSVar1, param_1);
  }
  else {
    element_0336 = (STTmMineC_field_0336Element *)0x0;
  }
  if (element_0336 != (STTmMineC_field_0336Element *)0x0) {
    if ((param_2 != 0) && (-1 < element_0336->field_0038)) {
      return 0xffffffff;
    }
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_10 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    pSVar5 = element_0336;
    if (errorCode != 0) {
      g_currentExceptionFrame = local_58.previous;
      iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_TmMin.cpp",0x603,0,errorCode,
                                 "%s","STTmMineC::LoadImagSpr");
      if (iVar7 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(errorCode,0,"E:\\__titans\\nick\\to_TmMin.cpp",0x605);
      return 0xffff;
    }
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806764,CASE_1D,(&PTR_s_blast_p_007d1f68)[(int)element_0336->field_0000],
                        0xffffffff,0,1,0,(undefined4 *)0x0);
    pSVar4 = local_10;
    uVar2 = pSVar5->field_0038;
    if ((int)uVar2 < 0) {
      ST3DSMAPContext::sub_006E8660
                (local_10->field_0211,(int *)&local_8,1,0,*(uint *)((int)puVar6 + 9),
                 *(uint *)((int)puVar6 + 0xd),*(int *)((int)puVar6 + 9) / 2,
                 (int)*(uint *)((int)puVar6 + 0xd) / 2 - 0xe,0);
    }
    else {
      local_8 = uVar2;
      Library::Ourlib::ST3DSMAP::SprSetHotSpot
                (local_10->field_0211,uVar2,*(int *)((int)puVar6 + 9) / 2,
                 *(int *)((int)puVar6 + 0xd) / 2 - 0xe);
    }
    ppSVar9 = &pSVar4->field_0211;
    ST3DSMAPContext::sub_006E98E0(*ppSVar9,local_8,0,*(int *)puVar6,*(int *)((int)puVar6 + 0x21),1);
    ST3DSMAPContext::sub_006EA270(*ppSVar9,local_8,0,*(uint *)&pSVar5->field_0x20);
    ST3DSMAPContext::sub_006EA5E0(*ppSVar9,local_8,0,0);
    Library::Ourlib::ST3DSMAP::SprMove
              (*ppSVar9,local_8,(float)*(int *)&pSVar5->field_0x8 * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)&pSVar5->field_0xc * _DAT_007904f8 * _DAT_007904f0,
               *(float *)&pSVar5->field_0x10 + _DAT_007904fc);
    Library::Ourlib::ST3DSMAP::SprShow(*ppSVar9,local_8,0);
    if (*(int *)&pSVar5->field_0x4 != 0) {
      Library::Ourlib::ST3DSMAP::SprHide(*ppSVar9,local_8);
    }
    pSVar5->field_0038 = local_8;
    g_currentExceptionFrame = local_58.previous;
  }
  return local_14;
}

