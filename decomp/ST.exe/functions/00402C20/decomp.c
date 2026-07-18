
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00548c40(int param_1)

{
  short sVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  ushort *puVar9;
  void *unaff_EDI;
  char *pcVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined4 uStack_2c8;
  undefined4 auStack_2c4 [16];
  undefined4 auStack_284 [7];
  undefined4 uStack_267;
  undefined1 auStack_260 [5];
  int iStack_25b;
  int iStack_257;
  undefined1 auStack_23c [5];
  int iStack_237;
  int iStack_233;
  int iStack_218;
  int iStack_214;
  undefined1 uStack_208;
  undefined4 uStack_207;
  undefined4 uStack_203;
  int iStack_1ff;
  undefined1 auStack_1e4 [5];
  int iStack_1df;
  int iStack_1db;
  undefined4 uStack_1c7;
  undefined1 auStack_1c0 [5];
  int iStack_1bb;
  int iStack_1b7;
  undefined4 uStack_1a3;
  char cStack_19c;
  undefined4 uStack_19b;
  undefined4 uStack_197;
  int iStack_193;
  undefined1 auStack_178 [5];
  undefined1 uStack_173;
  undefined1 uStack_172;
  byte bStack_171;
  undefined1 auStack_160 [5];
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  undefined1 uStack_159;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  int iStack_124;
  undefined1 auStack_120 [5];
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  byte bStack_119;
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  char cStack_d4;
  char cStack_d0;
  undefined2 uStack_cf;
  undefined2 uStack_cd;
  undefined2 uStack_cb;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  char *pcStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_80;
  undefined3 uStack_7f;
  undefined1 uStack_7c;
  short sStack_7a;
  undefined1 uStack_78;
  undefined3 uStack_77;
  undefined1 uStack_74;
  short sStack_70;
  short sStack_6e;
  undefined1 auStack_6c [2];
  short sStack_6a;
  short sStack_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  undefined1 auStack_5e [2];
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  short sStack_58;
  short sStack_56;
  undefined4 *puStack_54;
  short sStack_4e;
  ushort *puStack_4c;
  undefined1 auStack_46 [2];
  ushort *puStack_44;
  undefined1 auStack_3e [2];
  ushort *puStack_3c;
  short sStack_38;
  short sStack_36;
  undefined2 uStack_34;
  byte abStack_32 [2];
  undefined1 auStack_30 [2];
  short sStack_2e;
  undefined1 uStack_2c;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined4 *puStack_24;
  ushort *puStack_20;
  ushort *puStack_1c;
  undefined4 *puStack_18;
  ushort *puStack_14;
  float fStack_10;
  float fStack_c;
  ushort *puStack_8;
  
  uStack_2c8 = DAT_00858df8;
  DAT_00858df8 = &uStack_2c8;
  iVar6 = __setjmp3(auStack_2c4,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_2c8;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x671,0,iVar6,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar6,0,0x7c7d60,0x672);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (DAT_00807598 != (void *)0x0) {
    uStack_148 = *(undefined4 *)(iStack_124 + 0xef);
    uStack_144 = *(undefined4 *)(iStack_124 + 0xf3);
    iStack_140 = iVar6;
    FUN_006e25d0(DAT_00807598,&iStack_218);
    *(int *)(iStack_124 + 0xdf) = iStack_218 >> 0x10;
    *(int *)(iStack_124 + 0xe7) =
         (*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2)) - (iStack_218 >> 0x10);
    *(int *)(iStack_124 + 0xe3) = iStack_214 >> 0x10;
    *(int *)(iStack_124 + 0xeb) =
         (*(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6)) - (iStack_214 >> 0x10);
  }
  if (DAT_00802a38 == 0) {
    DAT_00858df8 = (undefined4 *)uStack_2c8;
    return;
  }
  if (*(char *)(iStack_124 + 0x4de) != '\0') {
    if (((*(short *)(iStack_124 + 0x494) == 0x48) &&
        (piVar2 = *(int **)(iStack_124 + 0x49a), piVar2 != (int *)0x0)) &&
       (DAT_00801690 != (void *)0x0)) {
      iVar6 = (**(code **)(*piVar2 + 0x2c))();
      if (iVar6 == 0x78) {
        iVar6 = *(int *)(*(int *)(iStack_124 + 0x49a) + 0x259);
      }
      iVar7 = (**(code **)(*piVar2 + 0xc))();
      thunk_FUN_00514bc0(DAT_00801690,iVar6,iVar7);
      *(undefined1 *)(iStack_124 + 0x4de) = 0;
    }
    goto switchD_00548db5_caseD_3;
  }
  sVar1 = *(short *)(iStack_124 + 0x494);
  switch(sVar1) {
  case 1:
    switch(*(int *)(iStack_124 + 0x4a2)) {
    case 3:
    case 10:
    case 0x2b:
      if (param_1 != 0) {
        puStack_4c = (ushort *)0x0;
        if (DAT_007fa174 != 0) {
          puStack_4c = thunk_FUN_0044c720((*(int *)(iStack_124 + 0x4a2) == 10) + 1,
                                          *(int *)(iStack_124 + 0xdf),*(int *)(iStack_124 + 0xe3),
                                          *(int *)(iStack_124 + 0xe7),*(int *)(iStack_124 + 0xeb),
                                          (int *)&uStack_9c);
        }
        if (puStack_4c != (ushort *)0x0) {
          puStack_18 = (undefined4 *)(uStack_9c + 1);
          pcStack_94 = (char *)FUN_006aac10((uint)puStack_18);
          if (pcStack_94 != (char *)0x0) {
            *pcStack_94 = (*(int *)(iStack_124 + 0x4a2) == 10) + '\x01';
            puVar9 = puStack_4c;
            pcVar10 = pcStack_94 + 1;
            for (uVar8 = uStack_9c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              pcVar10 = pcVar10 + 4;
            }
            for (uStack_9c = uStack_9c & 3; uStack_9c != 0; uStack_9c = uStack_9c - 1) {
              *pcVar10 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              pcVar10 = pcVar10 + 1;
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,(undefined4 *)pcStack_94,0,(uint)puStack_18);
            FUN_006ab060(&pcStack_94);
          }
          FUN_006ab060(&puStack_4c);
        }
      }
      break;
    case 5:
      if (param_1 != 0) {
        puStack_1c = (ushort *)0x0;
        if (DAT_007fa174 != 0) {
          puStack_1c = thunk_FUN_0044c720(3,*(int *)(iStack_124 + 0xdf),*(int *)(iStack_124 + 0xe3),
                                          *(int *)(iStack_124 + 0xe7),*(int *)(iStack_124 + 0xeb),
                                          (int *)&uStack_a8);
        }
        if (puStack_1c != (ushort *)0x0) {
          puStack_24 = (undefined4 *)(uStack_a8 + 1);
          puStack_18 = FUN_006aac10((uint)puStack_24);
          if (puStack_18 != (undefined4 *)0x0) {
            *(undefined1 *)puStack_18 = 3;
            puVar9 = puStack_1c;
            puVar13 = (undefined4 *)((int)puStack_18 + 1);
            for (uVar8 = uStack_a8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar13 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar13 = puVar13 + 1;
            }
            for (uStack_a8 = uStack_a8 & 3; uStack_a8 != 0; uStack_a8 = uStack_a8 - 1) {
              *(char *)puVar13 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,puStack_18,0,(uint)puStack_24);
            FUN_006ab060(&puStack_18);
          }
          FUN_006ab060(&puStack_1c);
        }
        break;
      }
      pvVar3 = *(void **)(iStack_124 + 0x49a);
      if (pvVar3 == (void *)0x0) break;
      puVar13 = (undefined4 *)auStack_1e4;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      thunk_FUN_004162b0(pvVar3,&sStack_56,&sStack_68,&sStack_2e);
      auStack_1e4._1_4_ = SEXT24(sStack_56);
      iStack_1db = (int)sStack_2e;
      iStack_1df = (int)sStack_68;
      auStack_1e4[0] = 1;
      uStack_1c7 = *(undefined4 *)(*(int *)(iStack_124 + 0x49a) + 0x18);
      puVar14 = (uint *)auStack_1e4;
      puVar13 = (undefined4 *)0x17;
      goto LAB_0054a19a;
    case 0xe:
      if (DAT_007fb2ac != 0) {
        uStack_b8 = *(undefined4 *)(iStack_124 + 0x4aa);
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        if (*(int *)(DAT_007fb2ac + 0x24) != 0) {
          if (&stack0x00000000 != (undefined1 *)0xb4) {
            uStack_b4 = *(undefined4 *)(DAT_007fb2ac + 0x30);
          }
          if (&stack0x00000000 != (undefined1 *)0xb0) {
            uStack_b0 = *(undefined4 *)(DAT_007fb2ac + 0x34);
          }
          if (&stack0x00000000 != (undefined1 *)0xac) {
            uStack_ac = *(undefined4 *)(DAT_007fb2ac + 0x38);
          }
          if (*(int *)(DAT_007fb2ac + 0x24) != 0) {
            thunk_FUN_0054edf0((undefined4 *)0x23,&uStack_b8,0,0xffffffff);
            iVar6 = FUN_006e1dd0(DAT_00807598,
                                 *(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                                 *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),
                                 &fStack_10,&fStack_c,(float *)&puStack_8);
            if (iVar6 != 0) {
              if (_DAT_0079034c <= (float)puStack_8) {
                puStack_14 = puStack_8;
                thunk_FUN_0054a9b0(fStack_10,fStack_c,(float)puStack_8);
              }
              else {
                puStack_14 = (ushort *)0x0;
                thunk_FUN_0054a9b0(fStack_10,fStack_c,0.0);
              }
            }
          }
        }
      }
      break;
    case 0x2c:
      if (param_1 != 0) {
        puStack_54 = (undefined4 *)0x0;
        if (DAT_007fa174 != 0) {
          puStack_54 = (undefined4 *)thunk_FUN_0044e220();
        }
        if (puStack_54 != (undefined4 *)0x0) {
          puStack_18 = (undefined4 *)(uStack_a4 + 1);
          puStack_24 = FUN_006aac10((uint)puStack_18);
          if (puStack_24 != (undefined4 *)0x0) {
            *(undefined1 *)puStack_24 = 4;
            puVar13 = puStack_54;
            puVar11 = (undefined4 *)((int)puStack_24 + 1);
            for (uVar8 = uStack_a4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar11 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uStack_a4 = uStack_a4 & 3; uStack_a4 != 0; uStack_a4 = uStack_a4 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar13;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,puStack_24,0,(uint)puStack_18);
            FUN_006ab060(&puStack_24);
          }
          FUN_006ab060(&puStack_54);
        }
      }
      break;
    case 0x4e:
      uStack_f4 = (uint)*(byte *)(iStack_124 + 0x4aa);
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e3 = 0;
      lVar12 = __ftol();
      uStack_f4._1_3_ = (undefined3)lVar12;
      uStack_f0._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
      lVar12 = __ftol();
      uStack_f0._1_3_ = (undefined3)lVar12;
      uStack_ec._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
      lVar12 = __ftol();
      uStack_e3 = *(undefined1 *)(iStack_124 + 0xfb);
      uStack_ec._1_3_ = (undefined3)lVar12;
      puVar14 = &uStack_f4;
      uStack_e8._1_3_ = (undefined3)*(undefined4 *)(iStack_124 + 0xf7);
      uStack_e8 = CONCAT31(uStack_e8._1_3_,(char)((ulonglong)lVar12 >> 0x18));
      uStack_e4 = (undefined1)((uint)*(undefined4 *)(iStack_124 + 0xf7) >> 0x18);
      goto LAB_0054a196;
    }
    break;
  case 2:
  case 7:
  case 0xc:
    if (param_1 != 0) {
      puStack_3c = (ushort *)0x0;
      if (DAT_007fa174 != 0) {
        puStack_3c = thunk_FUN_0044c720((sVar1 == 0xc) + 1,*(int *)(iStack_124 + 0xdf),
                                        *(int *)(iStack_124 + 0xe3),*(int *)(iStack_124 + 0xe7),
                                        *(int *)(iStack_124 + 0xeb),(int *)&uStack_98);
      }
      if (puStack_3c != (ushort *)0x0) {
        puStack_18 = (undefined4 *)(uStack_98 + 1);
        puStack_20 = (ushort *)FUN_006aac10((uint)puStack_18);
        if (puStack_20 != (ushort *)0x0) {
          *(char *)puStack_20 = (*(short *)(iStack_124 + 0x494) == 0xc) + '\x01';
          puVar9 = puStack_3c;
          puVar13 = (undefined4 *)((int)puStack_20 + 1);
          for (uVar8 = uStack_98 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar13 = *(undefined4 *)puVar9;
            puVar9 = puVar9 + 2;
            puVar13 = puVar13 + 1;
          }
          for (uStack_98 = uStack_98 & 3; uStack_98 != 0; uStack_98 = uStack_98 - 1) {
            *(char *)puVar13 = (char)*puVar9;
            puVar9 = (ushort *)((int)puVar9 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          thunk_FUN_0054edf0((undefined4 *)0x31,(undefined4 *)puStack_20,0,(uint)puStack_18);
          FUN_006ab060(&puStack_20);
        }
        FUN_006ab060(&puStack_3c);
      }
      break;
    }
    puVar13 = (undefined4 *)auStack_120;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    if (*(void **)(iStack_124 + 0x49a) == (void *)0x0) {
      iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                           *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                           &fStack_c,(float *)&puStack_8);
      if (iVar6 == 0) break;
      lVar12 = __ftol();
      uStack_11b = (undefined1)lVar12;
      lVar12 = __ftol();
      uStack_11a = (undefined1)lVar12;
      lVar12 = __ftol();
      bStack_119 = (byte)lVar12;
      if (4 < bStack_119) {
        bStack_119 = 4;
      }
      puVar14 = (uint *)auStack_120;
      auStack_120[0] = 3;
      puVar13 = (undefined4 *)0x16;
    }
    else {
      thunk_FUN_004162b0(*(void **)(iStack_124 + 0x49a),(undefined2 *)auStack_5e,
                         (undefined2 *)auStack_30,(undefined2 *)abStack_32);
      uStack_11b = auStack_5e[0];
      uStack_11a = auStack_30[0];
      bStack_119 = abStack_32[0];
      auStack_120[0] = (*(short *)(iStack_124 + 0x494) != 0xc) - 1U & 5;
      auStack_120._1_4_ = *(undefined4 *)(*(int *)(iStack_124 + 0x49a) + 0x18);
      puVar14 = (uint *)auStack_120;
      puVar13 = (undefined4 *)0x16;
    }
    goto LAB_0054a19a;
  case 5:
  case 6:
    iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                         *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                         &fStack_c,(float *)&puStack_8);
    if (iVar6 != 0) {
      lVar12 = __ftol();
      uStack_130 = (undefined4)lVar12;
      lVar12 = __ftol();
      uStack_12c = (undefined4)lVar12;
      lVar12 = __ftol();
      iStack_128 = (int)lVar12;
      if (iStack_128 < 0) {
        iStack_128 = 0;
      }
      if (4 < iStack_128) {
        iStack_128 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x14,&uStack_130,0,0xffffffff);
      if (_DAT_0079034c <= (float)puStack_8) {
        puStack_1c = puStack_8;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,(float)puStack_8);
      }
      else {
        puStack_1c = (ushort *)0x0;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,0.0);
      }
    }
    break;
  case 8:
    iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                         *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                         &fStack_c,(float *)&puStack_8);
    if (iVar6 != 0) {
      auStack_178[0] = 2;
      lVar12 = __ftol();
      uStack_173 = (undefined1)lVar12;
      lVar12 = __ftol();
      uStack_172 = (undefined1)lVar12;
      lVar12 = __ftol();
      bStack_171 = (byte)lVar12;
      if (4 < bStack_171) {
        bStack_171 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x16,(undefined4 *)auStack_178,0,0xffffffff);
      if (_DAT_0079034c <= (float)puStack_8) {
        puStack_14 = puStack_8;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,(float)puStack_8);
      }
      else {
        puStack_14 = (ushort *)0x0;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,0.0);
      }
    }
    break;
  case 9:
  case 10:
  case 0xb:
    pvVar3 = *(void **)(iStack_124 + 0x49a);
    if (pvVar3 == (void *)0x0) break;
    puVar13 = (undefined4 *)auStack_160;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    thunk_FUN_004162b0(pvVar3,(undefined2 *)auStack_3e,(undefined2 *)auStack_6c,
                       (undefined2 *)auStack_46);
    uStack_15b = auStack_3e[0];
    uStack_159 = auStack_46[0];
    uStack_15a = auStack_6c[0];
    auStack_160[0] = 1;
    auStack_160._1_4_ = *(undefined4 *)(*(int *)(iStack_124 + 0x49a) + 0x18);
    thunk_FUN_0054edf0((undefined4 *)0x16,(undefined4 *)auStack_160,0,0xffffffff);
    iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                         *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                         &fStack_c,(float *)&puStack_8);
    if (iVar6 == 0) break;
    if (_DAT_0079034c <= (float)puStack_8) {
      puStack_14 = puStack_8;
    }
    else {
      puStack_14 = (ushort *)0x0;
    }
    goto LAB_00549b36;
  case 0xd:
  case 0xe:
    if (param_1 != 0) {
      if (sVar1 == 0xd) {
        puStack_44 = (ushort *)0x0;
        if (DAT_007fa174 != 0) {
          puStack_44 = thunk_FUN_0044c720(3,*(int *)(iStack_124 + 0xdf),*(int *)(iStack_124 + 0xe3),
                                          *(int *)(iStack_124 + 0xe7),*(int *)(iStack_124 + 0xeb),
                                          (int *)&uStack_a0);
        }
        if (puStack_44 != (ushort *)0x0) {
          puStack_18 = (undefined4 *)(uStack_a0 + 1);
          puStack_14 = (ushort *)FUN_006aac10((uint)puStack_18);
          if (puStack_14 != (ushort *)0x0) {
            *(undefined1 *)puStack_14 = 3;
            puVar9 = puStack_44;
            puVar13 = (undefined4 *)((int)puStack_14 + 1);
            for (uVar8 = uStack_a0 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar13 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar13 = puVar13 + 1;
            }
            for (uStack_a0 = uStack_a0 & 3; uStack_a0 != 0; uStack_a0 = uStack_a0 - 1) {
              *(char *)puVar13 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,(undefined4 *)puStack_14,0,(uint)puStack_18);
            FUN_006ab060(&puStack_14);
          }
          FUN_006ab060(&puStack_44);
        }
      }
      break;
    }
    pvVar3 = *(void **)(iStack_124 + 0x49a);
    if (pvVar3 == (void *)0x0) break;
    puVar13 = (undefined4 *)auStack_1c0;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)puVar13 = 0;
    thunk_FUN_004162b0(pvVar3,&sStack_36,&sStack_58,&sStack_62);
    auStack_1c0._1_4_ = SEXT24(sStack_36);
    iStack_1b7 = (int)sStack_62;
    iStack_1bb = (int)sStack_58;
    auStack_1c0[0] = 1;
    uStack_1a3 = *(undefined4 *)(*(int *)(iStack_124 + 0x49a) + 0x18);
    puVar14 = (uint *)auStack_1c0;
    puVar13 = (undefined4 *)0x17;
    goto LAB_0054a19a;
  case 0xf:
  case 0x10:
    iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                         *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                         &fStack_c,(float *)&puStack_8);
    if (iVar6 != 0) {
      cStack_19c = ((*(short *)(iStack_124 + 0x494) != 0xf) - 1U & 0xf2) + 0x10;
      lVar12 = __ftol();
      uStack_19b = (undefined4)lVar12;
      lVar12 = __ftol();
      uStack_197 = (undefined4)lVar12;
      lVar12 = __ftol();
      iStack_193 = (int)lVar12;
      if (iStack_193 < 0) {
        iStack_193 = 0;
      }
      if (4 < iStack_193) {
        iStack_193 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x17,(undefined4 *)&cStack_19c,0,0xffffffff);
      if (_DAT_0079034c <= (float)puStack_8) {
        puStack_20 = puStack_8;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,(float)puStack_8);
      }
      else {
        puStack_20 = (ushort *)0x0;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,0.0);
      }
    }
    break;
  case 0x11:
    iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                         *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                         &fStack_c,(float *)&puStack_8);
    if (iVar6 != 0) {
      lVar12 = __ftol();
      uStack_13c = (undefined4)lVar12;
      lVar12 = __ftol();
      uStack_138 = (undefined4)lVar12;
      lVar12 = __ftol();
      iStack_134 = (int)lVar12;
      if (iStack_134 < 0) {
        iStack_134 = 0;
      }
      if (4 < iStack_134) {
        iStack_134 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x19,&uStack_13c,0,0xffffffff);
      if (_DAT_0079034c <= (float)puStack_8) {
        puStack_14 = puStack_8;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,(float)puStack_8);
      }
      else {
        puStack_14 = (ushort *)0x0;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,0.0);
      }
    }
    break;
  case 0x12:
  case 0x13:
    if (*(void **)(iStack_124 + 0x49a) == (void *)0x0) break;
    cStack_d0 = (sVar1 != 0x12) + '\x01';
    thunk_FUN_004162b0(*(void **)(iStack_124 + 0x49a),&uStack_cf,&uStack_cd,&uStack_cb);
    puVar14 = (uint *)&cStack_d0;
    puVar13 = (undefined4 *)0x1f;
    goto LAB_0054a19a;
  case 0x14:
    if (DAT_007fb2ac != 0) {
      uStack_c8 = *(undefined4 *)(iStack_124 + 0x4aa);
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      if (*(int *)(DAT_007fb2ac + 0x24) != 0) {
        if (&stack0x00000000 != (undefined1 *)0xc4) {
          uStack_c4 = *(undefined4 *)(DAT_007fb2ac + 0x30);
        }
        if (&stack0x00000000 != (undefined1 *)0xc0) {
          uStack_c0 = *(undefined4 *)(DAT_007fb2ac + 0x34);
        }
        if (&stack0x00000000 != (undefined1 *)0xbc) {
          uStack_bc = *(undefined4 *)(DAT_007fb2ac + 0x38);
        }
        if (*(int *)(DAT_007fb2ac + 0x24) != 0) {
          thunk_FUN_0054edf0((undefined4 *)0x23,&uStack_c8,0,0xffffffff);
          iVar6 = FUN_006e1dd0(DAT_00807598,
                               *(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                               *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10
                               ,&fStack_c,(float *)&puStack_8);
          if (iVar6 != 0) {
            if (_DAT_0079034c <= (float)puStack_8) {
              puStack_14 = puStack_8;
              thunk_FUN_0054a9b0(fStack_10,fStack_c,(float)puStack_8);
            }
            else {
              puStack_14 = (ushort *)0x0;
              thunk_FUN_0054a9b0(fStack_10,fStack_c,0.0);
            }
          }
        }
      }
    }
    break;
  case 0x16:
  case 0x18:
    pvVar3 = *(void **)(iStack_124 + 0x49a);
    if (pvVar3 == (void *)0x0) break;
    puVar13 = (undefined4 *)auStack_260;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)puVar13 = 0;
    thunk_FUN_004162b0(pvVar3,&sStack_6e,&sStack_66,&sStack_6a);
    auStack_260._1_4_ = SEXT24(sStack_6e);
    iStack_25b = (int)sStack_66;
    iStack_257 = (int)sStack_6a;
    auStack_260[0] = ((*(short *)(iStack_124 + 0x494) != 0x18) - 1U & 0xeb) + 0x18;
    puVar14 = (uint *)auStack_260;
    puVar13 = (undefined4 *)0x17;
    goto LAB_0054a19a;
  case 0x17:
    if (*(int *)(iStack_124 + 0x49a) == 0) break;
    uVar4 = *(undefined4 *)(*(int *)(iStack_124 + 0x49a) + 0x18);
    puVar14 = (uint *)&uStack_78;
    _uStack_78 = CONCAT31((int3)uVar4,1);
    uStack_74 = (undefined1)((uint)uVar4 >> 0x18);
    puVar13 = (undefined4 *)0x21;
    goto LAB_0054a19a;
  case 0x19:
    iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                         *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                         &fStack_c,(float *)&puStack_8);
    if (iVar6 != 0) {
      lVar12 = __ftol();
      uStack_207 = (undefined4)lVar12;
      lVar12 = __ftol();
      uStack_203 = (undefined4)lVar12;
      lVar12 = __ftol();
      iStack_1ff = (int)lVar12;
      if (iStack_1ff < 0) {
        iStack_1ff = 0;
      }
      if (4 < iStack_1ff) {
        iStack_1ff = 4;
      }
      uStack_208 = 0xb;
      thunk_FUN_0054edf0((undefined4 *)0x17,(undefined4 *)&uStack_208,0,0xffffffff);
      if (_DAT_0079034c <= (float)puStack_8) {
        puStack_14 = puStack_8;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,(float)puStack_8);
      }
      else {
        puStack_14 = (ushort *)0x0;
        thunk_FUN_0054a9b0(fStack_10,fStack_c,0.0);
      }
    }
    break;
  case 0x1a:
    if (*(int *)(iStack_124 + 0x49a) == 0) break;
    uVar4 = *(undefined4 *)(*(int *)(iStack_124 + 0x49a) + 0x18);
    puVar14 = (uint *)&uStack_80;
    _uStack_80 = CONCAT31((int3)uVar4,4);
    uStack_7c = (undefined1)((uint)uVar4 >> 0x18);
    puVar13 = (undefined4 *)0x21;
    goto LAB_0054a19a;
  case 0x1b:
    pvVar3 = *(void **)(iStack_124 + 0x49a);
    if (pvVar3 == (void *)0x0) break;
    puVar13 = (undefined4 *)auStack_23c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)puVar13 = 0;
    thunk_FUN_004162b0(pvVar3,&sStack_70,&sStack_38,&sStack_60);
    auStack_23c._1_4_ = SEXT24(sStack_70);
    iStack_237 = (int)sStack_38;
    iStack_233 = (int)sStack_60;
    puVar14 = (uint *)auStack_23c;
    auStack_23c[0] = 0x13;
    puVar13 = (undefined4 *)0x17;
    goto LAB_0054a19a;
  case 0x1c:
    uStack_108 = (uint)*(byte *)(iStack_124 + 0x4aa);
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f7 = 0;
    lVar12 = __ftol();
    uStack_108._1_3_ = (undefined3)lVar12;
    uStack_104._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
    lVar12 = __ftol();
    uStack_104._1_3_ = (undefined3)lVar12;
    uStack_100._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
    lVar12 = __ftol();
    uStack_f7 = *(undefined1 *)(iStack_124 + 0xfb);
    uStack_100._1_3_ = (undefined3)lVar12;
    puVar14 = &uStack_108;
    uStack_fc._1_3_ = (undefined3)*(undefined4 *)(iStack_124 + 0xf7);
    uStack_fc = CONCAT31(uStack_fc._1_3_,(char)((ulonglong)lVar12 >> 0x18));
    uStack_f8 = (undefined1)((uint)*(undefined4 *)(iStack_124 + 0xf7) >> 0x18);
