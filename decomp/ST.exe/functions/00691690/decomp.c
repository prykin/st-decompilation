
void __thiscall
FUN_00691690(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  short *psVar1;
  void *pvVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *this_00;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  CHAR local_190 [260];
  int local_8c [2];
  ushort local_84;
  int local_70;
  ushort *local_6c;
  int local_68;
  ushort *local_64;
  byte local_44;
  uint local_3c;
  ushort *local_38;
  uint local_34;
  ushort *local_30;
  uint local_2c;
  int *local_28;
  char *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  void *local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_14 = this;
  local_38 = FUN_006f2d90(param_1,s_2D_CLT_007d59b8,0,0);
  if (local_38 != (ushort *)0x0) {
    puVar8 = local_38;
    puVar3 = (undefined4 *)((int)this + 0x37ac);
    for (iVar10 = 0xf; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar3 = *(undefined4 *)puVar8;
      puVar8 = puVar8 + 2;
      puVar3 = puVar3 + 1;
    }
    FUN_006f20e0((uint *)&local_38);
  }
  local_30 = FUN_006f2d90(param_1,s_CLR_COVER_007d59ac,0,0);
  if (local_30 != (ushort *)0x0) {
    puVar3 = &DAT_007d5934;
    puVar8 = local_30;
    do {
      uVar13 = *(undefined4 *)puVar8;
      puVar8 = puVar8 + 2;
      *puVar3 = uVar13;
      puVar3 = puVar3 + 2;
    } while ((int)puVar3 < 0x7d595c);
    FUN_006f20e0((uint *)&local_30);
  }
  local_20 = 0;
  do {
    iVar10 = local_20;
    if (param_3 != 0) {
      iVar14 = 1;
      bVar12 = 2;
      pcVar4 = thunk_FUN_00691650(&DAT_007d59a4,local_20);
      pcVar4 = FUN_00725c60(param_2,pcVar4,bVar12,iVar14);
      *(char **)((int)this + iVar10 * 0x248 + 0x1950) = pcVar4;
      thunk_FUN_00692ba0((int)pcVar4);
    }
    puVar3 = FUN_006b04d0(0x4f2);
    if (puVar3 == (undefined4 *)0x0) {
      this_00 = (int *)0x0;
LAB_0069177d:
      FUN_006a5e40(-2,DAT_007ed77c,0x7d5980,0x4e);
    }
    else {
      this_00 = (int *)FUN_006dbca0((int)puVar3);
      if (this_00 == (int *)0x0) goto LAB_0069177d;
    }
    iVar10 = local_20;
    iVar14 = (int)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + local_20 * 4));
    FUN_006dc050(this_00,0,0,0,iVar14,iVar14,0,0xc0240000,0,0x40240000,0,0xc0240000,0,0x40240000,
                 0x4024000000000000,0x4023ee97865e3540,0);
    FUN_006dd610(this_00,4,0,0x40240000,0,0x40240000);
    this_00[0x4a] = 0;
    FUN_006dd790(this_00,149.97069);
    FUN_006dd800(this_00,200.19933);
    local_c = 0;
    do {
      local_8 = 0;
      do {
        if (((param_3 == 0) || (local_c != 0)) || (local_8 != 0)) {
          if (param_4 != (undefined *)0x0) {
            (*(code *)param_4)(0);
          }
          uVar7 = local_8;
          if (local_c == 0) {
            uVar7 = local_8 + 1;
          }
          pcVar4 = (char *)thunk_FUN_006a2d00(1,local_c,uVar7,1,0);
          puVar8 = FUN_006f0cd0(param_1,pcVar4,0);
          if (puVar8 != (ushort *)0x0) {
            puVar3 = (undefined4 *)FUN_006aac70(0xa9);
            local_1c = (int *)(local_c * 6);
            local_28 = (int *)((int)local_14 +
                              ((int)local_1c + local_8 + iVar10 * 0x49) * 8 + 0x1954);
            *local_28 = (int)puVar3;
            for (iVar14 = 0x2a; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar3 = 0;
              puVar3 = puVar3 + 1;
            }
            *(undefined1 *)puVar3 = 0;
            *(undefined2 *)(*local_28 + 0x23) = 0;
            local_18 = 0;
            local_24 = (char *)0x0;
            *(short *)(*local_28 + 0x29) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar10 * 4));
            *(short *)(*local_28 + 0x2b) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar10 * 4));
            do {
              local_10 = (int *)0x0;
              do {
                uVar7 = local_8;
                if (local_c == 0) {
                  uVar7 = local_8 + 1;
                }
                pcVar4 = (char *)thunk_FUN_006a2d00(1,local_c,uVar7,local_18 + 1,(uint)local_10);
                piVar11 = local_8c;
                for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
                  *piVar11 = 0;
                  piVar11 = piVar11 + 1;
                }
                puVar8 = FUN_006f0cd0(param_1,pcVar4,0);
                if (puVar8 == (ushort *)0x0) {
                  *(short *)(*local_28 + 0x23) = *(short *)(*local_28 + 0x23) + 1;
                }
                else {
                  if (local_c == 0) {
                    iVar14 = (int)local_10 * 0x10 + (local_18 + local_8 * 2) * 0xf0 + 0x2028;
LAB_00691a65:
                    puVar3 = (undefined4 *)(iVar14 + (int)local_14);
                    *puVar3 = *(undefined4 *)(puVar8 + 2);
                    puVar3[1] = *(undefined4 *)(puVar8 + 4);
                    puVar3[2] = *(undefined4 *)(puVar8 + 6);
                    puVar3[3] = *(undefined4 *)(puVar8 + 8);
                  }
                  else if (local_c == 1) {
                    iVar14 = (int)local_10 * 0x10 + (local_18 + local_8 * 2) * 0xf0 + 0x2b68;
                    goto LAB_00691a65;
                  }
                  local_70 = (int)(short)*puVar8;
                  local_6c = puVar8 + 10;
                  local_68 = (int)(short)puVar8[1];
                  local_64 = puVar8 + (short)*puVar8 * 6 + 10;
                  local_44 = (byte)local_8;
                  if (local_c == 0) {
                    local_84 = (ushort)(byte)local_8;
                  }
                  else {
                    local_84 = ((byte)local_8 - 1) + (short)local_c;
                  }
                  local_8c[0] = this_00[0x50];
                  this_00[0x4f] = this_00[0x4f] + 1;
                  this_00[0x50] = (int)local_8c;
                  FUN_006ddbe0((int)this_00);
                  this_00[0x49] = 5;
                  FUN_006ddd50(this_00);
                  this_00[0x50] = 0;
                  this_00[0x4f] = 0;
                  if (param_3 != 0) {
                    puVar3 = (undefined4 *)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar10 * 4));
                    local_3c = thunk_FUN_00692920(param_2,(undefined4 *)this_00[3],puVar3,
                                                  (int)puVar3,1);
                    piVar11 = local_28;
                    FUN_006b4b20((int *)(*local_28 + 0x2d + (int)(local_24 + (int)local_10) * 4),
                                 local_3c,0,0);
                    FUN_006ab060(&local_3c);
                    psVar1 = (short *)(*piVar11 + 0x23);
                    *psVar1 = *psVar1 + 1;
                    *(undefined4 *)(*piVar11 + 0x25) = 0;
                  }
                  if (iVar10 == 0) {
                    puVar9 = (undefined4 *)FUN_006aac70(0x640);
                    *(undefined4 **)
                     ((int)local_14 +
                     (int)local_10 * 4 + (local_18 + ((int)local_1c + local_8) * 2) * 0x3c) = puVar9
                    ;
                    puVar3 = (undefined4 *)this_00[3];
                    for (iVar14 = 400; iVar10 = local_20, iVar14 != 0; iVar14 = iVar14 + -1) {
                      *puVar9 = *puVar3;
                      puVar3 = puVar3 + 1;
                      puVar9 = puVar9 + 1;
                    }
                  }
                }
                local_10 = (int *)((int)local_10 + 1);
              } while ((int)local_10 < 0xf);
              local_18 = local_18 + 1;
              local_24 = local_24 + 0xf;
            } while ((int)local_24 < 0x1e);
          }
          uVar7 = local_8;
          if (local_c == 0) {
            uVar7 = local_8 + 1;
          }
          pcVar4 = (char *)thunk_FUN_006a2d00(0,local_c,uVar7,0,1);
          puVar8 = FUN_006f0cd0(param_1,pcVar4,0);
          if (puVar8 != (ushort *)0x0) {
            puVar3 = (undefined4 *)FUN_006aac70(0x59);
            local_18 = local_c * 6 + iVar10 * 0x92;
            piVar11 = (int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1a74);
            *piVar11 = (int)puVar3;
            for (iVar14 = 0x16; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar3 = 0;
              puVar3 = puVar3 + 1;
            }
            *(undefined1 *)puVar3 = 0;
            local_10 = (int *)0x0;
            *(undefined2 *)(*piVar11 + 0x23) = 0;
            *(short *)(*piVar11 + 0x29) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar10 * 4));
            *(short *)(*piVar11 + 0x2b) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar10 * 4));
            *(undefined4 *)(*piVar11 + 0x25) = 0;
            do {
              uVar7 = local_8;
              if (local_c == 0) {
                uVar7 = local_8 + 1;
              }
              local_1c = (int *)((int)local_10 + 1);
              pcVar4 = (char *)thunk_FUN_006a2d00(0,local_c,uVar7,0,(uint)local_1c);
              piVar11 = local_8c;
              for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
                *piVar11 = 0;
                piVar11 = piVar11 + 1;
              }
              puVar8 = FUN_006f0cd0(param_1,pcVar4,0);
              if (puVar8 == (ushort *)0x0) {
                psVar1 = (short *)(*(int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1a74) +
                                  0x23);
                *psVar1 = *psVar1 + 1;
              }
              else {
                local_70 = (int)(short)*puVar8;
                local_6c = puVar8 + 10;
                local_68 = (int)(short)puVar8[1];
                local_64 = puVar8 + (short)*puVar8 * 6 + 10;
                local_44 = (byte)local_8;
                if (local_c == 0) {
                  local_84 = (ushort)(byte)local_8;
                }
                else {
                  local_84 = ((byte)local_8 - 1) + (short)local_c;
                }
                local_8c[0] = this_00[0x50];
                this_00[0x4f] = this_00[0x4f] + 1;
                this_00[0x50] = (int)local_8c;
                FUN_006ddbe0((int)this_00);
                this_00[0x49] = 5;
                FUN_006ddd50(this_00);
                pvVar2 = local_14;
                this_00[0x50] = 0;
                this_00[0x4f] = 0;
                if (param_3 != 0) {
                  puVar3 = (undefined4 *)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar10 * 4));
                  local_2c = thunk_FUN_00692920(param_2,(undefined4 *)this_00[3],puVar3,(int)puVar3,
                                                1);
                  iVar14 = local_18 + local_8;
                  FUN_006b4b20((int *)(*(int *)((int)pvVar2 + iVar14 * 4 + 0x1a74) + 0x2d +
                                      (int)local_10 * 4),local_2c,0,0);
                  FUN_006ab060(&local_2c);
                  psVar1 = (short *)(*(int *)((int)pvVar2 + iVar14 * 4 + 0x1a74) + 0x23);
                  *psVar1 = *psVar1 + 1;
                }
                if (iVar10 == 0) {
                  puVar9 = (undefined4 *)FUN_006aac70(0x640);
                  *(undefined4 **)
                   ((int)local_14 + ((int)local_10 + (local_8 + (local_c * 3 + 0x36) * 2) * 10) * 4)
                       = puVar9;
                  puVar3 = (undefined4 *)this_00[3];
                  for (iVar14 = 400; iVar10 = local_20, iVar14 != 0; iVar14 = iVar14 + -1) {
                    *puVar9 = *puVar3;
                    puVar3 = puVar3 + 1;
                    puVar9 = puVar9 + 1;
                  }
                }
              }
              local_10 = local_1c;
            } while ((int)local_1c < 10);
          }
          uVar7 = local_8;
          if (local_c == 0) {
            uVar7 = local_8 + 1;
          }
          pcVar4 = (char *)thunk_FUN_006a2d00(3,local_c,uVar7,1,1);
          puVar8 = FUN_006f0cd0(param_1,pcVar4,0);
          if (puVar8 != (ushort *)0x0) {
            puVar3 = (undefined4 *)FUN_006aac70(0x45);
            local_18 = local_c * 6 + iVar10 * 0x92;
            local_1c = (int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1b08);
            *local_1c = (int)puVar3;
            for (iVar14 = 0x11; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar3 = 0;
              puVar3 = puVar3 + 1;
            }
            *(undefined1 *)puVar3 = 0;
            local_10 = (int *)0x0;
            *(undefined2 *)(*local_1c + 0x23) = 0;
            *(short *)(*local_1c + 0x29) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar10 * 4));
            *(short *)(*local_1c + 0x2b) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar10 * 4));
            *(undefined4 *)(*local_1c + 0x25) = 0;
            do {
              uVar7 = local_8;
              if (local_c == 0) {
                uVar7 = local_8 + 1;
              }
              pcVar4 = (char *)thunk_FUN_006a2d00(3,local_c,uVar7,1,(uint)local_10);
              puVar8 = FUN_006f0cd0(param_1,pcVar4,0);
              piVar11 = local_8c;
              for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
                *piVar11 = 0;
                piVar11 = piVar11 + 1;
              }
              if (puVar8 == (ushort *)0x0) {
                psVar1 = (short *)(*(int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1b08) +
                                  0x23);
                *psVar1 = *psVar1 + 1;
              }
              else {
                local_70 = (int)(short)*puVar8;
                local_6c = puVar8 + 10;
                local_68 = (int)(short)puVar8[1];
                local_44 = (byte)local_8;
                local_64 = puVar8 + (short)*puVar8 * 6 + 10;
                if (local_c == 0) {
                  local_84 = (ushort)(byte)local_8;
                }
                else {
                  local_84 = ((byte)local_8 - 1) + (short)local_c;
                }
                local_8c[0] = this_00[0x50];
                this_00[0x4f] = this_00[0x4f] + 1;
                this_00[0x50] = (int)local_8c;
                FUN_006ddbe0((int)this_00);
                this_00[0x49] = 5;
                FUN_006ddd50(this_00);
                pvVar2 = local_14;
                this_00[0x50] = 0;
                this_00[0x4f] = 0;
                if (param_3 != 0) {
                  puVar3 = (undefined4 *)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar10 * 4));
                  local_34 = thunk_FUN_00692920(param_2,(undefined4 *)this_00[3],puVar3,(int)puVar3,
                                                1);
                  iVar14 = local_18 + local_8;
                  FUN_006b4b20((int *)(*(int *)((int)pvVar2 + iVar14 * 4 + 0x1b08) + 0x2d +
                                      (int)local_10 * 4),local_34,0,0);
                  FUN_006ab060(&local_34);
                  psVar1 = (short *)(*(int *)((int)pvVar2 + iVar14 * 4 + 0x1b08) + 0x23);
                  *psVar1 = *psVar1 + 1;
                }
                if (iVar10 == 0) {
                  puVar9 = (undefined4 *)FUN_006aac70(0x640);
                  *(undefined4 **)
                   ((int)local_14 + ((int)local_10 + (local_8 + (local_c * 3 + 0x90) * 2) * 5) * 4)
                       = puVar9;
                  puVar3 = (undefined4 *)this_00[3];
                  for (iVar14 = 400; iVar10 = local_20, iVar14 != 0; iVar14 = iVar14 + -1) {
                    *puVar9 = *puVar3;
                    puVar3 = puVar3 + 1;
                    puVar9 = puVar9 + 1;
                  }
                }
              }
              local_10 = (int *)((int)local_10 + 1);
            } while ((int)local_10 < 5);
          }
        }
        else {
          iVar14 = 0;
          do {
            local_24 = thunk_FUN_00692390(0,0,iVar14,iVar10);
            iVar5 = FUN_006f21c0(7,local_24);
            if (iVar5 != 0) break;
            pcVar4 = FUN_00725c60(param_2,local_24,2,1);
            *(char **)((int)local_14 + (iVar14 + iVar10 * 0x92) * 4 + 0x1954) = pcVar4;
            thunk_FUN_00692ba0((int)pcVar4);
            iVar14 = iVar14 + 1;
          } while (iVar14 < 2);
          pvVar2 = local_14;
          uVar15 = 0;
          uVar13 = 0;
          puVar6 = thunk_FUN_00691650(s_STONE_007d5978,iVar10);
          wsprintfA(local_190,s__s_u_u_007d5970,puVar6,uVar13,uVar15);
          iVar14 = FUN_006f21c0(7,local_190);
          if (iVar14 == 0) {
            pcVar4 = FUN_00725c60(param_2,local_190,2,1);
            *(char **)((int)pvVar2 + iVar10 * 0x248 + 0x1a74) = pcVar4;
            thunk_FUN_00692ba0((int)pcVar4);
          }
        }
        pvVar2 = local_14;
        local_8 = local_8 + 1;
      } while ((int)local_8 < 6);
      local_c = local_c + 1;
    } while (local_c < 6);
    if (param_3 != 0) {
      iVar14 = 1;
      bVar12 = 2;
      pcVar4 = thunk_FUN_00691650(s_CRACK_007d5968,iVar10);
      pcVar4 = FUN_00725c60(param_2,pcVar4,bVar12,iVar14);
      *(char **)((int)pvVar2 + iVar10 * 0x248 + 0x1b04) = pcVar4;
      thunk_FUN_00692ba0((int)pcVar4);
    }
    if (this_00 != (int *)0x0) {
      FUN_006dbcf0(this_00);
      FUN_0072e2b0(this_00);
    }
    local_20 = iVar10 + 1;
    this = local_14;
    if (2 < local_20) {
      return;
    }
  } while( true );
}

