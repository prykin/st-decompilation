
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::Init */

undefined4 * __thiscall STDcResourcC::Init(STDcResourcC *this,uint param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  STT3DSprC *this_00;
  int iVar3;
  STDcResourcCVTable *pSVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (puVar2 != (undefined4 *)0x0) {
    this_00 = (STT3DSprC *)thunk_FUN_004ab810(puVar2);
    if (this_00 != (STT3DSprC *)0x0) {
      puVar2 = (undefined4 *)Library::MSVCRT::FUN_0072e530((int)this[1].vtable * 4 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00);
        return (undefined4 *)0x0;
      }
      pSVar4 = this[1].vtable;
      if (pSVar4 != (STDcResourcCVTable *)0x0) {
        puVar5 = *(undefined4 **)&this[1].field_0x8;
        puVar6 = puVar2;
        for (; pSVar4 != (STDcResourcCVTable *)0x0;
            pSVar4 = (STDcResourcCVTable *)((int)&pSVar4[-1].slot_120 + 3)) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this[1].field_0x8);
      }
      *(undefined4 **)&this[1].field_0x8 = puVar2;
      puVar2[(int)this[1].vtable] = this_00;
      this[1].vtable = (STDcResourcCVTable *)((int)&(this[1].vtable)->GetMessage + 1);
      iVar3 = STT3DSprC::Init(this_00,DAT_008073cc,0x5a,0x45,(uint)this,0xb4,0x8c,0x11);
      if (iVar3 != 0) {
        iVar3 = ReportDebugMessage(s_E____titans_Igor_To_gold_cpp_007cb19c,0x203,0,0,&DAT_007a4ccc,
                                   s_STDcResourcC__Init_Sprite_Error_007cb264);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          puVar2 = (undefined4 *)(*pcVar1)();
          return puVar2;
        }
        return (undefined4 *)0x0;
      }
      return (undefined4 *)this_00;
    }
  }
  return (undefined4 *)0x0;
}

