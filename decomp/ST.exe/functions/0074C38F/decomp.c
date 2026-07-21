
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0074BE76 -> 0074C38F @ 0074BEA7 */

undefined4 * __thiscall
FUN_0074c38f(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  FUN_0074857e(this,param_1,param_2,param_2 + 0x5c,param_3,(short *)text);
  *(int *)((int)this + 0xd8) = param_2;
  *(VTable_007A17C8 **)this = &VTable_007A17C8;
  *(VTable_007A1780 **)((int)this + 0xc) = &VTable_007A1780;
  *(VTable_007A1768 **)((int)this + 0x10) = &VTable_007A1768;
  *(VTable_007A1740 **)((int)this + 0x98) = &VTable_007A1740;
  return this;
}

