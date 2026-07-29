#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::LoadImagSpr */

undefined4 __thiscall STFieldC::LoadImagSpr(STFieldC *this,uint param_1)

{
  STFieldC_field_0234DArray *pSVar1;
  uint uVar2;
  code *pcVar3;
  STFieldC_field_0234Element *pSVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  char *text;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  STFieldC_field_0234Element *element_0234;
  uint local_8;

  pSVar1 = this->field_0234;
  local_10 = 0;
  if (pSVar1 == (STFieldC_field_0234DArray *)0x0) {
    return 0;
  }
  if (param_1 < pSVar1->count) {
    element_0234 = DArrayAt<STFieldC_field_0234Element>(pSVar1, param_1);
  }
  else {
    element_0234 = (STFieldC_field_0234Element *)0x0;
  }
  if ((element_0234 != (STFieldC_field_0234Element *)0x0) && (element_0234->field_0004 != 0xffffffff)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pSVar4 = element_0234;
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_field.cpp",0x248,0,iVar5,
                                 "%s","STFieldC::LoadImagSpr");
      if (iVar7 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_field.cpp",0x24a);
      return 0xffff;
    }
    uVar2 = element_0234->field_0000;
    if (uVar2 < 4) {
      text = (&PTR_s_pics_g_007cf6d0)[uVar2];
      piVar9 = DAT_00806764;
    }
    else {
      text = (&PTR_s_pics_g_007cf6d0)[uVar2];
      piVar9 = DAT_00806774;
    }
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (piVar9,CASE_1D,text,0xffffffff,0,1,0,(undefined4 *)0x0);
    iVar5 = pSVar4->field_0000 * 8;
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar6 + 9),
               *(uint *)((int)puVar6 + 0xd),*(int *)(&DAT_007cf6f0 + iVar5) / 2,
               *(int *)(&DAT_007cf6f4 + iVar5) / 2 - 0xe,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar6,*(int *)((int)puVar6 + 0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    ST3DSMAPContext::sub_006EA5E0(g_sT3DSMAPContext_00807598,local_8,0,0);
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,local_8,
               (float)*(int *)&pSVar4->field_0xc * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)&pSVar4->field_0x10 * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)&pSVar4->field_0x14 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
    pSVar4->field_0004 = 1;
    pSVar4->field_003C = local_8;
    g_currentExceptionFrame = local_54.previous;
  }
  return local_10;
}

