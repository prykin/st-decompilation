
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 006D71D0 -> 0074CFC0 @ 006D7273 | 0074C96C -> 0074CFC0 @ 0074C9D4 */

undefined4 * __thiscall
FUN_0074cfc0(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  FUN_0074c658(this,param_1,param_2,param_3,text);
  *(int *)((int)this + 0xa8) = param_2;
  *(undefined ***)this = &PTR_FUN_007a19f0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_007a19a8;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_007a1990;
  return this;
}

