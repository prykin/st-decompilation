
undefined4 __fastcall FUN_00417d30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47),*(short *)(param_1 + 0x49),
                               *(short *)(param_1 + 0x4b),
                               CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x8e)),
                               (AnonShape_00495FF0_59081BDD *)param_1);
    return uVar1;
  }
  iVar2 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47),*(short *)(param_1 + 0x49),
                             *(short *)(param_1 + 0x4b),
                             CONCAT31((int3)((uint)*(int *)(param_1 + 0x2c) >> 8),
                                      *(undefined1 *)(param_1 + 0x8e)),
                             (AnonShape_00495FF0_59081BDD *)param_1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47) + 1,*(short *)(param_1 + 0x49),
                             *(short *)(param_1 + 0x4b),
                             CONCAT31((int3)((uint)extraout_EDX >> 8),
                                      *(undefined1 *)(param_1 + 0x8e)),
                             (AnonShape_00495FF0_59081BDD *)param_1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47),*(short *)(param_1 + 0x49) + 1,
                             *(short *)(param_1 + 0x4b),
                             CONCAT31((int3)((uint)extraout_ECX >> 8),
                                      *(undefined1 *)(param_1 + 0x8e)),
                             (AnonShape_00495FF0_59081BDD *)param_1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  uVar1 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x47) + 1,*(short *)(param_1 + 0x49) + 1,
                             *(short *)(param_1 + 0x4b),(uint)*(byte *)(param_1 + 0x8e),
                             (AnonShape_00495FF0_59081BDD *)param_1);
  return uVar1;
}

