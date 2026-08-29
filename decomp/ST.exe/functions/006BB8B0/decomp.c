
int FUN_006bb8b0(RecoveredRecordView_006BB8B0_05970482 *param_1)

{
  RecoveredRecordView_006BB8B0_05970482 *pRVar1;
  int iVar2;

  pRVar1 = param_1;
  param_1->field_0474 = 0;
  if ((param_1->field_000C & 0x1100) == 0x100) {
    return -0x7789fe52;
  }
  if (param_1->field_0040 == 0) {
    return -0x7789fe52;
  }
  if ((param_1->field_0008 & 0x4000000) != 0) {
    /* ST_CALLSITE[006BB8FA]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1[1].field_0x78);
  }
  RecoveredRecordView_006BB8B0_05970482 * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
  while( true ) {

    iVar2 = FUN_006bbe40((int *)pRVar1->field_0040,&pRVar1->field_0474,(int *)(pRVar1 + 1),0);
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 != -0x7789fe3e) break;
    FUN_006cec40((AnonShape_006CEC40_BB23E716 *)pRVar1);
    param_1_after_write = (RecoveredRecordView_006BB8B0_05970482 *)&param_1_after_write->field_0x1;
    if (1 < (int)param_1_after_write) {
LAB_006bb943:
      pRVar1->field_0474 = 0;
      *(int *)(pRVar1 + 1) = 0;
      if ((pRVar1->field_0008 & 0x4000000) != 0) {
        /* ST_CALLSITE[006BB964]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection((LPCRITICAL_SECTION)&pRVar1[1].field_0x78);
      }
      return iVar2;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  goto LAB_006bb943;
}

