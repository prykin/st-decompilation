
void __thiscall
FUN_004db160(void *this,int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,
            int *param_6)

{
  void *pvVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  STWorldObject *this_00;
  short sVar6;
  int *piVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  STWorldObjectVTable *pSVar12;
  int local_60 [21];
  void *local_c;
  int local_8;
  
  *param_6 = -1;
  sVar2 = (short)*param_3;
  local_c = this;
  if ((((((-1 < sVar2) && (sVar2 < SHORT_007fb240)) && (sVar8 = (short)*param_4, -1 < sVar8)) &&
       ((sVar8 < SHORT_007fb242 && (sVar6 = (short)*param_5, -1 < sVar6)))) &&
      ((sVar6 < SHORT_007fb244 &&
       ((this_00 = g_worldCells
                   [(int)SHORT_007fb246 * (int)sVar6 + (int)SHORT_007fb240 * (int)sVar8 + (int)sVar2
                   ].objects[0], this_00 != (STWorldObject *)0x0 &&
        (this_00[1].vtable != (STWorldObjectVTable *)param_1)))))) &&
     ((iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x3c ||
      (iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x53)))) {
    uVar4 = thunk_FUN_004406c0(*(char *)&this_00[1].vtable);
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      iVar3 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
    }
    else {
      if (uVar4 == 2) {
        pSVar12 = this_00[1].vtable;
        iVar3 = 0x43;
      }
      else {
        if (uVar4 != 3) goto LAB_004db257;
        pSVar12 = this_00[1].vtable;
        iVar3 = 99;
      }
      iVar3 = thunk_FUN_004e60d0((int)pSVar12,iVar3);
    }
    if (iVar3 != 0) {
      iVar3 = *param_5;
      iVar11 = *param_4;
      iVar10 = *param_3;
cf_common_join_004DB690:
      param_1 = iVar10;
      *param_6 = (int)this_00[1].vtable;
      if (param_1 < 0) {
        return;
      }
      if (iVar11 < 0) {
        return;
      }
      if (iVar3 < 0) {
        return;
      }
      iVar3 = 0;
      piVar7 = local_60;
      do {
        *piVar7 = iVar3;
        pvVar1 = local_c;
        iVar3 = iVar3 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar3 < 0x15);
      iVar3 = 0x15;
      do {
        uVar4 = *(int *)((int)pvVar1 + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)pvVar1 + 0x1c) = uVar4;
        uVar4 = (uVar4 >> 0x10) % 0x15;
        do {
          uVar9 = *(int *)((int)pvVar1 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)pvVar1 + 0x1c) = uVar9;
          uVar9 = (uVar9 >> 0x10) % 0x15;
        } while (uVar9 == uVar4);
        iVar10 = local_60[uVar4];
        iVar3 = iVar3 + -1;
        local_60[uVar4] = local_60[uVar9];
        local_60[uVar9] = iVar10;
      } while (iVar3 != 0);
      iVar3 = 1;
      uVar4 = *(int *)((int)local_c + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)local_c + 0x1c) = uVar4;
      uVar4 = (uVar4 >> 0x10) % 0xd2;
      iVar10 = 0;
      piVar7 = local_60;
      do {
        uVar4 = uVar4 - *piVar7;
        if ((int)uVar4 < 1) {
          iVar3 = local_60[iVar10];
          break;
        }
        iVar10 = iVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar10 < 0x15);
      uVar4 = *(int *)((int)local_c + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)local_c + 0x1c) = uVar4;
      uVar4 = (uVar4 >> 0x10) % 0x168;
      iVar10 = FUN_006aff50(uVar4);
      iVar10 = FUN_006b1280(iVar10 * iVar3);
      iVar10 = iVar10 + param_1;
      iVar5 = FUN_006aff5b(uVar4);
      iVar3 = FUN_006b1280(iVar5 * iVar3);
      iVar3 = iVar3 + iVar11;
      if (iVar10 < 0) {
        return;
      }
      if (SHORT_007fb240 <= iVar10) {
        return;
      }
      if (iVar3 < 0) {
        return;
      }
      if (SHORT_007fb242 <= iVar3) {
        return;
      }
      *param_3 = iVar10;
      *param_4 = iVar3;
      return;
    }
  }
