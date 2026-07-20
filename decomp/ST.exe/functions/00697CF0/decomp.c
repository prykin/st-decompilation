
void __thiscall FUN_00697cf0(void *this,int param_1,int param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  AnonShape_00697CF0_36737CA3 *pAVar14;
  undefined4 *puVar15;
  int iVar16;
  bool bVar17;
  int local_c4;
  undefined4 local_c0;
  uint local_bc;
  int local_b8;
  undefined1 *local_b4;
  uint local_ac;
  int local_a8;
  AnonShape_00697CF0_36737CA3 *local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  int local_90;
  uint local_88;
  int local_84;
  int local_80;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  int local_5c;
  uint local_58;
  int local_50;
  uint local_48;
  int local_44;
  uint local_3c;
  int local_38;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079d798;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff14;
  iVar12 = 0;
  local_6c = 0;
  local_48 = 0;
  local_5c = 0;
  local_ac = 0;
  local_b8 = 0;
  local_68 = 0;
  if (*(int *)((int)this + 0x5853) != 0) {
    iVar5 = *(int *)(*(int *)((int)this + 0x5853) + 0xc);
    local_8 = 0;
    ExceptionList = &local_14;
    local_70 = iVar5;
    Library::MSVCRT::FUN_0072da40();
    local_8 = 0xffffffff;
    local_88 = 0;
    local_28 = &stack0xffffff14;
    puVar2 = &stack0xffffff14;
    local_1c = &stack0xffffff14;
    puVar3 = &stack0xffffff14;
    if (0 < iVar5) {
      do {
        puVar2 = local_28;
        puVar3 = local_1c;
        if (param_1 < 1) break;
        iVar5 = *(int *)((int)this + 0x5853);
        if (local_88 < *(uint *)(iVar5 + 0xc)) {
          pAVar14 = (AnonShape_00697CF0_36737CA3 *)
                    (*(int *)(iVar5 + 8) * local_88 + *(int *)(iVar5 + 0x1c));
        }
        else {
          pAVar14 = (AnonShape_00697CF0_36737CA3 *)0x0;
        }
        local_a4 = pAVar14;
        if ((*(int *)pAVar14 == 0) && (pAVar14->field_0005 < 1)) {
          if (pAVar14->field_0015 != 0) {
            uVar4 = Library::MSVCRT::FUN_0072e6c0();
            local_a0 = (int)uVar4 % 6 + 1;
            local_74 = 0;
            local_90 = 0;
            local_94 = 0;
            iVar5 = pAVar14->field_0015;
            uVar4 = *(uint *)(iVar5 + 0xc);
            if (0 < (int)uVar4) {
              do {
                if (local_94 < uVar4) {
                  pbVar13 = (byte *)(*(int *)(iVar5 + 8) * local_94 + *(int *)(iVar5 + 0x1c));
                }
                else {
                  pbVar13 = (byte *)0x0;
                }
                if (pbVar13 != (byte *)0x0) {
                  local_90 = local_90 + 1;
                  iVar5 = *(int *)(pbVar13 + 2) / *(int *)((int)this + 0x5833);
                  uVar11 = *(int *)(pbVar13 + 2) % *(int *)((int)this + 0x5833);
                  uVar4 = uVar11;
                  iVar12 = iVar5;
                  uVar8 = uVar11;
                  if (local_94 == 0) {
LAB_00697e8c:
                    local_48 = uVar8;
                    local_5c = iVar12;
                    local_ac = uVar4;
                    local_b8 = iVar5;
                  }
                  else {
                    if ((int)uVar11 < (int)local_48) {
                      local_48 = uVar11;
                    }
                    if (iVar5 < local_5c) {
                      local_5c = iVar5;
                    }
                    if ((int)local_ac < (int)uVar11) {
                      local_ac = uVar11;
                    }
                    uVar4 = local_ac;
                    iVar12 = local_5c;
                    uVar8 = local_48;
                    if (local_b8 < iVar5) goto LAB_00697e8c;
                  }
                  if ((*pbVar13 & 1) != 0) {
                    local_74 = local_74 + 1;
                    thunk_FUN_006a0c90(uVar11,iVar5,0,1,0,1,local_a0);
                  }
                }
                local_94 = local_94 + 1;
                iVar5 = local_a4->field_0015;
                uVar4 = *(uint *)(iVar5 + 0xc);
                iVar12 = local_6c;
              } while ((int)local_94 < (int)uVar4);
            }
            if (local_90 != 0) {
              puVar6 = (undefined2 *)(local_28 + iVar12 * 0x10);
              *puVar6 = (undefined2)local_88;
              puVar6[1] = (short)local_90;
              *(int *)(puVar6 + 2) = local_74;
              puVar6[4] = (undefined2)local_48;
              puVar6[5] = (undefined2)local_ac;
              puVar6[6] = (undefined2)local_5c;
              puVar6[7] = (undefined2)local_b8;
              iVar12 = iVar12 + 1;
              local_6c = iVar12;
            }
          }
        }
        else if (0 < *(int *)pAVar14) break;
        local_88 = local_88 + 1;
        puVar2 = local_28;
        puVar3 = local_1c;
      } while ((int)local_88 < local_70);
    }
    local_1c = puVar3;
    local_28 = puVar2;
    if (iVar12 != 0) {
      local_8 = 1;
      Library::MSVCRT::FUN_0072da40();
      local_b4 = &stack0xffffff14;
      local_1c = &stack0xffffff14;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      local_a8 = iVar12 * 2;
      local_1c = &stack0xffffff14;
      local_64 = (undefined4 *)&stack0xffffff14;
      while ((0 < param_2 && (iVar12 = local_6c, 0 < local_a8))) {
        local_a8 = local_a8 + -1;
        local_80 = thunk_FUN_0069f7f0((int)local_28,local_6c,0x10,4,3);
        iVar12 = local_6c;
        if (-1 < local_80) {
          psVar7 = (short *)(local_28 + local_80 * 0x10);
          iVar12 = *(int *)((int)this + 0x5853);
          if ((uint)(int)*psVar7 < *(uint *)(iVar12 + 0xc)) {
            local_a4 = (AnonShape_00697CF0_36737CA3 *)
                       (*(int *)(iVar12 + 8) * (int)*psVar7 + *(int *)(iVar12 + 0x1c));
          }
          else {
            local_a4 = (AnonShape_00697CF0_36737CA3 *)0x0;
          }
          local_38 = ((int)psVar7[5] - (int)psVar7[4]) + 1;
          local_44 = ((int)psVar7[7] - (int)psVar7[6]) + 1;
          puVar15 = local_64;
          for (uVar4 = (local_44 * local_38 & 0x7fffffffU) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar15 = 0xffffffff;
            puVar15 = puVar15 + 1;
          }
          for (uVar4 = local_44 * local_38 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar15 = 0xff;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          local_94 = 0;
          iVar12 = local_a4->field_0015;
          if (0 < *(int *)(iVar12 + 0xc)) {
            bVar17 = *(int *)(iVar12 + 0xc) != 0;
            do {
              if (bVar17) {
                pbVar13 = (byte *)(*(int *)(iVar12 + 8) * local_94 + *(int *)(iVar12 + 0x1c));
              }
              else {
                pbVar13 = (byte *)0x0;
              }
              if ((*pbVar13 & 1) != 0) {
                *(undefined2 *)
                 ((int)local_64 +
                 (((*(int *)(pbVar13 + 2) / *(int *)((int)this + 0x5833) -
                   (int)*(short *)(local_28 + local_80 * 0x10 + 0xc)) * local_38 -
                  (int)*(short *)(local_28 + local_80 * 0x10 + 8)) +
                 *(int *)(pbVar13 + 2) % *(int *)((int)this + 0x5833)) * 2) = 0;
              }
              local_94 = local_94 + 1;
              iVar12 = local_a4->field_0015;
              bVar17 = local_94 < *(uint *)(iVar12 + 0xc);
            } while ((int)local_94 < (int)*(uint *)(iVar12 + 0xc));
          }
          local_9c = Library::MSVCRT::FUN_0072e6c0();
          local_9c = local_9c & 0x80000007;
          if ((int)local_9c < 0) {
            local_9c = (local_9c - 1 | 0xfffffff8) + 1;
          }
          local_c4 = 10;
          local_3c = 0xffffff9c;
          local_98 = -100;
          local_58 = Library::MSVCRT::FUN_0072e6c0();
          local_58 = local_58 & 0x80000003;
          if ((int)local_58 < 0) {
            local_58 = (local_58 - 1 | 0xfffffffc) + 1;
          }
          do {
            iVar12 = local_a4->field_0015;
            uVar4 = *(uint *)(iVar12 + 0xc);
            uVar8 = Library::MSVCRT::FUN_0072e6c0();
            uVar8 = (int)uVar8 % (int)uVar4;
            puVar1 = (&PTR_DAT_007d7f70)[local_9c];
            if (uVar8 < uVar4) {
              iVar12 = *(int *)(iVar12 + 8) * uVar8 + *(int *)(iVar12 + 0x1c);
            }
            else {
              iVar12 = 0;
            }
            local_84 = *(int *)(iVar12 + 2) / *(int *)((int)this + 0x5833);
            local_78 = *(int *)(iVar12 + 2) % *(int *)((int)this + 0x5833);
            iVar12 = (int)*(short *)(local_28 + local_80 * 0x10 + 0xc);
            if ((((iVar12 <= local_84) && (local_84 < *(short *)(local_28 + local_80 * 0x10 + 0xe)))
                && (iVar5 = (int)*(short *)(local_28 + local_80 * 0x10 + 8), iVar5 <= (int)local_78)
                ) && ((int)local_78 < (int)*(short *)(local_28 + local_80 * 0x10 + 10))) {
              local_68 = 1;
              iVar16 = local_58 * 0xe4;
              if (*(int *)(puVar1 + iVar16) < 1) {
                local_68 = 0;
              }
              else {
                local_94 = 0;
                do {
                  iVar9 = local_94 * 0x1c + iVar16;
                  iVar10 = (*(int *)(puVar1 + iVar9 + 4) - iVar5) + local_78;
                  iVar9 = (*(int *)(puVar1 + iVar9 + 8) - iVar12) + local_84;
                  if ((((-1 < iVar10) && (iVar10 < local_38)) &&
                      ((-1 < iVar9 && (iVar9 < local_44)))) &&
                     ((((int)local_78 < iVar5 ||
                       ((int)*(short *)(local_28 + local_80 * 0x10 + 10) < (int)local_78)) ||
                      ((local_84 < iVar12 ||
                       ((*(short *)(local_28 + local_80 * 0x10 + 0xe) < local_84 ||
                        (*(short *)((int)local_64 + (iVar9 * local_38 + iVar10) * 2) != 0)))))))) {
                    local_68 = 0;
                    break;
                  }
                  local_94 = local_94 + 1;
                } while ((int)local_94 < *(int *)(puVar1 + iVar16));
              }
              iVar12 = local_84;
              uVar4 = local_78;
              if (local_68 == 1) break;
            }
            local_c4 = local_c4 + -1;
            iVar12 = local_98;
            uVar4 = local_3c;
          } while (0 < local_c4);
          local_3c = uVar4;
          local_98 = iVar12;
          iVar12 = local_6c;
          if (local_68 != 0) {
            iVar5 = local_58 * 0xe4;
            thunk_FUN_006a0da0(this,local_3c,local_98,*(int *)(puVar1 + iVar5 + 4) + local_3c,
                               *(int *)(puVar1 + iVar5 + 8) + local_98,0,1);
            iVar12 = 0;
            if (*(int *)(puVar1 + iVar5) != 1 && -1 < *(int *)(puVar1 + iVar5) + -1) {
              do {
                iVar9 = *(int *)(puVar1 + (local_58 * 0x39 + iVar12) * 4 + 0xcc) * 0x1c + iVar5;
                iVar16 = *(int *)(puVar1 + (local_58 * 0x39 + iVar12) * 4 + 200) * 0x1c + iVar5;
                thunk_FUN_006a0da0(this,*(int *)(puVar1 + iVar16 + 4) + local_3c,
                                   *(int *)(puVar1 + iVar16 + 8) + local_98,
                                   *(int *)(puVar1 + iVar9 + 4) + local_3c,
                                   *(int *)(puVar1 + iVar9 + 8) + local_98,0,1);
                iVar12 = iVar12 + 1;
              } while (iVar12 < *(int *)(puVar1 + iVar5) + -1);
            }
            param_2 = param_2 + -1;
            *(undefined4 *)(local_28 + local_80 * 0x10 + 4) = 0;
            iVar12 = local_6c;
          }
        }
      }
    }
    local_a8 = iVar12 * 3;
    for (; (-1 < param_1 && (0 < local_a8)); local_a8 = local_a8 + -1) {
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      iVar5 = *(int *)((int)this + 0x5853);
      if ((uint)(int)*(short *)(local_28 + ((int)uVar4 % iVar12) * 0x10) < *(uint *)(iVar5 + 0xc)) {
        local_a4 = (AnonShape_00697CF0_36737CA3 *)
                   (*(int *)(iVar5 + 8) * (int)*(short *)(local_28 + ((int)uVar4 % iVar12) * 0x10) +
                   *(int *)(iVar5 + 0x1c));
      }
      else {
        local_a4 = (AnonShape_00697CF0_36737CA3 *)0x0;
      }
      if ((((*(int *)local_a4 == 0) && (local_a4->field_0005 < 2)) && (3 < local_a4->field_0011)) &&
         (local_a4->field_0015 != 0)) {
        local_50 = local_a4->field_0011 / 10 + 1;
        iVar12 = local_a4->field_0015;
        uVar4 = *(uint *)(iVar12 + 0xc);
        uVar8 = Library::MSVCRT::FUN_0072e6c0();
        local_2c = (int)uVar8 % (int)uVar4;
        local_94 = 0;
        if (0 < (int)uVar4) {
          do {
            uVar8 = local_94 + local_2c;
            if ((int)uVar4 < (int)uVar8) {
              uVar8 = uVar8 - uVar4;
            }
            if (uVar8 < uVar4) {
              iVar12 = *(int *)(iVar12 + 8) * uVar8 + *(int *)(iVar12 + 0x1c);
            }
            else {
              iVar12 = 0;
            }
            if (iVar12 != 0) {
              iVar5 = *(int *)(iVar12 + 2) / *(int *)((int)this + 0x5833);
              uVar8 = *(int *)(iVar12 + 2) % *(int *)((int)this + 0x5833);
              uVar4 = Library::MSVCRT::FUN_0072e6c0();
              uVar4 = uVar4 & 0x80000003;
              if ((int)uVar4 < 0) {
                uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
              }
              if (uVar4 == 1) {
                thunk_FUN_006a1370(*(int **)((int)this + 8),uVar8,iVar5,0,&local_c0);
                bVar17 = false;
                iVar12 = thunk_FUN_006a20e0(*(int **)((int)this + 8),uVar8,iVar5,0,0xff);
                if ((iVar12 == 0) ||
                   ((((local_bc & 0x2000) == 0x2000 && ((local_bc & 0xf) == 0)) &&
                    ((local_bc & 0x4000) == 0)))) {
                  bVar17 = true;
                }
                if (bVar17) {
                  uVar4 = Library::MSVCRT::FUN_0072e6c0();
                  if ((int)uVar4 % 6 == 1) {
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar11 = (int)uVar4 % 3 + 1;
                    iVar16 = 0;
                    iVar12 = 1;
                    uVar4 = 1;
                    iVar9 = 0;
                  }
                  else if ((int)uVar4 % 6 == 2) {
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar11 = (int)uVar4 % 6 + 1;
                    iVar16 = 0;
                    iVar12 = 0xff;
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar4 = uVar4 & 0x80000001;
                    if ((int)uVar4 < 0) {
                      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                    }
                    uVar4 = uVar4 + 1;
                    iVar9 = 1;
                  }
                  else {
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar11 = (int)uVar4 % 6 + 1;
                    iVar16 = 0;
                    iVar12 = 0xff;
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar4 = uVar4 & 0x80000001;
                    if ((int)uVar4 < 0) {
                      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                    }
                    uVar4 = uVar4 + 2;
                    iVar9 = 0;
                  }
                  thunk_FUN_006a0c90(uVar8,iVar5,iVar9,uVar4,iVar12,iVar16,uVar11);
                  param_1 = param_1 + -1;
                  local_50 = local_50 + -1;
                  if ((local_50 < 1) || (param_1 < 1)) break;
                }
              }
            }
            local_94 = local_94 + 1;
            iVar12 = local_a4->field_0015;
            uVar4 = *(uint *)(iVar12 + 0xc);
          } while ((int)local_94 < (int)uVar4);
        }
      }
      iVar12 = local_6c;
    }
  }
  ExceptionList = local_14;
  return;
}

