
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
thunk_FUN_006051b0(void *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  code *pcVar1;
  short sVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar9;
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  void *pvStack_18;
  int iStack_14;
  byte *pbStack_10;
  int iStack_c;
  byte *pbStack_8;
  
  iStack_c = *(int *)((int)this + 0x1e9);
  pbStack_10 = (&PTR_s_expl_bm0_007ced98)[iStack_c];
  pbStack_8 = (&PTR_s_expl_bt0_007ced70)[iStack_c];
  uStack_24 = 0;
  uStack_68 = DAT_00858df8;
  DAT_00858df8 = &uStack_68;
  pvStack_18 = this;
  iVar5 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
  pvVar4 = pvStack_18;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_68;
    iVar8 = FUN_006ad4d0(s_E____titans_nick_to_Expl_cpp_007cf630,0x38c,0,iVar5,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar5,0,0x7cf630,0x38e);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if ((param_3 != '\0') && (*(int *)((int)pvStack_18 + 0x2af) != 0)) {
    pbStack_8 = (&PTR_s_expl_bbt0_007cedc0)[iStack_c];
    iVar5 = thunk_FUN_004ab880(0xf,DAT_00806774,pbStack_8,0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    thunk_FUN_004abe40(*(void **)((int)pvVar4 + 0x2af),'\x0f',*(undefined4 *)((int)pvVar4 + 0x29f));
    thunk_FUN_004ac610(*(void **)((int)pvVar4 + 0x2af),'\x0f');
    thunk_FUN_004ac1a0(0xf,*(undefined4 *)(DAT_00802a38 + 0xe4));
    uVar6 = thunk_FUN_004acd30(*(void **)((int)pvVar4 + 0x2af),'\x0f');
    *(undefined4 *)((int)pvVar4 + 0x2a3) = uVar6;
    DAT_00858df8 = (undefined4 *)uStack_68;
    return uStack_24;
  }
  if (*(int *)((int)pvStack_18 + 0x2af) == 0) {
    puVar7 = (undefined4 *)FUN_0072e530(0x40);
    if (puVar7 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = thunk_FUN_004ab810(puVar7);
    }
    *(undefined4 *)((int)pvVar4 + 0x2af) = uVar6;
  }
  if ((&DAT_007cede8)[iStack_c] == '\0') {
    iVar5 = thunk_FUN_004ad1f0(DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar5 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7cf630,0x36a);
      return 0xffff;
    }
  }
  else {
    iVar5 = thunk_FUN_004ad1f0(DAT_008073cc,0x78,0x56,0,0xf0,0xbe,0x11);
    if (iVar5 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7cf630,0x370);
      return 0xffff;
    }
    FUN_006e9210(DAT_00807598,*(uint *)(*(int *)((int)pvVar4 + 0x2af) + 0x18));
  }
  iVar5 = thunk_FUN_004ab880(0xd,DAT_00806774,pbStack_8,0x1d);
  if (iVar5 == 0) {
    iVar5 = thunk_FUN_004ab880(0xe,DAT_00806774,pbStack_10,0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    thunk_FUN_004abe40(*(void **)((int)pvVar4 + 0x2af),'\r',*(undefined4 *)((int)pvVar4 + 0x296));
    thunk_FUN_004ad3c0(*(void **)((int)pvVar4 + 0x2af),
                       (float)*(int *)((int)pvVar4 + 0x28a) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)pvVar4 + 0x28e) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)pvVar4 + 0x292) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    thunk_FUN_004ac610(*(void **)((int)pvVar4 + 0x2af),'\r');
    thunk_FUN_004ac1a0(0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(undefined4 *)((int)pvVar4 + 0x286) = 1;
    pvVar3 = DAT_00802a88;
    if (DAT_00802a88 != (void *)0x0) {
      iVar5 = *(int *)((int)pvVar4 + 0x292);
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iStack_14 = (short)(((short)(iVar5 / 200) + sVar2) -
                           (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iStack_14 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                                (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
      }
      iVar5 = *(int *)((int)pvVar4 + 0x28e);
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      iVar8 = *(int *)((int)pvVar4 + 0x28a);
      sVar2 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar2) -
                       (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar2) -
                            (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
          (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar8,iVar5,
                              &iStack_1c,&iStack_20), iStack_14 < 0)) || (4 < iStack_14)) {
        bVar9 = true;
      }
      else {
        if (((iStack_1c < 0) || (*(int *)((int)pvVar3 + 0x30) <= iStack_1c)) ||
           (((&DAT_0079aed0)[iStack_14] + iStack_20 < 0 ||
            (*(int *)((int)pvVar3 + 0x34) <= (&DAT_0079aed0)[iStack_14] + iStack_20)))) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if ((bVar9) && (*(int *)((int)pvVar3 + 0x4c) != 0)) {
          bVar9 = *(char *)(((&DAT_0079aed0)[iStack_14] + iStack_20) * *(int *)((int)pvVar3 + 0x30)
                            + *(int *)((int)pvVar3 + 0x4c) + iStack_1c) != '\0';
        }
        else {
          bVar9 = true;
        }
      }
      if (!bVar9) {
        thunk_FUN_004ad430(*(int *)((int)pvVar4 + 0x2af));
        *(undefined4 *)((int)pvVar4 + 0x286) = 0;
      }
      DAT_00858df8 = (undefined4 *)uStack_68;
      return uStack_24;
    }
    DAT_00858df8 = (undefined4 *)uStack_68;
    return uStack_24;
  }
  return 0xffff;
}