LAB_004db257:
  param_5 = (int *)0x1;
  sVar2 = SHORT_007fb244;
  do {
    local_8 = 0;
    if (sVar2 != 1 && -1 < sVar2 + -1) {
      do {
        iVar10 = *param_3 - (int)param_5;
        if (iVar10 <= *param_3 + (int)param_5) {
          do {
            if ((-1 < iVar10) && (iVar10 < SHORT_007fb240)) {
              iVar11 = *param_4 - (int)param_5;
              sVar2 = (short)iVar10;
              if ((((-1 < iVar11) &&
                   (((iVar11 < SHORT_007fb242 && (-1 < sVar2)) && (sVar2 < SHORT_007fb240)))) &&
                  (((sVar8 = (short)iVar11, -1 < sVar8 && (sVar8 < SHORT_007fb242)) &&
                   (sVar6 = (short)local_8, -1 < sVar6)))) &&
                 (((sVar6 < SHORT_007fb244 &&
                   (this_00 = g_worldCells
                              [(int)sVar6 * (int)SHORT_007fb246 + (int)sVar8 * (int)SHORT_007fb240 +
                               (int)sVar2].objects[0], this_00 != (STWorldObject *)0x0)) &&
                  ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                   ((iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x3c ||
                    (iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x53)))))))) {
                uVar4 = thunk_FUN_004406c0(*(char *)&this_00[1].vtable);
                uVar4 = uVar4 & 0xff;
                if (uVar4 == 1) {
                  iVar5 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db3e4;
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar5 = thunk_FUN_004e60d0((int)pSVar12,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
LAB_004db3e4:
              iVar11 = *param_4 + (int)param_5;
              if ((((-1 < iVar11) && (iVar11 < SHORT_007fb242)) &&
                  (this_00 = (STWorldObject *)
                             thunk_FUN_004db980(sVar2,(short)iVar11,(short)local_8,0),
                  this_00 != (STWorldObject *)0x0)) &&
                 ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                  ((iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x3c ||
                   (iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x53)))))) {
                uVar4 = thunk_FUN_004406c0(*(char *)&this_00[1].vtable);
                uVar4 = uVar4 & 0xff;
                if (uVar4 == 1) {
                  iVar5 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db497;
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar5 = thunk_FUN_004e60d0((int)pSVar12,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db497:
            iVar10 = iVar10 + 1;
          } while (iVar10 <= *param_3 + (int)param_5);
        }
        iVar11 = (*param_4 - (int)param_5) + 1;
        if (iVar11 <= *param_4 + -1 + (int)param_5) {
          do {
            if ((-1 < iVar11) && (iVar11 < SHORT_007fb242)) {
              iVar10 = *param_3 - (int)param_5;
              if ((-1 < iVar10) &&
                 ((((iVar10 < SHORT_007fb240 &&
                    (this_00 = (STWorldObject *)
                               thunk_FUN_004db980((short)iVar10,(short)iVar11,(short)local_8,0),
                    this_00 != (STWorldObject *)0x0)) &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)) &&
                  ((iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x3c ||
                   (iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x53)))))) {
                uVar4 = thunk_FUN_004406c0(*(char *)&this_00[1].vtable);
                uVar4 = uVar4 & 0xff;
                if (uVar4 == 1) {
                  iVar5 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db58d;
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar5 = thunk_FUN_004e60d0((int)pSVar12,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
LAB_004db58d:
              iVar10 = *param_3 + (int)param_5;
              if ((((-1 < iVar10) && (iVar10 < SHORT_007fb240)) &&
                  ((this_00 = (STWorldObject *)
                              thunk_FUN_004db980((short)iVar10,(short)iVar11,(short)local_8,0),
                   this_00 != (STWorldObject *)0x0 &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)))) &&
                 ((iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x3c ||
                  (iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x53)))) {
                uVar4 = thunk_FUN_004406c0(*(char *)&this_00[1].vtable);
                uVar4 = uVar4 & 0xff;
                if (uVar4 == 1) {
                  iVar5 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db638;
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar5 = thunk_FUN_004e60d0((int)pSVar12,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db638:
            iVar11 = iVar11 + 1;
          } while (iVar11 <= *param_4 + -1 + (int)param_5);
        }
        local_8 = local_8 + 1;
        sVar2 = SHORT_007fb244;
      } while (local_8 < SHORT_007fb244 + -1);
    }
    param_5 = (int *)((int)param_5 + 1);
    if (7 < (int)param_5) {
      return;
    }
  } while( true );
}

