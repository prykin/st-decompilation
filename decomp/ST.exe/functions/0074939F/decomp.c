
undefined4 FUN_0074939f(int *param_1)

{
  AnonShape_0074931D_CA8B6F7D *pAVar1;
  int iVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;

  pAVar1 = (AnonShape_0074931D_CA8B6F7D *)(param_1 + -3);
  lpCriticalSection =
       (LPCRITICAL_SECTION)
       (-(uint)(pAVar1 != (AnonShape_0074931D_CA8B6F7D *)0x0) & (uint)(param_1 + 1));
  EnterCriticalSection(lpCriticalSection);
  if ((param_1[0x11] == 0) && (param_1[0x12] == 0)) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    param_1[0x11] = 0;
    iVar3 = param_1[8];
    iVar2 = param_1[0xc];
    if (iVar2 <= iVar3) {
      param_1[0x12] = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)pAVar1 + 0x10))();
    }
    else {
      param_1[0x12] = 1;
    }
    FUN_0074931d(pAVar1);
    LeaveCriticalSection(lpCriticalSection);
    if (iVar2 <= iVar3) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return 0;
}

