
undefined4 FUN_00497370(int param_1,int param_2,uint param_3,undefined4 param_4,void *param_5)

{
  char cVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  uint local_60;
  char local_5c;
  undefined3 uStack_5b;
  int local_44;
  int local_40;
  int *local_3c;
  undefined1 *local_38;
  uint local_34;
  int local_30;
  undefined4 local_28;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  iVar4 = DAT_007fb270;
  puStack_c = &DAT_00790718;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff90;
  local_28 = 0xffffffff;
  iVar2 = *(int *)(DAT_007fb270 + 0xc);
  local_8 = 0;
  ExceptionList = &local_14;
  local_44 = iVar2;
  Library::MSVCRT::FUN_0072da40();
  local_38 = &stack0xffffff90;
  local_1c = &stack0xffffff90;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  local_30 = 0;
  local_40 = 0;
  local_34 = 0;
  local_3c = (int *)&stack0xffffff90;
  local_1c = &stack0xffffff90;
  if (0 < iVar2) {
    puVar10 = &local_60;
    local_3c = (int *)&stack0xffffff90;
    local_1c = &stack0xffffff90;
    do {
      if (local_34 < *(uint *)(iVar4 + 0xc)) {
        puVar11 = (uint *)(*(int *)(iVar4 + 8) * local_34 + *(int *)(iVar4 + 0x1c));
      }
      else {
        puVar11 = (uint *)0x0;
      }
      uVar3 = puVar11[2];
      if (uVar3 != param_3) {
        _local_5c = CONCAT31(uStack_5b,(char)uVar3);
        if (DAT_00808a8f == '\0') {
          if ((char)uVar3 == (char)param_3) {
LAB_004974ca:
            iVar2 = 0;
          }
          else {
            uVar3 = uVar3 & 0xff;
            uVar8 = param_3 & 0xff;
            cVar1 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar8);
            if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) == '\0')) {
              iVar2 = -2;
            }
            else if ((cVar1 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) == '\0')) {
              iVar2 = -1;
            }
            else if ((cVar1 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) == '\x01')) {
              iVar2 = 1;
            }
            else {
              if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) != '\x01')
                 ) goto LAB_004974ca;
              iVar2 = 2;
            }
          }
          bVar13 = iVar2 < 0;
        }
        else {
          bVar13 = (&DAT_008087ea)[(param_3 & 0xff) * 0x51] !=
                   (&DAT_008087ea)[(uVar3 & 0xff) * 0x51];
        }
        if ((bVar13) &&
           (iVar2 = FUN_006aced8(*puVar11 * 0xc9 + 100,puVar11[1] * 0xc9 + 100,param_1 * 0xc9 + 100,
                                 param_2 * 0xc9 + 100), iVar4 = DAT_007fb270, iVar2 < 0xbc7)) {
          puVar12 = puVar10 + -4;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          uVar3 = thunk_FUN_0060ca20(puVar10[1]);
          uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
          *puVar10 = uVar3;
          local_40 = local_40 + uVar3;
          local_30 = local_30 + 1;
          puVar10 = puVar10 + 6;
          iVar4 = DAT_007fb270;
        }
      }
      local_34 = local_34 + 1;
    } while ((int)local_34 < local_44);
  }
  if (local_30 != 0) {
    iVar4 = thunk_FUN_0060ca20((int)param_5);
    iVar7 = local_30;
    local_20 = local_30;
    iVar2 = iVar4 / local_30;
    if (iVar4 < local_40) {
      iVar6 = 0;
      piVar9 = local_3c;
      if (0 < local_30) {
        do {
          *piVar9 = iVar6;
          iVar6 = iVar6 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar6 < local_30);
      }
      thunk_FUN_004977c0((int)local_38,local_3c,local_30);
      while (0 < iVar4) {
        iVar6 = local_30 - iVar7;
        if (iVar6 < local_30) {
          piVar9 = (int *)(local_38 + iVar6 * 0x18 + 0x10);
          iVar6 = local_30 - iVar6;
          do {
            iVar7 = *piVar9;
            if (iVar7 < iVar2) {
              *piVar9 = 0;
              local_20 = local_20 + -1;
            }
            else {
              *piVar9 = iVar7 - iVar2;
              iVar7 = iVar2;
            }
            local_40 = local_40 - iVar7;
            iVar4 = iVar4 - iVar7;
            piVar9 = piVar9 + 6;
            iVar6 = iVar6 + -1;
            iVar7 = local_20;
          } while (iVar6 != 0);
        }
        if (((iVar4 < 1) || (iVar7 < 1)) || (iVar2 = iVar4 / iVar7, iVar2 == 0)) {
          iVar4 = 0;
        }
      }
    }
    else {
      iVar4 = iVar4 - local_40;
      if (0 < local_30) {
        puVar5 = (undefined4 *)(local_38 + 0x10);
        iVar2 = local_30;
        do {
          *puVar5 = 0;
          puVar5 = puVar5 + 6;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar2 = local_30;
    iVar7 = thunk_FUN_0060ca20((int)param_5);
    thunk_FUN_0060ca40(param_5,iVar7 - iVar4);
    if (0 < iVar2) {
      piVar9 = (int *)(local_38 + 0x10);
      do {
        this = (void *)piVar9[1];
        iVar4 = thunk_FUN_0060ca20((int)this);
        if (iVar4 != *piVar9) {
          iVar4 = thunk_FUN_0060ca20((int)this);
          thunk_FUN_0060ca40(this,iVar4 - *piVar9);
          thunk_FUN_00497110((int)param_5,(int)this);
        }
        piVar9 = piVar9 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar2 = thunk_FUN_0060ca20((int)param_5);
  if (0 < iVar2) {
    local_28 = 1;
  }
  ExceptionList = local_14;
  return local_28;
}

