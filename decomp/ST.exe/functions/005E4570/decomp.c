
undefined4 __thiscall FUN_005e4570(void *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  code *pcVar3;
  void *this_00;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined4 extraout_ECX;
  uint uVar10;
  undefined3 uVar13;
  UINT UVar11;
  uint uVar12;
  undefined4 extraout_EDX;
  undefined3 uVar14;
  undefined4 unaff_ESI;
  char *pcVar15;
  void *unaff_EDI;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 local_68;
  undefined4 local_64 [16];
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  uint *local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_18 = this;
  uVar5 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x65) = uVar5;
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  iVar6 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)local_68;
    iVar18 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0x5b5,0,iVar6,&DAT_007a4ccc);
    if (iVar18 != 0) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    FUN_006a5e40(iVar6,0,0x7cd994,0x5b5);
    return 0xffff;
  }
  uVar12 = *(uint *)(param_1 + 0x10);
  uVar14 = (undefined3)((uint)extraout_EDX >> 8);
  if (uVar12 < 0x6214) {
    if (uVar12 == 0x6213) {
      thunk_FUN_005e4300((int *)((int)local_18 + 0x65f),0x24bc,4,1,*(short *)(param_1 + 0x14));
      FUN_006b35d0(DAT_008075a8,*(uint *)((int)this_00 + 0x2a9));
      goto switchD_005e45f7_caseD_1;
    }
    if (uVar12 < 0x6201) {
      if (uVar12 == 0x6200) {
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          thunk_FUN_005b66e0(this_00);
          *(undefined4 *)((int)this_00 + 0x45) = 0x200;
          *(undefined4 *)((int)this_00 + 0x49) = 0;
          *(undefined4 *)((int)this_00 + 0x4d) = 0x6102;
        }
        else {
          *(undefined4 *)((int)this_00 + 0x4d) = 0x7102;
          *(undefined4 *)((int)this_00 + 0x49) = 1;
          FUN_006e6020(this_00,(undefined4 *)((int)this_00 + 0x3d));
        }
        goto switchD_005e45f7_caseD_1;
      }
      switch(uVar12) {
      case 0:
        thunk_FUN_005e0ac0();
        break;
      case 2:
        thunk_FUN_005dfa30(local_18,*(char *)(*(int *)(param_1 + 0x14) + 0x14),
                           *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x18));
        break;
      case 3:
        thunk_FUN_005e0470();
        break;
      case 5:
        thunk_FUN_005e09e0();
        break;
      case 0x62:
        if (DAT_0080fb6e == 0) {
          if (*(char *)((int)local_18 + 0x6d) == '\x01') {
            thunk_FUN_005b66e0(local_18);
            uVar12 = 0xffffffff;
            pcVar15 = &DAT_0080ed16;
            do {
              pcVar16 = pcVar15;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar16 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar16;
            } while (cVar1 != '\0');
            uVar12 = ~uVar12;
            pcVar15 = pcVar16 + -uVar12;
            pcVar16 = (char *)&DAT_0080ee1a;
            for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar16 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar16 = pcVar16 + 1;
            }
            *(undefined4 *)((int)this_00 + 0x4d) = 0x60ff;
            *(undefined4 *)((int)this_00 + 0x49) = 1;
          }
        }
        else {
          *(undefined4 *)((int)local_18 + 0x4d) = 0x7102;
          *(undefined4 *)((int)local_18 + 0x49) = 1;
          FUN_006e6020(local_18,(undefined4 *)((int)local_18 + 0x3d));
        }
        break;
      case 100:
        iVar6 = 1;
        if (*(char *)((int)local_18 + 0x6d) != '\x01') {
          *(undefined1 *)((int)local_18 + 0x6d) = 5;
          thunk_FUN_005e1330();
          iVar18 = 0x1f;
          do {
            thunk_FUN_00568bc0(&DAT_00807658,iVar6);
            iVar6 = iVar6 + 1;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
          break;
        }
        if (DAT_0080fb6e != 0) {
          *(undefined4 *)((int)local_18 + 0x4d) = 0x7102;
          *(undefined4 *)((int)local_18 + 0x49) = 1;
          FUN_006e6020(local_18,(undefined4 *)((int)local_18 + 0x3d));
          break;
        }
        thunk_FUN_005b66e0(local_18);
        *(undefined4 *)((int)this_00 + 0x45) = 0x200;
        *(undefined4 *)((int)this_00 + 0x49) = 0;
        *(uint *)((int)this_00 + 0x4d) =
             (-(uint)(*(char *)((int)this_00 + 0x6f) != '\x02') & 0x1f) + 0x6103;
        bVar4 = *(byte *)((int)this_00 + 0x6f);
        if (bVar4 == 2) {
          *(undefined4 *)((int)this_00 + 0x51) = 1;
          break;
        }
        goto LAB_005e470e;
      }
    }
    else {
      switch(uVar12) {
      case 0x6201:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e != 0) {
          *(undefined4 *)((int)this_00 + 0x4d) = 0x7102;
          *(undefined4 *)((int)this_00 + 0x49) = 1;
          FUN_006e6020(this_00,(undefined4 *)((int)this_00 + 0x3d));
          break;
        }
        thunk_FUN_005b66e0(this_00);
        *(undefined4 *)((int)this_00 + 0x45) = 0x200;
        *(undefined4 *)((int)this_00 + 0x49) = 0;
        *(uint *)((int)this_00 + 0x4d) =
             (-(uint)(*(char *)((int)this_00 + 0x6f) != '\x02') & 0x1f) + 0x6103;
        bVar4 = *(byte *)((int)this_00 + 0x6f);
        if (bVar4 == 2) {
          *(undefined4 *)((int)this_00 + 0x51) = 1;
          break;
        }
LAB_005e470e:
        *(uint *)((int)this_00 + 0x51) = (uint)bVar4;
        break;
      case 0x6202:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          *(undefined4 *)((int)this_00 + 0x49) = 1;
          if (*(char *)((int)this_00 + 0x6e) == '\x01') {
            *(undefined4 *)((int)this_00 + 0x4d) = 0x6108;
            thunk_FUN_005b66e0(this_00);
          }
          else {
            uVar12 = 0xffffffff;
            pcVar15 = &DAT_0080ed16;
            do {
              pcVar16 = pcVar15;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar16 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar16;
            } while (cVar1 != '\0');
            uVar12 = ~uVar12;
            pcVar15 = pcVar16 + -uVar12;
            pcVar16 = (char *)&DAT_0080ee1a;
            for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar16 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar16 = pcVar16 + 1;
            }
            *(undefined4 *)((int)this_00 + 0x4d) = 0x60ff;
            thunk_FUN_005b66e0(this_00);
          }
        }
        else {
          *(undefined4 *)((int)this_00 + 0x4d) = 0x7102;
          *(undefined4 *)((int)this_00 + 0x49) = 1;
          FUN_006e6020(this_00,(undefined4 *)((int)this_00 + 0x3d));
        }
        break;
      case 0x6203:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        *(undefined4 *)((int)this_00 + 0x7c) = 0;
        *(undefined4 *)((int)this_00 + 0x61) = *(undefined4 *)((int)this_00 + 0x69);
        thunk_FUN_0055dbf0(DAT_0080759c,1,0);
        iVar6 = *(int *)((int)this_00 + 0x64f);
        if (iVar6 != 0) {
          uVar12 = 0;
          if (*(int *)(iVar6 + 0xc) != 0) {
            if (*(int *)(iVar6 + 0xc) == 0) {
              puVar9 = (uint *)0x0;
              goto LAB_005e48f3;
            }
            do {
              puVar9 = (uint *)(*(int *)(iVar6 + 8) * uVar12 + *(int *)(iVar6 + 0x1c));
LAB_005e48f3:
              thunk_FUN_005e10a0(puVar9);
              iVar6 = *(int *)((int)this_00 + 0x64f);
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(iVar6 + 0xc));
          }
        }
        iVar6 = *(int *)((int)this_00 + 0x647);
        if (iVar6 != 0) {
          uVar12 = 0;
          if (*(int *)(iVar6 + 0xc) != 0) {
            if (*(int *)(iVar6 + 0xc) == 0) {
              puVar9 = (uint *)0x0;
              goto LAB_005e492f;
            }
            do {
              puVar9 = (uint *)(*(int *)(iVar6 + 8) * uVar12 + *(int *)(iVar6 + 0x1c));
LAB_005e492f:
              thunk_FUN_005e10a0(puVar9);
              iVar6 = *(int *)((int)this_00 + 0x647);
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(iVar6 + 0xc));
          }
        }
        iVar6 = *(int *)((int)this_00 + 0x64b);
        if (iVar6 != 0) {
          uVar12 = 0;
          if (*(int *)(iVar6 + 0xc) != 0) {
            if (*(int *)(iVar6 + 0xc) == 0) {
              iVar6 = 0;
              goto LAB_005e496b;
            }
            do {
              iVar6 = *(int *)(iVar6 + 8) * uVar12 + *(int *)(iVar6 + 0x1c);
LAB_005e496b:
              FUN_00715ab0();
              if (*(int *)(iVar6 + 0x9a) != 0) {
                FUN_006ab060((undefined4 *)(iVar6 + 0x9a));
              }
              iVar6 = *(int *)((int)this_00 + 0x64b);
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(iVar6 + 0xc));
          }
        }
        if (*(uint *)((int)this_00 + 0x2cd) != 0) {
          FUN_006e56b0(*(void **)((int)this_00 + 0xc),*(uint *)((int)this_00 + 0x2cd));
          *(undefined4 *)((int)this_00 + 0x2cd) = 0;
        }
        FUN_006b3af0(DAT_008075a8,*(uint *)((int)this_00 + 0x484));
        if (*(uint *)((int)this_00 + 0x2d5) != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)this_00 + 0x319),*(uint *)((int)this_00 + 0x2d5));
        }
        if (*(uint *)((int)this_00 + 0x366) != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)this_00 + 0x3aa),*(uint *)((int)this_00 + 0x366));
        }
        if (*(uint *)((int)this_00 + 0x3f7) != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)this_00 + 0x43b),*(uint *)((int)this_00 + 0x3f7));
        }
        puVar9 = (uint *)((int)this_00 + 0x2bd);
        iVar6 = 4;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar9);
          puVar9 = puVar9 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (*(uint *)((int)this_00 + 0x2b9) != 0) {
          FUN_006e56b0(*(void **)((int)this_00 + 0xc),*(uint *)((int)this_00 + 0x2b9));
          *(undefined4 *)((int)this_00 + 0x2b9) = 0;
        }
        puVar9 = (uint *)((int)this_00 + 0x291);
        iVar6 = 5;
        do {
          FUN_006b3af0(DAT_008075a8,puVar9[5]);
          if (*puVar9 != 0) {
            FUN_006e56b0(*(void **)((int)this_00 + 0xc),*puVar9);
            *puVar9 = 0;
          }
          puVar9 = puVar9 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        thunk_FUN_005e09e0();
        *(undefined1 *)((int)this_00 + 0x6d) = 3;
        FUN_006afe40((int *)((int)this_00 + 0x74),*(uint **)((int)this_00 + 0x78));
        thunk_FUN_005e1330();
        thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)((int)this_00 + 0x5d),10,2);
        break;
      case 0x6204:
        if (*(char *)((int)local_18 + 0x6d) != '\x01') {
          *(undefined1 *)((int)local_18 + 0x6d) = 5;
          thunk_FUN_005e1330();
          iVar6 = 1;
          iVar18 = 0x1f;
          do {
            thunk_FUN_00568bc0(&DAT_00807658,iVar6);
            iVar6 = iVar6 + 1;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        break;
      case 0x6205:
        pcVar15 = *(char **)(param_1 + 0x14);
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        DAT_00807340 = *pcVar15 + -1;
        DAT_00807341 = DAT_00807340 == '\x03';
        break;
      case 0x6212:
        thunk_FUN_005e4300((int *)((int)local_18 + 0x653),0x26ac,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,*(uint *)((int)this_00 + 0x2a5));
      }
    }
    goto switchD_005e45f7_caseD_1;
  }
  uVar13 = (undefined3)((uint)extraout_ECX >> 8);
  if (uVar12 < 0x6335) {
    if (uVar12 == 0x6334) {
      thunk_FUN_005b6560((int)local_18 + 0x362,param_1,
                         CONCAT31(uVar14,*(char *)((int)local_18 + 0x6ca) == '\x01'));
    }
    else if (uVar12 < 0x6218) {
      if (uVar12 == 0x6217) {
        local_c = *(int **)(param_1 + 0x14);
        local_24 = (undefined4 *)0x1f52;
        local_1c = (undefined4 *)((int)local_18 + *local_c * 0xc + 0x683);
        puVar2 = (undefined4 *)*local_1c;
        local_8 = puVar2[2];
        local_20 = CONCAT31(local_20._1_3_,
                            (-(*(char *)((int)local_1c + 10) != '\x01') & 0xecU) + 0x2c);
        if (local_c[1] == 3) {
          local_14 = (uint *)CONCAT31(local_14._1_3_,
                                      (-(*(char *)(local_1c + 2) != '\x01') & 0xfeU) + 3);
        }
        else {
          local_14 = (uint *)(CONCAT31(local_14._1_3_,(*(char *)(local_1c + 2) != '\x01') + -1) &
                             0xffffff02);
        }
        local_10 = puVar2[5];
        if (local_10 == 0) {
          local_10 = ((uint)*(ushort *)((int)puVar2 + 0xe) * puVar2[1] + 0x1f >> 3 & 0x1ffffffc) *
                     local_8;
        }
        puVar7 = (undefined4 *)FUN_006b4fa0((int)puVar2);
        for (uVar12 = local_10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar7 = 0xffffffff;
          puVar7 = puVar7 + 1;
        }
        for (uVar12 = local_10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined1 *)puVar7 = 0xff;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FUN_006c7610((int)puVar2,0,0,0,0x16,local_8,2,0);
        if ((local_c[1] == 1) || ((local_c[1] == 3 && (local_c[2] != 0)))) {
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x81),
                                        (uint)(*(char *)((int)local_1c + 0xb) == '\x01'));
          thunk_FUN_00540760(puVar2,2,(int)(local_8 - 0x10) / 2,'\x06',pbVar8);
        }
        FUN_006c7570((int)puVar2,0,0,0,(undefined4 *)0x16,local_8,2,(byte)local_20);
        iVar6 = *local_c;
        if (iVar6 == 1) {
          puVar7 = (undefined4 *)0x1f47;
        }
        else if (iVar6 == 2) {
          puVar7 = (undefined4 *)0x1f48;
        }
        else {
          puVar7 = local_24;
          if (iVar6 == 3) {
            puVar7 = (undefined4 *)0x1f49;
          }
        }
        FUN_00710a90((int)puVar2,0,0x1b,0,puVar2[1] + -0x1b,local_8);
        uVar12 = (uint)local_14 & 0xff;
        iVar18 = -1;
        iVar6 = 0;
        puVar9 = (uint *)FUN_006b0140((UINT)puVar7,DAT_00807618);
        FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
        FUN_006b35d0(DAT_008075a8,*(uint *)((int)this_00 + *local_c * 4 + 0x2b9));
      }
      else if (uVar12 == 0x6214) {
        if (*(char *)((int)local_18 + 0x6e) == '\0') {
          UVar11 = 0x2343;
        }
        else {
          UVar11 = (-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c;
        }
        thunk_FUN_005e4300((int *)((int)local_18 + 0x66b),UVar11,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,*(uint *)((int)this_00 + 0x2ad));
      }
      else if (uVar12 == 0x6215) {
        thunk_FUN_005e4300((int *)((int)local_18 + 0x677),0x2358,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,*(uint *)((int)this_00 + 0x2b1));
      }
      else if (uVar12 == 0x6216) {
        thunk_FUN_005e4300((int *)((int)local_18 + 0x683),0x235e,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,*(uint *)((int)this_00 + 0x2b5));
      }
    }
    else if (uVar12 == 0x6332) {
      if (((-1 < *(int *)((int)local_18 + 0x484)) && (param_1 != 0)) &&
         (local_8 = *(uint *)(param_1 + 0x1c), local_8 != 0)) {
        iVar6 = *(int *)((int)local_18 + 0x8d);
        if (*(int *)(iVar6 + 0xa0) != 0) {
          FUN_00710790(iVar6);
        }
        local_20 = *(int *)(iVar6 + 0x8a);
        iVar6 = *(int *)((int)this_00 + 0x6bf);
        if (iVar6 != 0) {
          local_14 = *(uint **)(iVar6 + 0x14);
          local_24 = *(undefined4 **)(iVar6 + 4);
          local_10 = *(uint *)(iVar6 + 8);
          if (local_14 == (uint *)0x0) {
            local_14 = (uint *)(((uint)*(ushort *)(iVar6 + 0xe) * (int)local_24 + 0x1f >> 3 &
                                0x1ffffffc) * local_10);
          }
          puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
          puVar2 = local_24;
          for (uVar12 = (uint)local_14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar7 = 0xffffffff;
            puVar7 = puVar7 + 1;
          }
          for (uVar12 = (uint)local_14 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar7 = 0xff;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          FUN_006c7610(iVar6,0,0,0,(uint)local_24,local_10,2,0);
          FUN_006c7570(iVar6,0,0,0,puVar2,local_10,2,
                       (-(*(char *)((int)this_00 + 0x6c9) != '\x01') & 0xecU) + 0x2c);
          uVar10 = (uint)*(ushort *)(param_1 + 0x16);
          uVar12 = uVar10;
          if ((int)uVar10 < (int)(uVar10 + *(int *)(local_8 + 0x1e0))) {
            do {
              if ((int)uVar12 < *(int *)(*(int *)(DAT_0081176c + 0x548) + 8)) {
                local_14 = *(uint **)(*(int *)(*(int *)(DAT_0081176c + 0x548) + 0x14) + uVar12 * 4);
              }
              else {
                local_14 = (uint *)0x0;
              }
              if (local_14 != (uint *)0x0) {
                FUN_00710a90(iVar6,0,0xf,(uVar12 - uVar10) * local_20 + 0xf,*(int *)(local_8 + 0x2c)
                             ,local_20);
                FUN_007119c0(local_14,0,-1,
                             (-(uint)(*(char *)((int)this_00 + 0x6c7) != '\x01') & 0xfffffffe) + 2);
              }
              uVar12 = uVar12 + 1;
              uVar10 = (uint)*(ushort *)(param_1 + 0x16);
            } while ((int)uVar12 < (int)(uVar10 + *(int *)(local_8 + 0x1e0)));
          }
          FUN_006b35d0(DAT_008075a8,*(uint *)((int)this_00 + 0x484));
        }
      }
    }
    else if (uVar12 == 0x6333) {
      thunk_FUN_005b6560((int)local_18 + 0x2d1,param_1,
                         CONCAT31(uVar13,*(char *)((int)local_18 + 0x6ca) == '\x01'));
    }
    goto switchD_005e45f7_caseD_1;
  }
  switch(uVar12) {
  case 0x6335:
    *(uint *)((int)local_18 + 0x413) =
         *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
    uVar12 = *(uint *)((int)local_18 + 0x3f7);
    if (uVar12 == 0xffffffff) break;
    uVar10 = *(uint *)((int)local_18 + 0x413);
    uVar19 = *(uint *)((int)local_18 + 0x40f);
    uVar17 = *(uint *)((int)local_18 + 0x3fb);
    puVar9 = *(uint **)((int)local_18 + 0x43b);
    goto LAB_005e5255;
  case 0x6336:
    if (((-1 < *(int *)((int)local_18 + 0x484)) && (param_1 != 0)) &&
       ((local_8 = *(uint *)(param_1 + 0x1c), local_8 != 0 &&
        (iVar6 = *(int *)((int)local_18 + 0x6cb), iVar6 != 0)))) {
      local_24 = *(undefined4 **)(iVar6 + 4);
      iVar18 = *(int *)((int)local_18 + 0x8d);
      local_10 = *(uint *)(iVar6 + 8);
      if (*(int *)(iVar18 + 0xa0) != 0) {
        FUN_00710790(iVar18);
      }
      local_14 = *(uint **)(iVar6 + 0x14);
      local_20 = *(int *)(iVar18 + 0x8a);
      if (local_14 == (uint *)0x0) {
        local_14 = (uint *)(((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                            0x1ffffffc) * *(int *)(iVar6 + 8));
      }
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      puVar2 = local_24;
      for (uVar12 = (uint)local_14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      for (uVar12 = (uint)local_14 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar7 = 0xff;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_006c7610(iVar6,0,0,0,(uint)local_24,local_10,2,0);
      FUN_006c7570(iVar6,0,0,0,puVar2,local_10,2,
                   (-(*(char *)((int)this_00 + 0x6d5) != '\x01') & 0xecU) + 0x2c);
      uVar10 = (uint)*(ushort *)(param_1 + 0x16);
      uVar12 = uVar10;
      if ((int)uVar10 < (int)(uVar10 + *(int *)(local_8 + 0x1e0))) {
        do {
          if ((int)uVar12 < *(int *)(*(int *)((int)this_00 + 0x643) + 8)) {
            local_14 = *(uint **)(*(int *)(*(int *)((int)this_00 + 0x643) + 0x14) + uVar12 * 4);
          }
          else {
            local_14 = (uint *)0x0;
          }
          if (local_14 != (uint *)0x0) {
            FUN_00710a90(iVar6,0,0xf,(uVar12 - uVar10) * local_20 + 0xf,*(int *)(local_8 + 0x2c),
                         local_20);
            FUN_007119c0(local_14,0,-1,
                         (-(uint)(*(char *)((int)this_00 + 0x6d3) != '\x01') & 0xfffffffe) + 2);
          }
          uVar12 = uVar12 + 1;
          uVar10 = (uint)*(ushort *)(param_1 + 0x16);
        } while ((int)uVar12 < (int)(uVar10 + *(int *)(local_8 + 0x1e0)));
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)((int)this_00 + 0x63f));
    }
    break;
  case 0x6337:
    thunk_FUN_005b6560((int)local_18 + 0x48c,param_1,
                       CONCAT31(uVar14,*(char *)((int)local_18 + 0x6d6) == '\x01'));
    break;
  case 0x6338:
    thunk_FUN_005b6560((int)local_18 + 0x51d,param_1,
                       CONCAT31(uVar13,*(char *)((int)local_18 + 0x6d6) == '\x01'));
    break;
  case 0x6339:
    *(uint *)((int)local_18 + 0x5ce) =
         *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
    uVar12 = *(uint *)((int)local_18 + 0x5b2);
    if (uVar12 == 0xffffffff) break;
    uVar10 = *(uint *)((int)local_18 + 0x5ce);
    uVar19 = *(uint *)((int)local_18 + 0x5ca);
    uVar17 = *(uint *)((int)local_18 + 0x5b6);
    puVar9 = *(uint **)((int)local_18 + 0x5f6);
LAB_005e5255:
    FUN_006b3730(puVar9,uVar12,uVar17,uVar19,uVar10);
  }
switchD_005e45f7_caseD_1:
  DAT_00858df8 = (undefined4 *)local_68;
  uVar5 = FUN_006e5fd0();
  return uVar5;
}

