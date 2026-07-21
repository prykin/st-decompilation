#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetCmdObj */

void __thiscall CPanelTy::SetCmdObj(CPanelTy *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  CPanelTy *pCVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char local_19c [36];
  char local_178 [36];
  char local_154 [36];
  char local_130 [36];
  char local_10c [36];
  InternalExceptionFrame local_e8;
  char local_a4 [29];
  uint local_87;
  char local_80 [29];
  uint local_63;
  char local_5c [24];
  CPanelTy *local_44;
  char local_40 [8];
  char local_38 [12];
  char local_2c [12];
  char local_20 [12];
  char local_14;
  int3 iStack_13;
  undefined1 local_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  char local_8 [4];

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
  iVar5 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0xa1a,0,iVar5,"%s"
                               ,"CPanelTy::SetCmdObj");
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0xa1a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_005252c0(0xae);
  pCVar4 = local_44;
  local_44->field_012C = 0;
  if (local_44->field_0C52 == '\0') {
    thunk_FUN_004f8020(local_44,'\0',0);
  }
  pCVar4->field_012C = 1;
  if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
  }
  if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
  }
  if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
  }
  if (DAT_00801698 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*DAT_00801698 + 0x1c))(0);
  }
  if (DAT_00802a44 != (void *)0x0) {
    thunk_FUN_00552160(DAT_00802a44,'\0','\0');
  }
  if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
  }
  if (DAT_00801678 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*DAT_00801678 + 0x1c))(0);
  }
  if (DAT_008016ec != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*DAT_008016ec + 0x1c))(0);
  }
  if (DAT_00802a48 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*DAT_00802a48 + 0x1c))(0);
  }
  if (DAT_0080168c != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*DAT_0080168c + 0x1c))(0);
  }
  thunk_FUN_0054a8d0(PTR_00802a30);
  bVar1 = (&pCVar4->field_0BFE)[param_1 & 0xff];
  switch((uint)bVar1) {
  case 1:
    pcVar7 = local_8 + 2;
    local_8[2] = 0;
    puVar9 = (undefined4 *)0x8;
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
    thunk_FUN_0054b630(PTR_00802a30,(uint)bVar1,0);
    g_currentExceptionFrame = local_e8.previous;
    return;
  default:
    goto switchD_0050f5b2_caseD_4;
  case 0x15:
  case 0x16:
    local_8[3] = bVar1 != 0x15;
    pcVar7 = local_8 + 3;
    puVar9 = (undefined4 *)0x28;
    break;
  case 0x1b:
    pcVar7 = local_38;
    local_38[4] = 0;
    local_38[0] = '\x06';
    local_38[1] = '\0';
    local_38[2] = '\0';
    local_38[3] = '\0';
    local_38[5] = '\x01';
    local_38[6] = '\0';
    local_38[7] = 0xff;
    local_38[8] = -1;
    local_38[9] = -1;
    local_38[10] = 0xff;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x1c:
    pcVar7 = local_2c;
    local_2c[4] = 0;
    local_2c[0] = '\x04';
    local_2c[1] = '\0';
    local_2c[2] = '\0';
    local_2c[3] = '\0';
    local_2c[5] = '\x01';
    local_2c[6] = '\0';
    local_2c[7] = 0xff;
    local_2c[8] = -1;
    local_2c[9] = -1;
    local_2c[10] = 0xff;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x1d:
  case 0x3d:
    if ((g_prodPanel_0080167C != (ProdPanelTy *)0x0) && (g_prodPanel_0080167C->field_0172 == 2)) {
      ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\x01');
    }
    thunk_FUN_004fad20(pCVar4);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x1e:
  case 0x1f:
    pcVar7 = &local_14;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_14 = CONCAT31((-(uint3)(bVar1 != 0x1e) & 0xc) + 9,1);
    local_10 = 0;
    uStack_f = 1;
    uStack_d = 0xff;
    local_c = 0xffff;
    local_a = 0xff;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x20:
  case 0x33:
    pcVar7 = local_8 + 1;
    local_8[1] = 0;
    puVar9 = (undefined4 *)0x22;
    break;
  case 0x21:
  case 0x41:
    if ((g_prodPanel_008016E8 != (ProdPanelTy *)0x0) && (g_prodPanel_008016E8->field_0172 == 2)) {
      ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\x01');
    }
    thunk_FUN_004fad20(pCVar4);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x22:
  case 0x3b:
  case 0x40:
    pcVar7 = local_40;
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = 0;
    local_40[0] = '\x02';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    puVar9 = (undefined4 *)0x1f;
    break;
  case 0x23:
    pcVar7 = local_10c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    pcVar7 = local_10c;
    local_10c[0] = '\t';
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x24:
  case 0x25:
    pcVar8 = local_a4;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    pcVar7 = local_a4;
    *pcVar8 = '\0';
    local_a4[0] = '\b';
    puVar9 = (undefined4 *)0x17;
    local_87 = (uint)(bVar1 == 0x24);
    break;
  case 0x27:
  case 0x32:
    pcVar7 = local_8;
    local_8[0] = '\0';
    puVar9 = (undefined4 *)0x9;
    break;
  case 0x28:
  case 0x29:
    pcVar7 = local_178;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    pcVar7 = local_178;
    local_178[0] = (bVar1 != 0x28) + '\f';
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x30:
  case 0x3f:
    if ((DAT_00802a44 != (void *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) == 2)) {
      thunk_FUN_00552160(DAT_00802a44,'\x01','\0');
    }
    thunk_FUN_004fad20(pCVar4);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x31:
    if ((DAT_00802a44 != (void *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) == 2)) {
      thunk_FUN_00552160(DAT_00802a44,'\x01','\x01');
    }
    thunk_FUN_004fad20(pCVar4);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x36:
    pcVar7 = local_130;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    pcVar7 = local_130;
    local_130[0] = '\x12';
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x38:
  case 0x45:
    pcVar8 = local_80;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    pcVar7 = local_80;
    *pcVar8 = '\0';
    local_80[0] = '\x1a';
    puVar9 = (undefined4 *)0x17;
    local_63 = (uint)(bVar1 != 0x38);
    break;
  case 0x39:
  case 0x46:
    pcVar8 = local_19c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    pcVar7 = local_19c;
    *pcVar8 = '\0';
    puVar9 = (undefined4 *)0x17;
    local_19c[0] = (bVar1 != 0x39) + '\f';
    break;
  case 0x3e:
    thunk_FUN_0054b630(PTR_00802a30,0xe,0x6c);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x44:
    if ((g_prodPanel_00801680 != (ProdPanelTy *)0x0) && (g_prodPanel_00801680->field_0172 == 2)) {
      ProdPanelTy::SetPanel(g_prodPanel_00801680,'\x01');
    }
    thunk_FUN_004fad20(pCVar4);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x4f:
    pcVar7 = local_20;
    local_20[4] = 0;
    local_20[0] = '\b';
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[5] = '\x01';
    local_20[6] = '\0';
    local_20[7] = 0xff;
    local_20[8] = -1;
    local_20[9] = -1;
    local_20[10] = 0xff;
    puVar9 = (undefined4 *)0x1e;
    break;
  case 0x50:
  case 0x51:
    pcVar7 = local_154;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = '\0';
    pcVar7 = local_154;
    local_154[0] = (bVar1 != 0x50) + '\x1b';
    puVar9 = (undefined4 *)0x17;
    break;
  case 0x52:
    pcVar7 = local_5c;
    pcVar8 = local_5c;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    local_5c[0] = '\a';
    puVar9 = (undefined4 *)0x16;
  }
  thunk_FUN_0054edf0(puVar9,(undefined4 *)pcVar7,0,0xffffffff);
switchD_0050f5b2_caseD_4:
  g_currentExceptionFrame = local_e8.previous;
  return;
}

