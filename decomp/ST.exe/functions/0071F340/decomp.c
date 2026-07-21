
int __fastcall FUN_0071f340(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  iVar3 = param_1[0x4f];
  if (iVar3 < param_1[0x81]) {
    do {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 8))(iVar3,iVar3 == param_1[0x4e]);
      if (param_1[0xc] < iVar1 + iVar2) break;
      iVar2 = iVar2 + param_1[0x82] + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x81]);
  }
  return iVar3 - param_1[0x4f];
}

