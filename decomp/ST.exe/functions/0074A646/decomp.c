
undefined4 __fastcall FUN_0074a646(void *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  MMRESULT MVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  void *local_c;
  void *local_8;
  
  if (((*(int *)((int)param_1 + 0x70) == 0) || (*(int *)((int)param_1 + 0x74) != 0)) ||
     (*(int *)((int)param_1 + 0xc0) != 0)) {
LAB_0074a6c4:
    uVar7 = 0;
  }
  else {
    piVar1 = *(int **)((int)param_1 + 0x18);
    local_c = param_1;
    local_8 = param_1;
    if (piVar1 != (int *)0x0) {
      uVar2 = *(uint *)((int)param_1 + 0x20);
      iVar3 = *(int *)((int)param_1 + 0x24);
      uVar4 = *(uint *)((int)param_1 + 0xb8);
      pvVar8 = (void *)(uVar2 + *(uint *)((int)param_1 + 0xb8));
      iVar5 = *(int *)((int)param_1 + 0xbc);
      (**(code **)(*piVar1 + 0xc))(piVar1,&local_c);
      uVar9 = __alldiv((int)pvVar8 - (int)local_c,
                       ((iVar3 + iVar5 + (uint)CARRY4(uVar2,uVar4)) - (int)local_8) -
                       (uint)(pvVar8 < local_c),10000,0);
      if (0x31 < (int)(UINT)uVar9) {
        MVar6 = timeSetEvent((UINT)uVar9,10,&LAB_0074a606,(DWORD_PTR)param_1,0);
        *(MMRESULT *)((int)param_1 + 0xc0) = MVar6;
        if (MVar6 != 0) goto LAB_0074a6c4;
      }
    }
    uVar7 = FUN_0074a6cb(param_1);
  }
  return uVar7;
}

