
void __fastcall FUN_00750287(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x50));
    uVar3 = 0;
    local_8 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      iVar1 = FUN_0074ded7(*(int *)(param_1 + 0x20));
      local_8 = *(int *)(iVar1 + 0x1c);
      uVar3 = *(uint *)(iVar1 + 0x18);
    }
    if ((*(int *)(param_1 + 100) != 0) && (0 < *(int *)(param_1 + 0x40))) {
      iVar1 = FUN_0074ded7(*(int *)(param_1 + 0x38));
      uVar2 = *(uint *)(iVar1 + 0x18) + *(uint *)(param_1 + 0x68);
      iVar1 = *(int *)(iVar1 + 0x1c) + *(int *)(param_1 + 0x6c) +
              (uint)CARRY4(*(uint *)(iVar1 + 0x18),*(uint *)(param_1 + 0x68));
      if ((uVar3 == 0 && local_8 == 0) ||
         ((iVar1 <= local_8 && ((iVar1 < local_8 || (uVar2 < uVar3)))))) {
        local_8 = iVar1;
        uVar3 = uVar2;
      }
    }
    if (((-1 < local_8) && ((0 < local_8 || (uVar3 != 0)))) &&
       ((uVar3 != *(uint *)(param_1 + 0x58) || (local_8 != *(int *)(param_1 + 0x5c))))) {
      if (*(int *)(param_1 + 0x54) != 0) {
        (**(code **)(**(int **)(param_1 + 0x60) + 0x18))
                  (*(int **)(param_1 + 0x60),*(int *)(param_1 + 0x54));
        ResetEvent(*(HANDLE *)(param_1 + 0x50));
      }
      (**(code **)(**(int **)(param_1 + 0x60) + 0x10))
                (*(int **)(param_1 + 0x60),uVar3,local_8,0,0,*(undefined4 *)(param_1 + 0x50),
                 param_1 + 0x54);
      *(uint *)(param_1 + 0x58) = uVar3;
      *(int *)(param_1 + 0x5c) = local_8;
    }
  }
  return;
}

