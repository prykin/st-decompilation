
/* [STPrototypeApplier] Propagated return.
   Evidence: 00544100 returns return of FUN_006e6000 @ 00544137 */

int __thiscall
FUN_00544100(void *this,int param_1,undefined4 *param_2,AnonShape_00544100_1A02F945 *param_3)

{
  int iVar1;

  param_3->field_0004 = *(undefined4 *)(&DAT_00808276 + param_1 * 4);
  param_3->field_001C = *(undefined4 *)(&DAT_008082ee + param_1 * 4);
  param_3->field_003C = *(undefined4 *)(&DAT_00808366 + param_1 * 4);
  iVar1 = FUN_006e6000(this,3,1,param_2);
  return iVar1;
}

