
undefined4 __cdecl FUN_004b2d10(byte param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  STWorldObject *this;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((param_2 < 0x32) || (0x73 < param_2)) {
    if (param_2 < 1) {
      return 0;
    }
    if (0x28 < param_2) {
      return 0;
    }
    local_24 = *(int *)(&DAT_007dfbac + param_2 * 4);
  }
  else {
    uVar4 = thunk_FUN_004406c0(param_1);
    local_24 = *(int *)(&DAT_007e3f20 + ((uVar4 & 0xff) + param_2 * 3) * 4);
  }
  local_34 = 0;
  if (DAT_007951b0 / 0xc9 < 1) {
    return 0;
  }
  local_c = param_3;
  local_10 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  do {
    local_30 = 0;
    if (0 < local_10) {
      do {
        if (local_30 < local_34 * 2) {
          iVar6 = (local_30 - local_34) + param_3;
          param_2 = (param_4 - param_3) + local_c;
        }
        else if (local_30 < local_14) {
          iVar6 = param_3 + local_34;
          param_2 = local_30 + local_34 * -3 + param_4;
        }
        else {
          if (local_30 < local_18) {
            iVar6 = (local_1c - local_30) + param_3;
            iVar5 = local_34;
          }
          else {
            iVar5 = local_20 - local_30;
            iVar6 = local_c;
          }
          param_2 = iVar5 + param_4;
        }
        if (((((-1 < iVar6) && (iVar6 < SHORT_007fb240)) && (-1 < param_2)) &&
            ((param_2 < SHORT_007fb242 &&
             (iVar5 = FUN_006aced8(param_3,param_4,iVar6,param_2), iVar5 <= DAT_007951b0 / 0xc9))))
           && (local_2c = 0, 0 < SHORT_007fb244)) {
          do {
            this = g_worldCells[SHORT_007fb240 * param_2 + iVar6 + SHORT_007fb246 * local_2c].
                   objects[0];
            if ((((this != (STWorldObject *)0x0) && (this[1].vtable < (STWorldObjectVTable *)0x8))
                && ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                    ((byte)(&DAT_008087e9)[(int)this[1].vtable * 0x51] < 8)))) &&
               (iVar5 = (*this->vtable->GetObjectTypeId)(this), iVar5 == 0x73)) {
              bVar1 = *(byte *)&this[1].vtable;
              if (*(char *)((int)&g_appClass_00806728[0x5d].field_0014 + 3) == '\0') {
                if (bVar1 == param_1) {
LAB_004b2fd4:
                  iVar5 = 0;
                }
                else {
                  uVar4 = (uint)bVar1;
                  uVar3 = (uint)param_1;
                  cVar2 = *(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                   uVar3 + uVar4 * 8 + 3);
                  if ((cVar2 == '\0') &&
                     (*(char *)((int)&g_appClass_00806728[0x5c].field_000C + uVar4 + uVar3 * 8 + 3)
                      == '\0')) {
                    iVar5 = -2;
                  }
                  else if ((cVar2 == '\x01') &&
                          (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                    uVar4 + uVar3 * 8 + 3) == '\0')) {
                    iVar5 = -1;
                  }
                  else if ((cVar2 == '\0') &&
                          (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                    uVar4 + uVar3 * 8 + 3) == '\x01')) {
                    iVar5 = 1;
                  }
                  else {
                    if ((cVar2 != '\x01') ||
                       (*(char *)((int)&g_appClass_00806728[0x5c].field_000C + uVar4 + uVar3 * 8 + 3
                                 ) != '\x01')) goto LAB_004b2fd4;
                    iVar5 = 2;
                  }
                }
                bVar7 = iVar5 < 0;
              }
              else {
                bVar7 = *(char *)((uint)param_1 * 0x51 + 0x11ca + (int)g_appClass_00806728) !=
                        *(char *)((uint)bVar1 * 0x51 + 0x11ca + (int)g_appClass_00806728);
              }
              if ((bVar7) && (local_24 <= *(int *)&this[0x22].field_0x8)) {
                local_24 = *(int *)&this[0x22].field_0x8 - local_24;
                *(int *)&this[0x22].field_0x8 = local_24;
                if (local_24 < 0) {
                  *(undefined4 *)&this[0x22].field_0x8 = 0;
                }
                *(undefined4 *)&this[0x22].field_0xc = PTR_00802a38->field_00E4;
                return 1;
              }
            }
            local_2c = local_2c + 1;
          } while (local_2c < SHORT_007fb244);
        }
        local_30 = local_30 + 1;
      } while (local_30 < local_10);
    }
    local_14 = local_14 + 4;
    local_1c = local_1c + 5;
    local_34 = local_34 + 1;
    local_18 = local_18 + 6;
    local_c = local_c + -1;
    local_10 = local_10 + 8;
    local_20 = local_20 + 7;
    if (DAT_007951b0 / 0xc9 <= local_34) {
      return 0;
    }
  } while( true );
}

