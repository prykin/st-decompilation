
int __thiscall
FUN_0069bdc0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int *local_5c;
  int *local_58;
  int local_50;
  int local_48;
  int local_40;
  uint local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d808;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff6c;
  local_40 = 0;
  local_68 = 0;
  local_7c = 0;
  if ((param_2 < 5) || (param_3 < 5)) {
    local_40 = 0;
  }
  else {
    local_48 = param_2 / 2 + param_3 / 2;
    local_48 = local_48 + local_48 / 2;
    uVar5 = ((*(int *)((int)this + 0x5833) - param_2) / param_4 + 2) *
            ((*(int *)((int)this + 0x5837) - param_3) / param_4 + 2);
    ExceptionList = &local_14;
    local_78 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar5 * 0x40);
    piVar7 = (int *)&stack0xffffff6c;
    puVar8 = local_78;
    for (iVar4 = (uVar5 & 0x3ffffff) << 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    local_64 = 0;
    local_2c = 1;
    local_3c = 0;
    local_50 = 0;
    while (iVar4 = 0, (int)local_3c < (int)uVar5) {
      if (*(int *)((int)this + 0x5837) < local_64 + param_3) {
        local_64 = *(int *)((int)this + 0x5837) - param_3;
        local_2c = 0;
      }
      local_24 = 1;
      iVar3 = local_64 + -1;
      iVar6 = local_3c << 6;
      do {
        *(int *)(iVar6 + 0x30 + (int)local_78) = iVar4;
        *(int *)(iVar6 + 0x34 + (int)local_78) = local_64;
        *(int *)(iVar6 + 0x38 + (int)local_78) = param_2 + -1 + iVar4;
        *(int *)(iVar6 + 0x3c + (int)local_78) = iVar3 + param_3;
        puVar1 = (undefined1 *)(iVar6 + (int)local_78);
        if (*(int *)((int)this + 0x5833) + -1 <= *(int *)(puVar1 + 0x38)) {
          local_24 = 0;
        }
        iVar2 = thunk_FUN_0069b400(this,iVar4,local_64,*(int *)(puVar1 + 0x38),
                                   *(int *)(puVar1 + 0x3c),(int)puVar1);
        *(int *)(iVar6 + 0x2c + (int)local_78) = iVar2;
        iVar2 = *(int *)(iVar6 + 0x2c + (int)local_78);
        if (local_50 < iVar2) {
          local_50 = iVar2;
        }
        local_3c = local_3c + 1;
        iVar6 = iVar6 + 0x40;
        iVar4 = iVar4 + param_4;
        iVar2 = *(int *)((int)this + 0x5833);
        if (iVar2 <= iVar4 + param_2) {
          iVar4 = iVar2 - param_2;
        }
      } while ((iVar4 < iVar2) && (local_24 != 0));
      local_64 = local_64 + param_4;
      if ((*(int *)((int)this + 0x5837) <= local_64) ||
         (((-1 < (int)local_3c &&
           (*(int *)((int)this + 0x5837) + -1 <= (int)local_78[local_3c * 0x10 + -1])) ||
          (local_2c == 0)))) break;
    }
    iVar4 = local_40;
    if (-1 < (int)local_3c) {
      local_8 = 0;
      Library::MSVCRT::FUN_0072da40();
      local_5c = (int *)&stack0xffffff6c;
      local_1c = &stack0xffffff6c;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      local_58 = (int *)&stack0xffffff6c;
      local_1c = &stack0xffffff6c;
      Library::MSVCRT::FUN_00730810((undefined1 *)local_78,local_3c,0x40,&LAB_00402adb);
      local_28 = (local_50 * param_5) / 100;
      local_60 = 0;
      if (0 < (int)local_3c) {
        do {
          if ((int)local_78[local_60 * 0x10 + 0xb] < local_28) {
            local_3c = local_60;
            break;
          }
          local_60 = local_60 + 1;
        } while ((int)local_60 < (int)local_3c);
      }
      local_50 = 0;
      for (local_74 = local_3c * param_1 * 0x32; -1 < local_74; local_74 = local_74 + -1) {
        iVar4 = thunk_FUN_0069b910((int)local_78,local_3c,piVar7,param_1,local_48,local_28);
        if (iVar4 == param_1) {
          local_40 = 1;
          iVar3 = thunk_FUN_0069bc10(this,(int)local_78,piVar7,param_1,0x122,&local_6c,&local_20);
          iVar4 = param_1;
          piVar9 = local_58;
          if (local_50 < iVar3) {
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar9 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar9 = piVar9 + 1;
            }
            local_68 = local_6c;
            local_7c = local_20;
            piVar7 = local_5c;
            local_50 = iVar3;
          }
        }
      }
      iVar4 = local_40;
      if (local_40 != 0) {
        *(int *)(param_7 + 0x10) = local_68;
        *(int *)(param_7 + 0x14) = local_7c;
        iVar3 = 0;
        iVar4 = param_1;
        if (0 < param_1) {
LAB_0069c0f3:
          uVar5 = Library::MSVCRT::FUN_0072e6c0();
          iVar4 = (int)uVar5 % 3 + 1;
          local_30 = iVar4;
          uVar5 = Library::MSVCRT::FUN_0072e6c0();
          piVar7 = local_58;
          uVar5 = uVar5 & 0x80000007;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
          }
          do {
            local_70 = 0;
            while( true ) {
              if (iVar3 <= local_70) {
                local_78[local_58[iVar3] * 0x10] = iVar4 << 0x10 | uVar5 & 0xffff;
                Library::DKW::TBL::FUN_006ae1c0
                          (*(uint **)(param_7 + 0x18),local_78 + local_58[iVar3] * 0x10);
                iVar4 = piVar7[iVar3];
                *(short *)(param_6 + iVar3 * 4) =
                     (short)((int)(local_78[iVar4 * 0x10 + 0xe] - local_78[iVar4 * 0x10 + 0xc]) / 2)
                     + *(short *)(local_78 + iVar4 * 0x10 + 0xc);
                iVar4 = piVar7[iVar3];
                *(short *)(param_6 + 2 + iVar3 * 4) =
                     (short)((int)(local_78[iVar4 * 0x10 + 0xf] - local_78[iVar4 * 0x10 + 0xd]) / 2)
                     + *(short *)(local_78 + iVar4 * 0x10 + 0xd);
                iVar3 = iVar3 + 1;
                iVar4 = param_1;
                if (iVar3 < param_1) goto LAB_0069c0f3;
                goto LAB_0069c1df;
              }
              if (*(ushort *)(local_78 + local_58[local_70] * 0x10) == uVar5) break;
              local_70 = local_70 + 1;
            }
            if ((int)uVar5 < 7) {
              uVar5 = uVar5 + 1;
              iVar4 = local_30;
            }
            else {
              uVar5 = 0;
              iVar4 = local_30 + 1;
              local_30 = iVar4;
              if (3 < iVar4) {
                iVar4 = 1;
                local_30 = 1;
              }
            }
          } while( true );
        }
      }
    }
LAB_0069c1df:
    local_40 = iVar4;
    FUN_006ab060(&local_78);
  }
  ExceptionList = local_14;
  return local_40;
}

