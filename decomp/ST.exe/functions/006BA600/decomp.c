
void FUN_006ba600(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((param_1[2] & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*param_1);
    }
    if ((HGDIOBJ)param_1[0x12d] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)param_1[0x12d]);
    }
    if ((HGDIOBJ)param_1[0x125] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)param_1[0x125]);
    }
    piVar1 = (int *)param_1[0x10];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x10] = 0;
    }
    piVar1 = (int *)param_1[0x11];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x11] = 0;
    }
    piVar1 = (int *)param_1[0x12];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x12] = 0;
    }
    piVar1 = (int *)param_1[0xf];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xf] = 0;
    }
    piVar1 = (int *)param_1[0xe];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xe] = 0;
    }
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xd] = 0;
    }
    if (((*(byte *)(param_1 + 2) & 1) != 0) && (piVar1 = (int *)param_1[0xc], piVar1 != (int *)0x0))
    {
      (**(code **)(*piVar1 + 0x4c))(piVar1);
    }
    piVar1 = (int *)param_1[0xc];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xc] = 0;
    }
    piVar1 = (int *)param_1[0xb];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xb] = 0;
    }
    FreeAndNull((void **)(param_1 + 0x130));
    FreeAndNull((void **)(param_1 + 0x137));
    if ((HGDIOBJ)param_1[0x138] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)param_1[0x138]);
    }
    if ((param_1[2] & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    FUN_006a5e90((short *)param_1);
  }
  return;
}

