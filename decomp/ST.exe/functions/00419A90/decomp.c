
undefined4 __fastcall FUN_00419a90(void *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  short local_a;
  short local_8;
  short local_6;
  
  if (*(int *)((int)param_1 + 0xe8) == 1) {
    *(undefined4 *)((int)param_1 + 0xe8) = 0;
    thunk_FUN_004167a0((int)param_1);
    return 1;
  }
  thunk_FUN_004162b0(param_1,&local_6,&local_8,&local_a);
  cVar1 = thunk_FUN_00416330((int)param_1);
  if (cVar1 == '\0') {
    cVar1 = thunk_FUN_00416350((int)param_1);
    if (cVar1 == '\0') {
      if ((((local_6 < 0) || (DAT_007fb240 <= local_6)) || (local_8 < 0)) ||
         (((DAT_007fb242 <= local_8 || (local_a < 0)) || (DAT_007fb244 <= local_a)))) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = *(void **)(DAT_007fb248 +
                           ((uint)*(byte *)((int)param_1 + 0x8e) +
                           ((int)DAT_007fb246 * (int)local_a + (int)DAT_007fb240 * (int)local_8 +
                           (int)local_6) * 2) * 4);
      }
      if (pvVar2 == param_1) {
        thunk_FUN_004167a0((int)param_1);
        return 1;
      }
    }
  }
  iVar3 = thunk_FUN_00416400(param_1);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  if (iVar3 == 2) {
    thunk_FUN_004168b0((int)param_1);
  }
  return 0;
}

