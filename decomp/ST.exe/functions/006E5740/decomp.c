
void __fastcall FUN_006e5740(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_24 [16];
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
    while (iVar1 != 0) {
      local_14 = 3;
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x1c);
      }
      puVar2 = *(undefined4 **)(iVar3 + 4);
      (**(code **)*puVar2)(local_24);
      FUN_006e3970(puVar2[2]);
      FUN_006b0c70(*(int *)(param_1 + 0x10),0);
      iVar3 = *(int *)(param_1 + 0x10);
      iVar1 = *(int *)(iVar3 + 0xc);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

