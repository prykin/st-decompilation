#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_volc.cpp
   STVolcanoC::LoadImagVolcano */

undefined4 __thiscall STVolcanoC::LoadImagVolcano(STVolcanoC *this,int param_1)

{
  STVolcanoC *pSVar2;
  int errorCode;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  STVolcanoC *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_18 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pSVar2 = local_14;
  if (errorCode == 0) {
    if ((param_1 == 0) || (param_1 == 2)) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806764,CASE_1D,"expl_vol",0xffffffff,0,1,0,
                          nullptr);
      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar3,9),
                 STField<uint>(puVar3,0xd),0x5a,0x2f,0);
      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar3,STField<int>(puVar3,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,pSVar2->field_0071);
      Library::Ourlib::ST3DSMAP::SprSetDZ(g_sT3DSMAPContext_00807598,local_8,9.950249);
      Library::Ourlib::ST3DSMAP::SprMove
                (g_sT3DSMAPContext_00807598,local_8,
                 (float)pSVar2->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
      pSVar2->field_0061 = puVar3;
      pSVar2->field_005D = local_8;
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806764,CASE_1D,"expl_vob",0xffffffff,0,1,0,
                          nullptr);
      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_c,1,0,STField<uint>(puVar3,9),
                 STField<uint>(puVar3,0xd),0x40,0x6a,0);
      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,local_c,0,*(int *)puVar3,STField<int>(puVar3,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_c,0,pSVar2->field_008A);
      Library::Ourlib::ST3DSMAP::SprMove
                (g_sT3DSMAPContext_00807598,local_c,
                 (float)pSVar2->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_c,0);
      Library::Ourlib::ST3DSMAP::SprSetLevBefore(g_sT3DSMAPContext_00807598,local_c,local_8);
      pSVar2->field_0086 = local_c;
    }
    if ((param_1 != 0) && (pSVar2->field_007A < 0)) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806764,CASE_1D,"expl_vop",0xffffffff,0,1,0,
                          nullptr);
      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_10,1,0,STField<uint>(puVar3,9),
                 STField<uint>(puVar3,0xd),0x4b,0x7e,0);
      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,local_10,0,*(int *)puVar3,STField<int>(puVar3,0x21),1
                );
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_10,0,pSVar2->field_007E);
      Library::Ourlib::ST3DSMAP::SprMove
                (g_sT3DSMAPContext_00807598,local_10,
                 (float)pSVar2->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_10,0);
      Library::Ourlib::ST3DSMAP::SprSetLevBefore
                (g_sT3DSMAPContext_00807598,local_10,pSVar2->field_005D);
      pSVar2->field_007A = local_10;
    }
    g_currentExceptionFrame = local_5c.previous;
    return local_18;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_volc.cpp",0x214,0,errorCode,"%s"
                             ,"STVolcanoC::LoadImagVolcano");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\nick\\to_volc.cpp",0x216);
  return 0xffff;
}

