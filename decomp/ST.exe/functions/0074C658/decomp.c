
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0074BE76 -> 0074C658 @ 0074BED6 */

undefined4 * __thiscall
FUN_0074c658(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  CBaseOutputPin(this,param_1,param_2,param_2 + 0x5c,param_3,(short *)text);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(int *)((int)this + 0xa0) = param_2;
  *(VTable_007A1868 **)this = &VTable_007A1868;
  *(VTable_007A1820 **)((int)this + 0xc) = &VTable_007A1820;
  *(VTable_007A1808 **)((int)this + 0x10) = &VTable_007A1808;
  return this;
}

