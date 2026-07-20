
int FUN_006bb8b0(AnonShape_006BB8B0_D6DE56CA *param_1)

{
  AnonShape_006BB8B0_D6DE56CA *pAVar1;
  int iVar2;
  
  pAVar1 = param_1;
  param_1->field_0474 = 0;
  if ((param_1->field_000C & 0x1100) == 0x100) {
    return -0x7789fe52;
  }
  if (param_1->field_0040 == 0) {
    return -0x7789fe52;
  }
  if ((param_1->field_0008 & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1[1].field_0x78);
  }
  param_1 = (AnonShape_006BB8B0_D6DE56CA *)0x0;
  while( true ) {
    iVar2 = FUN_006bbe40((int *)pAVar1->field_0040,&pAVar1->field_0474,(int *)(pAVar1 + 1),0);
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 != -0x7789fe3e) break;
    FUN_006cec40((AnonShape_006CEC40_BB23E716 *)pAVar1);
    param_1 = (AnonShape_006BB8B0_D6DE56CA *)&param_1->field_0x1;
    if (1 < (int)param_1) {
LAB_006bb943:
      pAVar1->field_0474 = 0;
      *(int *)(pAVar1 + 1) = 0;
      if ((pAVar1->field_0008 & 0x4000000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&pAVar1[1].field_0x78);
      }
      return iVar2;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  goto LAB_006bb943;
}

