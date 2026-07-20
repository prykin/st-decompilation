
void __fastcall FUN_0074a88b(AnonShape_0074A88B_B70E22D8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x94);
  if ((((param_1->field_0060 == 0) && (iVar1 = param_1->field_0078, *(int *)(iVar1 + 0x18) != 0)) &&
      (*(char *)(iVar1 + 0xa1) == '\0')) &&
     ((param_1->field_0070 == 0 && (param_1->field_00B0 == 1)))) {
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(iVar1 + 0xc);
    }
    FUN_00747406(param_1,5,piVar2,0);
    FUN_0074a81d(param_1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x94);
  return;
}

