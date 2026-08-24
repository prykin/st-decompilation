#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::LoadImagSpr */

undefined4 __thiscall STFieldC::LoadImagSpr(STFieldC *this,uint param_1)

{
  STFieldC_field_0234DArray *pSVar1;
  uint uVar2;
  uint *puVar4;
  int errorCode;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *text;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  STFieldC_field_0234Element *element_0234;
  uint local_8;

  pSVar1 = this->field_0234;
  local_10 = 0;
  if (pSVar1 == nullptr) {
    return 0;
  }
  if (param_1 < pSVar1->count) {
    element_0234 = DArrayAt<STFieldC_field_0234Element>(pSVar1, param_1);
  }
  else {
    element_0234 = nullptr;
  }
  if ((element_0234 != nullptr) && (element_0234->field_0004 != 0xffffffff)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    puVar4 = element_0234;
    if (errorCode != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar6 = ReportDebugMessage("E:\\__titans\\nick\\to_field.cpp",0x248,0,errorCode,
                                 "%s","STFieldC::LoadImagSpr");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(errorCode,0,"E:\\__titans\\nick\\to_field.cpp",0x24a);
      return 0xffff;
    }
    uVar2 = element_0234->field_0000;
    if (uVar2 < 4) {
      text = (&PTR_s_pics_g_007cf6d0)[uVar2];
      piVar8 = PTR_00806764;
    }
    else {
      text = (&PTR_s_pics_g_007cf6d0)[uVar2];
      piVar8 = PTR_00806774;
    }
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (piVar8,CASE_1D,text,0xffffffff,0,1,0,nullptr);
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar5,9),
               STField<uint>(puVar5,0xd),*(int *)(&DAT_007cf6f0 + *puVar4 * 8) / 2,
               *(int *)(&DAT_007cf6f4 + *puVar4 * 8) / 2 - 0xe,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar5,STField<int>(puVar5,0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    ST3DSMAPContext::sub_006EA5E0(g_sT3DSMAPContext_00807598,local_8,0,0);
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,local_8,
               (float)(int)puVar4[3] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)puVar4[4] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)puVar4[5] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
    puVar4[1] = 1;
    puVar4[0xf] = local_8;
    g_currentExceptionFrame = local_54.previous;
  }
  return local_10;
}

