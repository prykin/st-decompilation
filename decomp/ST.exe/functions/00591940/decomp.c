#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::PaintCampaign

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CampaignTy::PaintCampaign(CampaignTy *this)

{
  code *pcVar1;
  CampaignTy *pCVar2;
  uint errorCode;
  uint *puVar3;
  LPSTR text;
  BITMAPINFO *pBVar4;
  StartServTy *this_00;
  int iVar5;
  undefined4 *puVar6;
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
  puVar3 = (uint *)LoadResourceString((-(uint)(local_8->field_1FFC != 0) & 0xfffffca8) + 0x26b1,
                                      g_module_00807618);
  StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar3,uVar8,uVar9,pcVar11,errorCode);
  if (g_startSystem_0081176C->field_0028 == 0) {
    iVar5 = 0;
    bVar10 = 0;
    text = FUN_006f2c00("CMPG_BKG",1,(uint)DAT_0080874e);
    pBVar4 = (BITMAPINFO *)FUN_0070a9f0(g_cMf32_00806780,text,bVar10,iVar5);
    PutDDX(0xa5,0x37,'\x01',pBVar4);
  }
  else {
    puVar6 = &pCVar2->field_1B13;
    iVar5 = 3;
    do {
      iVar7 = 0xf;
      do {
        if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6 != (AnonShape_006C4AA0_6E9A3AA4 *)0x0) {
          FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6);
        }
        pCVar2 = local_8;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = 4;
    puVar3 = local_8->field_1BD7;
    do {
      if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar3 != (AnonShape_006C4AA0_6E9A3AA4 *)0x0) {
        FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar3);
      }
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = 0;
    if (pCVar2->field_009A != '\0') {
      puVar3 = &pCVar2->field_00FF;
      do {
        if (puVar3[-6] != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar3[0xb],puVar3[-6],puVar3[-5],*puVar3,puVar3[1]);
        }
        if ((pCVar2->field_0065 == '\x01') && (*(uint *)((int)puVar3 + 0x79) != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)((int)puVar3 + 0xbd),*(uint *)((int)puVar3 + 0x79),
                     *(uint *)((int)puVar3 + 0x7d),*(uint *)((int)puVar3 + 0x91),
                     *(uint *)((int)puVar3 + 0x95));
        }
        iVar5 = iVar5 + 1;
        puVar3 = (uint *)((int)puVar3 + 0x1fb);
      } while (iVar5 < (int)(uint)(byte)pCVar2->field_009A);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

