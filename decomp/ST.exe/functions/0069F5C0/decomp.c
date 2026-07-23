
void __thiscall FUN_0069f5c0(void *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;

  uVar1 = param_3;
  if (param_3 == 0) {
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    uVar2 = uVar2 & 0x8000000f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
  }
  else {
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    uVar2 = (int)uVar2 % 0xb;
  }
  param_3 = 0;
  puVar3 = thunk_FUN_00692c10(*(Global_sub_00692C10_param_1Enum *)(&DAT_007d7f90 + uVar2 * 8),
                              *(int *)(&DAT_007d7f94 + uVar2 * 8),&param_3,uVar1,0);
  puVar3[5] = param_1;
  puVar3[6] = param_2;
  CGenerate::sub_006A09F0(this,(byte *)puVar3,param_3);
  return;
}

