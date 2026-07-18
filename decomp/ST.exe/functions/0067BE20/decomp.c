
void __fastcall FUN_0067be20(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 in_EAX;
  void *pvVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 extraout_EDX;
  undefined2 *puVar3;
  short local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  int local_8;
  
  uVar1 = *(uint *)(param_3 + 0xc);
  local_8 = param_1;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    if ((uVar1 < *(uint *)(param_3 + 0xc)) &&
       (puVar3 = (undefined2 *)(*(int *)(param_3 + 8) * uVar1 + *(int *)(param_3 + 0x1c)),
       puVar3 != (undefined2 *)0x0)) {
      pvVar2 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)param_2 >> 8),
                                                   *(undefined1 *)(local_8 + 0x640)),
                                          CONCAT22((short)((uint)in_EAX >> 0x10),*puVar3),1);
      if (pvVar2 == (void *)0x0) {
        in_EAX = FUN_006b0c70(param_3,uVar1);
        param_2 = extraout_EDX;
      }
      else {
        thunk_FUN_0067bda0(&local_14,pvVar2);
        puVar3[2] = local_14;
        puVar3[3] = local_12;
        param_2 = CONCAT22(extraout_var_00,local_c);
        puVar3[4] = local_10;
        in_EAX = CONCAT22(extraout_var,local_a);
        puVar3[5] = local_e;
        puVar3[6] = local_c;
        puVar3[7] = local_a;
      }
    }
  }
  return;
}

