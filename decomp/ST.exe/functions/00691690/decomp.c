
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Maps\CntLib.cpp
   Diagnostic line evidence: 78 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00691690 parameter used as this of cMf32::RecMemFree @ 006916D3
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00691690 parameter used as this of cMf32::RecChk @ 00691857 | 00691690 parameter used
   as this of cMf32::RecChk @ 006918C9 */

void __thiscall
FUN_00691690(void *this,cMf32 *param_1,cMf32 *param_2,int param_3,undefined *param_4)

{
  short *psVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  char *pcVar5;
  HoloTy *this_00;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  int iVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  CHAR local_190 [260];
  undefined4 local_8c [2];
  ushort local_84;
  int local_70;
  ushort *local_6c;
  int local_68;
  ushort *local_64;
  byte local_44;
  LPVOID local_3c;
  ushort *local_38;
  LPVOID local_34;
  ushort *local_30;
  LPVOID local_2c;
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
  local_38 = Library::Ourlib::MFAOBJ::mfAObjLoad(param_1,s_2D_CLT_007d59b8,0,0);
  if (local_38 != (ushort *)0x0) {
    puVar9 = local_38;
    puVar4 = (undefined4 *)((int)this + 0x37ac);
    for (iVar11 = 0xf; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar4 = *(undefined4 *)puVar9;
      puVar9 = puVar9 + 2;
      puVar4 = puVar4 + 1;
    }
    cMf32::RecMemFree(param_1,(uint *)&local_38);
  }
  local_30 = Library::Ourlib::MFAOBJ::mfAObjLoad(param_1,s_CLR_COVER_007d59ac,0,0);
  if (local_30 != (ushort *)0x0) {
    puVar4 = &DAT_007d5934;
    puVar9 = local_30;
    do {
      uVar13 = *(undefined4 *)puVar9;
      puVar9 = puVar9 + 2;
      *puVar4 = uVar13;
      puVar4 = puVar4 + 2;
    } while ((int)puVar4 < 0x7d595c);
    cMf32::RecMemFree(param_1,(uint *)&local_30);
  }
  local_20 = 0;
  do {
    iVar11 = local_20;
    if (param_3 != 0) {
      iVar14 = 1;
      bVar12 = 2;
      pcVar5 = thunk_FUN_00691650(&DAT_007d59a4,local_20);
      pcVar5 = Library::Ourlib::MFSPR::mfSSprLoad(param_2,pcVar5,bVar12,iVar14);
      *(char **)((int)this + iVar11 * 0x248 + 0x1950) = pcVar5;
      thunk_FUN_00692ba0(pcVar5);
    }
    puVar4 = FUN_006b04d0(0x4f2);
    if (puVar4 == (undefined4 *)0x0) {
      this_00 = (HoloTy *)0x0;
LAB_0069177d:
      RaiseInternalException
                (-2,g_overwriteContext_007ED77C,s_E____titans_Maps_CntLib_cpp_007d5980,0x4e);
    }
    else {
      this_00 = (HoloTy *)FUN_006dbca0((int)puVar4);
      if (this_00 == (HoloTy *)0x0) goto LAB_0069177d;
    }
    iVar11 = local_20;
    iVar14 = (int)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + local_20 * 4));
    FUN_006dc050(this_00,0,0,0,iVar14,iVar14,0,0xc0240000,0,0x40240000,0,0xc0240000,0,0x40240000,
                 0x4024000000000000,0x4023ee97865e3540,0);
    FUN_006dd610(this_00,4,0,0x40240000,0,0x40240000);
    *(undefined4 *)((int)&this_00[5].field_0027 + 2) = 0;
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
          uVar8 = local_8;
          if (local_c == 0) {
            uVar8 = local_8 + 1;
          }
          pcVar5 = thunk_FUN_006a2d00(1,local_c,uVar8,1,0);
          puVar9 = Library::Ourlib::MFSTMAP::FUN_006f0cd0(param_1,pcVar5,0);
          if (puVar9 != (ushort *)0x0) {
            puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0xa9);
            local_1c = (int *)(local_c * 6);
            local_28 = (int *)((int)local_14 +
                              ((int)local_1c + local_8 + iVar11 * 0x49) * 8 + 0x1954);
            *local_28 = (int)puVar4;
            for (iVar14 = 0x2a; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            *(undefined1 *)puVar4 = 0;
            *(undefined2 *)(*local_28 + 0x23) = 0;
            local_18 = 0;
            local_24 = (char *)0x0;
            *(short *)(*local_28 + 0x29) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(short *)(*local_28 + 0x2b) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            do {
              local_10 = (int *)0x0;
              do {
                uVar8 = local_8;
                if (local_c == 0) {
                  uVar8 = local_8 + 1;
                }
                pcVar5 = thunk_FUN_006a2d00(1,local_c,uVar8,local_18 + 1,(uint)local_10);
                puVar4 = local_8c;
                for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
                  *puVar4 = 0;
                  puVar4 = puVar4 + 1;
                }
                puVar9 = Library::Ourlib::MFSTMAP::FUN_006f0cd0(param_1,pcVar5,0);
                if (puVar9 == (ushort *)0x0) {
                  *(short *)(*local_28 + 0x23) = *(short *)(*local_28 + 0x23) + 1;
                }
                else {
                  if (local_c == 0) {
                    iVar14 = (int)local_10 * 0x10 + (local_18 + local_8 * 2) * 0xf0 + 0x2028;
LAB_00691a65:
                    puVar4 = (undefined4 *)(iVar14 + (int)local_14);
                    *puVar4 = *(undefined4 *)(puVar9 + 2);
                    puVar4[1] = *(undefined4 *)(puVar9 + 4);
                    puVar4[2] = *(undefined4 *)(puVar9 + 6);
                    puVar4[3] = *(undefined4 *)(puVar9 + 8);
                  }
                  else if (local_c == 1) {
                    iVar14 = (int)local_10 * 0x10 + (local_18 + local_8 * 2) * 0xf0 + 0x2b68;
                    goto LAB_00691a65;
                  }
                  local_70 = (int)(short)*puVar9;
                  local_6c = puVar9 + 10;
                  local_68 = (int)(short)puVar9[1];
                  local_64 = puVar9 + (short)*puVar9 * 6 + 10;
                  local_44 = (byte)local_8;
                  if (local_c == 0) {
                    local_84 = (ushort)(byte)local_8;
                  }
                  else {
                    local_84 = ((byte)local_8 - 1) + (short)local_c;
                  }
                  local_8c[0] = *(undefined4 *)((int)&this_00[6].field_000B + 3);
                  *(int *)((int)&this_00[6].field_0007 + 3) =
                       *(int *)((int)&this_00[6].field_0007 + 3) + 1;
                  *(undefined4 **)((int)&this_00[6].field_000B + 3) = local_8c;
                  FUN_006ddbe0((int)this_00);
                  *(undefined4 *)((int)&this_00[5].field_0023 + 2) = 5;
                  FUN_006ddd50(this_00);
                  *(undefined4 *)((int)&this_00[6].field_000B + 3) = 0;
                  *(undefined4 *)((int)&this_00[6].field_0007 + 3) = 0;
                  if (param_3 != 0) {
                    puVar4 = (undefined4 *)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
                    local_3c = (LPVOID)thunk_FUN_00692920(param_2,*(undefined4 **)
                                                                   ((int)&this_00->field_000B + 1),
                                                          puVar4,(int)puVar4,1);
                    piVar2 = local_28;
                    FUN_006b4b20((int *)(*local_28 + 0x2d + (int)(local_24 + (int)local_10) * 4),
                                 (uint)local_3c,0,0);
                    FUN_006ab060(&local_3c);
                    psVar1 = (short *)(*piVar2 + 0x23);
                    *psVar1 = *psVar1 + 1;
                    *(undefined4 *)(*piVar2 + 0x25) = 0;
                  }
                  if (iVar11 == 0) {
                    puVar10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x640);
                    *(undefined4 **)
                     ((int)local_14 +
                     (int)local_10 * 4 + (local_18 + ((int)local_1c + local_8) * 2) * 0x3c) =
                         puVar10;
                    puVar4 = *(undefined4 **)((int)&this_00->field_000B + 1);
                    for (iVar14 = 400; iVar11 = local_20, iVar14 != 0; iVar14 = iVar14 + -1) {
                      *puVar10 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar10 = puVar10 + 1;
                    }
                  }
                }
                local_10 = (int *)((int)local_10 + 1);
              } while ((int)local_10 < 0xf);
              local_18 = local_18 + 1;
              local_24 = local_24 + 0xf;
            } while ((int)local_24 < 0x1e);
          }
          uVar8 = local_8;
          if (local_c == 0) {
            uVar8 = local_8 + 1;
          }
          pcVar5 = thunk_FUN_006a2d00(0,local_c,uVar8,0,1);
          puVar9 = Library::Ourlib::MFSTMAP::FUN_006f0cd0(param_1,pcVar5,0);
          if (puVar9 != (ushort *)0x0) {
            puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x59);
            local_18 = local_c * 6 + iVar11 * 0x92;
            piVar2 = (int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1a74);
            *piVar2 = (int)puVar4;
            for (iVar14 = 0x16; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            *(undefined1 *)puVar4 = 0;
            local_10 = (int *)0x0;
            *(undefined2 *)(*piVar2 + 0x23) = 0;
            *(short *)(*piVar2 + 0x29) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(short *)(*piVar2 + 0x2b) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(undefined4 *)(*piVar2 + 0x25) = 0;
            do {
              uVar8 = local_8;
              if (local_c == 0) {
                uVar8 = local_8 + 1;
              }
              local_1c = (int *)((int)local_10 + 1);
              pcVar5 = thunk_FUN_006a2d00(0,local_c,uVar8,0,(uint)local_1c);
              puVar4 = local_8c;
              for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar4 = 0;
                puVar4 = puVar4 + 1;
              }
              puVar9 = Library::Ourlib::MFSTMAP::FUN_006f0cd0(param_1,pcVar5,0);
              if (puVar9 == (ushort *)0x0) {
                psVar1 = (short *)(*(int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1a74) +
                                  0x23);
                *psVar1 = *psVar1 + 1;
              }
              else {
                local_70 = (int)(short)*puVar9;
                local_6c = puVar9 + 10;
                local_68 = (int)(short)puVar9[1];
                local_64 = puVar9 + (short)*puVar9 * 6 + 10;
                local_44 = (byte)local_8;
                if (local_c == 0) {
                  local_84 = (ushort)(byte)local_8;
                }
                else {
                  local_84 = ((byte)local_8 - 1) + (short)local_c;
                }
                local_8c[0] = *(undefined4 *)((int)&this_00[6].field_000B + 3);
                *(int *)((int)&this_00[6].field_0007 + 3) =
                     *(int *)((int)&this_00[6].field_0007 + 3) + 1;
                *(undefined4 **)((int)&this_00[6].field_000B + 3) = local_8c;
                FUN_006ddbe0((int)this_00);
                *(undefined4 *)((int)&this_00[5].field_0023 + 2) = 5;
                FUN_006ddd50(this_00);
                pvVar3 = local_14;
                *(undefined4 *)((int)&this_00[6].field_000B + 3) = 0;
                *(undefined4 *)((int)&this_00[6].field_0007 + 3) = 0;
                if (param_3 != 0) {
                  puVar4 = (undefined4 *)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
                  local_2c = (LPVOID)thunk_FUN_00692920(param_2,*(undefined4 **)
                                                                 ((int)&this_00->field_000B + 1),
                                                        puVar4,(int)puVar4,1);
                  iVar14 = local_18 + local_8;
                  FUN_006b4b20((int *)(*(int *)((int)pvVar3 + iVar14 * 4 + 0x1a74) + 0x2d +
                                      (int)local_10 * 4),(uint)local_2c,0,0);
                  FUN_006ab060(&local_2c);
                  psVar1 = (short *)(*(int *)((int)pvVar3 + iVar14 * 4 + 0x1a74) + 0x23);
                  *psVar1 = *psVar1 + 1;
                }
                if (iVar11 == 0) {
                  puVar10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x640);
                  *(undefined4 **)
                   ((int)local_14 + ((int)local_10 + (local_8 + (local_c * 3 + 0x36) * 2) * 10) * 4)
                       = puVar10;
                  puVar4 = *(undefined4 **)((int)&this_00->field_000B + 1);
                  for (iVar14 = 400; iVar11 = local_20, iVar14 != 0; iVar14 = iVar14 + -1) {
                    *puVar10 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar10 = puVar10 + 1;
                  }
                }
              }
              local_10 = local_1c;
            } while ((int)local_1c < 10);
          }
          uVar8 = local_8;
          if (local_c == 0) {
            uVar8 = local_8 + 1;
          }
          pcVar5 = thunk_FUN_006a2d00(3,local_c,uVar8,1,1);
          puVar9 = Library::Ourlib::MFSTMAP::FUN_006f0cd0(param_1,pcVar5,0);
          if (puVar9 != (ushort *)0x0) {
            puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x45);
            local_18 = local_c * 6 + iVar11 * 0x92;
            local_1c = (int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1b08);
            *local_1c = (int)puVar4;
            for (iVar14 = 0x11; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            *(undefined1 *)puVar4 = 0;
            local_10 = (int *)0x0;
            *(undefined2 *)(*local_1c + 0x23) = 0;
            *(short *)(*local_1c + 0x29) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(short *)(*local_1c + 0x2b) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(undefined4 *)(*local_1c + 0x25) = 0;
            do {
              uVar8 = local_8;
              if (local_c == 0) {
                uVar8 = local_8 + 1;
              }
              pcVar5 = thunk_FUN_006a2d00(3,local_c,uVar8,1,(uint)local_10);
              puVar9 = Library::Ourlib::MFSTMAP::FUN_006f0cd0(param_1,pcVar5,0);
              puVar4 = local_8c;
              for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar4 = 0;
                puVar4 = puVar4 + 1;
              }
              if (puVar9 == (ushort *)0x0) {
                psVar1 = (short *)(*(int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1b08) +
                                  0x23);
                *psVar1 = *psVar1 + 1;
              }
              else {
                local_70 = (int)(short)*puVar9;
                local_6c = puVar9 + 10;
                local_68 = (int)(short)puVar9[1];
                local_44 = (byte)local_8;
                local_64 = puVar9 + (short)*puVar9 * 6 + 10;
                if (local_c == 0) {
                  local_84 = (ushort)(byte)local_8;
                }
                else {
                  local_84 = ((byte)local_8 - 1) + (short)local_c;
                }
                local_8c[0] = *(undefined4 *)((int)&this_00[6].field_000B + 3);
                *(int *)((int)&this_00[6].field_0007 + 3) =
                     *(int *)((int)&this_00[6].field_0007 + 3) + 1;
                *(undefined4 **)((int)&this_00[6].field_000B + 3) = local_8c;
                FUN_006ddbe0((int)this_00);
                *(undefined4 *)((int)&this_00[5].field_0023 + 2) = 5;
                FUN_006ddd50(this_00);
                pvVar3 = local_14;
                *(undefined4 *)((int)&this_00[6].field_000B + 3) = 0;
                *(undefined4 *)((int)&this_00[6].field_0007 + 3) = 0;
                if (param_3 != 0) {
                  puVar4 = (undefined4 *)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
                  local_34 = (LPVOID)thunk_FUN_00692920(param_2,*(undefined4 **)
                                                                 ((int)&this_00->field_000B + 1),
                                                        puVar4,(int)puVar4,1);
                  iVar14 = local_18 + local_8;
                  FUN_006b4b20((int *)(*(int *)((int)pvVar3 + iVar14 * 4 + 0x1b08) + 0x2d +
                                      (int)local_10 * 4),(uint)local_34,0,0);
                  FUN_006ab060(&local_34);
                  psVar1 = (short *)(*(int *)((int)pvVar3 + iVar14 * 4 + 0x1b08) + 0x23);
                  *psVar1 = *psVar1 + 1;
                }
                if (iVar11 == 0) {
                  puVar10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x640);
                  *(undefined4 **)
                   ((int)local_14 + ((int)local_10 + (local_8 + (local_c * 3 + 0x90) * 2) * 5) * 4)
                       = puVar10;
                  puVar4 = *(undefined4 **)((int)&this_00->field_000B + 1);
                  for (iVar14 = 400; iVar11 = local_20, iVar14 != 0; iVar14 = iVar14 + -1) {
                    *puVar10 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar10 = puVar10 + 1;
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
            local_24 = thunk_FUN_00692390(0,0,iVar14,iVar11);
            iVar6 = cMf32::RecChk(param_2,7,local_24);
            if (iVar6 != 0) break;
            pcVar5 = Library::Ourlib::MFSPR::mfSSprLoad(param_2,local_24,2,1);
            *(char **)((int)local_14 + (iVar14 + iVar11 * 0x92) * 4 + 0x1954) = pcVar5;
            thunk_FUN_00692ba0(pcVar5);
            iVar14 = iVar14 + 1;
          } while (iVar14 < 2);
          pvVar3 = local_14;
          uVar15 = 0;
          uVar13 = 0;
          puVar7 = thunk_FUN_00691650(s_STONE_007d5978,iVar11);
          wsprintfA(local_190,s__s_u_u_007d5970,puVar7,uVar13,uVar15);
          iVar14 = cMf32::RecChk(param_2,7,local_190);
          if (iVar14 == 0) {
            pcVar5 = Library::Ourlib::MFSPR::mfSSprLoad(param_2,local_190,2,1);
            *(char **)((int)pvVar3 + iVar11 * 0x248 + 0x1a74) = pcVar5;
            thunk_FUN_00692ba0(pcVar5);
          }
        }
        pvVar3 = local_14;
        local_8 = local_8 + 1;
      } while ((int)local_8 < 6);
      local_c = local_c + 1;
    } while (local_c < 6);
    if (param_3 != 0) {
      iVar14 = 1;
      bVar12 = 2;
      pcVar5 = thunk_FUN_00691650(s_CRACK_007d5968,iVar11);
      pcVar5 = Library::Ourlib::MFSPR::mfSSprLoad(param_2,pcVar5,bVar12,iVar14);
      *(char **)((int)pvVar3 + iVar11 * 0x248 + 0x1b04) = pcVar5;
      thunk_FUN_00692ba0(pcVar5);
    }
    if (this_00 != (HoloTy *)0x0) {
      FUN_006dbcf0((int *)this_00);
      Library::MSVCRT::FUN_0072e2b0(this_00);
    }
    local_20 = iVar11 + 1;
    this = local_14;
    if (2 < local_20) {
      return;
    }
  } while( true );
}

