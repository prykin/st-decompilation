
undefined4 FUN_007476a9(AnonShape_00747E4E_3F64CF30 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;

  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = 0;
    iVar2 = FUN_00747e4e(param_1);
    if (iVar2 == 1) {
      *param_2 = 0;
      uVar1 = 0x80040203;
    }
    else {
      this = (void *)Library::MSVCRT::FUN_0072e530(0x30);
      if (this == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_0074756b(this,(AnonShape_0074756B_58F08DE7 *)param_1->field_000C);
      }
      *param_2 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        uVar1 = 0x8007000e;
      }
    }
  }
  return uVar1;
}

