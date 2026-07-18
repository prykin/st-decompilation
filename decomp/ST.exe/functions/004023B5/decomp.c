
void thunk_FUN_004f1d20(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_3c [7];
  undefined1 uStack_35;
  undefined4 uStack_34;
  
  puVar2 = (undefined4 *)auStack_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  auStack_3c[1] = 1;
  auStack_3c[0] = *param_1;
  auStack_3c[2] = param_1[1];
  auStack_3c._3_4_ = *(undefined4 *)(param_1 + 2);
  uStack_35 = param_1[6];
  uStack_34 = *(undefined4 *)(param_1 + 7);
  thunk_FUN_00526100(auStack_3c,0);
  return;
}

