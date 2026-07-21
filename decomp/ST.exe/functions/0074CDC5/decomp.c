
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 006D71D0 -> 0074CDC5 @ 006D7212 | 0074C96C -> 0074CDC5 @ 0074C99D */

undefined4 * __thiscall
FUN_0074cdc5(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  FUN_0074c38f(this,param_1,param_2,param_3,text);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(int *)((int)this + 0xe0) = param_2;
  *(VTable_007A1950 **)this = &VTable_007A1950;
  *(VTable_007A1908 **)((int)this + 0xc) = &VTable_007A1908;
  *(VTable_007A18F0 **)((int)this + 0x10) = &VTable_007A18F0;
  *(VTable_007A18C8 **)((int)this + 0x98) = &VTable_007A18C8;
  return this;
}

