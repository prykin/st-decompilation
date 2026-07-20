
undefined4 __fastcall FUN_00492b20(int param_1)

{
  undefined4 in_EAX;
  STFishC *this;
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined4 *puVar8;
  int iVar9;
  short sVar10;
  undefined4 *puVar11;
  int local_10;
  short local_c [2];
  short local_8;
  short local_6;
  
  this = (STFishC *)
         STAllPlayersC::GetObjPtr
                   (g_sTAllPlayers_007FA174,
                    CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x5fc)),
                    CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)(param_1 + 0x5fd)),CASE_1)
  ;
  if ((((((this != (STFishC *)0x0) && (this->field_0018 == *(int *)(param_1 + 0x5ff))) &&
        (iVar1 = (*this->vtable->slot_108)(*(undefined4 *)(param_1 + 0x24)), iVar1 != 0)) &&
       ((STFishC::sub_004162B0(this,&local_8,&local_6,local_c), -1 < local_8 &&
        (local_8 < SHORT_007fb278)))) && (-1 < local_6)) &&
     (((local_6 < SHORT_007fb27a && (-1 < local_c[0])) && ((int)local_c[0] < SHORT_007fb27c + -1))))
  {
    *(short *)(param_1 + 0x609) = local_8;
    *(short *)(param_1 + 0x60b) = local_6;
    *(short *)(param_1 + 0x60d) = local_c[0];
    uVar4 = (int)SHORT_007fb27c * (int)SHORT_007fb27a * (int)SHORT_007fb278;
    puVar8 = DAT_007fb280;
    puVar11 = DAT_007fb238;
    for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    FUN_006ab090((int)DAT_007fb238,(int)SHORT_007fb278,(int)SHORT_007fb27a,(int)SHORT_007fb27c,
                 (int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),
                 (int)*(short *)(param_1 + 0x5f),(int)local_8,(int)local_6,local_c[0] + 1);
    if (*(int *)&this->field_0x2c == 0) {
      sVar7 = local_c[0] + 1;
      if ((((-1 < local_8) && (local_8 < SHORT_007fb240)) && (-1 < local_6)) &&
         (((local_6 < SHORT_007fb242 && (-1 < sVar7)) && (sVar7 < SHORT_007fb244)))) {
        if ((-1 < *(short *)((int)DAT_007fb280 +
                            ((int)sVar7 * (int)SHORT_007fb27e + (int)SHORT_007fb278 * (int)local_6 +
                            (int)local_8) * 2)) &&
           (*(short *)((int)DAT_007fb238 +
                      ((local_c[0] + 1) * (int)SHORT_007fb27e + (int)SHORT_007fb278 * (int)local_6 +
                      (int)local_8) * 2) != 0)) {
          *(short *)(param_1 + 0x603) = local_8;
          *(short *)(param_1 + 0x605) = local_6;
          *(short *)(param_1 + 0x607) = sVar7;
          return 1;
        }
      }
    }
    else if (*(int *)&this->field_0x2c == 1) {
      local_10 = 10000000;
      *(short *)(param_1 + 0x607) = local_c[0] + 1;
      iVar2 = (int)local_8;
      iVar1 = iVar2 + 1;
      if (iVar2 <= iVar1) {
        do {
          iVar6 = (int)local_6;
          if (iVar6 <= local_6 + 1) {
            do {
              sVar7 = (short)iVar2;
              iVar9 = (int)*(short *)((int)DAT_007fb238 +
                                     ((int)SHORT_007fb27e * (local_c[0] + 1) +
                                     iVar2 + SHORT_007fb278 * iVar6) * 2);
              if (((((-1 < sVar7) && (sVar7 < SHORT_007fb240)) && (sVar3 = (short)iVar6, -1 < sVar3)
                   ) && (((sVar3 < SHORT_007fb242 && (sVar10 = local_c[0] + 1, -1 < sVar10)) &&
                         ((sVar10 < SHORT_007fb244 &&
                          ((-1 < *(short *)((int)DAT_007fb280 +
                                           ((int)sVar10 * (int)SHORT_007fb27e +
                                            (int)sVar3 * (int)SHORT_007fb278 + (int)sVar7) * 2) &&
                           (iVar9 != 0)))))))) && (iVar9 < local_10)) {
                *(short *)(param_1 + 0x603) = sVar7;
                *(short *)(param_1 + 0x605) = sVar3;
                local_10 = iVar9;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 <= local_6 + 1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= iVar1);
        if (local_10 != 10000000) {
          return 1;
        }
      }
    }
  }
  return 0;
}

