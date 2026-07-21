
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B5EE0 -> 006B5B10 @ 006B5F34 | 006B5EE0 -> 006B5B10 @ 006B5F50 | 006B5EE0 ->
   006B5B10 @ 006B5F69 | 006C7570 -> 006B5EE0 @ 006C7601 */

void FUN_006b5ee0(AnonShape_006B5B10_E0D06CF1 *param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,byte param_7,int param_8)

{
  int iVar1;
  int iVar2;

  iVar1 = param_4 + -1 + param_6;
  iVar2 = param_3 + -1 + param_5;
  FUN_006b5b10(param_1,param_2,param_3,param_4,iVar2,param_4,param_7,param_8);
  FUN_006b5b10(param_1,param_2,iVar2,param_4 + 1,iVar2,iVar1 + -1,param_7,param_8);
  FUN_006b5b10(param_1,param_2,iVar2,iVar1,param_3,iVar1,param_7,param_8);
  FUN_006b5b10(param_1,param_2,param_3,iVar1 + -1,param_3,param_4 + 1,param_7,param_8);
  return;
}

