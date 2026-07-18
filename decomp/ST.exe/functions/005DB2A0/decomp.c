
void __fastcall FUN_005db2a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  thunk_FUN_0055db70();
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_006f20e0((uint *)(param_1 + 0x2c));
  }
  if (*(uint **)(param_1 + 0x30) != (uint *)0x0) {
    FUN_00710560(*(uint **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(uint **)(param_1 + 0x34) != (uint *)0x0) {
    FUN_00710560(*(uint **)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  piVar2 = (int *)(param_1 + 0x244);
  iVar1 = 6;
  do {
    FUN_0070b1d0(piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00715ab0();
  FUN_00715ab0();
  FUN_00715ab0();
  if (-1 < (int)*(uint *)(param_1 + 0x2ec)) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)(param_1 + 0x2ec));
    *(undefined4 *)(param_1 + 0x2ec) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x2f0) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x2f0));
  }
  if (*(int *)(param_1 + 0x2f4) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x2f4));
  }
  FUN_00715ab0();
  if (*(byte **)(param_1 + 0x548) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(param_1 + 0x548));
  }
  *(undefined4 *)(param_1 + 0x548) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x540)) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)(param_1 + 0x540));
    *(undefined4 *)(param_1 + 0x540) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x544) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x544));
  }
  if (*(int *)(param_1 + 0x67e) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x67e));
  }
  FUN_00715ab0();
  FUN_00715ab0();
  if (-1 < (int)*(uint *)(param_1 + 0x558)) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)(param_1 + 0x558));
    *(undefined4 *)(param_1 + 0x558) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x682) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x682));
  }
  if (-1 < (int)*(uint *)(param_1 + 0x554)) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)(param_1 + 0x554));
    *(undefined4 *)(param_1 + 0x554) = 0xffffffff;
  }
  if (*(byte **)(param_1 + 0x686) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(param_1 + 0x686));
  }
  *(undefined4 *)(param_1 + 0x686) = 0;
  return;
}

