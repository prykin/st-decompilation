
undefined4 FUN_0074b4d1(AnonShape_0074B4D1_EE56C337 *param_1,int *param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  int iVar3;

  if (param_2 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1[-1].field_0x30);
    if (*(int *)&param_1[-1].field_0x18 == 0) {
      iVar3 = param_1->field_0078;
    }
    else {
      DVar2 = timeGetTime();
      iVar3 = DVar2 - param_1->field_0078;
    }
    if (iVar3 < 1) {
      *param_2 = 0;
    }
    else {
      iVar3 = MulDiv(100000,param_1->field_0044,iVar3);
      *param_2 = iVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[-1].field_0x30);
    uVar1 = 0;
  }
  return uVar1;
}

