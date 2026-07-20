
undefined4 __thiscall
FUN_00618240(void *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  undefined4 *puVar15;
  int iVar16;
  STWorldObject *this_00;
  int *piVar17;
  bool bVar18;
  short local_84 [2];
  int local_80;
  int *local_6c;
  int local_64;
  undefined1 *local_60;
  int local_5c;
  int local_58 [2];
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  int local_38;
  int local_34;
  int local_2c;
  int local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079cec0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff58;
  piVar17 = (int *)&stack0xffffff58;
  local_4c = 0;
  if (param_4 == (undefined4 *)0x0) {
    local_4c = 0;
  }
  else {
    sVar14 = (short)(param_1 >> 0x1f);
    if (param_1 < 0) {
      iVar16 = (short)(((short)(param_1 / 0xc9) + sVar14) -
                      (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar16 = (int)(short)(((short)(param_1 / 0xc9) + sVar14) -
                           (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    }
    sVar14 = (short)(param_2 >> 0x1f);
    if (param_2 < 0) {
      iVar10 = (short)(((short)(param_2 / 0xc9) + sVar14) -
                      (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar10 = (int)(short)(((short)(param_2 / 0xc9) + sVar14) -
                           (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    }
    sVar14 = (short)(param_3 >> 0x1f);
    if (param_3 < 0) {
      iVar5 = (short)(((short)(param_3 / 200) + sVar14) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(param_3 / 200) + sVar14) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
    }
    if (((((-1 < iVar16) && (-1 < iVar10)) && (-1 < iVar5)) &&
        ((iVar13 = (int)SHORT_007fb240, iVar16 < iVar13 &&
         (iVar12 = (int)SHORT_007fb242, iVar10 < iVar12)))) && (iVar5 < 5)) {
      local_2c = iVar10 + -5;
      if (local_2c < 0) {
        local_2c = 0;
      }
      iVar5 = local_2c;
      local_24 = iVar16 + -5;
      if (local_24 < 0) {
        local_24 = 0;
      }
      local_64 = iVar10 + 6;
      if (iVar12 < iVar10 + 6) {
        local_64 = iVar12;
      }
      local_5c = iVar16 + 6;
      if (iVar13 < iVar16 + 6) {
        local_5c = iVar13;
      }
      iVar16 = 0;
      local_8 = 0;
      ExceptionList = &local_14;
      Library::MSVCRT::FUN_0072da40();
      local_60 = &stack0xffffff58;
      local_1c = &stack0xffffff58;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      local_34 = 0;
      local_6c = (int *)&stack0xffffff58;
      local_1c = &stack0xffffff58;
      do {
        iVar10 = local_34;
        iVar13 = iVar5;
        local_38 = iVar5;
        if (iVar5 < local_64) {
          do {
            local_80 = local_24;
            iVar13 = local_24;
            local_38 = iVar5;
            if (local_24 < local_5c) {
              do {
                sVar14 = (short)iVar13;
                if (((sVar14 < 0) || (SHORT_007fb240 <= sVar14)) ||
                   ((sVar9 = (short)iVar5, sVar9 < 0 ||
                    (((SHORT_007fb242 <= sVar9 || (sVar11 = (short)iVar10, sVar11 < 0)) ||
                     (SHORT_007fb244 <= sVar11)))))) {
                  this_00 = (STWorldObject *)0x0;
                }
                else {
                  this_00 = g_worldCells
                            [(int)SHORT_007fb246 * (int)sVar11 + (int)SHORT_007fb240 * (int)sVar9 +
                             (int)sVar14].objects[0];
                  iVar10 = local_34;
                }
                if (((this_00 != (STWorldObject *)0x0) &&
                    (local_80 = iVar13, iVar12 = (*this_00->vtable[5].slots_00_28[0])(),
                    iVar5 = local_38, iVar10 = local_34, iVar12 != 0)) &&
                   ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                    ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                     ((byte)(&DAT_008087e9)[(int)this_00[1].vtable * 0x51] < 8)))))) {
                  bVar1 = *(byte *)&this_00[1].vtable;
                  bVar2 = *(byte *)((int)this + 0x20);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar2) {
LAB_0061856a:
                      iVar12 = 0;
                    }
                    else {
                      uVar7 = (uint)bVar1;
                      uVar4 = (uint)bVar2;
                      cVar3 = *(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4);
                      if ((cVar3 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7) == '\0')) {
                        iVar12 = -2;
                      }
                      else if ((cVar3 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7) == '\0')) {
                        iVar12 = -1;
                      }
                      else if ((cVar3 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7) == '\x01')) {
                        iVar12 = 1;
                      }
                      else {
                        if ((cVar3 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7) != '\x01'))
                        goto LAB_0061856a;
                        iVar12 = 2;
                      }
                    }
                    bVar18 = iVar12 < 0;
                  }
                  else {
                    bVar18 = (&DAT_008087ea)[(uint)bVar2 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                    iVar13 = local_80;
                  }
                  if ((bVar18) &&
                     (iVar12 = (*this_00->vtable[5].slots_00_28[2])(), iVar5 = local_38,
                     iVar10 = local_34, iVar12 != 0)) {
                    thunk_FUN_00416270(this_00,local_50,(int *)local_84,(int *)local_20);
                    puVar15 = (undefined4 *)(local_60 + iVar16 * 0x2c);
                    *puVar15 = this_00[1].vtable;
                    iVar10 = (*this_00->vtable->GetObjectTypeId)(this_00);
                    puVar15[1] = iVar10;
                    *(undefined4 *)((int)puVar15 + 0x26) = *(undefined4 *)&this_00->field_0x18;
                    *(undefined2 *)((int)puVar15 + 0x2a) = *(undefined2 *)&this_00[1].field_0xe;
                    *(STWorldObject **)((int)puVar15 + 0x1a) = this_00;
                    *(undefined2 *)(puVar15 + 5) = (undefined2)local_80;
                    *(undefined2 *)((int)puVar15 + 0x16) = (undefined2)local_38;
                    *(undefined2 *)(puVar15 + 6) = (undefined2)local_34;
                    puVar15[2] = (int)local_50[0];
                    puVar15[3] = (int)local_84[0];
                    puVar15[4] = (int)local_20[0];
                    uVar6 = FUN_006aced8(param_1,param_2,(int)local_50[0],(int)local_84[0]);
                    *(undefined4 *)((int)puVar15 + 0x1e) = uVar6;
                    iVar16 = iVar16 + 1;
                    iVar5 = local_38;
                    iVar10 = local_34;
                    iVar13 = local_80;
                  }
                }
                iVar13 = iVar13 + 1;
                local_80 = iVar13;
              } while (iVar13 < local_5c);
            }
            iVar5 = iVar5 + 1;
            iVar13 = local_2c;
            piVar17 = local_6c;
            local_38 = iVar5;
          } while (iVar5 < local_64);
        }
        local_34 = iVar10 + 1;
        iVar5 = iVar13;
      } while (local_34 < 5);
      if (0 < iVar16) {
        iVar10 = 0;
        if (0 < iVar16) {
          do {
            piVar17[iVar10] = iVar10;
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar16);
        }
        thunk_FUN_006189c0((int)local_60,piVar17,iVar16);
        local_58[0] = 1000;
        iVar10 = 0;
        if (0 < iVar16) {
          do {
            piVar17 = local_6c;
            uVar7 = thunk_FUN_00618a50(this,*(int *)(local_60 + local_6c[iVar10] * 0x2c + 0x26),
                                       local_58);
            if ((int)uVar7 < 0) {
              local_48 = *(undefined4 *)(local_60 + piVar17[iVar10] * 0x2c + 0x26);
              local_44 = (uint)*(ushort *)(local_60 + piVar17[iVar10] * 0x2c + 0x2a);
              if (*(int *)((int)this + 0x62) == 0) {
                puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,7,8,10);
                *(uint **)((int)this + 0x62) = puVar8;
              }
              uVar7 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x62),&local_48);
              local_58[0] = 0;
              if (-1 < (int)uVar7) goto LAB_0061871c;
            }
            else {
LAB_0061871c:
              if (local_58[0] < 3) {
                puVar15 = (undefined4 *)(local_60 + piVar17[iVar10] * 0x2c);
                for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
                  *param_4 = *puVar15;
                  puVar15 = puVar15 + 1;
                  param_4 = param_4 + 1;
                }
                ExceptionList = local_14;
                return 1;
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar16);
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_4c;
}

