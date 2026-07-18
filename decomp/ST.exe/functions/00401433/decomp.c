
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
thunk_FUN_00556760(void *this,short param_1,short param_2,uint param_3,int param_4,int param_5,
                  int param_6,short param_7,short param_8,short param_9,short param_10,
                  short param_11,short param_12,int param_13,short param_14,byte param_15)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  short sVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  int iVar8;
  short *psVar9;
  bool bVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uStack_a8;
  undefined4 auStack_a4 [16];
  uint uStack_64;
  void *pvStack_60;
  int iStack_5c;
  short sStack_58;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  int iStack_42;
  short sStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  uint uStack_26;
  ushort uStack_22;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  uStack_c = 0xffffffff;
  iStack_1c = 1;
  if (((param_15 & 1) == 0) && (DAT_0080731e == 0)) {
    return 0;
  }
  if (*(int *)((int)this + 0x24) == 0) {
    return 0;
  }
  if (param_4 < 0) {
    iStack_10 = param_4 / 0xc9 + -1;
  }
  else {
    iStack_10 = param_4 / 0xc9;
  }
  if (param_5 < 0) {
    iStack_18 = param_5 / 0xc9 + -1;
  }
  else {
    iStack_18 = param_5 / 0xc9;
  }
  if (param_6 < 0) {
    iVar8 = param_6 / 200 + -1;
  }
  else {
    iVar8 = param_6 / 200;
  }
  pvStack_60 = this;
  iStack_14 = iVar8;
  if ((param_15 & 2) != 0) goto LAB_0055693a;
  sVar6 = (short)iStack_18;
  if (DAT_00807598 != (void *)0x0) {
    if (((((int)(short)iStack_10 < *(int *)((int)DAT_00807598 + 0x48)) ||
         (*(int *)((int)DAT_00807598 + 0x58) < (int)(short)iStack_10)) ||
        ((int)sVar6 < *(int *)((int)DAT_00807598 + 0x44))) ||
       (*(int *)((int)DAT_00807598 + 0x54) < (int)sVar6)) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_006ddbd0();
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  pvVar2 = DAT_00802a88;
  if (DAT_00802a88 == (void *)0x0) goto LAB_0055693a;
  iVar8 = (int)(short)iVar8;
  if ((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) {
LAB_00556926:
    bVar10 = true;
  }
  else {
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),(int)(short)iStack_10
                       ,(int)sVar6,&iStack_5c,&iStack_8);
    if ((iVar8 < 0) || (4 < iVar8)) goto LAB_00556926;
    if (((iStack_5c < 0) || (*(int *)((int)pvVar2 + 0x30) <= iStack_5c)) ||
       (((&DAT_0079aed0)[iVar8] + iStack_8 < 0 ||
        (*(int *)((int)pvVar2 + 0x34) <= (&DAT_0079aed0)[iVar8] + iStack_8)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((bVar10) && (*(int *)((int)pvVar2 + 0x4c) != 0)) {
      bVar10 = *(char *)(((&DAT_0079aed0)[iVar8] + iStack_8) * *(int *)((int)pvVar2 + 0x30) +
                         *(int *)((int)pvVar2 + 0x4c) + iStack_5c) != '\0';
    }
    else {
      bVar10 = true;
    }
  }
  if (!bVar10) {
    return 0;
  }
LAB_0055693a:
  uStack_a8 = DAT_00858df8;
  DAT_00858df8 = &uStack_a8;
  iVar8 = __setjmp3(auStack_a4,0,unaff_EDI,unaff_ESI);
  if (iVar8 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_a8;
    iVar3 = FUN_006ad4d0(s_E____titans_grig_traks_cpp_007c9104,0x1bc,0,iVar8,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar11 = (*pcVar1)();
      return uVar11;
    }
    FUN_006a5e40(iVar8,0,0x7c9104,0x1bd);
    return 0xffffffff;
  }
  psVar9 = &sStack_58;
  for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
    psVar9[0] = 0;
    psVar9[1] = 0;
    psVar9 = psVar9 + 2;
  }
  sStack_4c = param_9;
  sStack_4a = param_10;
  sStack_48 = param_11;
  sStack_46 = param_12;
  sStack_44 = param_2;
  iStack_42 = param_13;
  sStack_3e = param_14;
  uStack_3c = (short)iStack_10;
  uStack_3a = (undefined2)iStack_18;
  sStack_58 = param_1;
  uStack_38 = (undefined2)iStack_14;
  sStack_56 = (short)param_4;
  sStack_54 = (short)param_5;
  sStack_52 = (short)param_6;
  sStack_50 = param_7;
  sStack_4e = param_8;
  uStack_36 = 0xffff;
  uStack_30 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  if (((((param_7 == 0) && (param_8 == 0)) && (param_9 == 0)) &&
      ((param_10 == 0 && (param_11 == 0)))) && (param_12 == 0)) {
    iStack_1c = 0;
  }
  iVar8 = iStack_1c;
  piVar7 = DAT_00806764;
  if (*(int *)(&DAT_007c900c + param_1 * 0x18) != 1) {
    piVar7 = DAT_00806774;
  }
  puVar14 = (undefined4 *)0x0;
  iVar13 = 0;
  iVar3 = 1;
  bVar12 = 0;
  uVar11 = 0xffffffff;
  sStack_2c = sStack_56;
  sStack_2a = sStack_54;
  sStack_28 = sStack_52;
  pbVar4 = thunk_FUN_00555840((int)param_1);
  puVar5 = FUN_00709af0(piVar7,0x1d,pbVar4,uVar11,bVar12,iVar3,iVar13,puVar14);
  uStack_22 = *puVar5;
  iVar3 = sStack_58 * 0x18;
  FUN_006e8660(DAT_00807598,(int *)&uStack_c,1,0,*(uint *)(&DAT_007c9000 + iVar3),
               *(uint *)(&DAT_007c9004 + iVar3),*(uint *)(&DAT_007c8ff8 + iVar3),
               *(uint *)(&DAT_007c8ffc + iVar3),0);
  uStack_26 = uStack_c;
  FUN_006e98e0(DAT_00807598,uStack_c,0,(int)(short)uStack_22,*(int *)((int)puVar5 + 0x21),1);
  if (iVar8 == 0) {
    FUN_006ea050(DAT_00807598,uStack_26,(int)sStack_44,0xffffffff,0);
  }
  FUN_006ea270(DAT_00807598,uStack_26,0,param_3);
  if (-1 < iStack_42) {
    if (sStack_3e == -1) {
      FUN_006ea3e0(DAT_00807598,uStack_26,iStack_42);
    }
    else if (sStack_3e == 1) {
      FUN_006ea460(DAT_00807598,uStack_26,iStack_42);
    }
  }
  FUN_006ea4e0(DAT_00807598,uStack_26,1,*(int *)(&DAT_007c9000 + sStack_58 * 0x18) / 2,
               *(int *)(&DAT_007c9004 + sStack_58 * 0x18) / 2);
  iStack_8 = (int)sStack_56;
  FUN_006ea960(DAT_00807598,uStack_26,(float)iStack_8 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)sStack_54 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)sStack_52 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  FUN_006eaaa0(DAT_00807598,uStack_26,0);
  uStack_36 = (undefined2)param_3;
  uStack_34 = *(undefined4 *)((int)pvStack_60 + 0x20);
  if (iVar8 != 0) {
    uVar11 = thunk_FUN_00555d90(pvStack_60,(undefined4 *)&sStack_58);
    DAT_00858df8 = (undefined4 *)uStack_a8;
    return uVar11;
  }
  DAT_00858df8 = (undefined4 *)uStack_a8;
  return uStack_64;
}

