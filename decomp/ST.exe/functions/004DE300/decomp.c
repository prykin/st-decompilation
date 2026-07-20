
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004DE300_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

undefined4 __thiscall FUN_004de300(void *this,Global_sub_004DE300_param_1Enum param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  switch(param_1) {
  case CASE_0:
    uVar3 = 0xbc;
    break;
  case CASE_1:
    uVar3 = 0xb3;
    break;
  case CASE_2:
    uVar3 = 0xb5;
    break;
  case CASE_3:
    uVar3 = 0xbd;
    break;
  case CASE_4:
    uVar3 = 0xad;
    break;
  case CASE_5:
    uVar3 = 0xb8;
    break;
  case CASE_6:
    uVar3 = 0xae;
    break;
  case CASE_7:
    uVar3 = 0xbe;
  }
  puVar2 = (uint *)((int)this + 0x4d0);
  if (*(int *)((int)this + 0x4d0) < 0) {
    return 0;
  }
  puVar4 = (uint *)((int)this + 0x4dc);
  do {
    if (*puVar2 == uVar3) {
      *puVar4 = (uint)(*puVar4 == 0);
      puVar4[1] = PTR_00802a38->field_00E4;
      thunk_FUN_004ddcc0(this);
    }
    puVar1 = puVar4 + 2;
    puVar2 = puVar4 + 2;
    puVar4 = puVar4 + 5;
  } while (-1 < (int)*puVar1);
  return 0;
}

