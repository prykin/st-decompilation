
undefined4 FUN_00757cd0(AnonShape_00757D90_5427B306 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;

  uVar1 = param_1->field_018E;
  do {
    if ((int)uVar1 < 0xc0) {
LAB_00757ce8:
      iVar2 = 2;
    }
    else if (((((int)uVar1 < 0xd0) || (0xd7 < (int)uVar1)) || (uVar1 == (param_2 + 1U & 7) + 0xd0))
            || (uVar1 == (param_2 + 2U & 7) + 0xd0)) {
      iVar2 = 3;
    }
    else {
      if ((uVar1 == (param_2 - 1U & 7) + 0xd0) || (uVar1 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_00757ce8;
      iVar2 = 1;
    }
    if (iVar2 == 1) {
      param_1->field_018E = 0;
      return 1;
    }
    if (iVar2 == 2) {
      iVar2 = FUN_00757d90(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = param_1->field_018E;
    }
    else if (iVar2 == 3) {
      return 1;
    }
  } while( true );
}

