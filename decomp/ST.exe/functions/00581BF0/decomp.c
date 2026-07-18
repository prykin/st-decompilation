
undefined4 FUN_00581bf0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 local_54;
  undefined4 local_50 [16];
  void *local_10;
  int local_c;
  byte *local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar5 = FUN_006ad4d0(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x191,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_006a5e40(iVar2,0,0x7cb2f0,0x192);
    return 0xffff;
  }
  thunk_FUN_0041af40(param_1);
  uVar6 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar6) {
    if (uVar6 == 0x124) {
      iVar2 = *(int *)((int)local_10 + 0x1fd) + -1;
      if (iVar2 < 0) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      while ((iVar5 = *(int *)(*(int *)((int)local_10 + 0x207) + iVar2 * 4), iVar5 == 0 ||
             (*(int *)(iVar5 + 8) != *(int *)(param_1 + 0x14)))) {
        if ((iVar2 < 0) &&
           (iVar5 = FUN_006ad4d0(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x128,0,0,&DAT_007a4ccc),
           iVar5 != 0)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) {
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
      }
      *(undefined4 *)(*(int *)((int)local_10 + 0x207) + iVar2 * 4) = 0;
      iVar2 = *(int *)((int)local_10 + 0x20f) + -1;
      *(int *)((int)local_10 + 0x20f) = iVar2;
      if ((*(byte *)((int)local_10 + 0x1d5) & 1) == 0) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      if (iVar2 != 0) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
    }
    else {
      if (uVar6 == 0x125) {
        iVar2 = *(int *)((int)local_10 + 0x1fd) + -1;
        if (-1 < iVar2) {
          piVar4 = (int *)(*(int *)((int)local_10 + 0x207) + iVar2 * 4);
          do {
            if (*piVar4 == 0) break;
            iVar2 = iVar2 + -1;
            piVar4 = piVar4 + -1;
          } while (-1 < iVar2);
        }
        if (iVar2 < 0) {
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        iVar5 = FUN_006e5380(DAT_00802a38,*(int *)(param_1 + 0x14),&local_c);
        if (iVar5 != 0) {
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        iVar5 = *(int *)((int)local_10 + 0x1fd) + -1;
        if (-1 < iVar5) {
          piVar4 = (int *)(*(int *)((int)local_10 + 0x207) + iVar5 * 4);
          do {
            if (*piVar4 == local_c) break;
            iVar5 = iVar5 + -1;
            piVar4 = piVar4 + -1;
          } while (-1 < iVar5);
        }
        if (iVar5 < 0) {
          *(int *)(*(int *)((int)local_10 + 0x207) + iVar2 * 4) = local_c;
          *(int *)((int)local_10 + 0x20f) = *(int *)((int)local_10 + 0x20f) + 1;
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        iVar2 = FUN_006ad4d0(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x110,0,0,&DAT_007a4ccc);
        if (iVar2 == 0) {
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      if (uVar6 != 0x128) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
    }
    thunk_FUN_005811c0(local_10);
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if (uVar6 == 0x10f) {
    local_8 = (byte *)FUN_006aac70(0x3a);
    if (local_8 == (byte *)0x0) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    puVar8 = (undefined4 *)((int)local_10 + 0x1d9);
    pbVar10 = local_8;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pbVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      pbVar10 = pbVar10 + 4;
    }
    *(undefined2 *)pbVar10 = *(undefined2 *)puVar8;
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    *(undefined4 *)(local_8 + 0x32) = *(undefined4 *)((int)local_10 + 0x20f);
    *(undefined4 *)(local_8 + 0x2e) = *(undefined4 *)((int)local_10 + 0x1d5);
    local_8[0x36] = 0;
    local_8[0x37] = 0;
    local_8[0x38] = 0;
    local_8[0x39] = 0;
    thunk_FUN_0054d430(DAT_00802a38,*(undefined4 *)((int)local_10 + 0x18),local_8,0x3a);
    FUN_006ab060(&local_8);
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if (uVar6 == 0) {
    thunk_FUN_00581bc0((int)local_10);
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if (uVar6 != 2) {
    if (uVar6 != 3) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if (*(int *)((int)local_10 + 0x207) != 0) {
      FUN_006ab060((undefined4 *)((int)local_10 + 0x207));
    }
    if (*(int *)((int)local_10 + 0x20b) == 0) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    FUN_006ab060((undefined4 *)((int)local_10 + 0x20b));
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 *)((int)local_10 + 0x207) = 0;
  *(undefined4 *)((int)local_10 + 0x20b) = 0;
  uVar6 = *(uint *)(iVar2 + 0xc);
  if (uVar6 < 2) {
    *(undefined4 *)((int)local_10 + 0x1d5) = 0;
    *(undefined4 *)((int)local_10 + 0x20f) = 0;
    puVar8 = *(undefined4 **)(param_1 + 0x14);
    puVar7 = (undefined4 *)((int)local_10 + 0x1d9);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)puVar8;
    if ((((*(int *)((int)local_10 + 0x1ed) < 0) || (*(int *)((int)local_10 + 0x1f1) < 0)) ||
        ((int)DAT_007fb240 < *(int *)((int)local_10 + 0x1f5))) ||
       ((int)DAT_007fb242 < *(int *)((int)local_10 + 0x1f9))) {
      iVar2 = FUN_006ad4d0(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x13d,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      FUN_006a5e40(-1,DAT_007ed77c,0x7cb2f0,0x13e);
    }
    iVar2 = FUN_006aac70(*(int *)((int)local_10 + 0x1fd) << 2);
    *(int *)((int)local_10 + 0x207) = iVar2;
    iVar2 = FUN_006aac70(*(int *)((int)local_10 + 0x1fd) << 2);
    *(int *)((int)local_10 + 0x20b) = iVar2;
    if ((*(int *)((int)local_10 + 0x207) != 0) && (iVar2 != 0)) goto LAB_00581d62;
    iVar2 = FUN_006ad4d0(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x143,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = 0x144;
  }
  else {
    if (uVar6 != 2) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    puVar8 = *(undefined4 **)(param_1 + 0x14);
    puVar7 = puVar8;
    puVar9 = (undefined4 *)((int)local_10 + 0x1d9);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
    *(undefined4 *)((int)local_10 + 0x1d5) = *(undefined4 *)((int)puVar8 + 0x2e);
    *(undefined4 *)((int)local_10 + 0x20f) = 0;
    iVar2 = FUN_006aac70(*(int *)((int)local_10 + 0x1fd) << 2);
    *(int *)((int)local_10 + 0x207) = iVar2;
    iVar2 = FUN_006aac70(*(int *)((int)local_10 + 0x1fd) << 2);
    *(int *)((int)local_10 + 0x20b) = iVar2;
    if ((*(int *)((int)local_10 + 0x207) != 0) && (iVar2 != 0)) goto LAB_00581d62;
    iVar2 = FUN_006ad4d0(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x15a,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = 0x15b;
  }
  FUN_006a5e40(-1,DAT_007ed77c,0x7cb2f0,uVar3);
LAB_00581d62:
  puVar8 = *(undefined4 **)((int)local_10 + 0x207);
  for (uVar6 = *(uint *)((int)local_10 + 0x1fd) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  puVar8 = *(undefined4 **)((int)local_10 + 0x20b);
  for (uVar6 = *(uint *)((int)local_10 + 0x1fd) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  DAT_00858df8 = (undefined4 *)local_54;
  return 0;
}

