#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadMapData */

void __thiscall StartSystemTy::LoadMapData(StartSystemTy *this,cMf32 *param_1,char param_2)

{
  ccFntTy *pcVar1;
  MMsgTy *this_00;
  code *pcVar2;
  StartSystemTy *this_01;
  AnonShape_006B5570_4D68B99C *pAVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  InternalExceptionFrame local_9c;
  undefined4 local_58;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  StartSystemTy *local_1c;
  undefined1 *local_18;
  AnonShape_006B5570_4D68B99C *local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined4 local_d;
  undefined4 *local_8;

  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  local_1c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0);
  this_01 = local_1c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x231,0,iVar4,
                                "%s","StartSystemTy::LoadMapData");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\startsys.cpp",0x231);
    return;
  }
  if (param_1 != (cMf32 *)0x0) {
    puVar12 = &local_1c->field_02F4;
    if (local_1c->field_02F4 != 0) {
      FreeAndNull((void **)puVar12);
    }
    puVar5 = Library::Ourlib::MFIMG::mfImgLoad(param_1,0xc,PTR_s_SMALL_MAP_0079c1dc,2,0);
    *puVar12 = puVar5;
    if (puVar5 != (ushort *)0x0) {
      FUN_006c7f90(puVar5,(byte *)0x0,*(HPALETTE *)(DAT_0080759c + 0x4b4),0);
      FUN_006b5440((int)this_01->field_02F0,0,0x14,0x14,*puVar12,0,0);
    }
    if (PTR_0080c4c7 != (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4c7);
    }
    PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                   Library::Ourlib::MFSARR::mfSarLoad(param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (PTR_0080c4c7 == (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                     Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
    }
    PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                   Library::Ourlib::MFSARR::mfSarLoad(param_1,PTR_s_OBJECTIVES_0079c1d4,0);
    if (PTR_0080c4cb == (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                     Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    local_18 = &local_10;
    local_8 = &DAT_008087b6;
    puVar5 = cMf32::RecGet(param_1,0,PTR_s_DESCRIPTOR_0079c1d8,(int *)&local_8,0);
    if ((puVar5 == (ushort *)0x0) ||
       ((((param_2 == '\f' || (param_2 == '\x10')) ||
         ((param_2 == '\x13' && (DAT_00803400 == '\f')))) &&
        (puVar5 = cMf32::RecGet(param_1,0x80,PTR_s_SAVE_PLAYER_0079c1c8,(int *)&local_18,0),
        puVar5 == (ushort *)0x0)))) {
      puVar12 = &DAT_008087b6;
      for (iVar4 = 0x666; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined1 *)puVar12 = 0;
    }
    else {
      DAT_008087b5 = 0;
      thunk_FUN_0056ef50((AnonShape_0056EF50_CAB83E9D *)&DAT_00807620);
      puVar12 = &DAT_0080c3c3;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      local_8 = &DAT_0080c3c3;
      cMf32::RecGet(param_1,0xc,PTR_s_TITLE_MISSION_0079c1cc,(int *)&local_8,0);
      iVar4 = 0;
      if (0 < PTR_0080c4cb->field_0008) {
        if (PTR_0080c4cb->field_0008 < 1) {
          pcVar8 = (char *)0x0;
          goto LAB_005dc22d;
        }
        do {
          pcVar8 = *(char **)(PTR_0080c4cb->field_0014 + iVar4 * 4);
LAB_005dc22d:
          thunk_FUN_005411a0((uint *)this_01->field_0548,pcVar8,"@- %s");
          iVar4 = iVar4 + 1;
        } while (iVar4 < PTR_0080c4cb->field_0008);
      }
      pcVar1 = this_01->field_0034;
      pcVar1->field_007E = 1;
      puVar6 = &pcVar1->field_0x9e;
      *(undefined2 *)puVar6 = 0;
      *puVar6 = DAT_007cc854;
      local_14 = (AnonShape_006B5570_4D68B99C *)
                 ccFntTy::FormIndentSarr
                           (this_01->field_0034,(uint *)this_01->field_0548,
                            " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                            this_01->field_0544->field_0004 + -0x14,0,0xffffffff,(char *)0x0,1);
      if ((AnonShape_006B5570_4D68B99C *)this_01->field_0548 != (AnonShape_006B5570_4D68B99C *)0x0)
      {
        FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_01->field_0548);
      }
      puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
      this_01->field_0548 = puVar7;
      puVar6 = &this_01->field_0x3c;
      pcVar8 = LoadResourceString(0x2347,HINSTANCE_00807618);
      wsprintfA(puVar6,"&2 %s:",pcVar8);
      Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_0548,puVar6);
      wsprintfA(puVar6,"&0 %s",&DAT_0080c3c3);
      Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_0548,puVar6);
      Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_0548,&DAT_007c3b5c);
      uVar9 = DAT_008087c4 & 0xffff;
      uVar11 = (uint)DAT_008087c2;
      pcVar8 = LoadResourceString(0x2344,HINSTANCE_00807618);
      wsprintfA(puVar6,"&2 %s: &0%d&2x&0%d",pcVar8,uVar11,uVar9);
      Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_0548,puVar6);
      uVar9 = DAT_008087c4 >> 0x10 & 0xff;
      pcVar8 = LoadResourceString(0x2345,HINSTANCE_00807618);
      wsprintfA(puVar6,"&2 %s: &0%d",pcVar8,uVar9);
      Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_0548,puVar6);
      Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_0548,&DAT_007c3b5c);
      switch(param_2) {
      case '\x01':
      case '\x02':
      case '\x04':
      case '\x05':
      case '\t':
      case '\n':
      case '\v':
      case '\f':
      case '\r':
      case '\x0e':
      case '\x0f':
      case '\x10':
      case '\x13':
        pcVar8 = LoadResourceString(0x2346,HINSTANCE_00807618);
        wsprintfA(puVar6,"&2 %s:",pcVar8);
        Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_0548,puVar6);
        Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_0548,&DAT_007c3b5c);
      }
      pAVar3 = local_14;
      if (local_14 != (AnonShape_006B5570_4D68B99C *)0x0) {
        if (local_14->field_0008 != 0) {
          ccFntTy::SepColorStrInSarr(this_01->field_0034,(uint *)local_14,(uint *)local_14);
        }
        iVar4 = 0;
        if (0 < (int)pAVar3->field_0008) {
          if ((int)pAVar3->field_0008 < 1) {
            pcVar8 = (char *)0x0;
            goto LAB_005dc430;
          }
          do {
            pcVar8 = *(char **)(pAVar3->field_0014 + iVar4 * 4);
LAB_005dc430:
            Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_0548,pcVar8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)pAVar3->field_0008);
        }
        FUN_006b5570(pAVar3);
      }
      if (((param_2 == '\f') || (param_2 == '\x10')) ||
         ((param_2 == '\x13' && (DAT_00803400 == '\f')))) {
        DAT_0080874d = local_10;
        DAT_0080874e = local_f;
        DAT_0080874f = local_e;
        DAT_00808750 = local_d;
      }
      local_2c = 0x28;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_28 = CONCAT22(*(undefined2 *)(this_01->field_0548 + 8),1);
      if (this_01->field_0389 != 0) {
        SystemClassTy::SendMessage((SystemClassTy *)this_01,2,this_01->field_0389,(int)local_3c);
      }
      local_2c = 0x22;
      local_28 = 0;
      if (this_01->field_0389 != 0) {
        SystemClassTy::SendMessage((SystemClassTy *)this_01,2,this_01->field_0389,(int)local_3c);
      }
      local_2c = 0x20;
      local_28 = 1;
      if (this_01->field_0389 != 0) {
        SystemClassTy::SendMessage((SystemClassTy *)this_01,2,this_01->field_0389,(int)local_3c);
      }
    }
    this_00 = this_01->field_02E6;
    if (this_00 != (MMsgTy *)0x0) {
      puVar12 = &local_58;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined2 *)puVar12 = 0;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_58._0_2_ = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_58._2_2_ = 1;
      MMsgTy::StatePanel(this_00,(int)&local_58);
    }
  }
  g_currentExceptionFrame = local_9c.previous;
  return;
}

