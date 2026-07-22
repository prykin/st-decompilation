#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadMapData */

void __thiscall StartSystemTy::LoadMapData(StartSystemTy *this,cMf32 *param_1,char param_2)

{
  ushort **value;
  ccFntTy *pcVar1;
  MMsgTy *this_00;
  code *pcVar2;
  StartSystemTy *this_01;
  int iVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  DArrayTy *pDVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_9c;
  undefined4 local_58;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  StartSystemTy *local_1c;
  undefined1 *local_18;
  DArrayTy *local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined4 local_d;
  undefined4 *local_8;

  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  local_1c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0);
  this_01 = local_1c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x231,0,iVar3,"%s"
                               ,"StartSystemTy::LoadMapData");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0x231);
    return;
  }
  if (param_1 != (cMf32 *)0x0) {
    value = &local_1c->field_02F4;
    if (local_1c->field_02F4 != (ushort *)0x0) {
      FreeAndNull(value);
    }
    puVar4 = Library::Ourlib::MFIMG::mfImgLoad(param_1,0xc,PTR_s_SMALL_MAP_0079c1dc,2,0);
    *value = puVar4;
    if (puVar4 != (ushort *)0x0) {
      FUN_006c7f90(puVar4,(byte *)0x0,*(HPALETTE *)(DAT_0080759c + 0x4b4),0);
      FUN_006b5440((int)this_01->field_02F0,0,0x14,0x14,(uint)*value,0,0);
    }
    if (g_dArray_0080C4C7 != (DArrayTy *)0x0) {
      FUN_006b5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)Library::Ourlib::MFSARR::mfSarLoad(param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (g_dArray_0080C4C7 == (DArrayTy *)0x0) {
      g_dArray_0080C4C7 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    if (g_dArray_0080C4CB != (DArrayTy *)0x0) {
      FUN_006b5570(g_dArray_0080C4CB);
    }
    g_dArray_0080C4CB =
         (DArrayTy *)Library::Ourlib::MFSARR::mfSarLoad(param_1,PTR_s_OBJECTIVES_0079c1d4,0);
    if (g_dArray_0080C4CB == (DArrayTy *)0x0) {
      g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    local_18 = &local_10;
    local_8 = &DAT_008087b6;
    puVar4 = cMf32::RecGet(param_1,0,PTR_s_DESCRIPTOR_0079c1d8,(int *)&local_8,0);
    if ((puVar4 == (ushort *)0x0) ||
       ((((param_2 == '\f' || (param_2 == '\x10')) ||
         ((param_2 == '\x13' && (DAT_00803400 == '\f')))) &&
        (puVar4 = cMf32::RecGet(param_1,0x80,PTR_s_SAVE_PLAYER_0079c1c8,(int *)&local_18,0),
        puVar4 == (ushort *)0x0)))) {
      memset(&DAT_008087b6, 0, 0x1999); /* compiler bulk-zero initialization */
      iVar3 = 0;
    }
    else {
      DAT_008087b5 = 0;
      STAppC::sub_0056EF50((STAppC *)&DAT_00807620);
      memset(&DAT_0080c3c3, 0, 0x104); /* compiler bulk-zero initialization */
      local_8 = &DAT_0080c3c3;
      cMf32::RecGet(param_1,0xc,PTR_s_TITLE_MISSION_0079c1cc,(int *)&local_8,0);
      iVar3 = 0;
      if (0 < (int)g_dArray_0080C4CB->elementSize) {
        if ((int)g_dArray_0080C4CB->elementSize < 1) {
          pcVar7 = (char *)0x0;
          goto LAB_005dc22d;
        }
        do {
          pcVar7 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar3 * 4);
LAB_005dc22d:
          thunk_FUN_005411a0((DArrayTy *)this_01->field_0548,pcVar7,"@- %s");
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)g_dArray_0080C4CB->elementSize);
      }
      pcVar1 = this_01->field_0034;
      pcVar1->field_007E = 1;
      puVar5 = &pcVar1->field_0x9e;
      *(undefined2 *)puVar5 = 0;
      *puVar5 = DAT_007cc854;
      local_14 = (DArrayTy *)
                 ccFntTy::FormIndentSarr
                           (this_01->field_0034,(DArrayTy *)this_01->field_0548,
                            " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                            this_01->field_0544->field_0004 + -0x14,0,0xffffffff,(char *)0x0,1);
      if ((DArrayTy *)this_01->field_0548 != (DArrayTy *)0x0) {
        FUN_006b5570((DArrayTy *)this_01->field_0548);
      }
      pDVar6 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
      this_01->field_0548 = &pDVar6->flags;
      puVar5 = &this_01->field_0x3c;
      pcVar7 = LoadResourceString(0x2347,g_module_00807618);
      wsprintfA(puVar5,"&2 %s:",pcVar7);
      Library::DKW::TBL::FUN_006b5aa0(this_01->field_0548,puVar5);
      wsprintfA(puVar5,"&0 %s",&DAT_0080c3c3);
      Library::DKW::TBL::FUN_006b5aa0(this_01->field_0548,puVar5);
      Library::DKW::TBL::FUN_006b5aa0(this_01->field_0548,&DAT_007c3b5c);
      uVar8 = DAT_008087c4 & 0xffff;
      uVar10 = (uint)DAT_008087c2;
      pcVar7 = LoadResourceString(0x2344,g_module_00807618);
      wsprintfA(puVar5,"&2 %s: &0%d&2x&0%d",pcVar7,uVar10,uVar8);
      Library::DKW::TBL::FUN_006b5aa0(this_01->field_0548,puVar5);
      uVar8 = DAT_008087c4 >> 0x10 & 0xff;
      pcVar7 = LoadResourceString(0x2345,g_module_00807618);
      wsprintfA(puVar5,"&2 %s: &0%d",pcVar7,uVar8);
      Library::DKW::TBL::FUN_006b5aa0(this_01->field_0548,puVar5);
      Library::DKW::TBL::FUN_006b5aa0(this_01->field_0548,&DAT_007c3b5c);
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
        pcVar7 = LoadResourceString(0x2346,g_module_00807618);
        wsprintfA(puVar5,"&2 %s:",pcVar7);
        Library::DKW::TBL::FUN_006b5aa0(this_01->field_0548,puVar5);
        Library::DKW::TBL::FUN_006b5aa0(this_01->field_0548,&DAT_007c3b5c);
      }
      pDVar6 = local_14;
      if (local_14 != (DArrayTy *)0x0) {
        if (local_14->elementSize != 0) {
          ccFntTy::SepColorStrInSarr(this_01->field_0034,&local_14->flags,&local_14->flags);
        }
        iVar3 = 0;
        if (0 < (int)pDVar6->elementSize) {
          if ((int)pDVar6->elementSize < 1) {
            pcVar7 = (char *)0x0;
            goto LAB_005dc430;
          }
          do {
            pcVar7 = *(char **)(pDVar6->growCapacity + iVar3 * 4);
LAB_005dc430:
            Library::DKW::TBL::FUN_006b5aa0(this_01->field_0548,pcVar7);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)pDVar6->elementSize);
        }
        FUN_006b5570(pDVar6);
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
      local_28 = CONCAT22((short)this_01->field_0548[2],1);
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
      memset(&local_58, 0, 0x1a); /* compiler bulk-zero initialization */
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

