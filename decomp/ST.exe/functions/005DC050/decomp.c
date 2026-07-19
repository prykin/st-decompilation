
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::LoadMapData */

void __thiscall StartSystemTy::LoadMapData(StartSystemTy *this,int param_1,char param_2)

{
  StartSystemTy *pSVar1;
  MMsgTy *this_00;
  code *pcVar2;
  StartSystemTy *pSVar3;
  int iVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar13;
  InternalExceptionFrame local_9c;
  undefined4 local_58;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  StartSystemTy *local_1c;
  undefined1 *local_18;
  uint *local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined4 local_d;
  undefined4 *local_8;
  
  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  local_1c = this;
  iVar4 = __setjmp3(local_9c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_1c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x231,0,iVar4,
                                &DAT_007a4ccc,s_StartSystemTy__LoadMapData_007cd7b0);
    if (iVar11 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_startsys_cpp_007cd718,0x231);
    return;
  }
  if (param_1 != 0) {
    pSVar1 = local_1c + 0x2f4;
    if (*(int *)(local_1c + 0x2f4) != 0) {
      FUN_006ab060((undefined4 *)pSVar1);
    }
    puVar5 = FUN_0070a5a0(param_1,0xc,PTR_s_SMALL_MAP_0079c1dc,2,0);
    *(ushort **)pSVar1 = puVar5;
    if (puVar5 != (ushort *)0x0) {
      FUN_006c7f90((int)puVar5,(byte *)0x0,*(HPALETTE *)(DAT_0080759c + 0x4b4),0);
      FUN_006b5440(*(int *)(pSVar3 + 0x2f0),0,0x14,0x14,*(int *)pSVar1,0,0);
    }
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = FUN_0071aa10(param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    DAT_0080c4cb = FUN_0071aa10(param_1,PTR_s_OBJECTIVES_0079c1d4,0);
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
    }
    local_18 = &local_10;
    local_8 = &DAT_008087b6;
    puVar5 = FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079c1d8,(int *)&local_8,0);
    if ((puVar5 == (ushort *)0x0) ||
       ((((param_2 == '\f' || (param_2 == '\x10')) ||
         ((param_2 == '\x13' && (DAT_00803400 == '\f')))) &&
        (puVar5 = FUN_006f1ce0(0x80,PTR_s_SAVE_PLAYER_0079c1c8,(int *)&local_18,0),
        puVar5 == (ushort *)0x0)))) {
      puVar13 = &DAT_008087b6;
      for (iVar4 = 0x666; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
    }
    else {
      DAT_008087b5 = 0;
      thunk_FUN_0056ef50(0x807620);
      puVar13 = &DAT_0080c3c3;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      local_8 = &DAT_0080c3c3;
      FUN_006f1ce0(0xc,PTR_s_TITLE_MISSION_0079c1cc,(int *)&local_8,0);
      iVar4 = 0;
      if (0 < (int)DAT_0080c4cb[2]) {
        if ((int)DAT_0080c4cb[2] < 1) {
          pcVar10 = (char *)0x0;
          goto LAB_005dc22d;
        }
        do {
          pcVar10 = *(char **)(DAT_0080c4cb[5] + iVar4 * 4);
LAB_005dc22d:
          thunk_FUN_005411a0(*(int *)(pSVar3 + 0x548),pcVar10,s_____s_007c72b4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)DAT_0080c4cb[2]);
      }
      iVar4 = *(int *)(pSVar3 + 0x34);
      *(undefined4 *)(iVar4 + 0x7e) = 1;
      puVar6 = (undefined2 *)(iVar4 + 0x9e);
      *puVar6 = 0;
      *(undefined1 *)puVar6 = DAT_007cc854;
      local_14 = ccFntTy::FormIndentSarr
                           (*(ccFntTy **)(pSVar3 + 0x34),*(int *)(pSVar3 + 0x548),
                            (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                            *(int *)(*(int *)(pSVar3 + 0x544) + 4) + -0x14,0,0xffffffff,(char *)0x0,
                            1);
      if (*(byte **)(pSVar3 + 0x548) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(pSVar3 + 0x548));
      }
      puVar7 = FUN_006b54f0((uint *)0x0,10,10);
      *(uint **)(pSVar3 + 0x548) = puVar7;
      pSVar1 = pSVar3 + 0x3c;
      uVar8 = FUN_006b0140(0x2347,DAT_00807618);
      wsprintfA((LPSTR)pSVar1,s__2__s__007cd800,uVar8);
      FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
      wsprintfA((LPSTR)pSVar1,s__0__s_007cd7f8,&DAT_0080c3c3);
      FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
      FUN_006b5aa0(*(int *)(pSVar3 + 0x548),&DAT_007c3b5c);
      uVar9 = DAT_008087c4 & 0xffff;
      uVar12 = (uint)DAT_008087c2;
      uVar8 = FUN_006b0140(0x2344,DAT_00807618);
      wsprintfA((LPSTR)pSVar1,s__2__s___0_d_2x_0_d_007cd7e0,uVar8,uVar12,uVar9);
      FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
      uVar9 = DAT_008087c4 >> 0x10 & 0xff;
      uVar8 = FUN_006b0140(0x2345,DAT_00807618);
      wsprintfA((LPSTR)pSVar1,s__2__s___0_d_007cd7d0,uVar8,uVar9);
      FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
      FUN_006b5aa0(*(int *)(pSVar3 + 0x548),&DAT_007c3b5c);
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
        uVar8 = FUN_006b0140(0x2346,DAT_00807618);
        wsprintfA((LPSTR)pSVar1,s__2__s__007cd800,uVar8);
        FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
        FUN_006b5aa0(*(int *)(pSVar3 + 0x548),&DAT_007c3b5c);
      }
      puVar7 = local_14;
      if (local_14 != (uint *)0x0) {
        if (local_14[2] != 0) {
          ccFntTy::SepColorStrInSarr(*(ccFntTy **)(pSVar3 + 0x34),local_14,local_14);
        }
        iVar4 = 0;
        if (0 < (int)puVar7[2]) {
          if ((int)puVar7[2] < 1) {
            pcVar10 = (char *)0x0;
            goto LAB_005dc430;
          }
          do {
            pcVar10 = *(char **)(puVar7[5] + iVar4 * 4);
LAB_005dc430:
            FUN_006b5aa0(*(int *)(pSVar3 + 0x548),pcVar10);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)puVar7[2]);
        }
        FUN_006b5570((byte *)puVar7);
      }
      if (((param_2 == '\f') || (param_2 == '\x10')) ||
         ((param_2 == '\x13' && (DAT_00803400 == '\f')))) {
        DAT_0080874d = local_10;
        DAT_0080874e = local_f;
        DAT_0080874f = local_e;
        DAT_00808750 = local_d;
      }
      local_2c = 0x28;
      local_28 = CONCAT22(*(undefined2 *)(*(int *)(pSVar3 + 0x548) + 8),1);
      if (*(int *)(pSVar3 + 0x389) != 0) {
        FUN_006e5970(2,*(int *)(pSVar3 + 0x389),(int)local_3c);
      }
      local_2c = 0x22;
      local_28 = 0;
      if (*(int *)(pSVar3 + 0x389) != 0) {
        FUN_006e5970(2,*(int *)(pSVar3 + 0x389),(int)local_3c);
      }
      local_2c = 0x20;
      local_28 = 1;
      if (*(int *)(pSVar3 + 0x389) != 0) {
        FUN_006e5970(2,*(int *)(pSVar3 + 0x389),(int)local_3c);
      }
    }
    this_00 = *(MMsgTy **)(pSVar3 + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      puVar13 = &local_58;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined2 *)puVar13 = 0;
      local_58._0_2_ = 1;
      local_58._2_2_ = 1;
      MMsgTy::StatePanel(this_00,(int)&local_58);
    }
  }
  g_currentExceptionFrame = local_9c.previous;
  return;
}

