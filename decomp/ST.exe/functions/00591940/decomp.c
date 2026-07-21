#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::PaintCampaign */

void __thiscall CampaignTy::PaintCampaign(CampaignTy *this)

{
  code *pcVar1;
  CampaignTy *pCVar2;
  int iVar3;
  uint *puVar4;
  LPSTR text;
  BITMAPINFO *pBVar5;
  StartServTy *this_00;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0xb5,0,iVar3,"%s",
                               "CampaignTy::PaintCampaign");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\camp_obj.cpp",0xb5);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  PutDDX(0,0,'\x01',(BITMAPINFO *)PTR_0081176c->field_002C);
  pCVar2 = local_8;
  pcVar11 = PTR_0081176c->field_0030;
  uVar9 = 0xffffffff;
  uVar8 = 0xfffffffe;
  puVar4 = (uint *)LoadResourceString((-(uint)(local_8->field_1FFC != 0) & 0xfffffca8) + 0x26b1,
                                      HINSTANCE_00807618);
  StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar4,uVar8,uVar9,pcVar11,iVar3);
  if (PTR_0081176c->field_0028 == 0) {
    iVar3 = 0;
    bVar10 = 0;
    text = FUN_006f2c00("CMPG_BKG",1,(uint)DAT_0080874e);
    pBVar5 = (BITMAPINFO *)FUN_0070a9f0(g_cMf32_00806780,text,bVar10,iVar3);
    PutDDX(0xa5,0x37,'\x01',pBVar5);
  }
  else {
    puVar6 = &pCVar2->field_1B13;
    iVar3 = 3;
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
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 4;
    puVar6 = &local_8->field_1BD7;
    do {
      if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6 != (AnonShape_006C4AA0_6E9A3AA4 *)0x0) {
        FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6);
      }
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 0;
    if (pCVar2->field_009A != '\0') {
      puVar4 = &pCVar2->field_00FF;
      do {
        if (puVar4[-6] != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar4[0xb],puVar4[-6],puVar4[-5],*puVar4,puVar4[1]);
        }
        if ((pCVar2->field_0065 == '\x01') && (*(uint *)((int)puVar4 + 0x79) != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)((int)puVar4 + 0xbd),*(uint *)((int)puVar4 + 0x79),
                     *(uint *)((int)puVar4 + 0x7d),*(uint *)((int)puVar4 + 0x91),
                     *(uint *)((int)puVar4 + 0x95));
        }
        iVar3 = iVar3 + 1;
        puVar4 = (uint *)((int)puVar4 + 0x1fb);
      } while (iVar3 < (int)(uint)(byte)pCVar2->field_009A);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

