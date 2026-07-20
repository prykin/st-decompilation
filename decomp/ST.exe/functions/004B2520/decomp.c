
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_004b2520(uint param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 *param_6
            ,undefined4 *param_7,undefined4 *param_8,int param_9,int *param_10)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  short sVar14;
  int *piVar15;
  STWorldObject *this;
  bool bVar16;
  int local_68;
  int local_64;
  int local_48;
  int local_34;
  STWorldObject *local_30;
  int local_2c;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00790940;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_30 = (STWorldObject *)0x0;
  ExceptionList = &local_14;
  *param_8 = 0xffffffff;
  *param_7 = 0xffffffff;
  *param_6 = 0xffffffff;
  *param_10 = 0;
  local_48 = 1;
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_34 = 0;
  local_8 = 0xffffffff;
  iVar6 = thunk_FUN_004b2390(param_1,param_3,param_4,param_5,param_10,1);
  if (iVar6 != 0) {
    local_34 = 1;
    goto cf_common_exit_004B2601;
  }
  if ((param_2 < 0x32) || (0x73 < param_2)) {
    if ((0 < param_2) && (param_2 < 0x29)) {
      local_2c = *(int *)(&DAT_007dfbac + param_2 * 4);
      goto LAB_004b266b;
    }
    local_2c = 0;
    uVar13 = _SHORT_007fb240;
    this = local_30;
  }
  else {
    uVar7 = thunk_FUN_004406c0((byte)param_1);
    local_2c = *(int *)(&DAT_007e3f20 + ((uVar7 & 0xff) + param_2 * 3) * 4);
LAB_004b266b:
    uVar13 = _SHORT_007fb240;
    for (iVar6 = param_3 + -8; this = local_30, iVar6 <= param_3 + 8; iVar6 = iVar6 + 1) {
      if ((-1 < iVar6) && (iVar6 < (short)uVar13)) {
        for (iVar10 = param_4 + -8; iVar10 <= param_4 + 8; iVar10 = iVar10 + 1) {
          if (((-1 < iVar10) &&
              (SHORT_007fb242 = (short)((uint)_SHORT_007fb240 >> 0x10), iVar8 = (int)SHORT_007fb242,
              iVar10 < iVar8)) && (iVar8 = 0, 0 < SHORT_007fb244 + -1)) {
            do {
              sVar4 = (short)iVar6;
              if ((((sVar4 < 0) || ((short)uVar13 <= sVar4)) ||
                  ((sVar5 = (short)iVar10, sVar5 < 0 ||
                   ((SHORT_007fb242 <= sVar5 || (sVar14 = (short)iVar8, sVar14 < 0)))))) ||
                 (SHORT_007fb244 <= sVar14)) {
                this = (STWorldObject *)0x0;
              }
              else {
                this = g_worldCells
                       [(int)sVar5 * (int)(short)uVar13 + (int)sVar14 * (int)SHORT_007fb246 +
                        (int)sVar4].objects[0];
              }
              if (((this != (STWorldObject *)0x0) && (this[1].vtable < (STWorldObjectVTable *)0x8))
                 && (((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                      ((byte)(&DAT_008087e9)[(int)this[1].vtable * 0x51] < 8)) &&
                     (iVar9 = (*this->vtable->GetObjectTypeId)(this), uVar13 = _SHORT_007fb240,
                     iVar9 == 0x6f)))) {
                bVar2 = *(byte *)&this[1].vtable;
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_004b281d:
                    iVar9 = 0;
                  }
                  else {
                    uVar7 = (uint)bVar2;
                    uVar12 = param_1 & 0xff;
                    cVar3 = *(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar12);
                    if ((cVar3 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar7) == '\0')) {
                      iVar9 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar7) == '\0')) {
                      iVar9 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar7) == '\x01')) {
                      iVar9 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar7) != '\x01'))
                      goto LAB_004b281d;
                      iVar9 = 2;
                    }
                  }
                  bVar16 = iVar9 < 0;
                }
                else {
                  bVar16 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar2 * 0x51];
                }
                if ((bVar16) && (local_2c < *(int *)&this[0x22].field_0x8)) goto LAB_004b288e;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < SHORT_007fb244 + -1);
          }
        }
      }
    }
  }
