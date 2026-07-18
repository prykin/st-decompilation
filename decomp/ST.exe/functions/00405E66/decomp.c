
undefined4 __thiscall
thunk_FUN_00484020(void *this,int param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  short sStack_56;
  undefined2 uStack_52;
  undefined4 auStack_50 [2];
  undefined4 auStack_48 [2];
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  short *psStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  uStack_38 = 0;
  if (param_1 == 6) {
    iStack_8 = 0x2c;
    puStack_c = &DAT_007a9538;
  }
  else if (param_1 == 7) {
    iStack_8 = 0x2c;
    puStack_c = &DAT_007a9640;
  }
  else if (param_1 == 8) {
    iStack_8 = 0x98;
    puStack_c = &DAT_007a9748;
  }
  else {
    iStack_8 = -1;
    puStack_c = (undefined *)0x0;
  }
  sVar3 = *(short *)((int)this + 0x800);
  sVar4 = *(short *)((int)this + 0x802);
  param_1 = CONCAT22((short)((uint)this >> 0x10),sVar4);
  sVar1 = *(short *)((int)this + 0x804);
  if (((((((sVar3 < 0) || (DAT_007fb240 <= sVar3)) || (sVar4 < 0)) ||
        ((DAT_007fb242 <= sVar4 || (sVar1 < 0)))) || (DAT_007fb244 <= sVar1)) ||
      (pvStack_10 = *(void **)(DAT_007fb248 +
                              ((int)sVar1 * (int)DAT_007fb246 + (int)sVar4 * (int)DAT_007fb240 +
                              (int)sVar3) * 8), pvStack_10 == (void *)0x0)) &&
     ((((sVar3 < 0 || (DAT_007fb240 <= sVar3)) ||
       ((sVar4 < 0 || (((DAT_007fb242 <= sVar4 || (sVar1 < 0)) || (DAT_007fb244 <= sVar1)))))) ||
      (pvStack_10 = *(void **)(DAT_007fb248 + 4 +
                              ((int)sVar1 * (int)DAT_007fb246 + (int)sVar4 * (int)DAT_007fb240 +
                              (int)sVar3) * 8), pvStack_10 == (void *)0x0)))) {
    return 0;
  }
  thunk_FUN_00416270(pvStack_10,(undefined2 *)&uStack_14,(undefined2 *)&uStack_18,
                     (undefined2 *)&param_1);
  iStack_30 = 0;
  if (0 < iStack_8) {
    psStack_34 = (short *)(puStack_c + 2);
    do {
      sVar3 = psStack_34[1] + *(short *)((int)this + 0x4b);
      *param_4 = sVar3;
      if ((-1 < sVar3) && ((int)sVar3 <= DAT_007fb244 + -1)) {
        sVar3 = *(short *)((int)this + 0x49) + *psStack_34;
        *param_3 = sVar3;
        if ((-1 < sVar3) && ((int)sVar3 <= DAT_007fb242 + -1)) {
          sVar4 = psStack_34[-1] + *(short *)((int)this + 0x47);
          *param_2 = sVar4;
          if (-1 < sVar4) {
            iStack_28 = (int)DAT_007fb240;
            iStack_2c = (int)sVar4;
            if (iStack_2c <= iStack_28 + -1) {
              sVar1 = *param_3;
              sVar2 = *param_4;
              if ((-1 < *(short *)(DAT_007fb280 +
                                  ((int)sVar2 * (int)DAT_007fb27e +
                                  iStack_2c + (int)sVar1 * (int)DAT_007fb278) * 2)) &&
                 ((((sVar4 < 0 || (DAT_007fb240 <= sVar4)) ||
                   ((sVar1 < 0 ||
                    (((DAT_007fb242 <= sVar1 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))))) ||
                  (*(int *)(DAT_007fb248 +
                           ((int)sVar2 * (int)DAT_007fb246 + sVar1 * iStack_28 + (int)sVar4) * 8) ==
                   0)))) {
                iVar12 = CONCAT22(sVar3 >> 0xf,sVar4) * 0xc9 + 100;
                puStack_c = (undefined *)
                            (CONCAT22((short)((uint)(iStack_28 + -1) >> 0x10),sVar1) * 0xc9 + 100);
                iVar9 = CONCAT22(sVar4 >> 0xf,sVar2) * 200 + 100;
                iStack_40 = iVar12;
                iStack_3c = iVar9;
                iVar5 = FUN_006acf0d((int)(short)iVar12,(int)(short)puStack_c,(int)(short)iVar9,
                                     (int)(short)uStack_14,(int)(short)uStack_18,(int)(short)param_1
                                    );
                if ((iVar5 <= *(short *)((int)this + 0x814)) &&
                   ((iVar5 < 1 ||
                    (uVar6 = (int)(short)param_1 - (int)(short)iVar9, uVar10 = (int)uVar6 >> 0x1f,
                    (int)(((uVar6 ^ uVar10) - uVar10) * 10) / iVar5 < 4)))) {
                  uStack_20 = (**(code **)(*(int *)this + 0x10))
                                        (iVar12,puStack_c,iVar9,uStack_14,uStack_18,param_1);
                  iStack_2c = 0;
                  if (*(char *)((int)this + 0x2b2) == '\0') {
                    return 1;
                  }
                  puVar11 = (ushort *)((int)this + 0x2a8);
                  do {
                    piVar7 = (int *)thunk_FUN_0041dc40(auStack_48,*(undefined4 *)(puVar11 + -1),
                                                       puVar11[1],(short)uStack_20);
                    sStack_56 = (short)((uint)*piVar7 >> 0x10);
                    iStack_28 = *piVar7 + iVar12;
                    sVar3 = (short)puStack_c - sStack_56;
                    iStack_24 = CONCAT22(uStack_52,(short)piVar7[1]) + iStack_3c;
                    puVar8 = (undefined4 *)
                             thunk_FUN_0041dc40(auStack_50,(uint)*puVar11 << 0x10,0,(short)uStack_20
                                               );
                    sStack_56 = (short)((uint)*puVar8 >> 0x10);
                    sVar4 = (short)uStack_14 + (short)*puVar8;
                    sStack_56 = (short)uStack_18 - sStack_56;
                    if (*(int *)((int)this + 0x736) == 0) {
                      iVar9 = thunk_FUN_0041f9b0((short)iStack_28,sVar3,(short)iStack_24,sVar4,
                                                 sStack_56,(short)param_1,
                                                 *(int *)((int)this + 0x79a),(int *)&pvStack_1c,0);
                      if ((iVar9 == 0) && (pvStack_1c != pvStack_10)) break;
                    }
                    else {
                      iVar9 = thunk_FUN_0041f9b0((short)iStack_28,sVar3,(short)iStack_24,sVar4,
                                                 sStack_56,(short)param_1,
                                                 *(int *)((int)this + 0x79a),(int *)&pvStack_1c,1);
                      if ((iVar9 == 0) && (pvStack_1c != pvStack_10)) break;
                    }
                    iStack_2c = iStack_2c + 1;
                    puVar11 = puVar11 + 3;
                    iVar12 = iStack_40;
                    if ((int)(uint)*(byte *)((int)this + 0x2b2) <= iStack_2c) {
                      return 1;
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
      iStack_30 = iStack_30 + 1;
      psStack_34 = psStack_34 + 3;
    } while (iStack_30 < iStack_8);
  }
  return uStack_38;
}

