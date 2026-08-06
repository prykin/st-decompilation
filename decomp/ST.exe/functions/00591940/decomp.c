#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::PaintCampaign

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CampaignTy::PaintCampaign(CampaignTy *this)

{
  CampaignTy *pCVar2;
  uint errorCode;
  char *resourceString;
  LPSTR text;
  BITMAPINFO *pBVar3;
  int iVar5;
  StartServTy *this_00;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ccFntTy *pcVar11;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0xb5,0,errorCode,
                               "%s","CampaignTy::PaintCampaign");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\camp_obj.cpp",0xb5);
    return;
  }
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  PutDDX(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
  pCVar2 = local_8;
  pcVar11 = g_startSystem_0081176C->field_0030;
  uVar9 = 0xffffffff;
  uVar8 = 0xfffffffe;
  resourceString =
       LoadResourceString((-(uint)(local_8->field_1FFC != 0) & 0xfffffca8) + 0x26b1,
                          g_hINSTANCE_00807618);
  StartServTy::WrTextDDX
            (this_00,0,0xe9,0x14,0x14c,0x18,resourceString,uVar8,uVar9,pcVar11,errorCode);
  if (g_startSystem_0081176C->field_0028 == 0) {
    iVar4 = 0;
    bVar10 = 0;
    text = FUN_006f2c00("CMPG_BKG",1,(uint)DAT_0080874e);
    pBVar3 = (BITMAPINFO *)FUN_0070a9f0(g_cMf32_00806780,text,bVar10,iVar4);
    PutDDX(0xa5,0x37,'\x01',pBVar3);
  }
  else {
    puVar5 = &pCVar2->field_1B13;
    iVar4 = 3;
    do {
      iVar7 = 0xf;
      do {
        if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar5 != nullptr) {
          FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar5);
        }
        pCVar2 = local_8;
        puVar5 = puVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar6 = local_8->field_1BD7;
    do {
      if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6 != nullptr) {
        FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6);
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 0;
    if (pCVar2->field_009A != '\0') {
      puVar6 = &pCVar2->field_00FF;
      do {
        if (puVar6[-6] != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar6[0xb],puVar6[-6],puVar6[-5],*puVar6,puVar6[1]);
        }
        if ((pCVar2->field_0065 == '\x01') && (STField<uint>(puVar6,0x79) != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b3730
                    (STField<uint *>(puVar6,0xbd),STField<uint>(puVar6,0x79),
                     STField<uint>(puVar6,0x7d),STField<uint>(puVar6,0x91),
                     STField<uint>(puVar6,0x95));
        }
        iVar4 = iVar4 + 1;
        puVar6 = (uint *)((int)puVar6 + 0x1fb);
      } while (iVar4 < (int)(uint)(byte)pCVar2->field_009A);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

