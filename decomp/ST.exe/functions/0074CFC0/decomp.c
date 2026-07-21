
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 006D71D0 -> 0074CFC0 @ 006D7273 | 0074C96C -> 0074CFC0 @ 0074C9D4 */

undefined4 * __thiscall
FUN_0074cfc0(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  FUN_0074c658(this,param_1,param_2,param_3,text);
  *(int *)((int)this + 0xa8) = param_2;
  *(VTable_007A19F0 **)this = &VTable_007A19F0;
  *(VTable_007A19A8 **)((int)this + 0xc) = &VTable_007A19A8;
  *(VTable_007A1990 **)((int)this + 0x10) = &VTable_007A1990;
  return this;
}

