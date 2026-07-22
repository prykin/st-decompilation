
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0054F1D0 @ 0054F999
   -> TEST TEST EAX,EAX | 0054F1D0 @ 0054F9D0 -> TEST TEST EAX,EAX */

int __fastcall FUN_00550110(STPlaySystemC *param_1)

{
  uint uVar1;
  bool bVar2;

  uVar1 = 0;
  if ((byte)param_1->field_004E < (byte)param_1->field_004D) {
    param_1->field_003D->field_0005 = 0;
    param_1->field_004E = param_1->field_004E + '\x01';
    STPlaySystemC::sub_00550190(param_1);
    return 1;
  }
  if (param_1->field_003D != (AnonPointee_STPlaySystemC_003D *)0x0) {
    param_1->field_003D->field_0005 = param_1->field_0057;
    bVar2 = param_1->field_0057 != 0;
    if (bVar2) {
      STPlaySystemC::sub_00550190(param_1);
    }
    uVar1 = (uint)bVar2;
    param_1->field_0057 = 0;
  }
  return uVar1;
}

