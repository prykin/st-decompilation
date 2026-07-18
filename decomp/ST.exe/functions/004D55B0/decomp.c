
int FUN_004d55b0(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  int iVar9;
  void *pvVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  char cVar14;
  undefined4 auStack_1c0 [17];
  undefined4 auStack_17c [17];
  int aiStack_138 [17];
  int aiStack_f4 [17];
  byte local_b0 [64];
  undefined4 *local_70;
  undefined4 local_6c [16];
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int *local_c;
  int *local_8;
  
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  iVar3 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = local_70;
    iVar9 = FUN_006ad4d0(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x4e5,0,iVar3,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar3,0,0x7bf4bc,0x4e6);
      return iVar3;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  thunk_FUN_0041e530(param_1);
  uVar6 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar6) {
    if (uVar6 < 0x129) {
      if (uVar6 == 0x128) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (local_c[0xa8] != 0) {
          DAT_00858df8 = local_70;
          return 0;
        }
        local_18 = local_c[2];
        local_c[0xa8] = 1;
        local_24 = *(undefined4 *)(local_c[3] + 0x14);
        local_20 = 0;
        local_1c = 10;
        FUN_006e60a0(local_c,local_2c);
        local_c[0xd2] = *(int *)(DAT_00802a38 + 0xe4);
        local_c[0xd3] = *(int *)(iVar3 + 8);
        DAT_00858df8 = local_70;
        return 0;
      }
      if (uVar6 == 0x110) {
        if (local_c[0xbb] == 3) {
          DAT_00858df8 = local_70;
          return 0;
        }
        if (local_c[0xb7] != 0) {
          DAT_00858df8 = local_70;
          return 0;
        }
        local_8 = *(int **)(param_1 + 0x14);
        iVar9 = (local_c[0xda] * 3 + local_c[0xdb]) * 4;
        iVar3 = *local_8;
        if (local_c[0xce] != 0) {
          iVar3 = (local_c[0xcf] * iVar3) / 100;
        }
        iVar3 = (local_c[0xaa] * *(int *)(&DAT_007e417c + iVar9)) / 100 - iVar3;
        if (iVar3 < 1) {
          if (local_c[0xa8] == 0) {
            thunk_FUN_004ac410(0xe);
            thunk_FUN_004ad430(local_c[0xd7]);
            if (local_c[0xb] == 1) {
              pcVar13 = s_expl_bt1_007bf54c;
            }
            else {
              pcVar13 = s_expl_bt0_007bf540;
            }
            iVar3 = thunk_FUN_004ab880(6,DAT_00806774,(byte *)pcVar13,0x1d);
            if (iVar3 != 0) {
              return 0xffff;
            }
            thunk_FUN_004ac700((void *)((int)local_c + 0x1d5),'\x06');
            thunk_FUN_004ac1a0(6,*(undefined4 *)(DAT_00802a38 + 0xe4));
          }
          local_c[0xaa] = 0;
          local_c[0xa8] = 1;
        }
        else {
          iVar3 = (iVar3 * 100) / *(int *)(&DAT_007e417c + iVar9);
          local_c[0xaa] = iVar3;
          local_c[0xb3] = (iVar3 * *(int *)(&DAT_008545ac + iVar9)) / 100;
          local_c[0xb4] = (*(int *)(&DAT_007e1c50 + iVar9) * local_c[0xaa]) / 100;
          local_c[0xb5] = (*(int *)(&DAT_007e24fc + iVar9) * local_c[0xaa]) / 100;
          iVar3 = (*(int *)(&DAT_007e3160 + iVar9) * local_c[0xaa]) / 100;
          local_c[0xb6] = iVar3;
          iVar4 = *(int *)(&DAT_008545ac + iVar9) - local_c[0xb3];
          iVar7 = *(int *)(&DAT_007e1c50 + iVar9) - local_c[0xb4];
          iVar11 = *(int *)(&DAT_007e24fc + iVar9) - local_c[0xb5];
          iVar3 = *(int *)(&DAT_007e3160 + iVar9) - iVar3;
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          thunk_FUN_004d76e0((char)local_c[9],0,local_c[6],iVar4,iVar7,iVar11,iVar3);
        }
        local_c[0xd2] = *(int *)(DAT_00802a38 + 0xe4);
        local_c[0xd3] = local_8[2];
        DAT_00858df8 = local_70;
        return 0;
      }
      if (uVar6 != 0x122) {
        DAT_00858df8 = local_70;
        return 0;
      }
      piVar12 = *(int **)(param_1 + 0x14);
      if (*piVar12 != local_c[9]) {
        DAT_00858df8 = local_70;
        return 0;
      }
      local_c[0xce] = 1;
      local_c[0xcf] = piVar12[2];
      local_c[0xd0] = *(int *)(DAT_00802a38 + 0xe4);
      local_c[0xd1] = piVar12[1];
      DAT_00858df8 = local_70;
      return 0;
    }
    if (uVar6 != 0x4401) {
      DAT_00858df8 = local_70;
      return 0;
    }
    cVar14 = *(char *)(*(int *)(param_1 + 0x14) + 0xe);
    if (cVar14 != '\t') {
      if (cVar14 != '\x17') {
        DAT_00858df8 = local_70;
        return 0;
      }
      pcVar13 = *(char **)(*(int *)(param_1 + 0x14) + 0x17);
      if (local_c[0xa9] != 0) {
        if (*pcVar13 != '\x1c') {
          DAT_00858df8 = local_70;
          return 0;
        }
        local_c[0xa9] = 0;
        DAT_00858df8 = local_70;
        return 0;
      }
      if (*pcVar13 != '\x1b') {
        DAT_00858df8 = local_70;
        return 0;
      }
      if (((local_c[0xbb] == 2) && (0 < local_c[0xaa])) && (local_c[0xaa] < 0x65)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        DAT_00858df8 = local_70;
        return 0;
      }
      local_c[0xa9] = 1;
      DAT_00858df8 = local_70;
      return 0;
    }
    if (((local_c[0xbb] == 2) && (0 < local_c[0xaa])) && (local_c[0xaa] < 0x65)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      DAT_00858df8 = local_70;
      return 0;
    }
    iVar3 = 3;
    local_c[0xbb] = 3;
    local_c[0xba] = 1;
    if (local_c[0xdc] == 0) {
      (**(code **)(*local_c + 0x90))(3,0x361);
    }
    iVar9 = *(int *)((int)local_c + 0x259);
    if (((iVar9 != 0x6c) || (*(int *)((int)local_c + 0x251) != 3)) &&
       ((iVar9 < 0x54 || (0x5a < iVar9)))) {
      pvVar10 = (void *)((int)local_c + 0x1d5);
      thunk_FUN_004ac6b0(pvVar10,(char)local_c[0xbc]);
      iVar9 = local_c[0xbb] + *(int *)((int)local_c + 0x241) * 4;
      thunk_FUN_004abce0(pvVar10,*(byte *)(local_c + 0xbc),*(int *)(local_c[0xd9] + iVar9 * 8),
                         *(int *)(local_c[0xd9] + 4 + iVar9 * 8),'\0');
      thunk_FUN_004abe40(pvVar10,(char)local_c[0xbc],
                         *(undefined4 *)
                          (local_c[0xd9] + (local_c[0xbb] + *(int *)((int)local_c + 0x241) * 4) * 8)
                        );
      thunk_FUN_004ac1a0(*(byte *)(local_c + 0xbc),*(undefined4 *)(DAT_00802a38 + 0xe4));
      if (local_c[0xdc] == 0) goto LAB_004d600f;
      thunk_FUN_004ac6b0(pvVar10,(char)local_c[0xbc] + -1);
      iVar9 = local_c[0xbb] + *(int *)((int)local_c + 0x241) * 4;
      thunk_FUN_004abce0(pvVar10,(char)local_c[0xbc] - 1,*(int *)(local_c[0xd9] + iVar9 * 8),
                         *(int *)(local_c[0xd9] + 4 + iVar9 * 8),'\0');
      thunk_FUN_004abe40(pvVar10,(char)local_c[0xbc] + -1,
                         *(undefined4 *)
                          (local_c[0xd9] + (local_c[0xbb] + *(int *)((int)local_c + 0x241) * 4) * 8)
                        );
      thunk_FUN_004ac1a0((char)local_c[0xbc] - 1,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    if (local_c[0xdc] != 0) {
      DAT_00858df8 = local_70;
      return 0;
    }
LAB_004d600f:
    piVar12 = local_c + 0xd4;
    piVar8 = local_c + 0xc2;
    do {
      if (*piVar8 != 0) {
        *piVar8 = 0;
        thunk_FUN_004ad430(*piVar12);
      }
      piVar12 = piVar12 + 1;
      piVar8 = piVar8 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_00858df8 = local_70;
    return 0;
  }
  if (uVar6 == 0x10f) {
    thunk_FUN_004d2fd0((int)local_c);
    DAT_00858df8 = local_70;
    return 0;
  }
  if (uVar6 < 4) {
    if (uVar6 == 3) {
      thunk_FUN_004d2760(local_c);
      DAT_00858df8 = local_70;
      return 0;
    }
    if (uVar6 != 0) {
      if (uVar6 != 2) {
        DAT_00858df8 = local_70;
        return 0;
      }
      thunk_FUN_004d11d0(*(undefined4 **)(param_1 + 0x14));
      DAT_00858df8 = local_70;
      return 0;
    }
    thunk_FUN_004d32c0(local_c);
    DAT_00858df8 = local_70;
    return 0;
  }
  if (uVar6 != 0x108) {
    DAT_00858df8 = local_70;
    return 0;
  }
  iVar9 = 0;
  iVar3 = 0;
  do {
    piVar12 = (int *)(*(int *)((int)local_c + 0x1f5) + iVar3);
    auStack_17c[iVar9] = *(undefined4 *)(*(int *)((int)local_c + 0x1f5) + 0x1c + iVar3);
    aiStack_f4[iVar9] = piVar12[8];
    if (*piVar12 != 0) {
      cVar14 = (char)iVar9;
      iVar4 = thunk_FUN_004ac910((void *)((int)local_c + 0x1d5),cVar14);
      aiStack_138[iVar9] = iVar4;
      iVar4 = thunk_FUN_004ac910((void *)((int)local_c + 0x1d5),cVar14);
      uVar5 = thunk_FUN_004acdd0((void *)((int)local_c + 0x1d5),cVar14,iVar4);
      auStack_1c0[iVar9] = uVar5;
    }
    iVar3 = iVar3 + 0x24;
    iVar9 = iVar9 + 1;
  } while (iVar3 < 0x264);
  if (local_c[0xbb] == 0) {
    thunk_FUN_004d10a0(local_c,1);
    thunk_FUN_004ac1a0(*(byte *)(local_c + 0xbc),*(undefined4 *)(DAT_00802a38 + 0xe4));
    thunk_FUN_004ac1a0((char)local_c[0xbc] - 1,*(undefined4 *)(DAT_00802a38 + 0xe4));
  }
  if (local_c[0xb7] == 0) {
    if ((*(uint *)((int)local_c + 0x1f1) & 0x4000) == 0) goto LAB_004d59e7;
    uVar6 = thunk_FUN_004ab050();
    uVar6 = uVar6 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    wsprintfA((LPSTR)local_b0,s__s_1i_007ac908,(&PTR_s_tlo_embws1_007bf3e8)[local_c[0xdb]],uVar6);
    iVar3 = thunk_FUN_004ab880(0xe,DAT_0080678c,local_b0,0x1d);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,0x43a);
    }
    thunk_FUN_004abce0((void *)((int)local_c + 0x1d5),0xe,
                       *(int *)(&DAT_0079104c + local_c[0xda] * 4),
                       *(int *)(&DAT_0079104c + local_c[0xda] * 4),'\0');
    thunk_FUN_004abe40((void *)((int)local_c + 0x1d5),'\x0e',
                       *(undefined4 *)(&DAT_0079104c + local_c[0xda] * 4));
    thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    iVar3 = thunk_FUN_004ab880(0x10,DAT_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[local_c[0xdb]],0x1d);
    if (iVar3 != 0) {
      uVar5 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {
    iVar3 = thunk_FUN_004ab050();
    pvVar10 = (void *)((int)local_c + 0x1d5);
    iVar3 = *(int *)(PTR_DAT_007b5170 + (iVar3 + (local_c[0xda] * 3 + local_c[0xdb]) * 4) * 8);
    thunk_FUN_004abce0(pvVar10,0xe,iVar3,iVar3,'\0');
    thunk_FUN_004abe40(pvVar10,'\x0e',iVar3);
    thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    if (**(int **)(*(int *)((int)local_c + 0x1f5) + 0x1d4) < iVar3) {
      iVar3 = 0;
    }
    thunk_FUN_004abce0(pvVar10,0xd,iVar3,iVar3,'\0');
    thunk_FUN_004abe40(pvVar10,'\r',iVar3);
    thunk_FUN_004ac1a0(0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    if (*(int *)(PTR_PTR_007bb198 + (local_c[0xda] * 3 + local_c[0xdb]) * 0xc + 8) != 0) {
      iVar3 = thunk_FUN_004ab050();
      iVar3 = *(int *)(PTR_DAT_007b8310 + (iVar3 + (local_c[0xda] * 3 + local_c[0xdb]) * 4) * 8);
      thunk_FUN_004abce0(pvVar10,0xc,iVar3,iVar3,'\0');
      thunk_FUN_004abe40(pvVar10,'\f',iVar3);
      thunk_FUN_004ac1a0(0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    iVar3 = thunk_FUN_004ab880(0x10,DAT_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[local_c[0xdb]],0x1d);
    if (iVar3 != 0) {
      uVar5 = 0x459;
LAB_004d5985:
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,uVar5);
    }
  }
  pvVar10 = (void *)((int)local_c + 0x1d5);
  thunk_FUN_004abce0(pvVar10,0x10,*(int *)(&DAT_0079104c + local_c[0xda] * 4),
                     *(int *)(&DAT_0079104c + local_c[0xda] * 4),'\0');
  thunk_FUN_004abe40(pvVar10,'\x10',*(undefined4 *)(&DAT_0079104c + local_c[0xda] * 4));
  thunk_FUN_004ac1a0(0x10,*(undefined4 *)(DAT_00802a38 + 0xe4));
  thunk_FUN_004acf50(pvVar10,'\x10');
LAB_004d59e7:
  iVar9 = 0;
  iVar3 = 0;
  do {
    *(undefined4 *)(iVar3 + 0x1c + *(int *)((int)local_c + 0x1f5)) = auStack_17c[iVar9];
    *(int *)(iVar3 + 0x20 + *(int *)((int)local_c + 0x1f5)) = aiStack_f4[iVar9];
    iVar4 = *(int *)(iVar3 + *(int *)((int)local_c + 0x1f5));
    if (iVar4 != 0) {
      *(undefined4 *)(*(int *)(iVar3 + *(int *)((int)local_c + 0x1f5) + 4) + aiStack_138[iVar9] * 4)
           = *(undefined4 *)(aiStack_138[iVar9] * 4 + 0x31 + iVar4);
      uVar5 = auStack_1c0[iVar9];
      iVar4 = thunk_FUN_004ac910((void *)((int)local_c + 0x1d5),(char)iVar9);
      thunk_FUN_004ace00((void *)((int)local_c + 0x1d5),(char)iVar9,iVar4,uVar5);
    }
    iVar3 = iVar3 + 0x24;
    iVar9 = iVar9 + 1;
  } while (iVar3 < 0x264);
  DAT_00858df8 = local_70;
  return 0;
}

