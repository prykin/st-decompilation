
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006132f0(int param_1,int param_2)

{
  code *pcVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar8;
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 local_5c;
  undefined4 local_58 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar4 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar7 = FUN_006ad4d0(s_E____titans_nick_to_GnBom_cpp_007d0018,0x54b,0,iVar4,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar4,0,0x7d0018,0x54d);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar10 = (*pcVar1)();
    return uVar10;
  }
  if (*(int *)(local_10 + 0x252) == 0) {
    puVar5 = (undefined4 *)FUN_0072e530(0x40);
    if (puVar5 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = thunk_FUN_004ab810(puVar5);
    }
    *(int *)(local_10 + 0x252) = iVar4;
    if (iVar4 == 0) {
      return 0xffffffff;
    }
    iVar4 = thunk_FUN_004ad1f0(DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar4 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d0018,0x509);
      return 0xffff;
    }
  }
  if (param_1 == 0) {
    if (param_2 != 0) goto LAB_0061364b;
    iVar4 = thunk_FUN_004ab880(0xd,DAT_00806774,(byte *)s_exptem_007cf8cc,0x1d);
    if (iVar4 != 0) {
      return 0xffff;
    }
    iVar4 = thunk_FUN_004ab880(0xf,DAT_00806764,(byte *)s_bulb_n5_007cf8c4,0x1d);
    if (iVar4 != 0) {
      return 0xffff;
    }
    iVar4 = thunk_FUN_004ab880(0xe,DAT_00806774,(byte *)s_expmask2_007cf8d4,0x1d);
    if (iVar4 != 0) {
      return 0xffff;
    }
    thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    uVar12 = 0x53;
    uVar10 = 0x5a;
    iVar4 = 1;
    *(undefined1 *)(local_10 + 0x251) = 1;
    uVar6 = thunk_FUN_004ad650(*(int *)(local_10 + 0x252));
    FUN_006ea4e0(DAT_00807598,uVar6,iVar4,uVar10,uVar12);
    thunk_FUN_004ac700(*(void **)(local_10 + 0x252),'\x0f');
    thunk_FUN_004ac1a0(0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    iVar4 = (int)*(short *)(DAT_00806724 + 0x2c);
    uVar11 = 0;
    uVar6 = thunk_FUN_004ad650(*(int *)(local_10 + 0x252));
    FUN_006e9350(DAT_00807598,uVar6,uVar11,iVar4);
    *(undefined1 *)(local_10 + 0x250) = 1;
    thunk_FUN_004acf20(*(void **)(local_10 + 0x252),DAT_008032b8,0x10);
    *(undefined4 *)(local_10 + 0x237) = 0;
    thunk_FUN_004abe40(*(void **)(local_10 + 0x252),'\r',0);
    thunk_FUN_004ac040('\r');
    thunk_FUN_004acfe0(*(void **)(local_10 + 0x252),'\x0e');
    thunk_FUN_004ad3c0(*(void **)(local_10 + 0x252),
                       (float)*(int *)(local_10 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(local_10 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(local_10 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
  }
  else {
    iVar4 = *(int *)(local_10 + 0x1f7);
    if (iVar4 == 0) {
      iVar4 = thunk_FUN_004ab880(0xd,DAT_00806774,(byte *)s_den_bmb_007cf8b4,0x1d);
      if (iVar4 != 0) {
        return 0xffff;
      }
    }
    else {
      if (iVar4 == 1) {
        pcVar9 = s_ionbomb_007cf8bc;
      }
      else {
        if (iVar4 != 2) goto LAB_00613424;
        pcVar9 = s_den_bmb_007cf8b4;
      }
      iVar4 = thunk_FUN_004ab880(0xd,DAT_00806774,(byte *)pcVar9,0x1d);
      if (iVar4 != 0) {
        return 0xffff;
      }
    }
LAB_00613424:
    thunk_FUN_004abe40(*(void **)(local_10 + 0x252),'\r',*(undefined4 *)(local_10 + 0x237));
    thunk_FUN_004ad3c0(*(void **)(local_10 + 0x252),
                       (float)*(int *)(local_10 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(local_10 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(local_10 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    thunk_FUN_004ac1a0(0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(undefined1 *)(local_10 + 0x250) = 1;
  }
  local_8 = 1;
LAB_0061364b:
  pvVar3 = DAT_00802a88;
  if (DAT_00802a88 == (void *)0x0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    return local_8;
  }
  iVar4 = *(int *)(local_10 + 0x233);
  sVar2 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    local_c = (short)(((short)(iVar4 / 200) + sVar2) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_c = (int)(short)(((short)(iVar4 / 200) + sVar2) -
                          (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
  }
  iVar4 = *(int *)(local_10 + 0x22f);
  sVar2 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                        (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
  }
  iVar7 = *(int *)(local_10 + 0x22b);
  sVar2 = (short)(iVar7 >> 0x1f);
  if (iVar7 < 0) {
    iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar2) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar2) -
                        (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
  }
  if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
      (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar7,iVar4,
                          &local_14,&local_18), local_c < 0)) || (4 < local_c)) {
    bVar8 = true;
  }
  else {
    if (((local_14 < 0) || (*(int *)((int)pvVar3 + 0x30) <= local_14)) ||
       (((&DAT_0079aed0)[local_c] + local_18 < 0 ||
        (*(int *)((int)pvVar3 + 0x34) <= (&DAT_0079aed0)[local_c] + local_18)))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (*(int *)((int)pvVar3 + 0x4c) != 0)) {
      bVar8 = *(char *)(((&DAT_0079aed0)[local_c] + local_18) * *(int *)((int)pvVar3 + 0x30) +
                        *(int *)((int)pvVar3 + 0x4c) + local_14) != '\0';
    }
    else {
      bVar8 = true;
    }
  }
  if (bVar8) {
    if (*(char *)(local_10 + 0x250) == '\0') {
      thunk_FUN_004ad460(*(void **)(local_10 + 0x252),0);
      *(undefined1 *)(local_10 + 0x250) = 1;
      DAT_00858df8 = (undefined4 *)local_5c;
      return local_8;
    }
  }
  else if (*(char *)(local_10 + 0x250) != '\0') {
    thunk_FUN_004ad430(*(int *)(local_10 + 0x252));
    *(undefined1 *)(local_10 + 0x250) = 0;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  return local_8;
}

