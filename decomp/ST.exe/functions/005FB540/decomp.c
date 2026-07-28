
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005FB567 SHR EAX,0x10 classifies dword parameter loaded at 005FB543 */

undefined4 __thiscall
FUN_005fb540(void *this,uint param_1,short *param_2,short *param_3,short *param_4,int *param_5)

{
  *param_2 = *(short *)((int)this + 0x41) + (short)(char)param_1;
  *param_3 = (short)(char)(param_1 >> 8) + *(short *)((int)this + 0x43);
  *param_4 = (short)(char)(param_1 >> 0x10) + *(short *)((int)this + 0x45);
  *param_5 = (int)(char)(param_1 >> 0x18) + (int)*(short *)((int)this + 0x45);
  return 0;
}

