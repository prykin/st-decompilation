
int FUN_007470e5(AnonShape_007470E5_0A8F5E67 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = param_1->field_002C;
  EnterCriticalSection(lpCriticalSection);
  iVar4 = 0;
  if (param_1->field_0008 == 0) {
    iVar1 = (**(code **)(*(int *)&param_1[-1].field_0x24 + 0x18))();
    if (0 < iVar1) {
      do {
        piVar2 = (int *)(**(code **)(*(int *)&param_1[-1].field_0x24 + 0x1c))(iVar4);
        if ((piVar2[6] != 0) && (iVar3 = (**(code **)(*piVar2 + 0x14))(), iVar3 < 0)) {
          LeaveCriticalSection(lpCriticalSection);
          return iVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  param_1->field_0008 = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

