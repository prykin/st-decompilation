
void FUN_006c0800(short *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,int param_11)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  AnonShape_006BFBF0_13F73F95 *pAVar7;

  iVar5 = param_11 * 0xc4;
  (&DAT_00855024)[param_11 * 0x31] = param_2 & 0xff;
  *(undefined4 *)(&DAT_00855028 + iVar5) = param_4;
  *(undefined4 *)(&DAT_0085502c + iVar5) = param_5;
  (&DAT_00854ffc)[param_11 * 0x31] = param_3;
  *(undefined4 *)(&DAT_00855030 + iVar5) = param_6;
  *(undefined4 *)(&DAT_00855034 + iVar5) = param_7;
  (&DAT_0085501c)[param_11 * 0x31] = param_1;
  *(undefined4 *)(&DAT_00855038 + iVar5) = param_8;
  *(undefined4 *)(&DAT_0085503c + iVar5) = param_9;
  *(undefined4 *)(&DAT_00855040 + iVar5) = param_10;
  uVar3 = (-(uint)(*param_1 != 1) & 0x24) + 0x1a;
  puVar6 = (undefined4 *)(&DAT_00855044 + iVar5);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar6 = (char)*param_1;
    param_1 = (short *)((int)param_1 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar2 = FUN_006bfbf0((AnonShape_006BFBF0_13F73F95 *)(&DAT_00854ff8 + iVar5));
  if (iVar2 != 0) {
    piVar1 = (int *)(&DAT_00855004)[param_11 * 0x31];
    if (piVar1 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 0x48))(piVar1);
      piVar1 = (int *)(&DAT_00855008)[param_11 * 0x31];
      if (piVar1 != (int *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 8))(piVar1);
        (&DAT_00855008)[param_11 * 0x31] = 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)(&DAT_00855004)[param_11 * 0x31] + 8))
                ((int *)(&DAT_00855004)[param_11 * 0x31]);
    }
    pAVar7 = (AnonShape_006BFBF0_13F73F95 *)(&DAT_00854ff8 + iVar5);
    for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar7 = 0;
      pAVar7 = (AnonShape_006BFBF0_13F73F95 *)&pAVar7->field_0x4;
    }
  }
  return;
}

