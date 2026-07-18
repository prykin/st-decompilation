
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0066acc0(char *param_1,int param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  char ****ppppcVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined3 extraout_var;
  void *this;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  undefined4 unaff_ESI;
  char ****ppppcVar23;
  void *unaff_EDI;
  undefined4 *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined4 uVar28;
  undefined1 *puVar29;
  undefined4 local_628 [78];
  undefined4 local_4f0 [78];
  undefined4 local_3b8 [78];
  undefined4 local_280 [8];
  undefined4 local_260;
  undefined4 local_25c [16];
  undefined4 local_21c;
  undefined2 local_218;
  undefined4 local_214;
  undefined2 local_210;
  undefined1 local_1de;
  uint local_1d0 [2];
  char local_1c8;
  undefined4 *local_1c6;
  undefined4 local_19c [9];
  int local_178;
  int local_174;
  int local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_158;
  int local_154;
  int local_150;
  int local_148;
  int local_144;
  int local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  int *local_64;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  char ****local_50 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  char *local_c;
  char ****local_8;
  
  local_14 = (uint *)0x0;
  local_260 = DAT_00858df8;
  DAT_00858df8 = &local_260;
  iVar10 = __setjmp3(local_25c,0,unaff_EDI,unaff_ESI);
  if (iVar10 != 0) {
    DAT_00858df8 = (undefined4 *)local_260;
    if (local_14 != (uint *)0x0) {
      FUN_006ab060(&local_14);
    }
    if (0 < iVar10) {
      iVar10 = -0x6b;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar10;
    }
    return (uint *)0x0;
  }
  _strncpy((char *)(local_64 + 1),&DAT_008016a0,0x7f);
  local_64[0x21] = -1;
  cVar2 = *param_1;
  pcVar21 = param_1;
  for (iVar10 = 0; (cVar2 != '\a' && (iVar10 < param_2)); iVar10 = iVar10 + 1) {
    cVar2 = pcVar21[5];
    pcVar21 = pcVar21 + 5;
  }
  if (iVar10 != param_2) {
    FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2cf4,0x152);
  }
  iVar10 = (int)*(short *)(param_1 + param_2 * 5 + 1);
  if (iVar10 < 0x7f7) {
    if (iVar10 == 0x7f6) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_8 < 0xf);
      if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_c = (char *)0x4;
      if (4 < param_2) {
        local_8 = (char ****)0x14;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
      {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*local_64)(puVar19,local_50);
      iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
      DAT_00811980 = 0;
      if (0 < iVar10) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppppcVar12 = (char ****)local_50;
        do {
          uVar28 = 0;
          puVar26 = &LAB_00405628;
          pcVar21 = local_10;
          sVar3 = (**(code **)*local_64)();
          sVar7 = (short)pcVar21;
          pcVar21 = local_18;
          sVar4 = (**(code **)*local_64)();
          sVar9 = (short)pcVar21;
          pbVar15 = local_2c;
          sVar5 = (**(code **)*local_64)();
          sVar8 = (short)pbVar15;
          pbVar15 = local_1c;
          uVar18 = (**(code **)*local_64)();
          uVar18 = (**(code **)*local_64)(local_24,uVar18);
          uVar18 = (**(code **)*local_64)(local_30,uVar18);
          uVar18 = (**(code **)(*local_64 + 8))(local_28,uVar18);
          sVar6 = (**(code **)*local_64)(local_c,uVar18);
          thunk_FUN_00677be0(*(short *)ppppcVar12,sVar6,pbVar15,sVar5,sVar8,sVar4,sVar9,sVar3,sVar7,
                             puVar26,uVar28);
          ppppcVar12 = ppppcVar12 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      goto LAB_0066df5e;
    }
    if (iVar10 < 0x7e7) {
      if (iVar10 == 0x7e6) {
        local_c = (char *)0x0;
        if (0 < param_2) {
          local_8 = (char ****)0x0;
          do {
            if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
              pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar21 != (char *)0x0) {
                _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
              }
              local_64[0x21] = -1;
              FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
            }
            local_c = (char *)((int)local_c + 1);
            local_8 = (char ****)((int)local_8 + 5);
          } while ((int)local_c < param_2);
        }
        local_8 = (char ****)(**(code **)*local_64)(param_1);
        local_c = (char *)(**(code **)*local_64)(param_1 + 5);
        iVar10 = (**(code **)(*local_64 + 0x18))();
        if ((((iVar10 == 8) && ((local_8 == (char ****)0x9 || (local_c == (char *)0x9)))) ||
            (local_8 == (char ****)0xff)) || (local_c == (char *)0xff)) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
        if (iVar10 != 1) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_8 = local_50[0];
        iVar10 = thunk_FUN_00668f50(local_64,local_c,0,(uint *)local_50);
        if (iVar10 != 1) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_14 = FUN_006aac10(4);
        if (DAT_00808a8f != '\0') {
          *local_14 = (uint)((&DAT_008087ea)[((uint)local_8 & 0xff) * 0x51] !=
                            (&DAT_008087ea)[((uint)local_50[0] & 0xff) * 0x51]);
          goto LAB_00670431;
        }
        if ((char)local_50[0] == (char)local_8) {
LAB_0066bdcc:
          iVar10 = 0;
        }
        else {
          uVar11 = (uint)local_50[0] & 0xff;
          uVar22 = (uint)local_8 & 0xff;
          cVar2 = *(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar22);
          if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar11) == '\0')) {
            iVar10 = -2;
          }
          else if ((cVar2 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar11) == '\0')) {
            iVar10 = -1;
          }
          else if ((cVar2 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar11) == '\x01')) {
            iVar10 = 1;
          }
          else {
            if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar11) != '\x01')
               ) goto LAB_0066bdcc;
            iVar10 = 2;
          }
        }
        *local_14 = (uint)(iVar10 < 0);
        goto LAB_00670431;
      }
      if (iVar10 < 0x7d7) {
        if (iVar10 == 0x7d6) {
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_10 = (char *)0x0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                }
                local_64[0x21] = -1;
                FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          iVar10 = (**(code **)*local_64)(param_1);
          if ((DAT_0080c4c7 == 0) || (*(int *)(DAT_0080c4c7 + 8) <= iVar10)) {
            local_c = (char *)0x0;
          }
          else {
            local_c = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + iVar10 * 4);
          }
          if (local_c == (char *)0x0) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          puVar19 = (uint *)FUN_006c49b0(local_c);
          if (param_3 == (int *)0x0) {
            DAT_00858df8 = (undefined4 *)local_260;
            return puVar19;
          }
          *param_3 = 3;
          DAT_00858df8 = (undefined4 *)local_260;
          return puVar19;
        }
        if (0x7d2 < iVar10) {
          if (iVar10 == 0x7d3) {
            local_c = (char *)0x0;
            if (0 < param_2) {
              local_10 = (char *)0x0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                  }
                  local_64[0x21] = -1;
                  FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            iVar10 = (**(code **)*local_64)(param_1);
            iVar13 = (**(code **)*local_64)(param_1 + 5);
            local_14 = FUN_006aac10(4);
            if (iVar13 < iVar10) {
              uVar11 = (**(code **)(*local_64 + 0x10))(iVar13,iVar10);
              *local_14 = uVar11;
            }
            else {
              uVar11 = (**(code **)(*local_64 + 0x10))(iVar10,iVar13);
              *local_14 = uVar11;
            }
          }
          else {
            if (iVar10 != 0x7d4) {
              if (iVar10 == 0x7d5) {
                local_c = (char *)0x0;
                if (0 < param_2) {
                  local_10 = (char *)0x0;
                  do {
                    if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                      if (pcVar21 != (char *)0x0) {
                        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                      }
                      local_64[0x21] = -1;
                      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
                    }
                    local_c = local_c + 1;
                    local_10 = local_10 + 5;
                  } while ((int)local_c < param_2);
                }
                local_8 = (char ****)(**(code **)*local_64)(param_1);
                if (((int)local_8 < 0) || (3 < (int)local_8)) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                  }
                  local_64[0x21] = -1;
                  FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
                }
                ppppcVar12 = (char ****)(**(code **)(*local_64 + 0x28))(local_8);
                goto LAB_0066d630;
              }
              goto switchD_0066b69d_caseD_7d8;
            }
            local_c = (char *)0x0;
            if (0 < param_2) {
              local_10 = (char *)0x0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                  }
                  local_64[0x21] = -1;
                  FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (char ****)(**(code **)*local_64)(param_1);
            if (((int)local_8 < 0) || (0x20 < (int)local_8)) {
              pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar21 != (char *)0x0) {
                _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
              }
              local_64[0x21] = -1;
              FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
            }
            local_14 = FUN_006aac10(4);
            uVar11 = (**(code **)(*local_64 + 0x24))(local_8);
            *local_14 = uVar11;
          }
          goto LAB_00670431;
        }
        if (iVar10 == 0x7d2) {
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_10 = (char *)0x0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                }
                local_64[0x21] = -1;
                FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_8 = (char ****)(**(code **)*local_64)(param_1);
          if (((int)local_8 < 0) || (0xff < (int)local_8)) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_14 = FUN_006aac10(4);
          *local_14 = (&DAT_0080e43b)[(int)local_8];
          goto LAB_00670431;
        }
        if (iVar10 < 0x7d1) {
          if (iVar10 == 2000) {
            local_c = (char *)0x0;
            if (0 < param_2) {
              local_10 = (char *)0x0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                  }
                  local_64[0x21] = -1;
                  FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (char ****)(**(code **)*local_64)(param_1);
            local_10 = (char *)(**(code **)*local_64)(param_1 + 5);
            local_c = (char *)0x0;
            if ((local_8 == (char ****)0x9) &&
               (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
              iVar10 = (**(code **)(*local_64 + 0x2c))(local_10);
              local_c = (char *)(uint)(iVar10 == 0);
              local_14 = FUN_006aac10(4);
              *local_14 = (uint)local_c;
            }
            else {
              iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
              if (iVar10 == 1) {
                if (DAT_007fa174 == 0) {
                  iVar10 = 0;
                }
                else {
                  iVar10 = thunk_FUN_004357f0((char)local_50[0]);
                }
                if (iVar10 != 0) {
                  iVar10 = (**(code **)(*(int *)(iVar10 + 0x1c) + 0x2c))(local_10);
                  local_c = (char *)(uint)(iVar10 == 0);
                  local_14 = FUN_006aac10(4);
                  *local_14 = (uint)local_c;
                  goto LAB_00670431;
                }
                local_8 = local_50[0];
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                }
                local_64[0x21] = (int)local_8;
              }
              else {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                }
                local_64[0x21] = -1;
              }
              FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
              local_14 = FUN_006aac10(4);
              *local_14 = (uint)local_c;
            }
          }
          else {
            if ((iVar10 < 800) || (0x321 < iVar10)) goto switchD_0066b69d_caseD_7d8;
            local_c = (char *)0x0;
            if (0 < param_2) {
              local_10 = (char *)0x0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (pcVar21 != (char *)0x0) {
                    _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                  }
                  local_64[0x21] = -1;
                  FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_14 = FUN_006aac10(4);
            uVar11 = (**(code **)*local_64)(param_1);
            *local_14 = uVar11;
          }
          goto LAB_00670431;
        }
        if (iVar10 != 0x7d1) {
switchD_0066b69d_caseD_7d8:
          pcVar21 = thunk_FUN_00674af0(iVar10);
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x77,DAT_007ed77c,0x7d2a24,0x79);
          DAT_00858df8 = (undefined4 *)local_260;
          return local_14;
        }
        local_c = (char *)0x0;
        if (0 < param_2) {
          local_10 = (char *)0x0;
          do {
            if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
              pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (pcVar21 != (char *)0x0) {
                _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
              }
              local_64[0x21] = -1;
              FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
            }
            local_c = (char *)((int)local_c + 1);
            local_10 = local_10 + 5;
          } while ((int)local_c < param_2);
        }
        local_8 = (char ****)(**(code **)*local_64)(param_1);
        local_10 = (char *)(**(code **)*local_64)(param_1 + 5);
        if (((int)local_10 < 0) || (0xff < (int)local_10)) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)0x0;
        if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)
           ) {
          local_c = (char *)(**(code **)(*local_64 + 0x1c))(local_10);
          local_14 = FUN_006aac10(4);
          *local_14 = (uint)local_c;
          goto LAB_00670431;
        }
        iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
        if (iVar10 != 1) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          goto joined_r0x0066b1d2;
        }
        if (DAT_007fa174 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = thunk_FUN_004357f0((char)local_50[0]);
        }
        if (iVar10 != 0) {
          local_c = (char *)(**(code **)(*(int *)(iVar10 + 0x1c) + 0x1c))(local_10);
          local_14 = FUN_006aac10(4);
          *local_14 = (uint)local_c;
          goto LAB_00670431;
        }
        local_8 = local_50[0];
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
LAB_0066b1ad:
        local_64[0x21] = (int)local_8;
