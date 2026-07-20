
void FUN_006e8840(AnonShape_006E8840_CF3FA5BA *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  
  piVar2 = param_1->field_00A0;
  if (piVar2 != (int *)0x0) {
    local_c = param_1->field_0094;
    iVar5 = 0;
    iVar6 = 0;
    if (0 < local_c) {
      do {
        piVar3 = (int *)piVar2[1];
        if ((piVar3 != (int *)0x0) && (iVar4 = *piVar2, 0 < iVar4)) {
          do {
            iVar1 = *(int *)(*piVar3 + 4);
            if (iVar5 < iVar1) {
              iVar5 = iVar1;
            }
            iVar1 = *(int *)(*piVar3 + 8);
            if (iVar6 < iVar1) {
              iVar6 = iVar1;
            }
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        piVar2 = piVar2 + 2;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    param_1->field_0038 = iVar6;
    param_1->field_0034 = iVar5;
  }
  return;
}

