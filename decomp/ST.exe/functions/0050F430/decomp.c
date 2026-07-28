#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetCmdObj
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0050F587 MOV ECX,dword ptr [EBP + 0x8];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::SetCmdObj(CPanelTy *this,byte param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint local_19c [9];
  uint local_178 [9];
  uint local_154 [9];
  uint local_130 [9];
  uint local_10c [9];
  InternalExceptionFrame local_e8;
  uint local_a4 [7];
  uint local_87;
  uint local_80 [7];
  uint local_63;
  uint local_5c [6];
  CPanelTy *local_44;
  uint local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  uint local_38;
  undefined1 local_34;
  undefined2 uStack_33;
  undefined1 uStack_31;
  undefined2 local_30;
  undefined1 local_2e;
  uint local_2c;
  undefined1 local_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  undefined2 local_24;
  undefined1 local_22;
  uint local_20;
  undefined1 local_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_14;
  int3 iStack_13;
  undefined1 local_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;

  if (DAT_00808784 != 0) {
    return;
  }
  if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return;
  }
  local_e8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e8;
  local_44 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0xa1a,0,iVar4,"%s"
                               ,"CPanelTy::SetCmdObj");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0xa1a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_005252c0(0xae);
  this_00 = local_44;
  local_44->field_012C = 0;
  if (local_44->field_0C52 == '\0') {
    sub_004F8020(local_44,'\0',0);
  }
  this_00->field_012C = 1;
  if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
  }
  if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
  }
  if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
  }
  if (g_infocPanel_00801698 != (InfocPanelTy *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)g_infocPanel_00801698->field_0000->field_001C)(0);
  }
  if (g_tradePanel_00802A44 != (TradePanelTy *)0x0) {
    TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
  }
  if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
  }
  if (g_behPanel_00801678 != (BehPanelTy *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)g_behPanel_00801678->field_0000[2].field_0004)(0);
  }
  if (g_sAMPanel_008016EC != (SAMPanelTy *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&g_sAMPanel_008016EC->field_0000[1].field_0x8)(0);
  }
  if (g_upgPanel_00802A48 != (UpgPanelTy *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)g_upgPanel_00802A48->field_0000->field_001C)(0);
  }
  if (g_frmPanel_0080168C != (FrmPanelTy *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)g_frmPanel_0080168C->field_0000->field_001C)(0);
  }
  CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  bVar1 = (&this_00->field_0BFE)[param_1];
  switch((uint)bVar1) {
  case 1:
    puVar6 = (uint *)&local_6;
    local_6 = 0;
    puVar8 = (undefined4 *)0x8;
    break;
  case 2:
  case 3:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x26:
  case 0x2a:
  case 0x34:
  case 0x37:
  case 0x42:
  case 0x43:
    CursorClassTy::sub_0054B630(g_cursorClass_00802A30,(uint)bVar1,0);
    g_currentExceptionFrame = local_e8.previous;
    return;
  default:
    goto switchD_0050f5b2_caseD_4;
  case 0x15:
  case 0x16:
    local_5 = bVar1 != 0x15;
    puVar6 = (uint *)&local_5;
    puVar8 = (undefined4 *)0x28;
    break;
  case 0x1b:
    puVar6 = &local_38;
    local_34 = 0;
    local_38 = 6;
    uStack_33 = 1;
    uStack_31 = 0xff;
    local_30 = 0xffff;
    local_2e = 0xff;
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x1c:
    puVar6 = &local_2c;
    local_28 = 0;
    local_2c = 4;
    uStack_27 = 1;
    uStack_25 = 0xff;
    local_24 = 0xffff;
    local_22 = 0xff;
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x1d:
  case 0x3d:
    if ((g_prodPanel_0080167C != (ProdPanelTy *)0x0) && (g_prodPanel_0080167C->field_0172 == 2)) {
      ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\x01');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x1e:
  case 0x1f:
    puVar6 = (uint *)&local_14;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_14 = CONCAT31((-(uint3)(bVar1 != 0x1e) & 0xc) + 9,1);
    local_10 = 0;
    uStack_f = 1;
    uStack_d = 0xff;
    local_c = 0xffff;
    local_a = 0xff;
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x20:
  case 0x33:
    puVar6 = (uint *)&local_7;
    local_7 = 0;
    puVar8 = (undefined4 *)0x22;
    break;
  case 0x21:
  case 0x41:
    if ((g_prodPanel_008016E8 != (ProdPanelTy *)0x0) && (g_prodPanel_008016E8->field_0172 == 2)) {
      ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\x01');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x22:
  case 0x3b:
  case 0x40:
    puVar6 = &local_40;
    local_3c = 0;
    local_3a = 0;
    local_40 = 2;
    puVar8 = (undefined4 *)0x1f;
    break;
  case 0x23:
    memset(local_10c, 0, 0x21); /* compiler bulk-zero initialization */
    iVar4 = 0;
    puVar6 = local_10c;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10c[0]._0_1_ = 9;
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x24:
  case 0x25:
    puVar7 = local_a4;
    memset(puVar7, 0, 0x20); /* compiler bulk-zero initialization */
    puVar7 = (undefined4 *)((byte *)puVar7 + 0x20);
    iVar4 = 0;
    puVar6 = local_a4;
    *(undefined1 *)puVar7 = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_a4[0]._0_1_ = 8;
    puVar8 = (undefined4 *)0x17;
    local_87 = (uint)(bVar1 == 0x24);
    break;
  case 0x27:
  case 0x32:
    puVar6 = (uint *)&local_8;
    local_8 = 0;
    puVar8 = (undefined4 *)0x9;
    break;
  case 0x28:
  case 0x29:
    memset(local_178, 0, 0x21); /* compiler bulk-zero initialization */
    puVar6 = local_178;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_178[0]._0_1_ = (bVar1 != 0x28) + '\f';
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x30:
  case 0x3f:
    if ((g_tradePanel_00802A44 != (TradePanelTy *)0x0) && (g_tradePanel_00802A44->field_0172 == 2))
    {
      TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\x01','\0');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x31:
    if ((g_tradePanel_00802A44 != (TradePanelTy *)0x0) && (g_tradePanel_00802A44->field_0172 == 2))
    {
      TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\x01','\x01');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x36:
    memset(local_130, 0, 0x21); /* compiler bulk-zero initialization */
    iVar4 = 0;
    puVar6 = local_130;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_130[0]._0_1_ = 0x12;
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x38:
  case 0x45:
    puVar7 = local_80;
    memset(puVar7, 0, 0x20); /* compiler bulk-zero initialization */
    puVar7 = (undefined4 *)((byte *)puVar7 + 0x20);
    iVar4 = 0;
    puVar6 = local_80;
    *(undefined1 *)puVar7 = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_80[0]._0_1_ = 0x1a;
    puVar8 = (undefined4 *)0x17;
    local_63 = (uint)(bVar1 != 0x38);
    break;
  case 0x39:
  case 0x46:
    puVar7 = local_19c;
    memset(puVar7, 0, 0x20); /* compiler bulk-zero initialization */
    puVar7 = (undefined4 *)((byte *)puVar7 + 0x20);
    puVar6 = local_19c;
    *(undefined1 *)puVar7 = 0;
    puVar8 = (undefined4 *)0x17;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_19c[0]._0_1_ = (bVar1 != 0x39) + '\f';
    break;
  case 0x3e:
    CursorClassTy::sub_0054B630(g_cursorClass_00802A30,0xe,0x6c);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x44:
    if ((g_prodPanel_00801680 != (ProdPanelTy *)0x0) && (g_prodPanel_00801680->field_0172 == 2)) {
      ProdPanelTy::SetPanel(g_prodPanel_00801680,'\x01');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x4f:
    puVar6 = &local_20;
    local_1c = 0;
    local_20 = 8;
    uStack_1b = 1;
    uStack_19 = 0xff;
    local_18 = 0xffff;
    local_16 = 0xff;
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x50:
  case 0x51:
    memset(local_154, 0, 0x21); /* compiler bulk-zero initialization */
    iVar4 = 0;
    puVar6 = local_154;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_154[0]._0_1_ = (bVar1 != 0x50) + '\x1b';
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x52:
    puVar6 = local_5c;
    memset(local_5c, 0, 0x18); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_5c[0]._0_1_ = 7;
    puVar8 = (undefined4 *)0x16;
  }
  thunk_FUN_0054edf0(puVar8,puVar6,0,0xffffffff);
switchD_0050f5b2_caseD_4:
  g_currentExceptionFrame = local_e8.previous;
  return;
}

