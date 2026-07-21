
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
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  InternalExceptionFrame local_68;
  VisibleClassTy *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
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
      FreeAndNull(&local_c);
    }
    if (local_14 != (undefined4 *)0x0) {
      FreeAndNull(&local_14);
    }
    if (local_8 != (undefined4 *)0x0) {
      FreeAndNull(&local_8);
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
  if (local_24->field_0114 != 0) {
    local_c = (undefined4 *)FUN_006b0020(&local_24->field_00F4->flags,(int *)&local_10);
    local_14 = (undefined4 *)FUN_006b0020(&pVVar2->field_0110->flags,(int *)&local_18);
    if (pVVar2->field_0114 != 0) {
      iVar3 = pVVar2->field_002C * pVVar2->field_0028 * 4;
      goto LAB_0055832e;
    }
  }
  iVar3 = 0;
LAB_0055832e:
  uVar7 = iVar3 + local_18 + 0x81 + local_10;
  *param_1 = uVar7;
  local_8 = Library::DKW::LIB::FUN_006aac10(uVar7);
  *local_8 = 0x50;
  local_8[1] = 0xff;
  local_8[2] = 2;
  local_8[5] = 1;
  local_8[6] = pVVar2->field_0020;
  local_8[7] = pVVar2->field_0024;
  local_8[8] = pVVar2->field_0028;
  local_8[9] = pVVar2->field_002C;
  local_8[10] = pVVar2->field_0030;
  local_8[0xb] = pVVar2->field_0034;
  local_8[0xc] = pVVar2->field_001C;
  local_8[0x10] = pVVar2->field_0114;
  local_8[0x11] = pVVar2->field_00F8;
  local_8[0xd] = (uint)DAT_0080874d;
  local_8[0xe] = local_10;
  local_8[0xf] = local_18;
  local_8[0x12] = pVVar2->field_00FC;
  local_8[0x13] = pVVar2->field_0100;
  if (pVVar2->field_0114 != 0) {
    local_1c = &pVVar2->field_003C;
    puVar4 = local_8 + 0x20;
    local_20 = (undefined4 *)0x4;
    do {
      if ((undefined4 *)*local_1c != (undefined4 *)0x0) {
        uVar6 = pVVar2->field_0028 * pVVar2->field_002C;
        puVar8 = (undefined4 *)*local_1c;
        puVar9 = puVar4;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar4 = (undefined4 *)((int)puVar4 + pVVar2->field_0028 * pVVar2->field_002C);
      }
      local_1c = local_1c + 1;
      local_20 = (undefined4 *)((int)local_20 + -1);
    } while (local_20 != (undefined4 *)0x0);
    local_20 = (undefined4 *)0x0;
    if (local_c != (undefined4 *)0x0) {
      puVar8 = local_c;
      puVar9 = puVar4;
      for (uVar7 = local_10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = local_10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      local_20 = (undefined4 *)((int)puVar4 + local_10);
      FreeAndNull(&local_c);
      puVar4 = local_20;
    }
    if (local_14 != (undefined4 *)0x0) {
      puVar8 = local_14;
      for (uVar7 = local_18 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar7 = local_18 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FreeAndNull(&local_14);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return local_8;
}

