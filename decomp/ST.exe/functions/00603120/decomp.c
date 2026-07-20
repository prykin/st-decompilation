
undefined4 __fastcall FUN_00603120(AnonShape_00603120_1977E258 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = param_1->field_0259;
  sVar3 = param_1->field_0255;
  sVar4 = param_1->field_0257;
  if (((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar4 < 0)) ||
      (((SHORT_007fb242 <= sVar4 || (sVar1 < 0)) ||
       ((SHORT_007fb244 <= sVar1 ||
        ((g_worldCells
          [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar4 + (int)sVar3].objects
          [0] == (STWorldObject *)0x0 ||
         (g_worldCells
          [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar4 + (int)sVar3].objects
          [0]->value_20 != 1000)))))))) &&
     ((param_1->field_0245 != 0 ||
      ((((((((short)(sVar3 + 1) < 0 || (SHORT_007fb240 <= (short)(sVar3 + 1))) || (sVar4 < 0)) ||
          ((SHORT_007fb242 <= sVar4 || (sVar1 < 0)))) || (SHORT_007fb244 <= sVar1)) ||
        ((g_worldCells
          [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar4 +
           (int)(short)(sVar3 + 1)].objects[0] == (STWorldObject *)0x0 ||
         (g_worldCells
          [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar4 +
           (int)(short)(sVar3 + 1)].objects[0]->value_20 != 1000)))) &&
       (((((sVar4 = sVar4 + 1, sVar3 < 0 ||
           (((SHORT_007fb240 <= sVar3 || (sVar4 < 0)) || (SHORT_007fb242 <= sVar4)))) ||
          (((sVar1 < 0 || (SHORT_007fb244 <= sVar1)) ||
           (g_worldCells
            [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar4 + (int)sVar3].
            objects[0] == (STWorldObject *)0x0)))) ||
         (g_worldCells
          [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar4 + (int)sVar3].objects
          [0]->value_20 != 1000)) &&
        ((((sVar3 = sVar3 + 1, sVar3 < 0 || (SHORT_007fb240 <= sVar3)) ||
          ((sVar4 < 0 || (((SHORT_007fb242 <= sVar4 || (sVar1 < 0)) || (SHORT_007fb244 <= sVar1)))))
          ) || ((g_worldCells
                 [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar4 + (int)sVar3].
                 objects[0] == (STWorldObject *)0x0 ||
                (g_worldCells
                 [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar4 + (int)sVar3].
                 objects[0]->value_20 != 1000)))))))))))) {
    if (param_1->field_03A6 != '\0') {
      param_1->field_03A6 = 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (param_1->field_03A6 == '\0') {
      param_1->field_03A6 = 1;
      return uVar2;
    }
  }
  return uVar2;
}

