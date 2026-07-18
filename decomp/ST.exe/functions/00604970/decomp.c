
int __fastcall FUN_00604970(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_28 [4];
  undefined4 local_18;
  int local_8;
  
  iVar2 = 0;
  puVar3 = local_28;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_18 = 3;
  local_8 = 0;
  iVar1 = 0;
  if (0 < *(int *)((int)param_1 + 0x269)) {
    piVar4 = (int *)((int)param_1 + 0x219);
    do {
      if (*piVar4 != 0) {
        thunk_FUN_00627eb0((int)local_28);
        iVar1 = thunk_FUN_00604a00(param_1,iVar2);
        if (iVar1 != 0) {
          local_8 = local_8 + 1;
        }
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
      iVar1 = local_8;
    } while (iVar2 < *(int *)((int)param_1 + 0x269));
  }
  return iVar1;
}

