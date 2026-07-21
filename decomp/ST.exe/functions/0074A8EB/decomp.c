
undefined4 __fastcall FUN_0074a8eb(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;

  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x25);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = param_1[0x1e];
  if (*(int *)(iVar1 + 0x18) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    uVar2 = 0;
  }
  else {
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(iVar1 + 0xc);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(iVar1 + 0xc) + 4))(iVar1 + 0xc);
    FUN_00747406(param_1,0x16,piVar3,0);
    uVar2 = 1;
    param_1[0x18] = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x70))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(param_1[0x1e] + 0xc) + 8))(param_1[0x1e] + 0xc);
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

