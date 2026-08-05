
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00580D30 -> 00580380 @ 00580D86; STResourceC::sub_00580D30 this; stable alias ESI

   [STPrototypeApplier] Propagated return.
   Evidence: 00580380 returns return of sub_006E60A0 @ 005803A6 */

int __fastcall FUN_00580380(STResourceC *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = param_1->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = sub_006E60A0(param_1,local_24);
  return iVar1;
}

