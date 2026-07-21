
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004C7730_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8 */

uint __thiscall FUN_004c7730(void *this,Global_sub_004C7730_param_1Enum param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  uVar2 = *(uint *)(&DAT_00794d4c + param_1 * 4);
  switch(param_1) {
  case CASE_1:
    return *(uint *)(&DAT_007e049c + param_2 * 4);
  case CASE_2:
    iVar1 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_2);
    uVar2 = (&DAT_007e5478)[iVar1 + param_2 * 4];
    if (DAT_0080c51e != 0) {
      uVar4 = 0;
      puVar3 = &DAT_007e5478;
      do {
        if (uVar4 < *puVar3) {
          uVar4 = *puVar3;
        }
        puVar3 = puVar3 + 4;
      } while ((int)puVar3 < 0x7e5e28);
      uVar2 = (uVar2 * 0x5dc) / uVar4;
      if (0x5dc < uVar2) {
        return 0x5dc;
      }
    }
    break;
  case CASE_4:
    return DAT_007e6120;
  case CASE_5:
    return *(uint *)(&DAT_007e2da8 +
                    (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4);
  case CASE_6:
    return DAT_007e6184;
  case CASE_8:
    uVar2 = DAT_007e633c;
  }
  return uVar2;
}

