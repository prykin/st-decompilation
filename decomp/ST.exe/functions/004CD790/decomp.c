
undefined4 __fastcall FUN_004cd790(AnonShape_004CD790_161F55D2 *param_1)

{
  STWorldObject *pSVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  
  iVar3 = param_1->field_05B4 + -1;
  sVar5 = (short)param_1->field_05B0;
  if (((((((-1 < iVar3) && (sVar6 = param_1->field_05B8, -1 < sVar5)) && (sVar5 < SHORT_007fb240))
        && ((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < SHORT_007fb242)))) &&
       ((-1 < sVar6 &&
        ((sVar6 < SHORT_007fb244 &&
         (pSVar1 = g_worldCells
                   [(int)SHORT_007fb246 * (int)sVar6 + (int)SHORT_007fb240 * (int)sVar2 + (int)sVar5
                   ].objects[0], pSVar1 != (STWorldObject *)0x0)))))) &&
      (iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar3)) &&
     ((iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar3 < 0x5b &&
      (*(int *)&pSVar1[0x29].field_0xf == 0)))) {
    *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
    thunk_FUN_004ce250(pSVar1,1);
  }
  iVar3 = param_1->field_05B4 + 1;
  if (((((iVar3 < SHORT_007fb242) && (sVar6 = param_1->field_05B8, -1 < sVar5)) &&
       (sVar5 < SHORT_007fb240)) &&
      (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < SHORT_007fb242)) &&
       ((-1 < sVar6 &&
        ((sVar6 < SHORT_007fb244 &&
         (pSVar1 = g_worldCells
                   [(int)SHORT_007fb246 * (int)sVar6 + (int)SHORT_007fb240 * (int)sVar2 + (int)sVar5
                   ].objects[0], pSVar1 != (STWorldObject *)0x0)))))))) &&
     ((iVar4 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar4 &&
      ((iVar4 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar4 < 0x5b &&
       (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
    *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
    thunk_FUN_004ce250(pSVar1,1);
  }
  iVar4 = param_1->field_05B0 + 1;
  if (iVar4 < SHORT_007fb240) {
    iVar3 = param_1->field_05B4 + -1;
    sVar5 = (short)iVar4;
    if (((((-1 < iVar3) && (sVar6 = param_1->field_05B8, -1 < sVar5)) && (sVar5 < SHORT_007fb240))
        && (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < SHORT_007fb242)) &&
            ((-1 < sVar6 &&
             ((sVar6 < SHORT_007fb244 &&
              (pSVar1 = g_worldCells
                        [(int)SHORT_007fb246 * (int)sVar6 + (int)sVar2 * (int)SHORT_007fb240 +
                         (int)sVar5].objects[0], pSVar1 != (STWorldObject *)0x0)))))))) &&
       ((iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar3 &&
        ((iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar3 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      thunk_FUN_004ce250(pSVar1,1);
    }
    iVar3 = param_1->field_05B4 + 2;
    if ((((((iVar3 < SHORT_007fb242) && (sVar6 = param_1->field_05B8, -1 < sVar5)) &&
          (sVar5 < SHORT_007fb240)) &&
         ((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < SHORT_007fb242)))) && (-1 < sVar6)) &&
       (((sVar6 < SHORT_007fb244 &&
         (pSVar1 = g_worldCells
                   [(int)SHORT_007fb246 * (int)sVar6 + (int)SHORT_007fb240 * (int)sVar2 + (int)sVar5
                   ].objects[0], pSVar1 != (STWorldObject *)0x0)) &&
        ((iVar4 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar4 &&
         ((iVar4 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar4 < 0x5b &&
          (*(int *)&pSVar1[0x29].field_0xf == 0)))))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      thunk_FUN_004ce250(pSVar1,1);
    }
  }
  iVar4 = param_1->field_05B0 + -1;
  if (-1 < iVar4) {
    sVar5 = param_1->field_05B8;
    sVar6 = (short)iVar4;
    if (((((-1 < sVar6) && (sVar6 < SHORT_007fb240)) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
        ((sVar2 < SHORT_007fb242 && (-1 < sVar5)))) &&
       (((sVar5 < SHORT_007fb244 &&
         ((pSVar1 = g_worldCells
                    [(int)SHORT_007fb246 * (int)sVar5 + (int)SHORT_007fb240 * (int)sVar2 +
                     (int)sVar6].objects[0], pSVar1 != (STWorldObject *)0x0 &&
          (iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar3)))) &&
        ((iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar3 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      thunk_FUN_004ce250(pSVar1,1);
    }
    iVar3 = param_1->field_05B4 + 1;
    if (((((iVar3 < SHORT_007fb242) && (sVar5 = param_1->field_05B8, -1 < sVar6)) &&
         (sVar6 < SHORT_007fb240)) &&
        (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < SHORT_007fb242)) &&
         ((-1 < sVar5 &&
          ((sVar5 < SHORT_007fb244 &&
           (pSVar1 = g_worldCells
                     [(int)SHORT_007fb246 * (int)sVar5 + (int)SHORT_007fb240 * (int)sVar2 +
                      (int)sVar6].objects[0], pSVar1 != (STWorldObject *)0x0)))))))) &&
       ((iVar4 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar4 &&
        ((iVar4 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar4 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      thunk_FUN_004ce250(pSVar1,1);
    }
  }
  iVar4 = param_1->field_05B0 + 2;
  if (iVar4 < SHORT_007fb240) {
    sVar5 = param_1->field_05B8;
    sVar6 = (short)iVar4;
    if (((((-1 < sVar6) && (sVar6 < SHORT_007fb240)) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
        ((sVar2 < SHORT_007fb242 && (-1 < sVar5)))) &&
       ((((sVar5 < SHORT_007fb244 &&
          ((pSVar1 = g_worldCells
                     [(int)SHORT_007fb246 * (int)sVar5 + (int)sVar2 * (int)SHORT_007fb240 +
                      (int)sVar6].objects[0], pSVar1 != (STWorldObject *)0x0 &&
           (iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar3)))) &&
         (iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar3 < 0x5b)) &&
        (*(int *)&pSVar1[0x29].field_0xf == 0)))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      thunk_FUN_004ce250(pSVar1,1);
    }
    iVar3 = param_1->field_05B4 + 1;
    if ((((iVar3 < SHORT_007fb242) && (sVar5 = param_1->field_05B8, -1 < sVar6)) &&
        (sVar6 < SHORT_007fb240)) &&
       (((((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < SHORT_007fb242)) &&
          ((-1 < sVar5 &&
           ((sVar5 < SHORT_007fb244 &&
            (pSVar1 = g_worldCells
                      [(int)SHORT_007fb246 * (int)sVar5 + (int)SHORT_007fb240 * (int)sVar2 +
                       (int)sVar6].objects[0], pSVar1 != (STWorldObject *)0x0)))))) &&
         (iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar3)) &&
        ((iVar3 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar3 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      thunk_FUN_004ce250(pSVar1,1);
    }
  }
  return 0;
}