LAB_0054a196:
    puVar13 = (undefined4 *)0x18;
    goto LAB_0054a19a;
  case 0x1d:
    if (*(int *)(iStack_124 + 0x4a2) == 0x18) {
      iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                           *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                           &fStack_c,(float *)&puStack_8);
      if (iVar6 == 0) break;
      uStack_90 = 1;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      lVar12 = __ftol();
      uStack_90._1_3_ = (undefined3)lVar12;
      uStack_8c._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
      lVar12 = __ftol();
      uStack_8c._1_3_ = (undefined3)lVar12;
      uStack_88._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
      lVar12 = __ftol();
      iVar6 = (int)lVar12;
      uStack_88._1_3_ = (undefined3)lVar12;
      uStack_84 = (undefined1)((ulonglong)lVar12 >> 0x18);
      if (iVar6 < 0) {
        iVar6 = 0;
        uStack_88._1_3_ = 0;
        uStack_84 = 0;
      }
      if (4 < iVar6) {
        uStack_88._1_3_ = 4;
        uStack_84 = 0;
      }
      thunk_FUN_0054edf0((undefined4 *)0x1a,&uStack_90,0,0xffffffff);
      if (_DAT_0079034c <= (float)puStack_8) {
        puStack_14 = puStack_8;
      }
      else {
        puStack_14 = (ushort *)0x0;
      }
      goto LAB_00549c33;
    }
    if (*(void **)(iStack_124 + 0x49a) == (void *)0x0) break;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_e0 = 2;
    cStack_d4 = 0;
    thunk_FUN_004162b0(*(void **)(iStack_124 + 0x49a),&sStack_64,&sStack_4e,&sStack_7a);
    uStack_e0._1_3_ = (int3)sStack_64;
    uStack_dc._0_1_ = (char)(sStack_64 >> 0xf);
    uStack_dc._1_3_ = (int3)sStack_4e;
    uStack_d8._0_1_ = (char)(sStack_4e >> 0xf);
    uStack_d8._1_3_ = (int3)sStack_7a;
    cStack_d4 = (char)(sStack_7a >> 0xf);
    thunk_FUN_0054edf0((undefined4 *)0x1a,&uStack_e0,0,0xffffffff);
    iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                         *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                         &fStack_c,(float *)&puStack_8);
    if (iVar6 == 0) break;
    if (_DAT_0079034c <= (float)puStack_8) {
      puStack_14 = puStack_8;
    }
    else {
      puStack_14 = (ushort *)0x0;
    }
