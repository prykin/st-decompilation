
int __fastcall FUN_0071f230(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = 0;
  iVar4 = param_1[0x4f];
  if (iVar4 < param_1[0x81]) {
    do {
      iVar2 = param_1[0x4e];
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 8))(iVar4,iVar4 == iVar2);
      if (param_1[0xc] < iVar1 + iVar3) {
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*param_1 + 0xc))(iVar4,iVar4 == iVar2,0,iVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar3 = iVar3 + param_1[0x82] + iVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[0x81]);
  }
  return 0;
}

