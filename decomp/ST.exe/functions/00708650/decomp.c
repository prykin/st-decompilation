
int __fastcall FUN_00708650(undefined4 *param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int local_7c;
  uint local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint *local_28;
  uint *local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e200;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff6c;
  iVar7 = 0;
  ExceptionList = &local_14;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = FUN_006bbe40(*(int **)(param_1[1] + 0x40),(uint *)&DAT_00857004,(int *)&DAT_00857028,
                         0x20);
    local_3c = iVar4;
    if ((iVar4 == 0) || (iVar4 != -0x7789fe3e)) break;
    FUN_006cec40((AnonShape_006CEC40_BB23E716 *)param_1[1]);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  if (iVar4 == 0) {
    if ((param_1[0xbc] == 100) && (param_1[0xbd] == 100)) {
      DAT_00857030 = 0;
    }
    else {
      DAT_00857030 = 1;
    }
    DAT_00857008 = 1;
    DAT_00856fc8 = 1;
    if (param_1[0xbc] == 0x43) {
      DAT_00856fc8 = 2;
      DAT_00857008 = 3;
    }
    else if (param_1[0xbc] == 0x28) {
      DAT_00856fc8 = 2;
      DAT_00857008 = 5;
    }
    local_8 = 0;
    uVar5 = (param_1[0xca] - param_1[0xc9]) - param_1[200];
    uVar8 = param_1[0xca] - param_1[200];
    while (uVar8 = uVar8 - 1, local_5c = uVar5, (int)uVar5 <= (int)uVar8) {
      pbVar1 = (byte *)(param_1[0xcc] + uVar8 * 0x68);
      puVar3 = *(uint **)(pbVar1 + 100);
      iVar4 = local_3c;
      local_24 = puVar3;
      if ((((*(uint *)(pbVar1 + 4) & 0x8000) == 0) && ((*pbVar1 & 0x80) != 0)) &&
         (puVar3[0x24] != 0)) {
        local_5c = uVar8;
        if ((*(uint *)(pbVar1 + 4) & 2) == 0) {
          iVar7 = -1;
        }
        else {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006F31D0::FUN_006f31d0
                    ((AnonReceiver_006F31D0 *)param_1,uVar8,0,0xffffffff,1);
          iVar7 = 1;
        }
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006F31D0::FUN_006f31d0
                  ((AnonReceiver_006F31D0 *)param_1,uVar8,iVar7,0xffffffff,1);
        *puVar3 = *puVar3 & 0xffffff7f;
        iVar4 = local_3c;
      }
    }
    while (local_5c = local_5c - 1, -1 < (int)local_5c) {
      iVar4 = local_5c * 0x68;
      iVar7 = param_1[0xcc];
      puVar3 = *(uint **)(iVar7 + 100 + iVar4);
      uVar5 = puVar3[1];
      local_24 = puVar3;
      if (((uVar5 & 0x4000) == 0) || ((*(byte *)(iVar7 + iVar4) & 2) == 0)) {
        if (((uVar5 & 0x2000) == 0) || ((*(byte *)(iVar7 + iVar4) & 2) == 0)) {
          if (((uVar5 & 0x1000) != 0) && ((*(byte *)(iVar7 + iVar4) & 2) != 0)) {
            local_28 = puVar3 + 0x19;
            puVar3[0xf] = *local_28;
            puVar3[0x10] = puVar3[0x1a];
            puVar3[0x11] = puVar3[0x1b];
            puVar3[0x12] = puVar3[0x1c];
            local_60 = puVar3[4];
            local_38 = puVar3[0x13];
            local_34 = puVar3[0x14];
            local_30 = 6;
            local_2c = 7;
            uVar5 = puVar3[0x26];
            for (uVar8 = 1000000000; (9 < uVar8 && (uVar5 / uVar8 == 0)); uVar8 = uVar8 / 10) {
            }
            do {
              local_40 = uVar5 / uVar8;
              uVar5 = uVar5 % uVar8;
              local_54 = uVar8 / 10;
              iVar7 = FUN_006b0460(&local_70,(int *)&local_38,(int *)local_28);
              uVar8 = uVar8 / 10;
              if (iVar7 != 0) {
                FUN_00708ca0(DAT_00857004 +
                             (param_1[9] + local_6c) * (int)DAT_00857028 + param_1[8] + local_70,
                             (int)DAT_00857028,
                             (ushort *)(param_1[5] + (param_1[10] * local_6c + local_70) * 2),
                             param_1[10] * 2,local_60,
                             &DAT_007efd90 +
                             local_38 + (((local_40 * 7 - local_6c) + local_34) * 6 - local_70),6,0,
                             local_68,local_64);
                uVar8 = local_54;
              }
              local_38 = local_38 + 6;
            } while (uVar8 != 0);
            puVar6 = *(uint **)(param_1[0xcc] + 100 + local_5c * 0x68);
            goto LAB_007088a4;
          }
          if (((*(uint *)(iVar7 + iVar4) & 0x802) != 0) &&
             (uVar5 = *(uint *)(iVar7 + 4 + iVar4), (uVar5 & 0x8000) == 0)) {
            local_78 = 1;
            if ((uVar5 & 0x40) != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_78 = ~*(uint *)(iVar7 + *(int *)(param_1[199] + 0xc + puVar3[7] * 0x114) * 0x68)
                         >> 1 & 1;
            }
            if (local_78 != 0) {
              if ((uVar5 & 2) == 0) {
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006F31D0::FUN_006f31d0
                          ((AnonReceiver_006F31D0 *)param_1,local_5c,-1,0xffffffff,0);
                *puVar3 = **(uint **)(iVar4 + 100 + param_1[0xcc]) & 0xffffff7d | 1;
              }
              else {
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006F31D0::FUN_006f31d0
                          ((AnonReceiver_006F31D0 *)param_1,local_5c,0,0xffffffff,0);
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006F31D0::FUN_006f31d0
                          ((AnonReceiver_006F31D0 *)param_1,local_5c,1,0xffffffff,0);
                *puVar3 = **(uint **)(iVar4 + 100 + param_1[0xcc]) & 0xffffff7d | 1;
              }
            }
          }
        }
        else {
          local_28 = puVar3 + 0x19;
          puVar3[0xf] = *local_28;
          puVar3[0x10] = puVar3[0x1a];
          puVar3[0x11] = puVar3[0x1b];
          puVar3[0x12] = puVar3[0x1c];
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_7c = *(int *)(iVar4 + param_1[0xcc] + 0x18);
          if (local_7c < 5) {
            local_7c = 0;
            local_28 = (uint *)(iVar4 + param_1[0xcc] + 0x20);
          }
          while( true ) {
            local_50 = *local_28;
            local_4c = local_28[1];
            local_48 = local_28[2] + *local_28;
            local_44 = local_28[3] + local_28[1];
            uVar5 = puVar3[0x28];
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            FUN_0072ac20(param_1,DAT_00857004,DAT_00857028,(uint *)(uVar5 + 0x25),
                         *(int *)(uVar5 + 4),(int *)&local_50,*(int *)(uVar5 + 0x14),
                         *(undefined1 *)(uVar5 + 0x18),0,0,0xffffffff);
            iVar7 = param_1[0xcc];
            if (*(int *)(iVar7 + 0x18 + iVar4) <= local_7c + 1) break;
            local_28 = (uint *)((local_7c + 3) * 0x10 + iVar7 + iVar4);
            local_7c = local_7c + 1;
          }
          *puVar3 = **(uint **)(iVar7 + 100 + iVar4) & 0xffffff7d | 1;
          FUN_006b5f80((int *)*param_1,puVar3[0x19] + param_1[8],puVar3[0x1a] + param_1[9],
                       puVar3[0x1b],puVar3[0x1c]);
        }
      }
      else {
        local_28 = puVar3 + 0x19;
        puVar3[0xf] = *local_28;
        puVar3[0x10] = puVar3[0x1a];
        puVar3[0x11] = puVar3[0x1b];
        puVar3[0x12] = puVar3[0x1c];
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_7c = *(int *)(iVar4 + param_1[0xcc] + 0x18);
        if (local_7c < 5) {
          local_7c = 0;
          local_28 = (uint *)(iVar4 + param_1[0xcc] + 0x20);
        }
        while( true ) {
          local_50 = *local_28;
          local_4c = local_28[1];
          local_48 = local_28[2] + *local_28;
          local_44 = local_28[3] + local_28[1];
          uVar5 = puVar3[0x28];
          FUN_007297e0(param_1,DAT_00857004,DAT_00857028,(uint *)(uVar5 + 0x29),
                       (uint *)(uVar5 + 0x39),(int *)&local_50,*(int *)(uVar5 + 0x18),
                       *(undefined1 *)(uVar5 + 0x1c),*(int *)(uVar5 + 0x1d),*(int *)(uVar5 + 0x21),
                       *(uint *)(uVar5 + 0x25));
          iVar7 = param_1[0xcc];
          if (*(int *)(iVar7 + 0x18 + iVar4) <= local_7c + 1) break;
          local_28 = (uint *)((local_7c + 3) * 0x10 + iVar7 + iVar4);
          local_7c = local_7c + 1;
        }
        puVar6 = *(uint **)(iVar7 + 100 + iVar4);
LAB_007088a4:
        *puVar3 = *puVar6 & 0xffffff7d | 1;
        FUN_006b5f80((int *)*param_1,puVar3[0x19] + param_1[8],puVar3[0x1a] + param_1[9],
                     puVar3[0x1b],puVar3[0x1c]);
      }
      local_20 = puVar3[0x25];
      while (local_20 = local_20 - 1, iVar4 = local_3c, -1 < (int)local_20) {
        puVar2 = (ushort *)(puVar3[0x29] + 2 + local_20 * 4);
        *puVar2 = *puVar2 & 0xff7f;
      }
    }
    local_5c = param_1[0xca];
    while (local_5c = local_5c + -1, -1 < (int)local_5c) {
      local_24 = *(uint **)(param_1[0xcc] + 100 + local_5c * 0x68);
      local_20 = local_24[0x25];
      while (local_20 = local_20 - 1, -1 < (int)local_20) {
        puVar2 = (ushort *)(local_24[0x29] + 2 + local_20 * 4);
        *puVar2 = *puVar2 & 0xff7f;
      }
    }
    local_8 = 0xffffffff;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(**(int **)(param_1[1] + 0x40) + 0x80))(*(int **)(param_1[1] + 0x40),0);
  }
  ExceptionList = local_14;
  return iVar4;
}

