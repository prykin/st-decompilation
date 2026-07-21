
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0041E530 -> 004AD4A0 @ 0041EE4E */

int __thiscall FUN_004ad4a0(void *this,int *param_1,char *text)

{
  ushort *puVar1;

  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (param_1,CASE_16,text,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)((int)this + 0x38) = puVar1;
  return (puVar1 != (ushort *)0x0) - 1;
}

