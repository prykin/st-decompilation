
int __fastcall FUN_006048e0(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(int *)((int)param_1 + 0x215) != 0) &&
     (uVar1 = *(uint *)(*(int *)((int)param_1 + 0x215) + 0xc), 0 < (int)uVar1)) {
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      iVar2 = *(int *)((int)param_1 + 0x215);
      if (uVar1 < *(uint *)(iVar2 + 0xc)) {
        iVar2 = *(int *)(iVar2 + 8) * uVar1 + *(int *)(iVar2 + 0x1c);
      }
      else {
        iVar2 = 0;
      }
      if ((*(int *)(iVar2 + 0x10) == 10) &&
         (iVar2 = thunk_FUN_00604a00(param_1,*(int *)(iVar2 + 0x14)), iVar2 != 0)) {
        iVar3 = iVar3 + 1;
      }
      FUN_006b0c70(*(AnonShape_006B0C70_7C4FE646 **)((int)param_1 + 0x215),uVar1);
    }
  }
  return iVar3;
}

