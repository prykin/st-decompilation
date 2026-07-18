
undefined4 FUN_005f5f20(int param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  undefined4 local_60;
  undefined4 local_5c [16];
  byte *local_1c;
  uint local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  int *local_8;
  
  iVar6 = thunk_FUN_0041e530(param_1);
  if (iVar6 == 0xffff) {
    return 0xffff;
  }
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar6 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar7 = FUN_006ad4d0(s_E____titans_nick_to_coll3_cpp_007ce868,0xe8,0,iVar6,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar6,0,0x7ce868,0xea);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar1) {
    switch(uVar1) {
    case 0x110:
      goto switchD_005f6301_caseD_110;
    default:
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    case 0x112:
      thunk_FUN_004ad5e0((int)local_8 + 0x1d5);
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    case 0x113:
      (*(code *)**(undefined4 **)((int)local_8 + 0x1d5))();
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    case 0x128:
      thunk_FUN_004ad430((int)local_8 + 0x1d5);
      *(undefined1 *)((int)local_8 + 699) = 0;
      thunk_FUN_0041c5a0(local_8);
      thunk_FUN_005f66b0(local_8);
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
  }
  if (uVar1 == 0x10f) {
    local_1c = (byte *)thunk_FUN_005f66f0(local_8,&local_18);
    thunk_FUN_0054d430(DAT_00802a38,local_8[6],local_1c,local_18);
    FUN_006ab060(&local_1c);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (3 < uVar1) {
    if (uVar1 != 0x108) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_005fa0b0((int)local_8);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar1 == 3) {
    if (DAT_008117a4 != (void *)0x0) {
      thunk_FUN_005f9450((int)local_8);
      thunk_FUN_0062e610(DAT_008117a4,*(int *)((int)local_8 + 0x235),local_8[6]);
    }
    thunk_FUN_005fa070(local_8);
    thunk_FUN_004ad310((int)local_8 + 0x1d5);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar1 == 0) {
    thunk_FUN_005f6f60(local_8);
    (**(code **)(*local_8 + 0xd8))();
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar1 != 2) {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x14);
  if (puVar9[3] != 2) {
    puVar10 = (undefined4 *)((int)local_8 + 0x231);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar6 = *(int *)((int)local_8 + 0x245);
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar4) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)((int)local_8 + 0x249);
    *(int *)((int)local_8 + 0x25d) = iVar6;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar6 = (short)(((short)(iVar7 / 0xc9) + sVar4) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)((int)local_8 + 0x24d);
    *(int *)((int)local_8 + 0x261) = iVar6;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar6 = (short)(((short)(iVar7 / 200) + sVar4) - (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar7 / 200) + sVar4) -
                          (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    *(int *)((int)local_8 + 0x265) = iVar6;
    thunk_FUN_005fa8b0(local_8,(int *)((int)local_8 + 0x27d),(int *)((int)local_8 + 0x281),
                       (int *)((int)local_8 + 0x285));
    *(undefined4 *)((int)local_8 + 0x269) = 600;
    *(undefined4 *)((int)local_8 + 0x2dd) = 1;
    *(int *)((int)local_8 + 0x2e1) =
         *(int *)((int)DAT_00802a38 + 0xe4) + *(int *)((int)local_8 + 0x259);
    if (DAT_008117a4 != (void *)0x0) {
      thunk_FUN_0062e550(DAT_008117a4,*(int *)((int)local_8 + 0x235),local_8[6],
                         *(int *)((int)local_8 + 0x255));
    }
    *(undefined1 *)((int)local_8 + 0x2e5) = 1;
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  iVar6 = thunk_FUN_005f68b0(local_8,puVar9);
  if (iVar6 == 0) {
    thunk_FUN_005f66b0(local_8);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  thunk_FUN_004162b0(local_8,local_14,local_10,local_c);
  bVar5 = thunk_FUN_004961b0(local_14[0],local_10[0],local_c[0]);
  if (CONCAT31(extraout_var,bVar5) != 0) {
    if (((((local_14[0] < 0) || (DAT_007fb240 <= local_14[0])) || (local_10[0] < 0)) ||
        ((DAT_007fb242 <= local_10[0] || (local_c[0] < 0)))) || (DAT_007fb244 <= local_c[0])) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)local_c[0] + (int)DAT_007fb240 * (int)local_10[0] +
                      (int)local_14[0]) * 8);
    }
    if ((iVar6 == 0) &&
       ((*(int *)((int)local_8 + 0x2dd) == 1 ||
        (iVar6 = thunk_FUN_00495ec0(local_14[0],local_10[0],local_c[0],0,(int)local_8), iVar6 == 0))
       )) goto LAB_005f61e2;
  }
  thunk_FUN_005f66b0(local_8);
LAB_005f61e2:
  if (*(char *)((int)local_8 + 0x2b6) == '\0') {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  thunk_FUN_005f6ab0();
  DAT_00858df8 = (undefined4 *)local_60;
  return 0;
switchD_005f6301_caseD_110:
  piVar2 = *(int **)(param_1 + 0x14);
  iVar6 = (**(code **)(*local_8 + 0x78))();
  if (iVar6 < 1) {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  bVar5 = thunk_FUN_005f6f20(local_8,*piVar2);
  if (CONCAT31(extraout_var_00,bVar5) == 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  thunk_FUN_005f6af0(0);
  *(uint *)((int)local_8 + 0x275) = (uint)*(byte *)(piVar2 + 2);
  *(uint *)((int)local_8 + 0x279) = (uint)*(ushort *)((int)piVar2 + 0xe);
  thunk_FUN_005fa070(local_8);
  *(undefined4 *)((int)local_8 + 0x2dd) = 0xd;
  DAT_00858df8 = (undefined4 *)local_60;
  return 0;
}

