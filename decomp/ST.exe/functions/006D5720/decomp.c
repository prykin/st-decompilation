
/* [STPrototypeRepairApplier] Propagated parameter 5.
   Evidence: 006D4FF0 -> 006D5720 @ 006D5023 */

undefined4 * __thiscall
FUN_006d5720(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            char *text)

{
  FUN_0074a95f(this,param_2,param_4,(short *)text);
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined4 *)((int)this + 0xe4) = param_3;
  *(VTable_0079DCBC **)this = &VTable_0079DCBC;
  *(VTable_0079DC74 **)((int)this + 0xc) = &VTable_0079DC74;
  *(VTable_0079DC60 **)((int)this + 0x10) = &VTable_0079DC60;
  *(VTable_0079DC3C **)((int)this + 0x98) = &VTable_0079DC3C;
  *(undefined4 *)((int)this + 0xe8) = 0;
  return this;
}