LAB_0066b1fb:
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        local_14 = FUN_006aac10(4);
        *local_14 = (uint)local_c;
      }
      else {
        switch(iVar10) {
        case 0x7d7:
          uVar11 = (**(code **)(*local_64 + 0x18))();
          local_14 = FUN_006aac10(4);
          if (uVar11 == 8) {
            uVar11 = 0xff;
          }
          *local_14 = uVar11;
          break;
        default:
          goto switchD_0066b69d_caseD_7d8;
        case 0x7da:
          local_14 = FUN_006aac10(4);
          *local_14 = *(uint *)(DAT_00802a38 + 0xe4) / 0x19;
          break;
        case 0x7dc:
          local_14 = FUN_006aac10(4);
          *local_14 = *(uint *)(DAT_00802a38 + 0xe4);
          break;
        case 0x7dd:
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_10 = (char *)0x0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                }
                local_64[0x21] = -1;
                FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_8 = (char ****)(**(code **)*local_64)(param_1);
          local_c = (char *)0x0;
          if ((local_8 == (char ****)0x9) &&
             (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
            local_c = (char *)(**(code **)(*local_64 + 0x14))();
            local_14 = FUN_006aac10(4);
            *local_14 = (uint)local_c;
            break;
          }
          iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
          if (iVar10 == 1) {
            if (DAT_007fa174 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = thunk_FUN_004357f0((char)local_50[0]);
            }
            if (iVar10 != 0) {
              local_c = (char *)(**(code **)(*(int *)(iVar10 + 0x1c) + 0x14))();
              local_14 = FUN_006aac10(4);
              *local_14 = (uint)local_c;
              break;
            }
            local_8 = local_50[0];
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            goto LAB_0066b1ad;
          }
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
joined_r0x0066b1d2:
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          goto LAB_0066b1fb;
        case 0x7de:
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_10 = (char *)0x0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                }
                local_64[0x21] = -1;
                FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_c = (char *)(**(code **)*local_64)(param_1);
          if (((local_c == (char *)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)
              ) || (local_c == (char *)0xff)) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          iVar10 = thunk_FUN_00668f50(local_64,local_c,0,(uint *)local_50);
          if (iVar10 != 1) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_1d = '\0';
          local_8 = (char ****)0x0;
          if (DAT_00801688 != (void *)0x0) {
            thunk_FUN_004f91a0(DAT_00801688,(byte)local_50[0],&local_1d,(int *)&local_8);
          }
          local_14 = FUN_006aac10(4);
          *local_14 = ~-(uint)(local_1d != '\x01') & (uint)local_8;
          break;
        case 0x7e4:
          local_14 = FUN_006aac10(4);
          if ((DAT_008087a0 == '\x03') || (DAT_008087a0 == '\b')) {
            *local_14 = _DAT_00807340 & 0xff;
          }
          else {
            *local_14 = 0;
          }
          break;
        case 0x7e5:
          local_c = (char *)0x0;
          if (0 < param_2) {
            local_8 = (char ****)0x0;
            do {
              if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
                pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (pcVar21 != (char *)0x0) {
                  _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
                }
                local_64[0x21] = -1;
                FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_8 = (char ****)((int)local_8 + 5);
            } while ((int)local_c < param_2);
          }
          local_8 = (char ****)(**(code **)*local_64)(param_1);
          if (((local_8 == (char ****)0x9) &&
              (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) ||
             (local_8 == (char ****)0xff)) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
          if (iVar10 != 1) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_14 = FUN_006aac10(4);
          if (DAT_00808a8f != '\0') {
            *local_14 = (uint)(byte)(&DAT_008087ea)[(int)local_50[0] * 0x51];
            break;
          }
          goto LAB_0066bb5e;
        }
      }
      goto LAB_00670431;
    }
    switch(iVar10) {
    case 0x7e7:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_c = (char *)(**(code **)*local_64)(param_1);
      if (((local_c == (char *)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) ||
         (local_c == (char *)0xff)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      if (local_c == (char *)0x8) {
        local_c = (char *)(uint)DAT_0080874d;
      }
      pcVar21 = local_c;
      if (local_c == (char *)0x9) {
        pcVar21 = (char *)(**(code **)(*local_64 + 0x18))();
      }
      local_14 = FUN_006aac10(4);
      if ((pcVar21 < 8) && ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(int)pcVar21 * 0x51] < 8)))
         ) {
        *local_14 = 1;
        break;
      }
