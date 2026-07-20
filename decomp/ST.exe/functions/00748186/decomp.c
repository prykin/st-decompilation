
undefined4 FUN_00748186(AnonShape_00748186_DDF6596C *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    if (param_1->field_0064 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1->field_0064 + 0xc;
    }
    *param_2 = iVar2;
    iVar2 = param_1->field_0064;
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0xc) + 4))(iVar2 + 0xc);
    }
    if (param_1->field_0008 == (short *)0x0) {
      *(undefined2 *)(param_2 + 2) = 0;
    }
    else {
      FUN_0074d580((short *)(param_2 + 2),param_1->field_0008);
    }
    param_2[1] = param_1->field_0058;
    uVar1 = 0;
  }
  return uVar1;
}

