
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_004b0250(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            )

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  short *psVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  int local_88 [10];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  short *local_38;
  short *local_34;
  short local_2e;
  DArrayTy *local_2c;
  char *local_28;
  short local_22;
  int local_20;
  short *local_1c;
  int local_18;
  int local_14;
  short *local_10;
  STFishC *local_c;
  short *local_8;
  
  local_3c = -1;
  local_54 = -1;
  local_50 = -1;
  local_88[8] = 0;
  local_48 = 0;
  sVar13 = SHORT_007fb242;
  if (SHORT_007fb242 <= (short)_SHORT_007fb240) {
    sVar13 = (short)_SHORT_007fb240;
  }
  local_88[9] = (int)sVar13 / (int)(uint)DAT_008087c4._2_1_;
  local_40 = thunk_FUN_004e81b0(param_1,param_2 + -0x32,0);
  local_10 = (short *)Library::DKW::LIB::FUN_006aac70(SHORT_007fb246 * 5);
  local_2c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
  local_18 = 0;
  do {
    local_34 = (short *)(SHORT_007fb246 * local_18);
    local_14 = 0;
    uVar9 = _SHORT_007fb240;
    if (0 < SHORT_007fb242) {
      do {
        iVar14 = 0;
        if (0 < (short)uVar9) {
          psVar10 = (short *)((short)uVar9 * local_14 + (int)local_34);
          local_1c = (short *)((int)psVar10 * 8);
          local_8 = psVar10;
          do {
            local_c = *(STFishC **)((int)local_1c + DAT_007fb248);
            if (local_c == (STFishC *)0x0) {
              sVar13 = (short)iVar14;
              if (((((sVar13 < 0) || ((short)uVar9 <= sVar13)) ||
                   (sVar7 = (short)local_14, sVar7 < 0)) ||
                  ((SHORT_007fb242 <= sVar7 || (sVar4 = (short)local_18, sVar4 < 0)))) ||
                 (SHORT_007fb244 <= sVar4)) {
LAB_004b03a2:
                *(undefined1 *)((int)psVar10 + iVar14 + (int)local_10) = 3;
              }
              else {
                sVar13 = *(short *)(DAT_007fb280 +
                                   ((int)sVar4 * (int)SHORT_007fb27e +
                                    (int)sVar7 * (int)SHORT_007fb278 + (int)sVar13) * 2);
                if (sVar13 == 0) {
                  *(undefined1 *)((int)psVar10 + iVar14 + (int)local_10) = 0;
                }
                else {
                  if (sVar13 == -1) goto LAB_004b03a2;
                  *(undefined1 *)((int)psVar10 + iVar14 + (int)local_10) = 1;
                }
              }
            }
            else {
              if ((*(uint *)&local_c->field_0x24 < 8) &&
                 ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                  ((byte)(&DAT_008087e9)[*(uint *)&local_c->field_0x24 * 0x51] < 8)))) {
                bVar1 = local_c->field_0x24;
                local_28 = (char *)CONCAT31(local_28._1_3_,bVar1);
                if (*(char *)((int)&g_appClass_00806728[0x5d].field_0014 + 3) == '\0') {
                  if (bVar1 == (byte)param_1) {
LAB_004b04c9:
                    iVar8 = 0;
                  }
                  else {
                    uVar3 = (uint)bVar1;
                    uVar12 = param_1 & 0xff;
                    cVar2 = *(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                     uVar12 + uVar3 * 8 + 3);
                    if ((cVar2 == '\0') &&
                       (psVar10 = local_8,
                       *(char *)((int)&g_appClass_00806728[0x5c].field_000C + uVar3 + uVar12 * 8 + 3
                                ) == '\0')) {
                      iVar8 = -2;
                    }
                    else if ((cVar2 == '\x01') &&
                            (psVar10 = local_8,
                            *(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                     uVar3 + uVar12 * 8 + 3) == '\0')) {
                      iVar8 = -1;
                    }
                    else if ((cVar2 == '\0') &&
                            (psVar10 = local_8,
                            *(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                     uVar3 + uVar12 * 8 + 3) == '\x01')) {
                      iVar8 = 1;
                    }
                    else {
                      if ((cVar2 != '\x01') ||
                         (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                   uVar3 + uVar12 * 8 + 3) != '\x01')) goto LAB_004b04c9;
                      iVar8 = 2;
                    }
                  }
                  bVar16 = iVar8 < 0;
                }
                else {
                  bVar16 = *(char *)((param_1 & 0xff) * 0x51 + 0x11ca + (int)g_appClass_00806728) !=
                           *(char *)((uint)bVar1 * 0x51 + 0x11ca + (int)g_appClass_00806728);
                }
                if (bVar16) {
                  *(undefined1 *)((int)psVar10 + iVar14 + (int)local_10) = 4;
                  iVar8 = (*local_c->vtable->vfunc_2C)();
                  if (((&STGroupBoatCVTable.vfunc_04)[iVar8] == (void *)0x2) ||
                     ((iVar8 = (*local_c->vtable->vfunc_2C)(), iVar8 == 0x78 &&
                      ((&STGroupBoatCVTable.vfunc_04)[*(int *)&local_c->field_0x259] == (void *)0x2)
                      ))) {
                    Library::DKW::TBL::FUN_006ae1c0(&local_2c->flags,&local_c);
                  }
                  goto LAB_004b057d;
                }
              }
              iVar8 = (*local_c->vtable->vfunc_2C)();
              if (((&STGroupBoatCVTable.vfunc_04)[iVar8] == (void *)0x2) ||
                 ((iVar8 = (*local_c->vtable->vfunc_2C)(), iVar8 == 0x78 &&
                  ((&STGroupBoatCVTable.vfunc_04)[*(int *)&local_c->field_0x259] == (void *)0x2))))
              {
                *(undefined1 *)((int)psVar10 + iVar14 + (int)local_10) = 6;
                Library::DKW::TBL::FUN_006ae1c0(&local_2c->flags,&local_c);
              }
              else {
                *(undefined1 *)((int)psVar10 + iVar14 + (int)local_10) = 5;
              }
            }
LAB_004b057d:
            iVar14 = iVar14 + 1;
            local_1c = local_1c + 4;
            uVar9 = _SHORT_007fb240;
          } while (iVar14 < (short)_SHORT_007fb240);
        }
        local_14 = local_14 + 1;
      } while (local_14 < SHORT_007fb242);
    }
    local_18 = local_18 + 1;
  } while (local_18 < 4);
  if (PTR_007fa150 != (DArrayTy *)0x0) {
    PTR_007fa150->iteratorIndex = 0;
    iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_c);
    while (-1 < iVar14) {
      if (local_c != (STFishC *)0x0) {
        STFishC::sub_004162B0(local_c,&local_22,(undefined2 *)((int)&param_2 + 2),&local_2e);
        *(undefined1 *)
         ((int)local_10 +
         (int)local_22 +
         (int)local_2e * (int)SHORT_007fb246 + (int)param_2._2_2_ * (int)SHORT_007fb240) = 2;
      }
      iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_c);
    }
  }
  local_18 = 0;
  uVar9 = _SHORT_007fb240;
  sVar13 = SHORT_007fb242;
  do {
    local_14 = 0;
    if (0 < sVar13) {
      do {
        local_8 = (short *)(int)(short)uVar9;
        iVar14 = 0;
        if (0 < (int)local_8) {
          do {
            iVar8 = (int)SHORT_007fb246;
            iVar11 = (int)local_8 * local_14;
            if (((*(char *)(iVar11 + iVar8 * local_18 + iVar14 + (int)local_10) == '\0') &&
                ((local_18 < 1 ||
                 (*(char *)((local_18 + -1) * iVar8 + iVar11 + iVar14 + (int)local_10) == '\x03'))))
               && ((3 < local_18 ||
                   (((cVar2 = *(char *)((local_18 + 1) * iVar8 + iVar11 + iVar14 + (int)local_10),
                     cVar2 != '\x01' && (cVar2 != '\x03')) && (cVar2 != '\x02')))))) {
              local_34 = (short *)(iVar8 * local_18 + (int)local_10);
              piVar15 = local_88;
              for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                *piVar15 = 0;
                piVar15 = piVar15 + 1;
              }
              param_1 = 0;
              if (0 < local_40) {
                local_20 = local_14 + -1;
                local_58 = (local_14 + 1) * (int)local_8;
                local_60 = (int)local_8 * local_20;
                local_4c = -(int)local_8;
                local_38 = (short *)(local_58 + (int)local_34);
                local_1c = (short *)(local_60 + (int)local_34);
                iVar8 = 1;
                local_28 = (char *)((int)local_34 + iVar14 + iVar11 + -1);
                local_44 = iVar14 - local_14;
                local_5c = local_14 - iVar14;
                do {
                  if ((local_88[0] == 0) && (iVar8 + iVar14 < (int)local_8)) {
                    cVar2 = *(char *)((int)local_34 + iVar8 + iVar14 + iVar11);
                    if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                      local_88[0] = 1;
                    }
                    else {
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((local_88[1] == 0) && (-1 < local_44 + local_20)) {
                    if ((*local_28 == '\x01') || (*local_28 == '\x03')) {
                      local_88[1] = 1;
                    }
                    else {
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((local_88[2] == 0) && (local_5c + iVar8 + iVar14 < (int)SHORT_007fb242)) {
                    if ((*(char *)((int)local_38 + iVar14) == '\x01') ||
                       (*(char *)((int)local_38 + iVar14) == '\x03')) {
                      local_88[2] = 1;
                    }
                    else {
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((local_88[3] == 0) && (-1 < local_20)) {
                    if ((*(char *)((int)local_1c + iVar14) == '\x01') ||
                       (*(char *)((int)local_1c + iVar14) == '\x03')) {
                      local_88[3] = 1;
                    }
                    else {
                      param_1 = param_1 + 1;
                    }
                  }
                  if (iVar8 * iVar8 < (local_40 * local_40) / 2) {
                    if (((local_88[4] == 0) && (iVar8 + iVar14 + local_5c < (int)SHORT_007fb242)) &&
                       (iVar8 + iVar14 < (int)local_8)) {
                      cVar2 = *(char *)((int)local_38 + iVar14 + iVar8);
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[4] = 1;
                      }
                      else {
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((local_88[5] == 0) && (-1 < local_20)) && (-1 < local_44 + local_20)) {
                      cVar2 = *(char *)((int)local_34 + iVar14 + (local_60 - iVar8));
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[5] = 1;
                      }
                      else {
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((local_88[6] == 0) && (local_5c + iVar8 + iVar14 < (int)SHORT_007fb242)) &&
                       (-1 < local_44 + local_20)) {
                      cVar2 = *(char *)((int)local_34 + iVar14 + (local_58 - iVar8));
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[6] = 1;
                      }
                      else {
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((local_88[7] == 0) && (-1 < local_20)) && (iVar8 + iVar14 < (int)local_8))
                    {
                      cVar2 = *(char *)((int)local_1c + iVar14 + iVar8);
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[7] = 1;
                      }
                      else {
                        param_1 = param_1 + 1;
                      }
                    }
                  }
                  local_58 = local_58 + (int)local_8;
                  local_38 = (short *)((int)local_38 + (int)local_8);
                  local_60 = local_60 + local_4c;
                  iVar8 = iVar8 + 1;
                  local_1c = (short *)((int)local_1c + local_4c);
                  local_28 = local_28 + -1;
                  local_20 = local_20 + -1;
                } while (iVar8 <= local_40);
              }
              iVar8 = local_54;
              iVar11 = local_54;
              if (local_2c->count != 0) {
                iVar8 = -1;
                local_54 = -1;
                local_2c->iteratorIndex = 0;
                iVar5 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)local_2c,&local_c);
                iVar11 = local_54;
                if (-1 < iVar5) {
                  iVar5 = local_40 / 2;
                  do {
                    STFishC::sub_004162B0
                              (local_c,&local_22,(undefined2 *)((int)&param_2 + 2),&local_2e);
                    iVar11 = FUN_006aced8((int)local_22,(int)param_2._2_2_,iVar14,local_14);
                    if ((iVar11 <= iVar5) && ((iVar8 < 0 || (iVar11 < iVar8)))) {
                      iVar8 = iVar11;
                    }
                    iVar6 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)local_2c,&local_c);
                    iVar11 = iVar8;
                  } while (-1 < iVar6);
                }
              }
              local_54 = iVar11;
              iVar11 = FUN_006aced8(iVar14,local_14,param_6,param_7);
              if (local_3c < 0) goto LAB_004b0a54;
              local_4c = iVar11 / local_88[9];
              if (local_4c <= local_3c / local_88[9]) {
                if (iVar8 < 0) {
                  if (local_50 < 0) {
LAB_004b0a3e:
                    if (((int)param_1 <= (int)local_48) &&
                       ((param_1 != local_48 || (local_3c < iVar11)))) goto LAB_004b0a79;
                  }
LAB_004b0a54:
                  local_48 = param_1;
                  *param_3 = iVar14;
                  *param_4 = local_14;
                  local_88[8] = 1;
                  *param_5 = local_18;
                  local_50 = iVar8;
                  local_3c = iVar11;
                }
                else if (-1 < local_50) {
                  if (iVar8 < 0) goto LAB_004b0a3e;
                  if ((local_50 < iVar8) ||
                     ((iVar8 == local_50 &&
                      (((int)local_48 < (int)param_1 ||
                       ((param_1 == local_48 && (iVar11 <= local_3c)))))))) goto LAB_004b0a54;
                }
              }
            }
LAB_004b0a79:
            iVar14 = iVar14 + 1;
            local_8 = (short *)(int)(short)_SHORT_007fb240;
            uVar9 = _SHORT_007fb240;
          } while (iVar14 < (int)local_8);
        }
        local_14 = local_14 + 1;
        sVar13 = SHORT_007fb242;
      } while (local_14 < SHORT_007fb242);
    }
    local_18 = local_18 + 1;
    if (3 < local_18) {
      FUN_006ae110((byte *)local_2c);
      FUN_006a5e90(local_10);
      return local_88[8];
    }
  } while( true );
}