LAB_004b288e:
  local_30 = this;
  if (local_30 == (STWorldObject *)0x0) {
    if (*param_10 != 0) {
      *param_10 = 0;
      local_34 = 1;
      goto cf_common_exit_004B2601;
    }
    local_48 = 0;
  }
  else {
    puVar1 = &local_30[0x22].field_0x8;
    *(int *)puVar1 = *(int *)puVar1 - local_2c;
    if (*(int *)puVar1 < 0) {
      *(undefined4 *)&local_30[0x22].field_0x8 = 0;
    }
    *(undefined4 *)&local_30[0x22].field_0xc = PTR_00802a38->field_00E4;
    uVar13 = _SHORT_007fb240;
  }
  local_28 = 1;
  iVar6 = param_4 - param_3;
  local_64 = param_3;
  while( true ) {
    local_64 = local_64 + 1;
    local_68 = param_3 + -1;
    sVar4 = SHORT_007fb242;
    if (SHORT_007fb242 < (short)uVar13) {
      sVar4 = (short)uVar13;
    }
    if (sVar4 <= local_28) break;
    iVar10 = 0;
    if (0 < SHORT_007fb244 + -1) {
      do {
        if (local_68 <= local_64) {
          piVar15 = (int *)(&stack0xffffff7c + local_34 * 0xc);
          iVar8 = local_68;
          do {
            if ((-1 < iVar8) && (iVar8 < (short)uVar13)) {
              iVar9 = local_68 + iVar6;
              if ((-1 < iVar9) &&
                 ((iVar9 < SHORT_007fb242 &&
                  (iVar11 = thunk_FUN_004b2390(param_1,iVar8,iVar9,iVar10,param_10,local_48),
                  uVar13 = _SHORT_007fb240, iVar11 != 0)))) {
                *piVar15 = iVar8;
                piVar15[1] = iVar9;
                piVar15[2] = iVar10;
                local_34 = local_34 + 1;
                piVar15 = piVar15 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
              iVar9 = local_64 + iVar6;
              if (((-1 < iVar9) && (iVar9 < SHORT_007fb242)) &&
                 (iVar11 = thunk_FUN_004b2390(param_1,iVar8,iVar9,iVar10,param_10,local_48),
                 uVar13 = _SHORT_007fb240, iVar11 != 0)) {
                *piVar15 = iVar8;
                piVar15[1] = iVar9;
                piVar15[2] = iVar10;
                local_34 = local_34 + 1;
                piVar15 = piVar15 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 <= local_64);
        }
        iVar8 = iVar6 + 1 + local_68;
        iVar9 = iVar6 + -1 + local_64;
        if (iVar8 <= iVar9) {
          piVar15 = (int *)(&stack0xffffff7c + local_34 * 0xc);
          do {
            if ((-1 < iVar8) && (iVar8 < SHORT_007fb242)) {
              if ((-1 < local_68) &&
                 ((local_68 < (short)uVar13 &&
                  (iVar11 = thunk_FUN_004b2390(param_1,local_68,iVar8,iVar10,param_10,local_48),
                  uVar13 = _SHORT_007fb240, iVar11 != 0)))) {
                *piVar15 = local_68;
                piVar15[1] = iVar8;
                piVar15[2] = iVar10;
                local_34 = local_34 + 1;
                piVar15 = piVar15 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
              if (((-1 < local_64) && (local_64 < (short)uVar13)) &&
                 (iVar11 = thunk_FUN_004b2390(param_1,local_64,iVar8,iVar10,param_10,local_48),
                 uVar13 = _SHORT_007fb240, iVar11 != 0)) {
                *piVar15 = local_64;
                piVar15[1] = iVar8;
                piVar15[2] = iVar10;
                local_34 = local_34 + 1;
                piVar15 = piVar15 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 <= iVar9);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < SHORT_007fb244 + -1);
    }
    local_28 = local_28 + 1;
    param_3 = local_68;
  }
cf_common_exit_004B2601:
  if (local_34 != 0) {
    if (local_34 < 2) {
      local_34 = 0;
    }
    else {
      local_34 = param_9 % local_34;
    }
    local_34 = local_34 * 0xc;
    *param_6 = *(undefined4 *)(&stack0xffffff7c + local_34);
    *param_7 = *(undefined4 *)(&stack0xffffff80 + local_34);
    *param_8 = *(undefined4 *)(&stack0xffffff84 + local_34);
  }
  ExceptionList = local_14;
  return 0;
}

