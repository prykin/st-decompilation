
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::PrepareToSave */

undefined4 * __thiscall VisibleClassTy::PrepareToSave(VisibleClassTy *this,uint *param_1)

{
  code *pcVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_68;
  VisibleClassTy *local_24;
  undefined4 *local_20;
  VisibleClassTy *local_1c;
  uint local_18;
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pVVar2 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (local_c != (undefined4 *)0x0) {
      FUN_006ab060(&local_c);
    }
    if (local_14 != (undefined4 *)0x0) {
      FUN_006ab060(&local_14);
    }
    if (local_8 != (undefined4 *)0x0) {
      FUN_006ab060(&local_8);
    }
    iVar5 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x105,0,iVar3,&DAT_007a4ccc,
                               s_VisibleClassTy__PrepareToSave_er_007c932c);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
    RaiseInternalException(iVar3,0,s_E____titans_grig_visible_cpp_007c92cc,0x106);
    return (undefined4 *)0x0;
  }
  if (*(int *)(local_24 + 0x114) != 0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_24 + 0xf4),(int *)&local_10);
    local_14 = (undefined4 *)FUN_006b0020(*(uint **)(pVVar2 + 0x110),(int *)&local_18);
    if (*(int *)(pVVar2 + 0x114) != 0) {
      iVar3 = *(int *)(pVVar2 + 0x2c) * *(int *)(pVVar2 + 0x28) * 4;
      goto LAB_0055832e;
    }
  }
  iVar3 = 0;
LAB_0055832e:
  uVar6 = iVar3 + local_18 + 0x81 + local_10;
  *param_1 = uVar6;
  local_8 = Library::DKW::LIB::FUN_006aac10(uVar6);
  *local_8 = 0x50;
  local_8[1] = 0xff;
  local_8[2] = 2;
  local_8[5] = 1;
  local_8[6] = *(undefined4 *)(pVVar2 + 0x20);
  local_8[7] = *(undefined4 *)(pVVar2 + 0x24);
  local_8[8] = *(undefined4 *)(pVVar2 + 0x28);
  local_8[9] = *(undefined4 *)(pVVar2 + 0x2c);
  local_8[10] = *(undefined4 *)(pVVar2 + 0x30);
  local_8[0xb] = *(undefined4 *)(pVVar2 + 0x34);
  local_8[0xc] = *(undefined4 *)(pVVar2 + 0x1c);
  local_8[0x10] = *(undefined4 *)(pVVar2 + 0x114);
  local_8[0x11] = *(undefined4 *)(pVVar2 + 0xf8);
  local_8[0xd] = (uint)DAT_0080874d;
  local_8[0xe] = local_10;
  local_8[0xf] = local_18;
  local_8[0x12] = *(undefined4 *)(pVVar2 + 0xfc);
  local_8[0x13] = *(undefined4 *)(pVVar2 + 0x100);
  if (*(int *)(pVVar2 + 0x114) != 0) {
    local_1c = pVVar2 + 0x3c;
    puVar4 = local_8 + 0x20;
    local_20 = (undefined4 *)0x4;
    do {
      if (*(undefined4 **)local_1c != (undefined4 *)0x0) {
        iVar3 = *(int *)(pVVar2 + 0x28);
        iVar5 = *(int *)(pVVar2 + 0x2c);
        puVar7 = *(undefined4 **)local_1c;
        puVar8 = puVar4;
        for (uVar6 = (uint)(iVar3 * iVar5) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar6 = iVar3 * iVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        puVar4 = (undefined4 *)((int)puVar4 + *(int *)(pVVar2 + 0x28) * *(int *)(pVVar2 + 0x2c));
      }
      local_1c = local_1c + 4;
      local_20 = (undefined4 *)((int)local_20 + -1);
    } while (local_20 != (undefined4 *)0x0);
    local_20 = (undefined4 *)0x0;
    if (local_c != (undefined4 *)0x0) {
      puVar7 = local_c;
      puVar8 = puVar4;
      for (uVar6 = local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_20 = (undefined4 *)((int)puVar4 + local_10);
      FUN_006ab060(&local_c);
      puVar4 = local_20;
    }
    if (local_14 != (undefined4 *)0x0) {
      puVar7 = local_14;
      for (uVar6 = local_18 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = local_18 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_006ab060(&local_14);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return local_8;
}

