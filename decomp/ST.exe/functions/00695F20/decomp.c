
void __fastcall FUN_00695f20(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)param_1 + 0x5853) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x5853) + 0xc);
    uVar2 = 0;
    if (0 < iVar1) {
      do {
        thunk_FUN_00696050(param_1,uVar2);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < iVar1);
    }
    FUN_006ae110(*(byte **)((int)param_1 + 0x5853));
    *(undefined4 *)((int)param_1 + 0x5853) = 0;
  }
  return;
}

