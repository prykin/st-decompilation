
void FUN_006cec40(AnonShape_006CEC40_BB23E716 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (AnonShape_006CEC40_BB23E716 *)0x0) {
    piVar1 = param_1->field_0034;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x6c))(piVar1);
    }
    piVar1 = param_1->field_0040;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
      if (iVar2 == -0x7789fdb5) {
        FUN_006cecb0((AnonShape_006CECB0_97249119 *)param_1,1);
      }
    }
    piVar1 = param_1->field_0044;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
      if (iVar2 == -0x7789fdb5) {
        FUN_006cecb0((AnonShape_006CECB0_97249119 *)param_1,0);
      }
    }
    piVar1 = param_1->field_0048;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x6c))(piVar1);
    }
  }
  return;
}