LAB_0066bb5e:
      *local_14 = 0;
      break;
    case 0x7e8:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      uVar11 = (**(code **)*local_64)(param_1);
      uVar22 = 0;
      if (DAT_00808a8f == '\0') {
LAB_0066bff3:
        local_14 = FUN_006aac10(4);
        *local_14 = uVar22;
      }
      else {
        pbVar15 = &DAT_008087ea;
        do {
          if (((DAT_00802a38 == 0) || (pbVar15[-1] < 8)) && (*pbVar15 == uVar11)) {
            uVar22 = 1;
            goto LAB_0066bff3;
          }
          pbVar15 = pbVar15 + 0x51;
        } while ((int)pbVar15 < 0x808a72);
        local_14 = FUN_006aac10(4);
        *local_14 = 0;
      }
      break;
    case 0x7e9:
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)(DAT_00808a8f != '\0');
      break;
    case 0x7ea:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
         || (local_8 == (char ****)0xff)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
      if (iVar10 != 1) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)*(byte *)(local_50[0] + 0x202654);
      break;
    case 0x7eb:
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)DAT_0080874d;
      break;
    case 0x7ec:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
         || (local_8 == (char ****)0xff)) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
      if (iVar10 != 1) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)(byte)(&DAT_008087e8)[(int)local_50[0] * 0x51];
      break;
    case 0x7ed:
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)(DAT_00808a94 != '\0');
      break;
    case 0x7ee:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
      {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*local_64)(puVar19,local_50);
      iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
      DAT_00811980 = 0;
      if (0 < iVar10) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppppcVar12 = (char ****)local_50;
        do {
          puVar27 = (undefined *)0x0;
          uVar28 = 0;
          puVar26 = &LAB_00401e8d;
          pcVar21 = local_10;
          sVar3 = (**(code **)*local_64)();
          sVar9 = (short)pcVar21;
          pcVar21 = local_18;
          sVar4 = (**(code **)*local_64)();
          sVar8 = (short)pcVar21;
          pbVar15 = local_2c;
          sVar5 = (**(code **)*local_64)();
          sVar6 = (short)pbVar15;
          pbVar15 = local_1c;
          pbVar14 = (byte *)(**(code **)*local_64)();
          cVar2 = (char)pbVar15;
          pcVar21 = local_24;
          uVar18 = (**(code **)*local_64)();
          uVar18 = (**(code **)*local_64)(local_30,uVar18);
          uVar18 = (**(code **)*local_64)(local_28,uVar18);
          uVar11 = (**(code **)*local_64)(local_c,0x3fffffff,0,uVar18);
          thunk_FUN_00676d80(*ppppcVar12,uVar11,(uint)pcVar21,pbVar14,cVar2,sVar5,sVar6,sVar4,sVar8,
                             sVar3,sVar9,puVar26,uVar28,puVar27);
          ppppcVar12 = ppppcVar12 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      goto LAB_0066df5e;
    case 0x7ef:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
      {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*local_64)(puVar19,local_50);
      iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
      DAT_00811980 = 0;
      if (0 < iVar10) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppppcVar12 = (char ****)local_50;
        do {
          puVar27 = (undefined *)0x0;
          uVar28 = 0;
          puVar26 = &LAB_00401e8d;
          pcVar21 = local_10;
          sVar3 = (**(code **)*local_64)();
          sVar9 = (short)pcVar21;
          pcVar21 = local_18;
          sVar4 = (**(code **)*local_64)();
          sVar8 = (short)pcVar21;
          pbVar15 = local_2c;
          sVar5 = (**(code **)*local_64)();
          sVar6 = (short)pbVar15;
          pbVar15 = local_1c;
          pbVar14 = (byte *)(**(code **)*local_64)();
          cVar2 = (char)pbVar15;
          uVar18 = (**(code **)*local_64)(local_24);
          uVar18 = (**(code **)*local_64)(local_30,uVar18);
          uVar18 = (**(code **)*local_64)(local_28,uVar18);
          uVar11 = (**(code **)*local_64)(local_c,0,uVar18);
          thunk_FUN_00676d80(*ppppcVar12,0,uVar11,pbVar14,cVar2,sVar5,sVar6,sVar4,sVar8,sVar3,sVar9,
                             puVar26,uVar28,puVar27);
          ppppcVar12 = ppppcVar12 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      goto LAB_0066df5e;
    case 0x7f0:
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_8 < 10);
      if ((param_1[10] != '\x06') && (param_1[10] != '\x03')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_c = (char *)0x3;
      if (3 < param_2) {
        local_8 = (char ****)0xf;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
      {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*local_64)(puVar19,local_50);
      iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
      DAT_00811980 = 0;
      if (0 < iVar10) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppppcVar12 = (char ****)local_50;
        do {
          puVar27 = (undefined *)0x0;
          uVar28 = 0;
          puVar26 = &LAB_00401e8d;
          pcVar21 = local_10;
          sVar3 = (**(code **)*local_64)();
          sVar9 = (short)pcVar21;
          pcVar21 = local_18;
          sVar4 = (**(code **)*local_64)();
          sVar8 = (short)pcVar21;
          pbVar15 = local_2c;
          sVar5 = (**(code **)*local_64)();
          sVar6 = (short)pbVar15;
          pbVar15 = local_1c;
          uVar18 = (**(code **)*local_64)();
          cVar2 = (char)pbVar15;
          uVar18 = (**(code **)*local_64)(local_24,uVar18);
          uVar18 = (**(code **)*local_64)(local_30,uVar18);
          uVar18 = (**(code **)*local_64)(local_28,uVar18);
          pbVar15 = (byte *)(**(code **)(*local_64 + 8))(local_c,uVar18);
          thunk_FUN_00676d80(*ppppcVar12,0,0x3fffffff,pbVar15,cVar2,sVar5,sVar6,sVar4,sVar8,sVar3,
                             sVar9,puVar26,uVar28,puVar27);
          ppppcVar12 = ppppcVar12 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
LAB_0066df5e:
      local_14 = FUN_006aac10(4);
      *local_14 = DAT_00811980;
      break;
    case 0x7f1:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
      {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*local_64)(puVar19,local_50);
      pcVar21 = (char *)thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
      local_10 = (char *)0x0;
      if (0 < (int)pcVar21) {
        local_c = param_1 + 10;
        local_8 = (char ****)local_50;
        do {
          local_18 = pcVar21;
          puVar16 = (undefined4 *)thunk_FUN_0043e420(local_4f0,*(char *)local_8);
          pcVar21 = local_c;
          puVar24 = local_19c;
          for (iVar10 = 0x4e; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar24 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar24 = puVar24 + 1;
          }
          uVar11 = (**(code **)*local_64)(pcVar21);
          iVar10 = 0;
          do {
            uVar22 = 1 << ((byte)iVar10 & 0x1f) & uVar11;
            if (uVar22 < 0x101) {
              iVar13 = local_74;
              if (uVar22 != 0x100) {
                switch(uVar22) {
                case 1:
                  iVar13 = local_f4;
                  break;
                case 2:
                  iVar13 = local_e4;
                  break;
                default:
                  goto switchD_0066c9e5_caseD_3;
                case 4:
                  iVar13 = local_d4;
                  break;
                case 8:
                  iVar13 = local_c4;
                  break;
                case 0x10:
                  iVar13 = local_b4;
                  break;
                case 0x20:
                  iVar13 = local_a4;
                  break;
                case 0x40:
                  iVar13 = local_94;
                  break;
                case 0x80:
                  iVar13 = local_84;
                }
              }
LAB_0066cacb:
              local_10 = (char *)((int)local_10 + iVar13);
            }
            else {
              if (0x100000 < uVar22) {
                iVar13 = local_124;
                if (((uVar22 != 0x200000) && (iVar13 = local_114, uVar22 != 0x400000)) &&
                   (iVar13 = local_104, uVar22 != 0x800000)) goto switchD_0066c9e5_caseD_3;
                goto LAB_0066cacb;
              }
              iVar13 = local_134;
              if (uVar22 == 0x100000) goto LAB_0066cacb;
              if (uVar22 < 0x40001) {
                iVar13 = local_174;
                if (((uVar22 == 0x40000) || (iVar13 = local_154, uVar22 == 0x10000)) ||
                   (iVar13 = local_144, uVar22 == 0x20000)) goto LAB_0066cacb;
              }
              else {
                iVar13 = local_164;
                if (uVar22 == 0x80000) goto LAB_0066cacb;
              }
            }
switchD_0066c9e5_caseD_3:
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x20);
          local_8 = local_8 + 1;
          pcVar21 = local_18 + -1;
          local_18 = pcVar21;
        } while (pcVar21 != (char *)0x0);
      }
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f2:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
      {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*local_64)(puVar19,local_50);
      pcVar21 = (char *)thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
      local_10 = (char *)0x0;
      if (0 < (int)pcVar21) {
        local_c = param_1 + 10;
        local_8 = (char ****)local_50;
        do {
          local_18 = pcVar21;
          puVar16 = (undefined4 *)thunk_FUN_0043e420(local_3b8,*(char *)local_8);
          pcVar21 = local_c;
          puVar24 = local_19c;
          for (iVar10 = 0x4e; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar24 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar24 = puVar24 + 1;
          }
          uVar11 = (**(code **)*local_64)(pcVar21);
          iVar10 = 0;
          do {
            uVar22 = 1 << ((byte)iVar10 & 0x1f) & uVar11;
            if (uVar22 < 0x101) {
              iVar13 = local_70;
              if (uVar22 != 0x100) {
                switch(uVar22) {
                case 1:
                  iVar13 = local_f0;
                  break;
                case 2:
                  iVar13 = local_e0;
                  break;
                default:
                  goto switchD_0066cc62_caseD_3;
                case 4:
                  iVar13 = local_d0;
                  break;
                case 8:
                  iVar13 = local_c0;
                  break;
                case 0x10:
                  iVar13 = local_b0;
                  break;
                case 0x20:
                  iVar13 = local_a0;
                  break;
                case 0x40:
                  iVar13 = local_90;
                  break;
                case 0x80:
                  iVar13 = local_80;
                }
              }
LAB_0066cd48:
              local_10 = (char *)((int)local_10 + iVar13);
            }
            else {
              if (0x100000 < uVar22) {
                iVar13 = local_120;
                if (((uVar22 != 0x200000) && (iVar13 = local_110, uVar22 != 0x400000)) &&
                   (iVar13 = local_100, uVar22 != 0x800000)) goto switchD_0066cc62_caseD_3;
                goto LAB_0066cd48;
              }
              iVar13 = local_130;
              if (uVar22 == 0x100000) goto LAB_0066cd48;
              if (uVar22 < 0x40001) {
                iVar13 = local_170;
                if (((uVar22 == 0x40000) || (iVar13 = local_150, uVar22 == 0x10000)) ||
                   (iVar13 = local_140, uVar22 == 0x20000)) goto LAB_0066cd48;
              }
              else {
                iVar13 = local_160;
                if (uVar22 == 0x80000) goto LAB_0066cd48;
              }
            }
switchD_0066cc62_caseD_3:
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x20);
          local_8 = local_8 + 1;
          pcVar21 = local_18 + -1;
          local_18 = pcVar21;
        } while (pcVar21 != (char *)0x0);
      }
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f3:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
      {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*local_64)(puVar19,local_50);
      pcVar21 = (char *)thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
      local_10 = (char *)0x0;
      if (0 < (int)pcVar21) {
        local_c = param_1 + 10;
        local_8 = (char ****)local_50;
        do {
          local_18 = pcVar21;
          puVar16 = (undefined4 *)thunk_FUN_0043e420(local_628,*(char *)local_8);
          pcVar21 = local_c;
          puVar24 = local_19c;
          for (iVar10 = 0x4e; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar24 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar24 = puVar24 + 1;
          }
          uVar11 = (**(code **)*local_64)(pcVar21);
          iVar10 = 0;
          do {
            uVar22 = 1 << ((byte)iVar10 & 0x1f) & uVar11;
            if (uVar22 < 0x101) {
              iVar13 = local_78;
              if (uVar22 != 0x100) {
                switch(uVar22) {
                case 1:
                  iVar13 = local_f8;
                  break;
                case 2:
                  iVar13 = local_e8;
                  break;
                default:
                  goto switchD_0066cedf_caseD_3;
                case 4:
                  iVar13 = local_d8;
                  break;
                case 8:
                  iVar13 = local_c8;
                  break;
                case 0x10:
                  iVar13 = local_b8;
                  break;
                case 0x20:
                  iVar13 = local_a8;
                  break;
                case 0x40:
                  iVar13 = local_98;
                  break;
                case 0x80:
                  iVar13 = local_88;
                }
              }
LAB_0066cfc8:
              local_10 = (char *)((int)local_10 + iVar13);
            }
            else {
              if (0x100000 < uVar22) {
                iVar13 = local_128;
                if (((uVar22 != 0x200000) && (iVar13 = local_118, uVar22 != 0x400000)) &&
                   (iVar13 = local_108, uVar22 != 0x800000)) goto switchD_0066cedf_caseD_3;
                goto LAB_0066cfc8;
              }
              iVar13 = local_138;
              if (uVar22 == 0x100000) goto LAB_0066cfc8;
              if (uVar22 < 0x40001) {
                iVar13 = local_178;
                if (((uVar22 == 0x40000) || (iVar13 = local_158, uVar22 == 0x10000)) ||
                   (iVar13 = local_148, uVar22 == 0x20000)) goto LAB_0066cfc8;
              }
              else {
                iVar13 = local_168;
                if (uVar22 == 0x80000) goto LAB_0066cfc8;
              }
            }
switchD_0066cedf_caseD_3:
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x20);
          local_8 = local_8 + 1;
          pcVar21 = local_18 + -1;
          local_18 = pcVar21;
        } while (pcVar21 != (char *)0x0);
      }
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f4:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = local_c + 1;
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_8 = (char ****)(**(code **)*local_64)(param_1);
      if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
      {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      puVar19 = (uint *)(param_1 + 5);
      uVar11 = (**(code **)*local_64)(puVar19,local_50);
      ppppcVar12 = (char ****)thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
      pcVar21 = (char *)0x0;
      if (0 < (int)ppppcVar12) {
        local_c = param_1 + 10;
        ppppcVar23 = (char ****)local_50;
        local_8 = ppppcVar12;
        do {
          uVar18 = (**(code **)*local_64)(local_c);
          iVar10 = thunk_FUN_00677700((int)*ppppcVar23,uVar18);
          pcVar21 = pcVar21 + iVar10;
          ppppcVar23 = ppppcVar23 + 1;
          local_8 = (char ****)((int)local_8 + -1);
        } while (local_8 != (char ****)0x0);
        local_8 = (char ****)0x0;
      }
      goto LAB_00670425;
    case 0x7f5:
      local_c = (char *)0x0;
      if (0 < param_2) {
        local_8 = (char ****)0x0;
        do {
          if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
            pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (pcVar21 != (char *)0x0) {
              _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
            }
            local_64[0x21] = -1;
            FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (char ****)((int)local_8 + 5);
        } while ((int)local_c < param_2);
      }
      local_14 = FUN_006aac10(4);
      uVar18 = (**(code **)*local_64)(param_1 + 0x1e);
      uVar18 = (**(code **)*local_64)(param_1 + 0x19,uVar18);
      uVar18 = (**(code **)*local_64)(param_1 + 0x14,uVar18);
      uVar18 = (**(code **)*local_64)(param_1 + 0xf,uVar18);
      pcVar21 = param_1 + 10;
      iVar10 = (**(code **)*local_64)(pcVar21,uVar18);
      pcVar20 = param_1 + 5;
      iVar13 = (**(code **)*local_64)();
      iVar17 = (**(code **)*local_64)();
      uVar11 = thunk_FUN_006777d0(iVar17,(int)param_1,iVar13,pcVar20,iVar10,(int)pcVar21);
      *local_14 = uVar11;
      break;
    default:
      goto switchD_0066b69d_caseD_7d8;
    }
    goto LAB_00670431;
  }
  sVar3 = (short)param_1;
  switch(iVar10) {
  case 0x7f7:
    local_8 = (char ****)0x0;
    do {
      if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_8 = (char ****)((int)local_8 + 5);
    } while ((int)local_8 < 0xf);
    if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x4;
    if (4 < param_2) {
      local_8 = (char ****)0x14;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = local_c + 1;
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    puVar19 = (uint *)(param_1 + 5);
    uVar11 = (**(code **)*local_64)(puVar19,local_50);
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
    DAT_00811980 = 0;
    if (0 < iVar10) {
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = (byte *)(param_1 + 0x23);
      local_1c = (byte *)(param_1 + 0x1e);
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppppcVar12 = (char ****)local_50;
      do {
        uVar28 = 0;
        puVar26 = &LAB_004050fb;
        pcVar21 = local_10;
        sVar3 = (**(code **)*local_64)();
        sVar7 = (short)pcVar21;
        pcVar21 = local_18;
        sVar4 = (**(code **)*local_64)();
        sVar9 = (short)pcVar21;
        pbVar15 = local_2c;
        sVar5 = (**(code **)*local_64)();
        sVar8 = (short)pbVar15;
        pbVar15 = local_1c;
        uVar18 = (**(code **)*local_64)();
        uVar18 = (**(code **)*local_64)(local_24,uVar18);
        uVar18 = (**(code **)*local_64)(local_30,uVar18);
        uVar18 = (**(code **)(*local_64 + 8))(local_28,uVar18);
        sVar6 = (**(code **)*local_64)(local_c,uVar18);
        thunk_FUN_00677be0(*(short *)ppppcVar12,sVar6,pbVar15,sVar5,sVar8,sVar4,sVar9,sVar3,sVar7,
                           puVar26,uVar28);
        ppppcVar12 = ppppcVar12 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    goto LAB_0066df5e;
  case 0x7f8:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (char ****)0xa;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar18 = (**(code **)*local_64)(param_1 + 0x23,&LAB_00402bcb,0);
    uVar18 = (**(code **)*local_64)(param_1 + 0x1e,uVar18);
    uVar18 = (**(code **)*local_64)(param_1 + 0x19,uVar18);
    pcVar21 = param_1 + 0x14;
    sVar6 = (**(code **)*local_64)();
    sVar4 = sVar3 + 0xf;
    sVar8 = (**(code **)*local_64)();
    sVar5 = sVar3 + 10;
    sVar9 = (**(code **)*local_64)();
    sVar3 = sVar3 + 5;
    pbVar15 = (byte *)(**(code **)(*local_64 + 8))();
    sVar7 = (**(code **)*local_64)(param_1);
    thunk_FUN_00677f40(sVar7,pbVar15,sVar3,sVar9,sVar5,sVar8,sVar4,sVar6,pcVar21,uVar18);
    goto LAB_0066dced;
  case 0x7f9:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (char ****)0xa;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar18 = (**(code **)*local_64)(param_1 + 0x23,&LAB_00403d50,0);
    uVar18 = (**(code **)*local_64)(param_1 + 0x1e,uVar18);
    uVar18 = (**(code **)*local_64)(param_1 + 0x19,uVar18);
    pcVar21 = param_1 + 0x14;
    sVar5 = (**(code **)*local_64)();
    sVar4 = sVar3 + 0xf;
    sVar6 = (**(code **)*local_64)();
    sVar3 = sVar3 + 10;
    sVar8 = (**(code **)*local_64)();
    pcVar20 = param_1;
    cVar2 = (**(code **)*local_64)();
    sVar9 = (short)pcVar20;
    pbVar15 = (byte *)(**(code **)(*local_64 + 8))(param_1 + 5);
    thunk_FUN_006785a0(pbVar15,cVar2,sVar9,sVar8,sVar3,sVar6,sVar4,sVar5,pcVar21,uVar18);
    goto LAB_0066dced;
  case 0x7fa:
    local_8 = (char ****)0x0;
    do {
      if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_8 = (char ****)((int)local_8 + 5);
    } while ((int)local_8 < 0x14);
    if ((param_1[0x14] != '\x06') && (param_1[0x14] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x5;
    if (5 < param_2) {
      local_8 = (char ****)0x19;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = local_c + 1;
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    puVar19 = (uint *)(param_1 + 5);
    uVar11 = (**(code **)*local_64)(puVar19,local_50);
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,uVar11,puVar19);
    DAT_00811980 = 0;
    if (0 < iVar10) {
      local_8 = (char ****)(param_1 + 0x32);
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = (byte *)(param_1 + 0x23);
      local_1c = (byte *)(param_1 + 0x1e);
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppppcVar12 = (char ****)local_50;
      do {
        uVar28 = 0;
        puVar26 = &LAB_004027a7;
        ppppcVar23 = local_8;
        sVar3 = (**(code **)*local_64)();
        sVar7 = (short)ppppcVar23;
        pcVar21 = local_10;
        sVar4 = (**(code **)*local_64)();
        sVar9 = (short)pcVar21;
        pcVar21 = local_18;
        sVar5 = (**(code **)*local_64)();
        sVar8 = (short)pcVar21;
        pbVar15 = local_2c;
        cVar2 = (**(code **)*local_64)();
        uVar18 = (**(code **)*local_64)(local_1c);
        uVar18 = (**(code **)*local_64)(local_24,uVar18);
        uVar18 = (**(code **)(*local_64 + 8))(local_30,uVar18);
        uVar18 = (**(code **)*local_64)(local_28,uVar18);
        sVar6 = (**(code **)*local_64)(local_c,uVar18);
        thunk_FUN_00678240((int)*ppppcVar12,sVar6,cVar2,pbVar15,sVar5,sVar8,sVar4,sVar9,sVar3,sVar7,
                           puVar26,uVar28);
        ppppcVar12 = ppppcVar12 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    goto LAB_0066df5e;
  case 0x7fb:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar18 = (**(code **)*local_64)(param_1 + 0x1e,&LAB_00401f7d,0);
    uVar18 = (**(code **)*local_64)(param_1 + 0x19,uVar18);
    uVar18 = (**(code **)*local_64)(param_1 + 0x14,uVar18);
    pcVar21 = param_1 + 0xf;
    sVar5 = (**(code **)*local_64)();
    sVar4 = sVar3 + 10;
    sVar6 = (**(code **)*local_64)();
    sVar3 = sVar3 + 5;
    sVar8 = (**(code **)*local_64)();
    sVar9 = (**(code **)*local_64)();
    thunk_FUN_00677960(sVar9,(short)param_1,sVar8,sVar3,sVar6,sVar4,sVar5,pcVar21,uVar18);
LAB_0066dced:
    local_14 = FUN_006aac10(4);
    *local_14 = DAT_00811980;
    break;
  case 0x7fc:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_c = (char *)0xffffffff;
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    local_10 = (char *)(**(code **)*local_64)(param_1 + 5);
    iVar10 = (**(code **)*local_64)(param_1 + 10);
    switch(local_8) {
    case (char ****)0xdc:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((0 < iVar10) && (iVar10 < 4)) {
          local_c = *(char **)(&DAT_00854350 + (iVar10 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_c = *(char **)(&DAT_00854428 + (int)local_10 * 4);
        }
      }
      break;
    case (char ****)0xdd:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((0 < iVar10) && (iVar10 < 4)) {
          local_c = *(char **)(&DAT_007e19f4 + (iVar10 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_c = *(char **)(&DAT_007e055c + (int)local_10 * 4);
        }
      }
      break;
    case (char ****)0xde:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((0 < iVar10) && (iVar10 < 4)) {
          local_c = *(char **)(&DAT_007e22a0 + (iVar10 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_c = *(char **)(&DAT_007e079c + (int)local_10 * 4);
        }
      }
      break;
    default:
      local_c = (char *)0x0;
      break;
    case (char ****)0xe2:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((0 < iVar10) && (iVar10 < 4)) {
          local_c = *(char **)(&DAT_007e2f04 + (iVar10 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_c = *(char **)(&DAT_007e09dc + (int)local_10 * 4);
        }
      }
    }
    if ((int)local_c < 0) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_14 = FUN_006aac10(4);
    *local_14 = (uint)local_c;
    break;
  default:
    goto switchD_0066b69d_caseD_7d8;
  case 0x80c:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (char ****)0xa;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_10 = (char *)0x0;
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 == 1) {
      puVar27 = (undefined *)0x0;
      uVar18 = 0;
      puVar26 = &LAB_00402ba3;
      sVar9 = -1;
      sVar8 = -1;
      sVar6 = -1;
      sVar5 = 0;
      sVar4 = 0;
      sVar3 = 0;
      cVar2 = -1;
      pbVar15 = (byte *)(**(code **)(*local_64 + 8))(param_1 + 5);
      iVar10 = thunk_FUN_00676d80(local_50[0],0,0x3fffffff,pbVar15,cVar2,sVar3,sVar4,sVar5,sVar6,
                                  sVar8,sVar9,puVar26,uVar18,puVar27);
      if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
        local_10 = (char *)0x1;
        iVar10 = (**(code **)*local_64)(param_1 + 10);
        local_8 = (char ****)(**(code **)*local_64)(param_1 + 0xf);
        local_c = (char *)(**(code **)*local_64)(param_1 + 0x14);
        iVar13 = (**(code **)*local_64)(param_1 + 0x19);
        if ((-1 < iVar10) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          thunk_FUN_004162b0(DAT_00811984,&local_5a,&local_52,&local_58);
          (**(code **)(*local_64 + 0x20))(iVar10,(int)local_5a);
          (**(code **)(*local_64 + 0x20))(local_8,(int)local_52);
          (**(code **)(*local_64 + 0x20))(local_c,(int)local_58);
        }
        if (-1 < iVar13) {
          uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
          (**(code **)(*local_64 + 0x20))(iVar13,uVar18);
          local_14 = FUN_006aac10(4);
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_14 = FUN_006aac10(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80d:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (char ****)0xa;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_10 = (char *)0x0;
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 == 1) {
      uVar18 = 0;
      puVar26 = &LAB_00402ca2;
      sVar9 = -1;
      sVar8 = -1;
      sVar6 = -1;
      sVar5 = 0;
      sVar4 = 0;
      sVar3 = 0;
      pbVar15 = (byte *)(**(code **)(*local_64 + 8))(param_1 + 5);
      iVar10 = thunk_FUN_00677be0((short)local_50[0],0,pbVar15,sVar3,sVar4,sVar5,sVar6,sVar8,sVar9,
                                  puVar26,uVar18);
      if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
        local_10 = (char *)0x1;
        iVar10 = (**(code **)*local_64)(param_1 + 10);
        local_8 = (char ****)(**(code **)*local_64)(param_1 + 0xf);
        local_c = (char *)(**(code **)*local_64)(param_1 + 0x14);
        iVar13 = (**(code **)*local_64)(param_1 + 0x19);
        if ((-1 < iVar10) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          thunk_FUN_004162f0(DAT_00811984,&local_5c,&local_56,&local_54);
          (**(code **)(*local_64 + 0x20))(iVar10,(int)local_5c);
          (**(code **)(*local_64 + 0x20))(local_8,(int)local_56);
          (**(code **)(*local_64 + 0x20))(local_c,(int)local_54);
        }
        if (-1 < iVar13) {
          uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
          (**(code **)(*local_64 + 0x20))(iVar13,uVar18);
          local_14 = FUN_006aac10(4);
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_14 = FUN_006aac10(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80e:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (char ****)0x5;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    uVar18 = 0;
    puVar29 = &LAB_0040188e;
    puVar26 = (undefined *)0xffffffff;
    sVar8 = -1;
    sVar6 = -1;
    sVar5 = 0;
    local_10 = (char *)0x0;
    sVar4 = 0;
    sVar3 = 0;
    pcVar21 = param_1;
    pbVar15 = (byte *)(**(code **)(*local_64 + 8))();
    iVar10 = thunk_FUN_00677f40(0,pbVar15,(short)pcVar21,sVar3,sVar4,sVar5,sVar6,sVar8,puVar26,
                                puVar29);
    if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
      local_10 = (char *)0x1;
      iVar10 = (**(code **)*local_64)(param_1 + 5,uVar18);
      local_8 = (char ****)(**(code **)*local_64)(param_1 + 10);
      local_c = (char *)(**(code **)*local_64)(param_1 + 0xf);
      iVar13 = (**(code **)*local_64)(param_1 + 0x14);
      if ((-1 < iVar10) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        thunk_FUN_004162f0(DAT_00811984,&local_60,&local_5e,(undefined2 *)((int)&local_28 + 2));
        (**(code **)(*local_64 + 0x20))(iVar10,(int)local_60);
        (**(code **)(*local_64 + 0x20))(local_8,(int)local_5e);
        (**(code **)(*local_64 + 0x20))(local_c,(int)local_28._2_2_);
      }
      if (-1 < iVar13) {
        uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
        (**(code **)(*local_64 + 0x20))(iVar13,uVar18);
      }
    }
    local_14 = FUN_006aac10(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80f:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (char ****)0x5;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    uVar18 = 0;
    puVar29 = &LAB_00404c73;
    puVar26 = (undefined *)0xffffffff;
    sVar9 = -1;
    sVar8 = -1;
    sVar6 = 0;
    sVar5 = 0;
    local_10 = (char *)0x0;
    sVar4 = 0;
    sVar3 = -1;
    pcVar21 = param_1;
    pbVar15 = (byte *)(**(code **)(*local_64 + 8))();
    iVar10 = thunk_FUN_006785a0(pbVar15,(char)pcVar21,sVar3,sVar4,sVar5,sVar6,sVar8,sVar9,puVar26,
                                puVar29);
    if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
      local_10 = (char *)0x1;
      iVar10 = (**(code **)*local_64)(param_1 + 5,uVar18);
      local_8 = (char ****)(**(code **)*local_64)(param_1 + 10);
      local_c = (char *)(**(code **)*local_64)(param_1 + 0xf);
      iVar13 = (**(code **)*local_64)(param_1 + 0x14);
      if ((-1 < iVar10) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        thunk_FUN_004162b0(DAT_00811984,(undefined2 *)((int)&local_30 + 2),
                           (undefined2 *)((int)&local_24 + 2),(undefined2 *)((int)&local_1c + 2));
        (**(code **)(*local_64 + 0x20))(iVar10,(int)local_30._2_2_);
        (**(code **)(*local_64 + 0x20))(local_8,(int)local_24._2_2_);
        (**(code **)(*local_64 + 0x20))(local_c,(int)local_1c._2_2_);
      }
      if (-1 < iVar13) {
        uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
        (**(code **)(*local_64 + 0x20))(iVar13,uVar18);
      }
    }
    local_14 = FUN_006aac10(4);
    *local_14 = (uint)local_10;
    break;
  case 0x810:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (char ****)0xa;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_1c = (byte *)0x0;
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 == 1) {
      uVar18 = 0;
      puVar26 = &LAB_0040446c;
      sVar9 = -1;
      sVar8 = -1;
      sVar6 = -1;
      sVar5 = 0;
      sVar4 = 0;
      sVar3 = 0;
      pbVar15 = (byte *)(**(code **)(*local_64 + 8))(param_1 + 5);
      iVar10 = thunk_FUN_00678240((int)local_50[0],0,-1,pbVar15,sVar3,sVar4,sVar5,sVar6,sVar8,sVar9,
                                  puVar26,uVar18);
      if ((iVar10 == -1) && (DAT_00811984 != (int *)0x0)) {
        local_1c = (byte *)0x1;
        iVar10 = (**(code **)*local_64)(param_1 + 10);
        local_8 = (char ****)(**(code **)*local_64)(param_1 + 0xf);
        local_c = (char *)(**(code **)*local_64)(param_1 + 0x14);
        iVar13 = (**(code **)*local_64)(param_1 + 0x19);
        if ((-1 < iVar10) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          thunk_FUN_004162b0(DAT_00811984,(undefined2 *)((int)&local_2c + 2),
                             (undefined2 *)((int)&local_18 + 2),(undefined2 *)((int)&local_10 + 2));
          (**(code **)(*local_64 + 0x20))(iVar10,(int)local_2c._2_2_);
          (**(code **)(*local_64 + 0x20))(local_8,(int)local_18._2_2_);
          (**(code **)(*local_64 + 0x20))(local_c,(int)local_10._2_2_);
        }
        if (-1 < iVar13) {
          uVar18 = (**(code **)(*DAT_00811984 + 0x11c))();
          (**(code **)(*local_64 + 0x20))(iVar13,uVar18);
          local_14 = FUN_006aac10(4);
          *local_14 = (uint)local_1c;
          break;
        }
      }
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_14 = FUN_006aac10(4);
    *local_14 = (uint)local_1c;
    break;
  case 0x816:
  case 0x817:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(**(code **)*local_64)(param_1);
    if ((local_c == (char *)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_8 = (char ****)0x0;
    iVar10 = thunk_FUN_00668f50(local_64,local_c,0,(uint *)local_50);
    if (iVar10 == 1) {
      if (*(short *)(param_1 + param_2 * 5 + 1) == 0x816) {
        thunk_FUN_004e6f00((int)local_50[0]);
      }
      else if (*(short *)(param_1 + param_2 * 5 + 1) != 0x817) {
        local_14 = FUN_006aac10(4);
        *local_14 = (uint)local_8;
        break;
      }
      local_8 = (char ****)thunk_FUN_004e6fe0((int)local_50[0]);
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)local_8;
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)local_8;
    }
    break;
  case 0x818:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((int)local_8 < 0) || (0x9a < (int)local_8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_14 = FUN_006aac10(4);
    *local_14 = (uint)*(byte *)((int)&DAT_00798fd8 + (int)local_8);
    break;
  case 0x819:
  case 0x81b:
  case 0x81c:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_10 = (char *)(**(code **)*local_64)(param_1);
    local_c = (char *)(**(code **)*local_64)(param_1 + 5);
    local_8 = (char ****)(**(code **)*local_64)(param_1 + 10);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    if ((local_10 == (char *)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_18 = (char *)0x0;
    iVar10 = thunk_FUN_00668f50(local_64,local_10,0,(uint *)local_50);
    ppppcVar12 = local_8;
    pcVar21 = local_c;
    if (iVar10 == 1) {
      sVar3 = *(short *)(param_1 + param_2 * 5 + 1);
      if (sVar3 == 0x819) {
        iVar10 = thunk_FUN_004e60d0((int)local_50[0],(int)local_c);
        bVar1 = (int)local_8 <= iVar10;
        local_14 = FUN_006aac10(4);
        *local_14 = (uint)bVar1;
        break;
      }
      if (sVar3 == 0x81b) {
        iVar10 = thunk_FUN_004e5990((int)local_50[0],(uint)local_c,(int)local_8);
        local_14 = FUN_006aac10(4);
        *local_14 = (uint)(iVar10 != 0);
        break;
      }
      if (sVar3 == 0x81c) {
        iVar10 = thunk_FUN_004e5cc0((int)local_50[0],(uint)local_c,(int)local_8);
        if ((iVar10 == 0) &&
           (iVar10 = thunk_FUN_004e7f20((int)local_50[0],(int)pcVar21,(int)ppppcVar12), iVar10 == 0)
           ) {
          local_14 = FUN_006aac10(4);
          *local_14 = 0;
        }
        else {
          local_14 = FUN_006aac10(4);
          *local_14 = 1;
        }
        break;
      }
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    uVar11 = (uint)local_18;
    local_14 = FUN_006aac10(4);
    *local_14 = uVar11;
    break;
  case 0x81a:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    local_c = (char *)(**(code **)*local_64)(param_1 + 5);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    if ((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_10 = (char *)0x0;
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 == 1) {
      bVar1 = thunk_FUN_004e5f90((int)local_50[0],(uint)local_c);
      local_14 = FUN_006aac10(4);
      *local_14 = (uint)(CONCAT31(extraout_var,bVar1) != 0);
    }
    else {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      uVar11 = (uint)local_10;
      local_14 = FUN_006aac10(4);
      *local_14 = uVar11;
    }
    break;
  case 0x81d:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(**(code **)*local_64)(param_1);
    iVar10 = (**(code **)*local_64)(param_1 + 5);
    local_8 = (char ****)(iVar10 + -1);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    if (((int)local_8 < 0) || (3 < (int)local_c)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_14 = FUN_006aac10(4);
    *local_14 = *(uint *)(&DAT_007e481c + (int)(local_8 + (int)local_c) * 4);
    break;
  case 0x82a:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      pcVar21 = thunk_FUN_00674af0(iVar10);
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (char ****)0x5;
      do {
        if ((param_1[(int)local_8] != '\x06') && (param_1[(int)local_8] != '\x03')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
       || (local_8 == (char ****)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    uVar18 = (**(code **)(*local_64 + 8))(param_1 + 10);
    pbVar14 = (byte *)(param_1 + 5);
    pbVar15 = (byte *)(**(code **)(*local_64 + 8))(pbVar14,uVar18);
    iVar10 = thunk_FUN_0066ab60((byte)local_50[0],pbVar15,pbVar14);
    local_14 = FUN_006aac10(4);
    if (iVar10 == 0) {
      *local_14 = 0xffffffff;
    }
    else {
      *local_14 = (uint)*(ushort *)(iVar10 + 0x7d);
    }
    break;
  case 0x82b:
    local_8 = (char ****)0x0;
    do {
      if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_8 = (char ****)((int)local_8 + 5);
    } while ((int)local_8 < 0x14);
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
       || (local_8 == (char ****)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (**(code **)*local_64)(param_1 + 5);
    this = (void *)thunk_FUN_0066ac80(local_50[0],uVar11);
    ppppcVar12 = local_50[0];
    pcVar21 = local_c;
    if (this != (void *)0x0) {
      cVar2 = (char)param_1 + '\x0f';
      uVar18 = (**(code **)*local_64)();
      iVar10 = (**(code **)*local_64)(param_1 + 10,uVar18);
      pcVar21 = (char *)thunk_FUN_0065da50(this,iVar10,cVar2);
      ppppcVar12 = local_50[0];
      local_c = pcVar21;
    }
    goto joined_r0x006703e6;
  case 0x82c:
    local_8 = (char ****)0x0;
    do {
      if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_8 = (char ****)((int)local_8 + 5);
    } while ((int)local_8 < 0x14);
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
       || (local_8 == (char ****)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (**(code **)*local_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(local_50[0],uVar11);
    ppppcVar12 = local_50[0];
    pcVar21 = local_c;
    if (iVar10 != 0) {
      cVar2 = (char)param_1 + '\x0f';
      uVar18 = (**(code **)*local_64)();
      uVar25 = (**(code **)*local_64)(param_1 + 10,uVar18);
      pcVar21 = (char *)thunk_FUN_0065dc00(iVar10,(int)((ulonglong)uVar25 >> 0x20),(uint)uVar25,
                                           cVar2);
      ppppcVar12 = local_50[0];
      local_c = pcVar21;
    }
    goto joined_r0x006703e6;
  case 0x82d:
    local_8 = (char ****)0x0;
    do {
      if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_8 = (char ****)((int)local_8 + 5);
    } while ((int)local_8 < 10);
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
       || (local_8 == (char ****)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    uVar11 = (**(code **)*local_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(local_50[0],uVar11);
    pcVar21 = (char *)0xffffffff;
    if (iVar10 != 0) {
      pcVar21 = *(char **)(iVar10 + 0xeb);
    }
    goto LAB_0066fbc1;
  case 0x82e:
    local_8 = (char ****)0x0;
    do {
      if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_8 = (char ****)((int)local_8 + 5);
    } while ((int)local_8 < 0x19);
    if ((param_1[0x19] != '\x06') && (param_1[0x19] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0x6;
    if (6 < param_2) {
      local_8 = (char ****)0x1e;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
       || (local_8 == (char ****)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (**(code **)*local_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(local_50[0],uVar11);
    ppppcVar12 = local_50[0];
    pcVar21 = local_c;
    if (iVar10 != 0) {
      sVar4 = sVar3 + 0x37;
      sVar6 = (**(code **)*local_64)();
      sVar5 = sVar3 + 0x32;
      sVar8 = (**(code **)*local_64)();
      sVar3 = sVar3 + 0x2d;
      sVar9 = (**(code **)*local_64)();
      pbVar15 = (byte *)(param_1 + 0x28);
      cVar2 = (**(code **)*local_64)();
      pcVar21 = param_1 + 0x23;
      uVar18 = (**(code **)*local_64)();
      uVar18 = (**(code **)*local_64)(param_1 + 0x1e,uVar18);
      uVar18 = (**(code **)(*local_64 + 8))(param_1 + 0x19,uVar18);
      uVar18 = (**(code **)*local_64)(param_1 + 0x14,uVar18);
      uVar18 = (**(code **)*local_64)(param_1 + 0xf,uVar18);
      uVar25 = (**(code **)*local_64)(param_1 + 10,uVar18);
      pcVar21 = (char *)thunk_FUN_0065dd30(iVar10,(int)((ulonglong)uVar25 >> 0x20),(uint)uVar25,
                                           (uint)pcVar21,cVar2,pbVar15,sVar9,sVar3,sVar8,sVar5,sVar6
                                           ,sVar4);
      ppppcVar12 = local_50[0];
      local_c = pcVar21;
    }
    goto joined_r0x006703e6;
  case 0x82f:
    local_8 = (char ****)0x0;
    do {
      if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
        pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (pcVar21 != (char *)0x0) {
          _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
        }
        local_64[0x21] = -1;
        FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      }
      local_8 = (char ****)((int)local_8 + 5);
    } while ((int)local_8 < 0x23);
    if ((param_1[0x23] != '\x06') && (param_1[0x23] != '\x03')) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
       || (local_8 == (char ****)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_8 = (char ****)0x0;
    puVar19 = (uint *)(**(code **)*local_64)(param_1 + 0xf,local_280);
    pcVar21 = param_1 + 10;
    pcVar20 = (char *)(**(code **)*local_64)();
    iVar10 = thunk_FUN_00668f50(local_64,pcVar20,(uint)pcVar21,puVar19);
    if (0 < iVar10) {
      puVar16 = local_280;
      do {
        uVar18 = *puVar16;
        puVar16 = puVar16 + 1;
        iVar10 = iVar10 + -1;
        local_8 = (char ****)((uint)local_8 | 1 << ((byte)uVar18 & 0x1f));
      } while (iVar10 != 0);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (**(code **)*local_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(local_50[0],uVar11);
    pcVar21 = local_c;
    if (iVar10 != 0) {
      pbVar15 = (byte *)(param_1 + 0x23);
      cVar2 = (**(code **)(*local_64 + 8))();
      pcVar21 = param_1 + 0x1e;
      uVar18 = (**(code **)*local_64)();
      uVar18 = (**(code **)*local_64)(param_1 + 0x19,uVar18);
      uVar25 = (**(code **)*local_64)(param_1 + 0x14,uVar18);
      pcVar21 = (char *)thunk_FUN_0065e070(iVar10,(int)((ulonglong)uVar25 >> 0x20),(uint)local_8,
                                           (uint)uVar25,(uint)pcVar21,cVar2,pbVar15);
      local_c = pcVar21;
    }
LAB_0066fbc1:
    if ((int)pcVar21 < 0) {
      _strncpy((char *)(local_64 + 1),&DAT_008016a0,0x7f);
      local_64[0x21] = (int)local_50[0];
      goto LAB_0067041b;
    }
    goto LAB_00670425;
  case 0x830:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = local_c + 1;
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
       || (local_8 == (char ****)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    uVar11 = (**(code **)*local_64)(param_1 + 5);
    local_8 = (char ****)thunk_FUN_0066ac80(local_50[0],uVar11);
    ppppcVar12 = local_50[0];
    pcVar21 = (char *)0xffffffff;
    if (local_8 != (char ****)0x0) {
      puVar16 = &local_21c;
      for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      *(undefined2 *)puVar16 = 0;
      local_21c = (**(code **)*local_64)(param_1 + 10);
      puVar19 = local_1d0;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar19 = 0;
        puVar19 = puVar19 + 1;
      }
      local_1c6 = &local_21c;
      local_218 = 0xffff;
      local_214 = 0xfffffff0;
      local_210 = 0xffff;
      local_1de = 1;
      local_1d0[0] = 0x68;
      thunk_FUN_00662240(local_1d0);
      ppppcVar12 = local_50[0];
      pcVar21 = (char *)(uint)('\0' < local_1c8);
    }
    goto joined_r0x006703e6;
  case 0x831:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
       || (local_8 == (char ****)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (**(code **)*local_64)(param_1 + 5);
    iVar10 = thunk_FUN_0066ac80(local_50[0],uVar11);
    ppppcVar12 = local_50[0];
    pcVar21 = local_c;
    if (iVar10 != 0) {
      uVar18 = (**(code **)*local_64)(param_1 + 0x19);
      pcVar21 = param_1 + 0x14;
      uVar28 = (**(code **)*local_64)();
      uVar28 = (**(code **)*local_64)(param_1 + 0xf,uVar28);
      uVar25 = (**(code **)*local_64)(param_1 + 10,uVar28);
      pcVar21 = (char *)thunk_FUN_0065e450(iVar10,(int)((ulonglong)uVar25 >> 0x20),(uint)uVar25,
                                           pcVar21,uVar18);
      ppppcVar12 = local_50[0];
      local_c = pcVar21;
    }
joined_r0x006703e6:
    if ((int)pcVar21 < 0) {
      _strncpy((char *)(local_64 + 1),&DAT_008016a0,0x7f);
      local_64[0x21] = (int)ppppcVar12;
LAB_0067041b:
      FUN_006a5e40(-0xaa,DAT_007ed77c,0x7d2a24,0x79);
    }
LAB_00670425:
    local_14 = FUN_006aac10(4);
    *local_14 = (uint)pcVar21;
    break;
  case 0x848:
    local_c = (char *)0x0;
    if (0 < param_2) {
      local_8 = (char ****)0x0;
      do {
        if ((param_1[(int)local_8] != '\x04') && (param_1[(int)local_8] != '\x01')) {
          pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar21 != (char *)0x0) {
            _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
          }
          local_64[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = local_c + 1;
        local_8 = (char ****)((int)local_8 + 5);
      } while ((int)local_c < param_2);
    }
    local_8 = (char ****)(**(code **)*local_64)(param_1);
    if (((local_8 == (char ****)0x9) && (iVar10 = (**(code **)(*local_64 + 0x18))(), iVar10 == 8))
       || (local_8 == (char ****)0xff)) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = thunk_FUN_00668f50(local_64,(char *)local_8,0,(uint *)local_50);
    if (iVar10 != 1) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    iVar10 = 0;
    local_10 = (char *)(uint)DAT_00808aaf;
    local_8 = (char ****)0x0;
    if (local_10 != (char *)0x0) {
      local_c = &DAT_00808af5;
      do {
        if (((char ****)(uint)(byte)local_c[-1] == local_50[0]) && (*local_c != '\0')) {
          local_8 = (char ****)(&DAT_00808ab0 + iVar10 * 0x27);
          break;
        }
        iVar10 = iVar10 + 1;
        local_c = local_c + 0x9c;
      } while (iVar10 < (int)local_10);
    }
    ppppcVar12 = local_8;
    if (local_8 == (char ****)0x0) {
      pcVar21 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (pcVar21 != (char *)0x0) {
        _strncpy((char *)(local_64 + 1),pcVar21,0x7f);
      }
      local_64[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
      ppppcVar12 = local_8;
    }
LAB_0066d630:
    puVar19 = (uint *)FUN_006c49b0((char *)ppppcVar12);
    if (param_3 == (int *)0x0) {
      DAT_00858df8 = (undefined4 *)local_260;
      return puVar19;
    }
    *param_3 = 3;
    DAT_00858df8 = (undefined4 *)local_260;
    return puVar19;
  case 0x849:
    local_14 = FUN_006aac10(4);
    *local_14 = DAT_00808a90 >> 8 & 0xff;
    break;
  case 0x84a:
    local_14 = FUN_006aac10(4);
    *local_14 = DAT_00808a90 & 0xff;
    break;
  case 0x84b:
    local_14 = FUN_006aac10(4);
    *local_14 = (uint)DAT_00808a9b;
    break;
  case 0x84c:
    local_14 = FUN_006aac10(4);
    *local_14 = DAT_00808a90 >> 0x10 & 0xff;
    break;
  case 0x84d:
    local_14 = FUN_006aac10(4);
    *local_14 = DAT_00808a90 >> 0x18;
  }
LAB_00670431:
  if (param_3 == (int *)0x0) {
    DAT_00858df8 = (undefined4 *)local_260;
    return local_14;
  }
  *param_3 = 1;
  DAT_00858df8 = (undefined4 *)local_260;
  return local_14;
}

