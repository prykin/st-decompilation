
void __fastcall FUN_0067be20(int param_1,undefined4 param_2,DArrayTy *param_3)

{
  uint uVar1;
  undefined4 in_EAX;
  STFishC *objPtr;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 extraout_EDX;
  undefined2 *puVar2;
  short local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  int local_8;
  
  uVar1 = param_3->count;
  local_8 = param_1;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    if ((uVar1 < param_3->count) &&
       (puVar2 = (undefined2 *)(param_3->elementSize * uVar1 + (int)param_3->data),
       puVar2 != (undefined2 *)0x0)) {
      objPtr = (STFishC *)
               STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(local_8 + 0x640)),
                          CONCAT22((short)((uint)in_EAX >> 0x10),*puVar2),CASE_1);
      if (objPtr == (STFishC *)0x0) {
        in_EAX = FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_3,uVar1);
        param_2 = extraout_EDX;
      }
      else {
        thunk_FUN_0067bda0(&local_14,objPtr);
        puVar2[2] = local_14;
        puVar2[3] = local_12;
        param_2 = CONCAT22(extraout_var_00,local_c);
        puVar2[4] = local_10;
        in_EAX = CONCAT22(extraout_var,local_a);
        puVar2[5] = local_e;
        puVar2[6] = local_c;
        puVar2[7] = local_a;
      }
    }
  }
  return;
}

