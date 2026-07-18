
undefined4 FUN_0062e740(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined3 extraout_var;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 **local_58;
  undefined4 local_54 [16];
  void *local_14;
  byte *local_10;
  uint local_c;
  int local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar7 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 ***)local_58;
    iVar8 = FUN_006ad4d0(s_E____titans_nick_to_Rubb_cpp_007d1798,0xa6,0,iVar7,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar7,0,0x7d1798,0xa8);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return uVar10;
  }
  iVar7 = thunk_FUN_0041af40(param_1);
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if (3 < uVar4) {
    if (uVar4 == 0x108) {
      iVar7 = thunk_FUN_004ab050();
      thunk_FUN_00630000(local_14,iVar7);
    }
    else if (uVar4 == 0x10f) {
      local_10 = (byte *)thunk_FUN_0062f940(local_14,&local_c);
      thunk_FUN_0054d430(DAT_00802a38,*(undefined4 *)((int)local_14 + 0x18),local_10,local_c);
      FUN_006ab060(&local_10);
      DAT_00858df8 = (undefined4 ***)local_58;
      return 0;
    }
    DAT_00858df8 = (undefined4 ***)local_58;
    return 0;
  }
  if (uVar4 == 3) {
    thunk_FUN_0062f7a0(local_14);
    DAT_00858df8 = (undefined4 ***)local_58;
    return 0;
  }
  if (uVar4 == 0) {
    if (*(int *)((int)local_14 + 0x1fa) == 1) {
      if ((*(char *)((int)local_14 + 0x1f9) == '\0') &&
         (iVar7 = thunk_FUN_0062fea0(local_14,*(int *)((int)local_14 + 0x1d5),
                                     *(int *)((int)local_14 + 0x1d9)), iVar7 != 0)) {
        thunk_FUN_0062fe00(local_14);
        *(undefined1 *)((int)local_14 + 0x1f9) = 1;
      }
      thunk_FUN_0062f150(local_14);
      DAT_00858df8 = (undefined4 ***)local_58;
      return 0;
    }
    if (*(int *)((int)local_14 + 0x1fa) != 2) {
      DAT_00858df8 = (undefined4 ***)local_58;
      return 0;
    }
    thunk_FUN_0062f900(local_14);
    DAT_00858df8 = (undefined4 ***)local_58;
    return 0;
  }
  if (uVar4 != 2) {
    DAT_00858df8 = (undefined4 ***)local_58;
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  local_8 = iVar7;
  if (*(int *)(iVar7 + 0xc) == 2) {
    thunk_FUN_0062fa80(local_14,iVar7);
    if (*(char *)((int)local_14 + 0x1f9) == '\0') {
      DAT_00858df8 = (undefined4 ***)local_58;
      return 0;
    }
    thunk_FUN_0062fe00(local_14);
    DAT_00858df8 = (undefined4 ***)local_58;
    return 0;
  }
  if (((*(int *)((int)local_14 + 0x1d5) < 0) || (*(int *)((int)local_14 + 0x1d9) < 0)) ||
     (*(int *)((int)local_14 + 0x1dd) < 0)) {
    iVar8 = *(int *)(iVar7 + 0x14);
    sVar1 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar1) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    *(int *)((int)local_14 + 0x1d5) = iVar8;
    iVar8 = *(int *)(iVar7 + 0x18);
    sVar1 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar1) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    *(int *)((int)local_14 + 0x1d9) = iVar8;
    iVar8 = *(int *)(iVar7 + 0x1c);
    if (iVar8 < 0) {
      iVar8 = (short)(iVar8 / 200) + -1;
    }
    else {
      iVar8 = (int)(short)(iVar8 / 200);
    }
    *(int *)((int)local_14 + 0x1dd) = iVar8;
    bVar6 = thunk_FUN_004961b0(*(short *)((int)local_14 + 0x1d5),*(short *)((int)local_14 + 0x1d9),
                               (short)iVar8);
    if (CONCAT31(extraout_var,bVar6) != 0) {
      sVar1 = *(short *)((int)local_14 + 0x1d5);
      sVar2 = *(short *)((int)local_14 + 0x1dd);
      sVar3 = *(short *)((int)local_14 + 0x1d9);
      if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
          ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(DAT_007fb248 + 4 +
                        ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                        (int)sVar1) * 8);
        iVar7 = local_8;
      }
      if ((iVar8 == 0) &&
         (iVar8 = thunk_FUN_00495ec0((short)*(undefined4 *)((int)local_14 + 0x1d5),
                                     (short)*(undefined4 *)((int)local_14 + 0x1d9),
                                     (short)*(undefined4 *)((int)local_14 + 0x1dd),1,(int)local_14),
         iVar7 = local_8, iVar8 == 0)) {
        iVar8 = *(int *)(local_8 + 0x14);
        sVar1 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar1) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar1) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        *(int *)((int)local_14 + 0x1d5) = iVar8;
        iVar11 = *(int *)(local_8 + 0x18);
        sVar1 = (short)(iVar11 >> 0x1f);
        if (iVar11 < 0) {
          iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar1) -
                          (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar1) -
                               (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
        }
        *(int *)((int)local_14 + 0x1d9) = iVar11;
        iVar9 = *(int *)(local_8 + 0x1c);
        sVar1 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          iVar9 = (short)(((short)(iVar9 / 200) + sVar1) -
                         (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar9 = (int)(short)(((short)(iVar9 / 200) + sVar1) -
                              (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
        }
        *(int *)((int)local_14 + 0x1dd) = iVar9;
        iVar8 = thunk_FUN_0062fea0(local_14,iVar8,iVar11);
        *(char *)((int)local_14 + 0x1f9) = (char)iVar8;
        goto LAB_0062ea02;
      }
    }
    thunk_FUN_0062f900(local_14);
  }
LAB_0062ea02:
  iVar7 = thunk_FUN_0062fca0(local_14,iVar7);
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  *(undefined4 *)((int)local_14 + 0x1fa) = 1;
  DAT_00858df8 = (undefined4 ***)local_58;
  return 0;
}

