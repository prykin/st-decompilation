
undefined4 FUN_0074728a(int param_1,ushort *param_2,uint *param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (param_3 == (uint *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
    EnterCriticalSection(lpCriticalSection);
    piVar1 = (int *)(param_1 + -0xc);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
    param_1 = 0;
    if (0 < iVar3) {
      do {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*piVar1 + 0x1c))(param_1);
        iVar5 = FUN_0074d5d3(*(ushort **)(iVar4 + 0x14),param_2);
        if (iVar5 == 0) {
          piVar1 = (int *)(iVar4 + 0xc);
          *param_3 = -(uint)(iVar4 != 0) & (uint)piVar1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar1 + 4))(piVar1);
          LeaveCriticalSection(lpCriticalSection);
          return 0;
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar3);
    }
    *param_3 = 0;
    LeaveCriticalSection(lpCriticalSection);
    uVar2 = 0x80040216;
  }
  return uVar2;
}

