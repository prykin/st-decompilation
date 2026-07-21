
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006e3210(AnonShape_006E3210_FE49985F *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;

  if ((-1 < param_2) && (-1 < param_3)) {
    iVar2 = param_1->field_0380 * 2;
    iVar3 = param_2 / iVar2;
    if ((-1 < iVar3) && (iVar1 = param_1->field_0284, iVar3 < iVar1)) {
      iVar4 = param_3 / iVar2;
      iVar6 = param_3 % iVar2;
      if ((-1 < iVar4) && (iVar4 < iVar1)) {
        param_3 = 5;
        piVar7 = (int *)(param_1->field_0280 + 0x459 +
                        (param_1->field_0288 * 5 + iVar3 + iVar1 * iVar4) * 4);
        do {
          if ((*piVar7 != 0) &&
             (uVar5 = (uint)*(byte *)(*(int *)(*piVar7 + 0x40) + param_1->field_0380 * iVar6 * 2 +
                                     param_2 % iVar2), uVar5 != 0)) {
            return (float10)(int)(((int)*(short *)(*piVar7 + 8) - (uint)*(byte *)(*piVar7 + 0x48)) *
                                  param_1->field_0384 + uVar5) * (float10)param_1->field_03A4 *
                   (float10)_DAT_0079dfa8 + (float10)param_1->field_0394;
          }
          piVar7 = piVar7 + -param_1->field_0288;
          param_3 = param_3 + -1;
        } while (0 < param_3);
      }
    }
  }
  return (float10)_DAT_0079034c;
}

