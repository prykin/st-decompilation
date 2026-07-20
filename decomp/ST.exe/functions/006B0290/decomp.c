
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00428B20 -> 006B0290 @ 00428C58 */

void FUN_006b0290(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                 int param_7,int param_8,uint param_9,int param_10)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079d880;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  FUN_006cea60((undefined8 *)(param_2 * param_4 + param_1 + param_3),param_2,
               (undefined8 *)((int)param_5 + param_7 + param_6 * param_8),param_6,param_9,param_10);
  ExceptionList = local_14;
  return;
}

