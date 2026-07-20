
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::Init */

undefined4 * __thiscall STDcResourcC::Init(STDcResourcC *this,uint param_1)

{
  code *pcVar1;
  AnonShape_004AB810_8E5693D5 *pAVar2;
  STT3DSprC *this_00;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pAVar2 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (pAVar2 != (AnonShape_004AB810_8E5693D5 *)0x0) {
    this_00 = (STT3DSprC *)thunk_FUN_004ab810(pAVar2);
    if (this_00 != (STT3DSprC *)0x0) {
      puVar3 = (undefined4 *)Library::MSVCRT::FUN_0072e530(this->field_0265 * 4 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00);
        return (undefined4 *)0x0;
      }
      iVar4 = this->field_0265;
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)this->field_026D;
        puVar6 = puVar3;
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)this->field_026D);
      }
      this->field_026D = puVar3;
      puVar3[this->field_0265] = this_00;
      this->field_0265 = this->field_0265 + 1;
      iVar4 = STT3DSprC::Init(this_00,DAT_008073cc,0x5a,0x45,(uint)this,0xb4,0x8c,0x11);
      if (iVar4 != 0) {
        iVar4 = ReportDebugMessage(s_E____titans_Igor_To_gold_cpp_007cb19c,0x203,0,0,&DAT_007a4ccc,
                                   s_STDcResourcC__Init_Sprite_Error_007cb264);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          puVar3 = (undefined4 *)(*pcVar1)();
          return puVar3;
        }
        return (undefined4 *)0x0;
      }
      return (undefined4 *)this_00;
    }
  }
  return (undefined4 *)0x0;
}

