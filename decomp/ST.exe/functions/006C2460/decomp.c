
void FUN_006c2460(int param_1,DWORD param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  AnonShape_006BFBF0_13F73F95 *pAVar4;

  iVar3 = param_7 * 0xc4;
  pAVar4 = (AnonShape_006BFBF0_13F73F95 *)(&DAT_00854ff8 + iVar3);
  *(undefined4 *)(&DAT_00855028 + iVar3) = param_5;
  (&DAT_00855024)[param_7 * 0x31] = param_3 & 0xff;
  *(undefined4 *)(&DAT_0085502c + iVar3) = param_6;
  (&DAT_00855014)[param_7 * 0x31] = param_1;
  (&DAT_00855018)[param_7 * 0x31] = param_2;
  (&DAT_00854ffc)[param_7 * 0x31] = param_4 | 0x2000;
  DVar2 = FUN_006d4930(*(AnonShape_006D4930_676532DD **)(param_1 + 4),(LPDWORD)param_2,
                       (undefined4 *)(&DAT_00855044 + iVar3),0x3e);
  if (DVar2 == 0) {
    *(uint *)(&DAT_00855020 + iVar3) =
         (-(uint)(*(short *)(&DAT_00855044 + iVar3) != 1) & 0x24) + 0x1a + param_2;
    if ((param_4 & 4) != 0) {
      *(uint *)pAVar4 = *(uint *)pAVar4 | 0x21;
      return;
    }
    iVar3 = FUN_006bfbf0(pAVar4);
    if (iVar3 == 0) {
      return;
    }
  }
  piVar1 = (int *)(&DAT_00855004)[param_7 * 0x31];
  if (piVar1 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 0x48))(piVar1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(&DAT_00855004)[param_7 * 0x31] + 8))
              ((int *)(&DAT_00855004)[param_7 * 0x31]);
  }
  for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar4 = 0;
    pAVar4 = (AnonShape_006BFBF0_13F73F95 *)&pAVar4->field_0x4;
  }
  return;
}