LAB_00549b36:
    thunk_FUN_0054a9b0(fStack_10,fStack_c,(float)puStack_14);
    break;
  case 0x1e:
    if (*(void **)(iStack_124 + 0x49a) == (void *)0x0) break;
    uStack_2c = 0;
    uStack_2b = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    uStack_26 = 0;
    thunk_FUN_004162b0(*(void **)(iStack_124 + 0x49a),&uStack_5c,&uStack_5a,&uStack_34);
    uStack_2b = uStack_5c;
    puVar14 = (uint *)&uStack_2c;
    uStack_29 = (undefined1)uStack_5a;
    uStack_28 = (undefined1)((ushort)uStack_5a >> 8);
    uStack_27 = (undefined1)uStack_34;
    uStack_26 = (undefined1)((ushort)uStack_34 >> 8);
    uStack_2c = 3;
    puVar13 = (undefined4 *)0x1f;
LAB_0054a19a:
    thunk_FUN_0054edf0(puVar13,puVar14,0,0xffffffff);
    break;
  case 0x1f:
    iVar6 = *(int *)(iStack_124 + 0x49a);
    if (iVar6 == 0) break;
    puVar13 = auStack_284;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)puVar13 = 0;
    auStack_284[0]._0_1_ = 0x19;
    uStack_267 = *(undefined4 *)(iVar6 + 0x18);
    thunk_FUN_0054edf0((undefined4 *)0x17,auStack_284,0,0xffffffff);
    iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)(iStack_124 + 0xc5) - *(int *)(iStack_124 + 0x4b2),
                         *(int *)(iStack_124 + 0xc9) - *(int *)(iStack_124 + 0x4b6),&fStack_10,
                         &fStack_c,(float *)&puStack_8);
    if (iVar6 == 0) break;
    if (_DAT_0079034c <= (float)puStack_8) {
      puStack_14 = puStack_8;
    }
    else {
      puStack_14 = (ushort *)0x0;
    }
LAB_00549c33:
    thunk_FUN_0054a9b0(fStack_10,fStack_c,(float)puStack_14);
  }
switchD_00548db5_caseD_3:
  if (((*(int *)(iStack_124 + 0x4a2) != 0) && (*(char *)(iStack_124 + 0xd3) == '\0')) &&
     (*(undefined4 *)(iStack_124 + 0x4a6) = 1, DAT_00801688 != (void *)0x0)) {
    thunk_FUN_004fad20(DAT_00801688);
  }
  DAT_00858df8 = (undefined4 *)uStack_2c8;
  return;
}

