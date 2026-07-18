
void FUN_00755da0(uint param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c);
  iVar1 = FUN_00753b80(param_1,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40 + iVar1 * 8),iVar1);
  *param_2 = *(undefined4 *)
              (*(int *)(*(int *)(param_1 + 0xc) + 0x44 +
                       *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8) + 0x10 + iVar1);
  FUN_00755d40(param_1,iVar1,
               *(int *)(*(int *)(param_1 + 0xc) + 0x44 +
                       *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8));
  FUN_007561d0(param_1,*(int *)(*(int *)(param_1 + 0xc) + 0x44 +
                               *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8));
  FUN_00755560(param_1,(ushort *)(param_2 + 2),param_2[1],*param_2);
  return;
}

