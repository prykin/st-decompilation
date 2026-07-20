
undefined4 __fastcall FUN_00603120(AnonShape_00603120_1977E258 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  
  sVar1 = param_1->field_0259;
  sVar4 = param_1->field_0255;
  sVar5 = param_1->field_0257;
  if (((((sVar4 < 0) || (SHORT_007fb240 <= sVar4)) || (sVar5 < 0)) ||
      (((SHORT_007fb242 <= sVar5 || (sVar1 < 0)) ||
       ((SHORT_007fb244 <= sVar1 ||
        ((iVar2 = *(int *)(DAT_007fb248 +
                          ((int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar5 +
                          (int)sVar4) * 8), iVar2 == 0 || (*(int *)(iVar2 + 0x20) != 1000)))))))) &&
     ((param_1->field_0245 != 0 ||
      ((((((((short)(sVar4 + 1) < 0 || (SHORT_007fb240 <= (short)(sVar4 + 1))) || (sVar5 < 0)) ||
          ((SHORT_007fb242 <= sVar5 || (sVar1 < 0)))) || (SHORT_007fb244 <= sVar1)) ||
        ((iVar2 = *(int *)(DAT_007fb248 +
                          ((int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar5 +
                          (int)(short)(sVar4 + 1)) * 8), iVar2 == 0 ||
         (*(int *)(iVar2 + 0x20) != 1000)))) &&
       (((((sVar5 = sVar5 + 1, sVar4 < 0 ||
           (((SHORT_007fb240 <= sVar4 || (sVar5 < 0)) || (SHORT_007fb242 <= sVar5)))) ||
          (((sVar1 < 0 || (SHORT_007fb244 <= sVar1)) ||
           (iVar2 = *(int *)(DAT_007fb248 +
                            ((int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar5 +
                            (int)sVar4) * 8), iVar2 == 0)))) || (*(int *)(iVar2 + 0x20) != 1000)) &&
        ((((sVar4 = sVar4 + 1, sVar4 < 0 || (SHORT_007fb240 <= sVar4)) ||
          ((sVar5 < 0 || (((SHORT_007fb242 <= sVar5 || (sVar1 < 0)) || (SHORT_007fb244 <= sVar1)))))
          ) || ((iVar2 = *(int *)(DAT_007fb248 +
                                 ((int)SHORT_007fb246 * (int)sVar1 +
                                  (int)SHORT_007fb240 * (int)sVar5 + (int)sVar4) * 8), iVar2 == 0 ||
                (*(int *)(iVar2 + 0x20) != 1000)))))))))))) {
    if (param_1->field_03A6 != '\0') {
      param_1->field_03A6 = 0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (param_1->field_03A6 == '\0') {
      param_1->field_03A6 = 1;
      return uVar3;
    }
  }
  return uVar3;
}

