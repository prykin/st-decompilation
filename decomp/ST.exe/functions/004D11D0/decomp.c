
int FUN_004d11d0(undefined4 *param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  void *this;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 unaff_ESI;
  int iVar9;
  int *piVar10;
  void *unaff_EDI;
  undefined4 *puVar11;
  int *piVar12;
  short sVar13;
  short sVar14;
  int **ppiVar15;
  undefined4 uVar16;
  undefined4 *local_cc;
  undefined4 local_c8 [16];
  byte local_88 [64];
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puVar11 = (undefined4 *)0x0;
  local_c = 0;
  local_cc = DAT_00858df8;
  DAT_00858df8 = &local_cc;
  iVar3 = __setjmp3(local_c8,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = local_cc;
    iVar9 = FUN_006ad4d0(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x166,0,iVar3,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar3,0,0x7bf4bc,0x167);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (local_3c != (int *)0x0) {
    puVar11 = (undefined4 *)((int)local_3c + 0x231);
  }
  puVar8 = param_1;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
  *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar8 + 2);
  local_3c[0xda] = *(int *)((int)local_3c + 0x259) + -0x32;
  uVar4 = thunk_FUN_004406c0((char)local_3c[9]);
  local_3c[0xdb] = (uVar4 & 0xff) - 1;
  iVar3 = thunk_FUN_004406c0((char)local_3c[9]);
  uVar4 = (uint)((char)iVar3 == '\x03');
  local_3c[0xdc] = uVar4;
  if (uVar4 == 0) {
    local_3c[0xd9] = (int)&DAT_007976c8;
  }
  else {
    local_3c[0xd9] = (int)&DAT_00797708;
  }
  if (*(int *)(&DAT_00791f38 + local_3c[0xda] * 4) == 2) {
    local_3c[0xd8] = (int)&DAT_007aca60;
  }
  else if (*(int *)(&DAT_00791f38 + local_3c[0xda] * 4) == 1) {
    local_3c[0xd8] = (int)&DAT_007ace00;
  }
  else {
    local_3c[0xd8] = (int)&DAT_007ac988;
  }
  thunk_FUN_00417a00(local_3c,0);
  iVar3 = thunk_FUN_00417a20(local_3c,*(short *)((int)local_3c + 0x25d),
                             *(short *)((int)local_3c + 0x261),*(short *)((int)local_3c + 0x265),1);
  if (iVar3 != 0) {
    FUN_006a5e40(-5,DAT_007ed77c,0x7bf4bc,0x66);
  }
  thunk_FUN_0041d900(local_3c,*(short *)((int)local_3c + 0x25d),*(short *)((int)local_3c + 0x261),
                     *(short *)((int)local_3c + 0x265));
  if (local_3c[0xb] == 0) {
    local_c = 1;
  }
  else if (local_3c[0xb] == 1) {
    local_c = 2;
  }
  iVar3 = *(int *)((int)local_3c + 0x261);
  if (iVar3 < iVar3 + local_c) {
    do {
      iVar9 = *(int *)((int)local_3c + 0x25d);
      if (iVar9 < iVar9 + local_c) {
        do {
          sVar13 = (short)iVar9;
          sVar14 = (short)iVar3;
          thunk_FUN_004960d0(sVar13,sVar14,*(short *)((int)local_3c + 0x265));
          sVar1 = *(short *)((int)local_3c + 0x265);
          if (((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar14 < 0)) ||
              ((DAT_007fb242 <= sVar14 || (sVar1 < 0)))) || (DAT_007fb244 <= sVar1)) {
            this = (void *)0x0;
          }
          else {
            this = *(void **)(DAT_007fb248 + 4 +
                             ((int)sVar14 * (int)DAT_007fb240 + (int)sVar1 * (int)DAT_007fb246 +
                             (int)sVar13) * 8);
          }
          if ((this != (void *)0x0) && (*(int *)((int)this + 0x20) == 0xbe)) {
            thunk_FUN_00630110(this,(char)local_3c[9]);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)((int)local_3c + 0x25d) + local_c);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)local_3c + 0x261) + local_c);
  }
  piVar12 = (int *)0x0;
  if (local_3c[0xb] == 0) {
    local_3c[0xbe] = 0xb4;
    local_3c[0xbf] = 0x8c;
    local_3c[0xc0] = 0x5a;
    local_3c[0xc1] = 0x45;
  }
  else if (local_3c[0xb] == 1) {
    local_3c[0xbe] = 0xf0;
    local_3c[0xbf] = 0xbe;
    local_3c[0xc0] = 0x78;
    local_3c[0xc1] = 0x56;
  }
  if (*(int *)((int)local_3c + 0x259) == 0x5c) {
    *(undefined4 *)(&DAT_007f57ea + local_3c[9] * 0xa62) = 1;
  }
  if (DAT_007fa170 == (uint *)0x0) {
    DAT_007fa170 = FUN_006ae290((uint *)0x0,10,4,10);
  }
  local_2c = local_3c;
  FUN_006ae1c0(DAT_007fa170,&local_2c);
  iVar3 = *(int *)((int)local_3c + 0x259);
  if (iVar3 == 100) {
    if (*(int *)(&DAT_007f57f6 + local_3c[9] * 0xa62) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
      *(uint **)(&DAT_007f57f6 + local_3c[9] * 0xa62) = puVar5;
    }
    ppiVar15 = &local_8;
    local_8 = local_3c;
    puVar5 = *(uint **)(&DAT_007f57f6 + local_3c[9] * 0xa62);
LAB_004d1763:
    FUN_006ae1c0(puVar5,ppiVar15);
  }
  else {
    if (iVar3 == 0x4d) {
      if (*(int *)(&DAT_007f5802 + local_3c[9] * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f5802 + local_3c[9] * 0xa62) = puVar5;
      }
      ppiVar15 = &local_40;
      local_40 = local_3c;
      puVar5 = *(uint **)(&DAT_007f5802 + local_3c[9] * 0xa62);
      goto LAB_004d1763;
    }
    if (iVar3 == 0x43) {
      if (*(int *)(&DAT_007f580e + local_3c[9] * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f580e + local_3c[9] * 0xa62) = puVar5;
      }
      ppiVar15 = &local_44;
      local_44 = local_3c;
      puVar5 = *(uint **)(&DAT_007f580e + local_3c[9] * 0xa62);
      goto LAB_004d1763;
    }
    if (iVar3 == 0x73) {
      if (*(int *)(&DAT_007f5812 + local_3c[9] * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f5812 + local_3c[9] * 0xa62) = puVar5;
      }
      ppiVar15 = &local_30;
      local_30 = local_3c;
      puVar5 = *(uint **)(&DAT_007f5812 + local_3c[9] * 0xa62);
      goto LAB_004d1763;
    }
    if (iVar3 == 0x3a) {
      if (DAT_007fa16c == (uint *)0x0) {
        DAT_007fa16c = FUN_006ae290((uint *)0x0,10,4,10);
      }
      ppiVar15 = &local_48;
      local_48 = local_3c;
      puVar5 = DAT_007fa16c;
      goto LAB_004d1763;
    }
    if (iVar3 == 0x65) {
      if (*(int *)(&DAT_007f5806 + local_3c[9] * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f5806 + local_3c[9] * 0xa62) = puVar5;
      }
      ppiVar15 = &local_34;
      local_34 = local_3c;
      puVar5 = *(uint **)(&DAT_007f5806 + local_3c[9] * 0xa62);
      goto LAB_004d1763;
    }
    if (iVar3 == 0x3b) {
      if (*(int *)(&DAT_007f580a + local_3c[9] * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f580a + local_3c[9] * 0xa62) = puVar5;
      }
      ppiVar15 = &local_38;
      local_38 = local_3c;
      puVar5 = *(uint **)(&DAT_007f580a + local_3c[9] * 0xa62);
      goto LAB_004d1763;
    }
  }
  if (*(int *)((int)local_3c + 0x23d) != 1) {
    if (*(int *)((int)local_3c + 0x23d) == 2) {
      if (local_3c != (int *)0x0) {
        piVar12 = local_3c + 0xa8;
      }
      piVar10 = (int *)((int)param_1 + 0x6f);
      for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar12 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar12 = piVar12 + 1;
      }
      local_28 = (undefined4 *)FUN_006aac70(0x44);
      local_28[1] = DAT_00806774;
      local_28[2] = DAT_00806774;
      *local_28 = DAT_00806774;
      local_28[0xf] = DAT_00806774;
      local_28[0x10] = DAT_0080678c;
      local_28[0xe] = DAT_0080678c;
      local_28[0xd] = DAT_0080678c;
      local_28[0xc] = DAT_0080678c;
      local_28[0xb] = 0;
      local_28[local_3c[0xbd]] = DAT_0080678c;
      local_28[local_3c[0xbc]] = DAT_0080678c;
      if (local_3c[0xdc] != 0) {
        local_28[local_3c[0xbc] + -1] = DAT_0080678c;
      }
      if (local_3c[0xa8] != 0) {
        local_28[7] = DAT_00806764;
        local_28[6] = DAT_00806774;
      }
      local_1c = DAT_008073cc;
      local_24 = 0;
      local_10 = 0;
      thunk_FUN_004adba0((int *)&local_28,
                         (undefined4 *)(*(int *)((int)param_1 + 299) + (int)param_1));
      puVar11 = (undefined4 *)FUN_0072e530(0x40);
      if (puVar11 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = thunk_FUN_004ab810(puVar11);
      }
      local_3c[0xd7] = iVar3;
      iVar3 = thunk_FUN_004ad1f0(DAT_008073cc,local_3c[0xc0],local_3c[0xc1],0,local_3c[0xbe],
                                 local_3c[0xbf],0x11);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,0x13d);
      }
      if (local_3c[0xb] == 1) {
        uVar4 = thunk_FUN_004ad650(local_3c[0xd7]);
        FUN_006e9210(*(void **)((int)local_3c + 0x211),uVar4);
      }
      puVar11 = local_28;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      local_28[0xe] = DAT_00806764;
      local_24 = 0;
      local_10 = 0;
      local_1c = 0;
      thunk_FUN_004adba0((int *)&local_28,
                         (undefined4 *)(*(int *)((int)param_1 + 0x133) + (int)param_1));
      uVar4 = local_3c[0xbd];
      iVar3 = thunk_FUN_004ad650((int)local_3c + 0x1d5);
      uVar6 = thunk_FUN_004ad650(local_3c[0xd7]);
      FUN_006ea340(*(void **)((int)local_3c + 0x211),uVar6,iVar3,uVar4);
      puVar11 = local_28;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      local_28[0xe] = DAT_0080678c;
      local_24 = 0;
      local_10 = 0;
      local_1c = 0;
      if (local_3c[0xdc] == 0) {
        uVar4 = 0xb;
        local_8 = (int *)((int)param_1 + 0x143);
        piVar12 = local_3c + 0xd4;
        do {
          puVar11 = (undefined4 *)FUN_0072e530(0x40);
          if (puVar11 == (undefined4 *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = thunk_FUN_004ab810(puVar11);
          }
          *piVar12 = iVar3;
          iVar3 = thunk_FUN_004ad1f0(DAT_008073cc,local_3c[0xc0],local_3c[0xc1],0,local_3c[0xbe],
                                     local_3c[0xbf],0x11);
          if (iVar3 != 0) {
            FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,0x152);
          }
          uVar6 = uVar4;
          iVar3 = thunk_FUN_004ad650((int)local_3c + 0x1d5);
          uVar7 = thunk_FUN_004ad650(*piVar12);
          FUN_006ea340(*(void **)((int)local_3c + 0x211),uVar7,iVar3,uVar6);
          thunk_FUN_004adba0((int *)&local_28,(undefined4 *)(*local_8 + (int)param_1));
          uVar4 = uVar4 - 1;
          local_8 = local_8 + 1;
          piVar12 = piVar12 + 1;
        } while (8 < (int)uVar4);
      }
      FUN_006ab060(&local_28);
      thunk_FUN_00422210((undefined4 *)(*(int *)((int)param_1 + 0x123) + (int)param_1));
      thunk_FUN_00419cf0(local_3c,extraout_EDX,
                         CONCAT22(extraout_var,*(undefined2 *)((int)local_3c + 0x32)));
    }
    else {
      iVar3 = FUN_006ad4d0(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x160,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
    }
    goto LAB_004d22a1;
  }
  local_3c[0xab] = *(int *)(DAT_00802a38 + 0xe4);
  iVar3 = *(int *)(DAT_00802a38 + 0xe4);
  local_3c[0xad] = 1;
  local_3c[0xac] = iVar3;
  local_3c[0xa9] = 0;
  puVar11 = (undefined4 *)FUN_0072e530(0x40);
  if (puVar11 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = thunk_FUN_004ab810(puVar11);
  }
  local_3c[0xd7] = iVar3;
  iVar3 = thunk_FUN_004ad1f0(DAT_008073cc,local_3c[0xc0],local_3c[0xc1],0,local_3c[0xbe],
                             local_3c[0xbf],0x11);
  if (iVar3 != 0) {
    FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,200);
  }
  if (*(int *)((int)local_3c + 0x241) == 0) {
    iVar3 = thunk_FUN_004ab880(0xe,DAT_00806764,(byte *)s_tlo_emb5_007ad464,0x1d);
    if (iVar3 != 0) {
      uVar16 = 0xca;
LAB_004d1bda:
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,uVar16);
    }
  }
  else if (*(int *)((int)local_3c + 0x241) == 1) {
    uVar4 = thunk_FUN_004ad650(local_3c[0xd7]);
    FUN_006e9210(*(void **)((int)local_3c + 0x211),uVar4);
    iVar3 = thunk_FUN_004ab880(0xe,DAT_00806764,(byte *)s_tlo_emb5_big_007ad470,0x1d);
    if (iVar3 != 0) {
      uVar16 = 0xcc;
      goto LAB_004d1bda;
    }
  }
  puVar11 = (undefined4 *)((int)local_3c + 0x1d5);
  uVar4 = (-(uint)(local_3c[0xdc] != 0) & 4) + 7;
  local_3c[0xbd] = uVar4;
  iVar3 = thunk_FUN_004ad650((int)puVar11);
  uVar6 = thunk_FUN_004ad650(local_3c[0xd7]);
  FUN_006ea340(*(void **)((int)local_3c + 0x211),uVar6,iVar3,uVar4);
  thunk_FUN_004ad3c0((void *)local_3c[0xd7],*(float *)((int)local_3c + 0x1f9),
                     *(float *)((int)local_3c + 0x1fd),*(float *)((int)local_3c + 0x201));
  uVar4 = thunk_FUN_004ab050();
  uVar4 = uVar4 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  wsprintfA((LPSTR)local_88,s__s_1i_007ac908,(&PTR_s_tlo_embws1_007bf3e8)[local_3c[0xdb]],uVar4);
  iVar3 = thunk_FUN_004ab880(0xe,DAT_0080678c,local_88,0x1d);
  if (iVar3 != 0) {
    FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,0xd4);
  }
  iVar3 = local_3c[0xdc];
  if (iVar3 == 0) {
LAB_004d1fef:
    if (*(int *)((int)local_3c + 0x241) == 0) {
      iVar3 = thunk_FUN_004ab880((-(iVar3 != 0) & 3U) + 6,DAT_0080678c,(byte *)s_tlo_emb2_007ad434,
                                 0x1d);
      if (iVar3 != 0) {
        uVar16 = 0x101;
        goto LAB_004d204d;
      }
    }
    else if ((*(int *)((int)local_3c + 0x241) == 1) &&
            (iVar3 = thunk_FUN_004ab880((-(iVar3 != 0) & 3U) + 6,DAT_0080678c,
                                        (byte *)s_tlo_emb3_007ad440,0x1d), iVar3 != 0)) {
      uVar16 = 0x102;
LAB_004d204d:
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,uVar16);
    }
    local_3c[0xbb] = 1;
    (**(code **)(*local_3c + 0x90))(3,0x360);
    local_3c[0xbc] = (-(uint)(local_3c[0xdc] != 0) & 3) + 6;
    iVar3 = local_3c[0xbb] + *(int *)((int)local_3c + 0x241) * 4;
    thunk_FUN_004abce0(puVar11,*(byte *)(local_3c + 0xbc),*(int *)(local_3c[0xd9] + iVar3 * 8),
                       *(int *)(local_3c[0xd9] + 4 + iVar3 * 8),'\0');
    thunk_FUN_004abe40(puVar11,(char)local_3c[0xbc],
                       *(undefined4 *)
                        (local_3c[0xd9] + (local_3c[0xbb] + *(int *)((int)local_3c + 0x241) * 4) * 8
                        ));
    thunk_FUN_004ac1a0(*(byte *)(local_3c + 0xbc),*(undefined4 *)(DAT_00802a38 + 0xe4));
    local_8 = (int *)&DAT_0000000b;
    piVar12 = local_3c + 0xd4;
    do {
      puVar8 = (undefined4 *)FUN_0072e530(0x40);
      if (puVar8 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = thunk_FUN_004ab810(puVar8);
      }
      *piVar12 = iVar3;
      iVar3 = thunk_FUN_004ad1f0(DAT_008073cc,local_3c[0xc0],local_3c[0xc1],0,local_3c[0xbe],
                                 local_3c[0xbf],0x11);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,0x10d);
      }
      iVar3 = thunk_FUN_004ab880(0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,0x1d);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,0x10e);
      }
      piVar10 = local_8;
      iVar3 = thunk_FUN_004ad650((int)puVar11);
      uVar4 = thunk_FUN_004ad650(*piVar12);
      FUN_006ea340(*(void **)((int)local_3c + 0x211),uVar4,iVar3,(uint)piVar10);
      thunk_FUN_004ad3c0((void *)*piVar12,*(float *)((int)local_3c + 0x1f9),
                         *(float *)((int)local_3c + 0x1fd),*(float *)((int)local_3c + 0x201));
      piVar12 = piVar12 + 1;
      local_8 = (int *)((int)local_8 + -1);
      uVar16 = extraout_EDX_02;
    } while (8 < (int)local_8);
  }
  else {
    iVar9 = *(int *)((int)local_3c + 0x259);
    if (((iVar9 == 0x6c) && (*(int *)((int)local_3c + 0x251) == 3)) ||
       ((0x53 < iVar9 && (iVar9 < 0x5b)))) {
      if ((iVar3 == 0) ||
         (((iVar9 = *(int *)((int)local_3c + 0x259), iVar9 != 0x6c ||
           (*(int *)((int)local_3c + 0x251) != 3)) && ((iVar9 < 0x54 || (0x5a < iVar9))))))
      goto LAB_004d1fef;
      local_3c[0xbb] = 2;
      local_3c[0xbc] = 0xb;
      if (*(int *)((int)local_3c + 0x241) == 1) {
        iVar3 = thunk_FUN_004ab880(*(byte *)(local_3c + 0xbc),DAT_0080678c,
                                   (byte *)s_si_emb6_007ad458,0x1d);
        if (iVar3 != 0) {
          uVar16 = 0xef;
LAB_004d1f0b:
          FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,uVar16);
        }
      }
      else {
        iVar3 = thunk_FUN_004ab880(*(byte *)(local_3c + 0xbc),DAT_0080678c,
                                   (byte *)s_si_emb5_007ad44c,0x1d);
        if (iVar3 != 0) {
          uVar16 = 0xf0;
          goto LAB_004d1f0b;
        }
      }
      iVar3 = (-(uint)(local_3c[0xdc] != 0) & 3) + 6;
      local_3c[0xbd] = iVar3;
      thunk_FUN_004abb30((byte)iVar3);
      uVar4 = local_3c[0xbd];
      iVar3 = thunk_FUN_004ad650((int)puVar11);
      uVar6 = thunk_FUN_004ad650(local_3c[0xd7]);
      FUN_006ea340(*(void **)((int)local_3c + 0x211),uVar6,iVar3,uVar4);
      thunk_FUN_004ac1a0(*(byte *)(local_3c + 0xbc),*(undefined4 *)(DAT_00802a38 + 0xe4));
      (**(code **)(*local_3c + 0x90))(3,0x362);
      thunk_FUN_004abce0((void *)local_3c[0xd7],0xe,0,
                         **(int **)(*(int *)(local_3c[0xd7] + 0x20) + 0x1f8) + -1,'\0');
      thunk_FUN_004abe40((void *)local_3c[0xd7],'\x0e',0);
      thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ad460((void *)local_3c[0xd7],0);
      thunk_FUN_004ad5e0((int)puVar11);
      uVar16 = extraout_EDX_01;
    }
    else {
      if (*(int *)((int)local_3c + 0x241) == 0) {
        iVar3 = thunk_FUN_004ab880(9,DAT_0080678c,(byte *)s_si_emb1_007bf470,0x1d);
        if (iVar3 != 0) {
          FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,0xd9);
        }
        wsprintfA((LPSTR)local_88,s_si_emb1_id_1d_007bf460,local_3c[9]);
        iVar3 = thunk_FUN_004ab880((-(local_3c[0xdc] != 0) & 3U) + 5,DAT_0080678c,local_88,0x1d);
        if (iVar3 != 0) {
          uVar16 = 0xdb;
LAB_004d1df8:
          FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,uVar16);
        }
      }
      else if (*(int *)((int)local_3c + 0x241) == 1) {
        iVar3 = thunk_FUN_004ab880(9,DAT_0080678c,(byte *)s_si_emb4_007bf48c,0x1d);
        if (iVar3 != 0) {
          FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf4bc,0xdf);
        }
        wsprintfA((LPSTR)local_88,s_si_emb4_id_1d_007bf47c,local_3c[9]);
        iVar3 = thunk_FUN_004ab880((-(local_3c[0xdc] != 0) & 3U) + 5,DAT_0080678c,local_88,0x1d);
        if (iVar3 != 0) {
          uVar16 = 0xe1;
          goto LAB_004d1df8;
        }
      }
      local_3c[0xbb] = 0;
      local_3c[0xbc] = (-(uint)(local_3c[0xdc] != 0) & 3) + 6;
      thunk_FUN_004d10a0(local_3c,0);
      thunk_FUN_004ac1a0(*(byte *)(local_3c + 0xbc),*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ac1a0((char)local_3c[0xbc] - 1,*(undefined4 *)(DAT_00802a38 + 0xe4));
      (**(code **)*puVar11)();
      uVar16 = extraout_EDX_00;
    }
  }
  thunk_FUN_00419c70(local_3c,uVar16,(uint)(*(int *)((int)local_3c + 0x23d) == 0));
  local_3c[0xb6] = 0;
  local_3c[0xb5] = 0;
  local_3c[0xb4] = 0;
  local_3c[0xb3] = 0;
  iVar3 = (local_3c[0xda] * 3 + local_3c[0xdb]) * 4;
  thunk_FUN_004d76e0((char)local_3c[9],0,local_3c[6],*(int *)(&DAT_008545ac + iVar3),
                     *(int *)(&DAT_007e1c50 + iVar3),*(int *)(&DAT_007e24fc + iVar3),
                     *(int *)(&DAT_007e3160 + iVar3));
  iVar3 = thunk_FUN_004b7520(CONCAT31((int3)((uint)*(undefined4 *)((int)local_3c + 0x259) >> 8),
                                      (char)local_3c[9]),*(undefined4 *)((int)local_3c + 0x259));
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*local_3c + 0x2c))();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar3 >> 8),(char)local_3c[9]),iVar3);
  }
  thunk_FUN_0041c3f0(local_3c,(undefined *)0x5);
LAB_004d22a1:
  thunk_FUN_0041f630(local_3c);
  DAT_00858df8 = local_cc;
  return 0;
}

