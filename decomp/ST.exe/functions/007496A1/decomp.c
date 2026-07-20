
void __fastcall FUN_007496a1(AnonShape_007496A1_B3436AED *param_1)

{
  int *piVar1;
  int iVar2;
  
  while (piVar1 = (int *)param_1->field_0028, piVar1 != (int *)0x0) {
    iVar2 = piVar1[7];
    param_1->field_002C = param_1->field_002C + -1;
    param_1->field_0028 = iVar2;
    if (piVar1 == (int *)0x0) break;
    (**(code **)(*piVar1 + 0x54))(1);
  }
  param_1->field_003C = 0;
  if ((LPVOID)param_1->field_0058 != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1->field_0058,0,0x8000);
    param_1->field_0058 = 0;
  }
  return;
}

