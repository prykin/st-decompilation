
undefined4 FUN_0074731f(AnonShape_0074731F_00DF946A *param_1,short *param_2)

{
  int *piVar1;
  undefined4 uVar2;

  if (param_2 == (short *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    if (param_1->field_0030 == (short *)0x0) {
      *param_2 = 0;
    }
    else {
      FUN_0074d59e(param_2,param_1->field_0030,0x80);
    }
    *(undefined4 *)(param_2 + 0x80) = param_1->field_0034;
    piVar1 = (int *)param_1->field_0034;
    if (piVar1 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

