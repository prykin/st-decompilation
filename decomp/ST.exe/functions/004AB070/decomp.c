
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AB070_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

undefined4 __thiscall
FUN_004ab070(void *this,Global_sub_004AB070_param_1Enum param_1,float param_2,int param_3,
            int param_4)

{
  DWORD DVar1;
  int iVar2;

  DVar1 = timeGetTime();
  if (DVar1 - *(int *)((int)this + 0x18) < 0x32) {
    if (*(int *)((int)this + 0x1c) == -2) {
      return 0xfffffffe;
    }
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    return 0;
  }
  DAT_008073e0 = 0;
  if (param_2 == 1.4013e-45) {
    if (param_3 == 0) {
      DAT_00807461 = DAT_00807461 + 1;
      if (0x18 < DAT_00807461) goto LAB_004ab0d1;
    }
    else {
      DAT_00807461 = 0;
    }
  }
  else {
LAB_004ab0d1:
    DAT_00807461 = 0x18;
  }
  param_2 = (float)(DAT_00807461 + 1) * *(float *)(&DAT_007ac584 + (uint)DAT_0080733a * 4) *
            _DAT_0079078c;
  if (param_4 == 1) {
    param_2 = param_2 * _DAT_00790788;
  }
  *(DWORD *)((int)this + 0x18) = DVar1;
  switch(param_1) {
  case CASE_1:
    iVar2 = thunk_FUN_004a9d60(param_2);
    break;
  case CASE_2:
    iVar2 = thunk_FUN_004a9fb0(param_2);
    break;
  case CASE_3:
    iVar2 = thunk_FUN_004aa200(param_2);
    break;
  case CASE_4:
    iVar2 = thunk_FUN_004aa450(param_2);
    break;
  case CASE_5:
    iVar2 = thunk_FUN_004aa6a0(param_2);
    break;
  case CASE_6:
    iVar2 = thunk_FUN_004aa8d0(param_2);
    break;
  case CASE_7:
    iVar2 = thunk_FUN_004aab00(param_2);
    break;
  case CASE_8:
    iVar2 = thunk_FUN_004aad30(param_2);
    break;
  default:
    goto switchD_004ab11d_default;
  }
  if (iVar2 == 1) {
    thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 0;
  }
switchD_004ab11d_default:
  *(undefined4 *)((int)this + 0x1c) = 0xfffffffe;
  return 0xfffffffe;
}

