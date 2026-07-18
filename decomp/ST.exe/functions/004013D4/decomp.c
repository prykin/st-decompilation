
uint __fastcall thunk_FUN_0062b4a0(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  int iStack_8;
  
  iStack_14 = *(int *)(param_1 + 0x46);
  sVar3 = (short)(iStack_14 >> 0x1f);
  if (iStack_14 < 0) {
    uVar6 = (uint)(short)(((short)(iStack_14 / 0xc9) + sVar3) -
                         (short)((longlong)iStack_14 * 0x28c1979 >> 0x3f));
    uStack_c = uVar6 - 1;
  }
  else {
    uVar6 = (uint)(short)(((short)(iStack_14 / 0xc9) + sVar3) -
                         (short)((longlong)iStack_14 * 0x28c1979 >> 0x3f));
    uStack_c = uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x4a);
  sVar3 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    iVar7 = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    iStack_8 = iVar7 + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    iStack_8 = iVar7;
  }
  iVar2 = *(int *)(param_1 + 0x4e);
  sVar3 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    uStack_10 = (int)(short)(((short)(iVar2 / 200) + sVar3) -
                            (short)((longlong)iVar2 * 0x51eb851f >> 0x3f)) - 1;
  }
  else {
    uStack_10 = (uint)(short)(((short)(iVar2 / 200) + sVar3) -
                             (short)((longlong)iVar2 * 0x51eb851f >> 0x3f));
  }
  if (iVar1 < 0) {
    iVar7 = iVar7 + -1;
  }
  if (iStack_14 < 0) {
    uVar6 = uVar6 - 1;
  }
  if ((((*(int *)(DAT_00807598 + 0x48) <= (int)uVar6) &&
       ((int)uVar6 <= *(int *)(DAT_00807598 + 0x58))) && (*(int *)(DAT_00807598 + 0x44) <= iVar7))
     && (iVar7 <= *(int *)(DAT_00807598 + 0x54))) {
    uVar5 = FUN_006ddbd0();
    pvVar4 = DAT_00802a88;
    uVar6 = uVar5;
    if (((uVar5 == 0) || (DAT_00802a88 == (void *)0x0)) ||
       ((DAT_0080874d == -1 || (uVar6 = 0, *(int *)((int)DAT_00802a88 + 0xf8) == 0))))
    goto LAB_0062b616;
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),uStack_c,iStack_8,
                       &iStack_14,(int *)&uStack_c);
    uVar6 = uStack_10;
    if ((((int)uStack_10 < 0) || (4 < (int)uStack_10)) ||
       ((iStack_14 < 0 ||
        ((((*(int *)((int)pvVar4 + 0x30) <= iStack_14 ||
           (uVar6 = (&DAT_0079aed0)[uStack_10] + uStack_c, (int)uVar6 < 0)) ||
          (*(int *)((int)pvVar4 + 0x34) <= (int)uVar6)) ||
         ((*(int *)((int)pvVar4 + 0x4c) == 0 ||
          (uVar6 = (uint)*(byte *)(uVar6 * *(int *)((int)pvVar4 + 0x30) +
                                   *(int *)((int)pvVar4 + 0x4c) + iStack_14), uVar6 != 0))))))))
    goto LAB_0062b616;
  }
  uVar5 = 0;
LAB_0062b616:
  return CONCAT31((int3)(uVar6 >> 8),(char)uVar5);
}

