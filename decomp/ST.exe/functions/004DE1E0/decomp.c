
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004DE1E0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9 */

undefined4 __thiscall FUN_004de1e0(void *this,Global_sub_004DE1E0_param_1Enum param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  switch(param_1) {
  case CASE_0:
    uVar4 = 0x96;
    break;
  case CASE_1:
    uVar4 = 0x97;
    break;
  case CASE_2:
    uVar4 = 0x98;
    break;
  case CASE_3:
    uVar4 = 0x99;
    break;
  case CASE_4:
    uVar4 = 0x9a;
    break;
  case CASE_5:
    uVar4 = 0xa6;
    break;
  case CASE_6:
    uVar4 = 0xa9;
    break;
  case CASE_7:
    uVar4 = 0xa7;
    break;
  case CASE_8:
    uVar4 = 0xab;
    break;
  case CASE_9:
    uVar4 = 0xac;
  }
  puVar2 = (uint *)((int)this + 0x4d0);
  if (*(int *)((int)this + 0x4d0) < 0) {
    return 0;
  }
  puVar3 = (uint *)((int)this + 0x4dc);
  do {
    if (*puVar2 == uVar4) {
      *puVar3 = (uint)(*puVar3 == 0);
      puVar3[1] = *(uint *)(DAT_00802a38 + 0xe4);
      thunk_FUN_004ddcc0((int)this);
    }
    puVar1 = puVar3 + 2;
    puVar2 = puVar3 + 2;
    puVar3 = puVar3 + 5;
  } while (-1 < (int)*puVar1);
  return 0;
}

