
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0051ddd0(int param_1)

{
  char cVar1;
  void *pvVar2;
  UINT *pUVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  char *pcVar8;
  uint *puVar9;
  LPSTR pCVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  undefined4 unaff_ESI;
  byte bVar16;
  void *unaff_EDI;
  char *pcVar17;
  bool bVar18;
  code *pcVar19;
  UINT UVar20;
  undefined4 local_84;
  undefined4 local_80 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  uint *local_1c;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  UINT *local_8;
  
  local_84 = DAT_00858df8;
  DAT_00858df8 = &local_84;
  iVar4 = __setjmp3(local_80,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_84;
    iVar11 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0xac7,0,iVar4,&DAT_007a4ccc);
    if (iVar11 != 0) {
      pcVar19 = (code *)swi(3);
      uVar12 = (*pcVar19)();
      return uVar12;
    }
    FUN_006a5e40(iVar4,0,0x7c383c,0xac7);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,local_20 + 0x13);
    local_20[0xf] = local_20[0x13];
    local_20[0x11] = local_20[0x14] - local_20[0x12];
    local_20[0x5d] = local_20[0x12] + local_20[0x14];
  }
  thunk_FUN_005384a0(local_20,param_1);
  uVar13 = *(uint *)(param_1 + 0x10);
  if (uVar13 < 0xc001) {
    if (uVar13 == 0xc000) {
      UVar20 = 0x274e;
      pCVar10 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      thunk_FUN_0053daf0(local_20,param_1,pCVar10,UVar20);
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    }
    if (uVar13 < 0x8161) {
      if (uVar13 == 0x8160) {
        iVar4 = local_20[0x79];
        if (*(int *)(iVar4 + 0xa0) != 0) {
          FUN_00710790(iVar4);
        }
        *(int *)(param_1 + 0x18) = *(int *)(iVar4 + 0x8a) + 1;
        DAT_00858df8 = (undefined4 *)local_84;
        return 0;
      }
      if (0x60 < uVar13) {
        if (uVar13 == 0x61) {
          local_c = (uint)*(ushort *)(param_1 + 0x18);
          local_8 = (UINT *)(uint)*(ushort *)(param_1 + 0x1a);
          if (*(short *)((int)local_20 + 0x172) != 1) {
            DAT_00858df8 = (undefined4 *)local_84;
            return 0;
          }
          switch(*(undefined1 *)((int)local_20 + 0x1a1)) {
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 0xb:
          case 0xc:
            local_1c = (uint *)0x0;
            local_14 = *(undefined4 **)(*(int *)((int)local_20 + 0x1d7) + 0xc);
            if (local_14 == (undefined4 *)0x0) {
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            }
            local_18 = (uint)*(ushort *)((int)local_20 + 0x1af) -
                       (uint)*(ushort *)((int)local_20 + 0x1b1) * *(int *)((int)local_20 + 0x1c3);
            while( true ) {
              if (local_1c < local_14) {
                piVar5 = (int *)(*(int *)(*(int *)((int)local_20 + 0x1d7) + 8) * (int)local_1c +
                                *(int *)(*(int *)((int)local_20 + 0x1d7) + 0x1c));
              }
              else {
                piVar5 = (int *)0x0;
              }
              local_24 = piVar5[3];
              local_30 = local_20[0xf] + 0x21 + *piVar5;
              local_2c = piVar5[1] + local_18 + 0x16 + local_20[0x11];
              local_28 = piVar5[2];
              if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                  ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              if ((bVar18) && ((int)local_8 < local_20[0x11] + 300)) break;
              local_1c = (uint *)((int)local_1c + 1);
              if (local_14 <= local_1c) {
                DAT_00858df8 = (undefined4 *)local_84;
                return 0;
              }
            }
            thunk_FUN_005149b0(*(int *)((int)piVar5 + 0x11),*(int *)((int)piVar5 + 0x15));
            uVar13 = *(uint *)((int)piVar5 + 0x15);
            pvVar2 = *(void **)((int)piVar5 + 0x11);
            switch((char)piVar5[4]) {
            case '\x01':
              thunk_FUN_00517a50(local_20,(int)pvVar2,uVar13,'\0');
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            case '\x02':
              thunk_FUN_0051a100((int)pvVar2,uVar13,'\0');
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            case '\x03':
              thunk_FUN_00518c20((int)pvVar2,'\0');
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            case '\x04':
              thunk_FUN_0051b5a0(local_20,(int)pvVar2,uVar13,'\0');
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            case '\x05':
              thunk_FUN_00516a40(local_20,(uint)pvVar2,(byte)uVar13,'\0');
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            case '\x06':
              thunk_FUN_00516480((uint)pvVar2,'\0');
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            case '\a':
              thunk_FUN_00516300();
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            case '\b':
              thunk_FUN_0051d540(pvVar2,uVar13,'\0');
              break;
            case '\n':
              thunk_FUN_00513a40();
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            case '\v':
              thunk_FUN_0051c980(local_20,(int)pvVar2,uVar13,'\0');
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            case '\f':
              thunk_FUN_0051d360((int)pvVar2,'\0');
              thunk_FUN_005134b0((int)local_20);
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            }
            thunk_FUN_005134b0((int)local_20);
            DAT_00858df8 = (undefined4 *)local_84;
            return 0;
          case 6:
            goto switchD_0051e4d9_caseD_6;
          default:
            DAT_00858df8 = (undefined4 *)local_84;
            return 0;
          case 8:
            if (*(int *)(*(int *)((int)local_20 + 0x1d7) + 0xc) == 0) {
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = *(int **)(*(int *)((int)local_20 + 0x1d7) + 0x1c);
            }
            local_30 = local_20[0xf] + 0x21 + *piVar5;
            local_2c = ((uint)*(ushort *)((int)local_20 + 0x1af) -
                       (uint)*(ushort *)((int)local_20 + 0x1b1) * *(int *)((int)local_20 + 0x1c3)) +
                       piVar5[1] + 0x16 + local_20[0x11];
            local_28 = piVar5[2];
            local_24 = piVar5[3];
            if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
              bVar18 = false;
            }
            else {
              bVar18 = true;
            }
            if (!bVar18) {
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            }
            if (local_20[0x11] + 300 <= (int)local_8) {
              DAT_00858df8 = (undefined4 *)local_84;
              return 0;
            }
            DAT_0080734d = DAT_0080734d == '\0';
            thunk_FUN_00515180(local_20,'\b');
            DAT_00858df8 = (undefined4 *)local_84;
            return 0;
          }
        }
        if (uVar13 == 0x6200) {
          *(undefined4 *)((int)local_20 + 0x1c3) = *(undefined4 *)(param_1 + 0x14);
          iVar4 = *(ushort *)((int)local_20 + 0x1af) + 0x16;
          FUN_006b55f0((undefined4 *)local_20[0x1a],0,0x21,iVar4,local_20[0x77],0,0x21,iVar4,0x19c,
                       0x117 - (uint)*(ushort *)((int)local_20 + 0x1af));
          FUN_006b5110(local_20[0x1a],0,0x21,*(ushort *)((int)local_20 + 0x1af) + 0x16,
                       local_20[0x86],0,0,
                       (uint)*(ushort *)((int)local_20 + 0x1b1) * *(int *)((int)local_20 + 0x1c3),
                       0x19c,0x117 - (uint)*(ushort *)((int)local_20 + 0x1af),0xff);
          FUN_006b3640(DAT_008075a8,local_20[0x18],0xffffffff,local_20[0xf],local_20[0x11]);
          DAT_00858df8 = (undefined4 *)local_84;
          return 0;
        }
        if (uVar13 != 0x6332) {
          DAT_00858df8 = (undefined4 *)local_84;
          return 0;
        }
        local_10 = *(undefined4 **)(param_1 + 0x1c);
        if (local_10 == (undefined4 *)0x0) {
          DAT_00858df8 = (undefined4 *)local_84;
          return 0;
        }
        if (*(int *)((int)local_20 + 0x1d3) == 0) {
          DAT_00858df8 = (undefined4 *)local_84;
          return 0;
        }
        iVar4 = local_20[0x79];
        if (*(int *)(iVar4 + 0xa0) != 0) {
          FUN_00710790(iVar4);
        }
        local_18 = *(int *)(iVar4 + 0x8a);
        if (DAT_0080874e == '\x03') {
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,5);
        }
        else {
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,(-(DAT_0080874e != '\x01') & 6U) + 1);
        }
        FUN_006b55f0((undefined4 *)local_20[0x1a],0,0x21,0x16,local_20[0x77],0,0x21,0x16,0x19c,0x118
                    );
        iVar4 = local_20[0x86];
        local_1c = *(uint **)(iVar4 + 0x14);
        if (local_1c == (uint *)0x0) {
          local_1c = (uint *)(((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 &
                              0x1ffffffc) * *(int *)(iVar4 + 8));
        }
        puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
        for (uVar13 = (uint)local_1c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar6 = 0xffffffff;
          puVar6 = puVar6 + 1;
        }
        for (uVar13 = (uint)local_1c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar6 = 0xff;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x16);
        uVar13 = uVar14;
        if ((int)uVar14 < (int)(uVar14 + *(int *)((int)local_10 + 0x1e0))) {
          do {
            if ((int)uVar13 < *(int *)(*(int *)((int)local_20 + 0x1d3) + 8)) {
              local_1c = *(uint **)(*(int *)(*(int *)((int)local_20 + 0x1d3) + 0x14) + uVar13 * 4);
            }
            else {
              local_1c = (uint *)0x0;
            }
            if (local_1c != (uint *)0x0) {
              FUN_00710a90(local_20[0x86],0,0,(uVar13 - uVar14) * local_18,
                           *(int *)(local_20[0x86] + 4),local_18);
              FUN_007119c0(local_1c,0,-1,(uint)local_14 & 0xff);
            }
            uVar14 = (uint)*(ushort *)(param_1 + 0x16);
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)(uVar14 + *(int *)((int)local_10 + 0x1e0)));
        }
        FUN_006b5110(local_20[0x1a],0,0x21,0x16,local_20[0x86],0,0,0,0x19c,0x118,0xff);
        DAT_00858df8 = (undefined4 *)local_84;
        return 0;
      }
      if (uVar13 != 0x60) {
        if (uVar13 == 0) {
          if (*(short *)((int)local_20 + 0x172) == 3) {
            iVar4 = local_20[0x14];
            if (local_20[0x11] < iVar4) {
              local_20[0x11] = local_20[0x11] + 0x28;
            }
            if (iVar4 <= local_20[0x11]) {
              local_20[0x11] = iVar4;
              *(undefined2 *)((int)local_20 + 0x172) = 1;
              thunk_FUN_00511c70(local_20,1);
            }
            FUN_006b3640(DAT_008075a8,local_20[0x18],0xffffffff,local_20[0xf],local_20[0x11]);
            DAT_00858df8 = (undefined4 *)local_84;
            return 0;
          }
          if (*(short *)((int)local_20 + 0x172) != 4) {
            DAT_00858df8 = (undefined4 *)local_84;
            return 0;
          }
          iVar4 = local_20[0x14] - local_20[0x12];
          if (iVar4 < local_20[0x11]) {
            local_20[0x11] = local_20[0x11] + -0x28;
          }
          if (local_20[0x11] <= iVar4) {
            local_20[0x11] = iVar4;
            *(undefined2 *)((int)local_20 + 0x172) = 2;
          }
          FUN_006b3640(DAT_008075a8,local_20[0x18],0xffffffff,local_20[0xf],local_20[0x11]);
          DAT_00858df8 = (undefined4 *)local_84;
          return 0;
        }
        if (uVar13 == 2) {
          thunk_FUN_00510e30();
          DAT_00858df8 = (undefined4 *)local_84;
          return 0;
        }
        if (uVar13 != 3) {
          DAT_00858df8 = (undefined4 *)local_84;
          return 0;
        }
        thunk_FUN_00511760();
        DAT_00858df8 = (undefined4 *)local_84;
        return 0;
      }
      local_18 = (uint)*(ushort *)(param_1 + 0x18);
      local_10 = (undefined4 *)0x0;
      local_c = (uint)*(ushort *)(param_1 + 0x1a);
      *(undefined1 *)((int)local_20 + 0x1db) = 0;
      if (*(short *)((int)local_20 + 0x172) == 1) {
        switch(*(undefined1 *)((int)local_20 + 0x1a1)) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 0xb:
        case 0xc:
          local_8 = (undefined4 *)0x0;
          local_14 = *(undefined4 **)(*(int *)((int)local_20 + 0x1d7) + 0xc);
          if (local_14 != (undefined4 *)0x0) {
            do {
              if (local_8 < local_14) {
                piVar5 = (int *)(*(int *)(*(int *)((int)local_20 + 0x1d7) + 8) * (int)local_8 +
                                *(int *)(*(int *)((int)local_20 + 0x1d7) + 0x1c));
              }
              else {
                piVar5 = (int *)0x0;
              }
              local_40 = local_20[0xf] + 0x21 + *piVar5;
              local_3c = piVar5[1] +
                         ((uint)*(ushort *)((int)local_20 + 0x1af) -
                         (uint)*(ushort *)((int)local_20 + 0x1b1) * *(int *)((int)local_20 + 0x1c3))
                         + 0x16 + local_20[0x11];
              local_38 = piVar5[2];
              local_34 = piVar5[3];
              if (((((int)local_18 < local_40) || (local_38 + local_40 <= (int)local_18)) ||
                  ((int)local_c < local_3c)) || (local_34 + local_3c <= (int)local_c)) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              if ((bVar18) && ((int)local_c < local_20[0x11] + 300)) goto LAB_0051e1b2;
              local_8 = (UINT *)((int)local_8 + 1);
            } while (local_8 < local_14);
          }
          break;
        case 6:
          if (*(int *)((int)local_20 + 0x1a3) == 1) {
            local_8 = (UINT *)&DAT_007c2b58;
            local_14 = (undefined4 *)0x33;
          }
          else if (*(int *)((int)local_20 + 0x1a3) == 2) {
            local_8 = (UINT *)&DAT_007c2df0;
            local_14 = (undefined4 *)0x39;
          }
          else {
            local_8 = &DAT_007c30d8;
            local_14 = (undefined4 *)0x46;
          }
          uVar15 = 0;
          if ((ushort)local_14 != 0) {
            local_38 = 0x1a;
            local_34 = 0xe;
            local_1c = (uint *)(uint)*(ushort *)((int)local_20 + 0x1af);
            do {
              local_40 = *(int *)((int)local_8 + (uint)uVar15 * 0xd + 5) + 0x21 + local_20[0xf];
              local_3c = (*(int *)((int)local_8 + (uint)uVar15 * 0xd + 9) -
                         (uint)*(ushort *)((int)local_20 + 0x1b1) * *(int *)((int)local_20 + 0x1c3))
                         + (int)local_1c + 0x16 + local_20[0x11];
              if ((((int)local_18 < local_40) || (local_40 + 0x1a <= (int)local_18)) ||
                 (((int)local_c < local_3c || (local_3c + 0xe <= (int)local_c)))) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              if ((bVar18) && ((int)local_c < local_20[0x11] + 300)) {
                local_10 = (undefined4 *)
                           thunk_FUN_00528060(*(undefined *)((int)local_8 + (uint)uVar15 * 0xd),
                                              *(char *)((int)local_8 + (uint)uVar15 * 0xd + 4));
                if (local_10 != (undefined4 *)0x2711) goto LAB_0051e1b2;
                local_10 = (undefined4 *)0x0;
                break;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < (ushort)local_14);
          }
        }
      }
      goto switchD_0051dfcc_caseD_7;
    }
    if (0xbfff < uVar13) {
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    }
    if (uVar13 == 0xbfff) {
      (**(code **)(*local_20 + 0x18))(0);
      thunk_FUN_005252c0(0xae);
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    }
    switch(uVar13) {
    case 0x8161:
      cVar1 = *(char *)((int)local_20 + 0x1a1);
      if (cVar1 == '\0') {
        iVar4 = *(int *)((int)local_20 + 0x1b3);
      }
      else {
        if (cVar1 != '\n') {
          DAT_00858df8 = (undefined4 *)local_84;
          return 0;
        }
        iVar4 = *(int *)((int)local_20 + 0x1bb);
      }
      uVar13 = (uint)*(ushort *)(param_1 + 0x14);
      if (uVar13 < *(uint *)(iVar4 + 0xc)) {
        if (cVar1 == '\0') {
          local_8 = (UINT *)(*(int *)(*(int *)((int)local_20 + 0x1b3) + 8) * uVar13 +
                            *(int *)(*(int *)((int)local_20 + 0x1b3) + 0x1c));
        }
        else {
          local_8 = (UINT *)(*(int *)(*(int *)((int)local_20 + 0x1bb) + 8) * uVar13 +
                            *(int *)(*(int *)((int)local_20 + 0x1bb) + 0x1c));
        }
      }
      else {
        local_8 = (UINT *)0x0;
      }
      if (local_8 != (UINT *)0x0) {
        bVar18 = *(short *)(param_1 + 0x16) == 1;
        local_18 = *local_8;
        if (DAT_0080874e == '\x03') {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,!bVar18);
        }
        else if (DAT_0080874e == '\x01') {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,1);
        }
        else {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,bVar18 + '\a');
        }
        iVar4 = *(ushort *)(param_1 + 0x1a) + 0x16;
        FUN_006b55f0((undefined4 *)local_20[0x1a],0,0x21,iVar4,local_20[0x77],0,0x21,iVar4,0x19c,
                     *(int *)(local_20[0x7b] + 8));
        iVar4 = local_20[0x7b];
        uVar13 = *(uint *)(iVar4 + 0x14);
        if (uVar13 == 0) {
          uVar13 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar4 + 8);
        }
        puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar6 = 0xffffffff;
          puVar6 = puVar6 + 1;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar6 = 0xff;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        FUN_00710a90(local_20[0x7b],0,0,0,0,0);
        pcVar8 = (char *)FUN_006b0140(local_18,DAT_00807618);
        uVar13 = 0xffffffff;
        do {
          pcVar17 = pcVar8;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar17 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar17;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        pcVar8 = pcVar17 + -uVar13;
        pcVar17 = (char *)&DAT_0080f33a;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar17 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar17 = pcVar17 + 1;
        }
        puVar9 = FUN_0072e560(&DAT_0080f33a,'\n');
        pUVar3 = local_8;
        while (local_8 = pUVar3, puVar9 != (uint *)0x0) {
          *(undefined1 *)puVar9 = 0x20;
          puVar9 = FUN_0072e560(puVar9,'\n');
          pUVar3 = local_8;
        }
        FUN_007119c0(&DAT_0080f33a,(uint)*(byte *)((int)pUVar3 + 0x11) * 0x14 + 10,-1,
                     (uint)local_1c & 0xff);
        if ((*(char *)((int)local_20 + 0x1a1) == '\0') && (*(byte *)((int)pUVar3 + 0x11) != 0)) {
          if (DAT_0080874e == '\x03') {
            local_1c = (uint *)CONCAT31(local_1c._1_3_,0x29);
          }
          else {
            local_1c = (uint *)CONCAT31(local_1c._1_3_,(-(DAT_0080874e != '\x01') & 0x43U) + 0x10);
          }
          iVar11 = (uint)*(byte *)((int)pUVar3 + 0x11) * 0x14;
          local_10 = (undefined4 *)((uint)local_1c & 0xff);
          iVar4 = *(int *)(local_20[0x7b] + 8) / 2;
          FUN_006b5b10(local_20[0x7b],0,iVar11,iVar4,iVar11 + 8,iVar4,(byte)local_1c,0xd);
          if (*(char *)((int)local_8 + 0x13) == '\0') {
            iVar4 = *(int *)(local_20[0x7b] + 8);
          }
          iVar11 = (uint)*(byte *)((int)local_8 + 0x11) * 0x14;
          FUN_006b5b10(local_20[0x7b],0,iVar11,0,iVar11,iVar4,(byte)local_10,0xd);
          local_14 = (undefined4 *)0x0;
          local_c = (uint)*(ushort *)(param_1 + 0x14);
          local_18 = *(uint *)(*(int *)((int)local_20 + 0x1b3) + 0xc);
          local_1c = (uint *)local_c;
joined_r0x0051eec7:
          local_1c = (uint *)((int)local_1c + 1);
          if (local_1c < local_18) {
            if (local_1c < local_18) {
              iVar4 = *(int *)(*(int *)((int)local_20 + 0x1b3) + 8) * (int)local_1c +
                      *(int *)(*(int *)((int)local_20 + 0x1b3) + 0x1c);
            }
            else {
              iVar4 = 0;
            }
            if ((iVar4 == 0) || (bVar16 = *(byte *)(iVar4 + 0x11), bVar16 == 0)) goto LAB_0051ef61;
            uVar13 = local_c;
            if (bVar16 < *(byte *)((int)local_8 + 0x11)) {
              do {
                uVar13 = uVar13 - 1;
                if ((int)uVar13 < 1) goto joined_r0x0051eec7;
                if (uVar13 < local_18) {
                  iVar4 = *(int *)(*(int *)((int)local_20 + 0x1b3) + 8) * uVar13 +
                          *(int *)(*(int *)((int)local_20 + 0x1b3) + 0x1c);
                }
                else {
                  iVar4 = 0;
                }
                if ((iVar4 == 0) || (*(byte *)(iVar4 + 0x11) == 0)) goto joined_r0x0051eec7;
              } while (*(byte *)(iVar4 + 0x11) != bVar16);
              if (*(char *)(iVar4 + 0x13) == '\0') {
                local_14 = (undefined4 *)((uint)local_14 | 1 << (bVar16 & 0x1f));
              }
            }
            goto joined_r0x0051eec7;
          }
LAB_0051ef61:
          bVar16 = 0;
          iVar4 = 0;
          do {
            if (((uint)local_14 & 1 << (bVar16 & 0x1f)) != 0) {
              FUN_006b5b10(local_20[0x7b],0,iVar4,0,iVar4,*(int *)(local_20[0x7b] + 8),
                           (byte)local_10,0xd);
            }
            iVar4 = iVar4 + 0x14;
            bVar16 = bVar16 + 1;
          } while (iVar4 < 0x280);
        }
        FUN_006b5440(local_20[0x1a],0,0x21,*(ushort *)(param_1 + 0x1a) + 0x16,local_20[0x7b],0,0xff)
        ;
      }
      FUN_006b3640(DAT_008075a8,local_20[0x18],0xffffffff,local_20[0xf],local_20[0x11]);
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    case 0x8162:
      cVar1 = *(char *)((int)local_20 + 0x1a1);
      if (cVar1 == '\0') {
        iVar4 = *(int *)((int)local_20 + 0x1b3);
      }
      else {
        if (cVar1 != '\n') {
          DAT_00858df8 = (undefined4 *)local_84;
          return 0;
        }
        iVar4 = *(int *)((int)local_20 + 0x1bb);
      }
      uVar13 = *(uint *)(param_1 + 0x14);
      if (uVar13 < *(uint *)(iVar4 + 0xc)) {
        if (cVar1 == '\0') {
          local_1c = (uint *)(*(int *)(*(int *)((int)local_20 + 0x1b3) + 8) * uVar13 +
                             *(int *)(*(int *)((int)local_20 + 0x1b3) + 0x1c));
        }
        else {
          local_1c = (uint *)(*(int *)(*(int *)((int)local_20 + 0x1bb) + 8) * uVar13 +
                             *(int *)(*(int *)((int)local_20 + 0x1bb) + 0x1c));
        }
      }
      else {
        local_1c = (uint *)0x0;
      }
      if (local_1c == (uint *)0x0) {
        DAT_00858df8 = (undefined4 *)local_84;
        return 0;
      }
      bVar18 = false;
      uVar13 = *(uint *)((int)local_1c + 0xd);
      pvVar2 = *(void **)((int)local_1c + 9);
      switch((char)local_1c[2]) {
      default:
        goto switchD_0051ea9b_caseD_0;
      case '\x01':
        thunk_FUN_00517a50(local_20,(int)pvVar2,uVar13,'\0');
        break;
      case '\x02':
        thunk_FUN_0051a100((int)pvVar2,uVar13,'\0');
        break;
      case '\x03':
        thunk_FUN_00518c20((int)pvVar2,'\0');
        break;
      case '\x04':
        thunk_FUN_0051b5a0(local_20,(int)pvVar2,uVar13,'\0');
        break;
      case '\x05':
        thunk_FUN_00516a40(local_20,(uint)pvVar2,(byte)uVar13,'\0');
        break;
      case '\x06':
        thunk_FUN_00516480((uint)pvVar2,'\0');
        break;
      case '\a':
        thunk_FUN_00516300();
        break;
      case '\b':
        thunk_FUN_0051d540(pvVar2,uVar13,'\0');
        break;
      case '\n':
        thunk_FUN_00513a40();
        break;
      case '\v':
        thunk_FUN_0051c980(local_20,(int)pvVar2,uVar13,'\0');
        break;
      case '\f':
        thunk_FUN_0051d360((int)pvVar2,'\0');
      }
      bVar18 = true;
switchD_0051ea9b_caseD_0:
      if (bVar18) {
        thunk_FUN_005134b0((int)local_20);
        DAT_00858df8 = (undefined4 *)local_84;
        return 0;
      }
      thunk_FUN_00513030((int *)local_1c,*(int *)(param_1 + 0x14));
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    case 0x8163:
      if (*(char *)((int)local_20 + 0x1a1) != '\n') {
        *(undefined4 *)((int)local_20 + 0x1b7) = *(undefined4 *)(param_1 + 0x14);
        DAT_00858df8 = (undefined4 *)local_84;
        return 0;
      }
      *(undefined4 *)((int)local_20 + 0x1bf) = *(undefined4 *)(param_1 + 0x14);
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    case 0x8164:
      pcVar19 = thunk_FUN_00529fe0;
      pCVar10 = thunk_FUN_00571240(s_BUT_SLUP_007c3e40,0);
      bVar16 = 6;
      break;
    case 0x8165:
      pcVar19 = thunk_FUN_00529fe0;
      pCVar10 = thunk_FUN_00571240(s_BUT_SLDN_007c3e34,0);
      bVar16 = 6;
      break;
    case 0x8166:
      pbVar7 = (byte *)FUN_0070b3a0(local_20[0x88],0);
      thunk_FUN_00540760((undefined4 *)local_20[0x1a],0x1c3,0x2d,'\x06',pbVar7);
      pbVar7 = (byte *)FUN_0070b3a0(local_20[0x88],
                                    (*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) != 1) + 1);
      thunk_FUN_00540760((undefined4 *)local_20[0x1a],0x1c3,*(ushort *)(param_1 + 0x16) + 0x2d,
                         '\x06',pbVar7);
      FUN_006b3640(DAT_008075a8,local_20[0x18],0xffffffff,local_20[0xf],local_20[0x11]);
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    default:
      goto switchD_0051e4d9_caseD_7;
    }
  }
  else {
    switch(uVar13) {
    case 0xc09f:
      thunk_FUN_005135f0();
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    case 0xc0a0:
      thunk_FUN_00513810(local_20);
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    case 0xc0a1:
      thunk_FUN_00513a40();
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    case 0xc0a2:
      thunk_FUN_00513bc0();
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    case 0xc0a3:
      thunk_FUN_00513fa0();
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    case 0xc0a4:
      thunk_FUN_00514330();
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    case 0xc0a5:
      thunk_FUN_005145e0();
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    default:
      goto switchD_0051e4d9_caseD_7;
    case 0xc0af:
      pcVar8 = s_BUT_HLPHOME_007c3884;
      break;
    case 0xc0b0:
      pcVar8 = s_BUT_HLPBACK_007c3e24;
      break;
    case 0xc0b1:
      pcVar8 = s_BUT_HLPINDEX_007c3e14;
      break;
    case 0xc0b2:
      pcVar8 = s_BUT_HLPPREV_007c3e04;
      break;
    case 0xc0b3:
      pcVar8 = s_BUT_HLPNEXT_007c3df4;
      break;
    case 0xc0b4:
      pcVar8 = s_BUT_HLPBWD_007c3de4;
      break;
    case 0xc0b5:
      pcVar8 = s_BUT_HLPFWD_007c3dd4;
    }
    pcVar19 = thunk_FUN_00529f90;
    pCVar10 = thunk_FUN_00571240(pcVar8,0);
    bVar16 = 1;
  }
  thunk_FUN_0053d7a0(local_20,param_1,bVar16,pCVar10,pcVar19);
switchD_0051e4d9_caseD_7:
  DAT_00858df8 = (undefined4 *)local_84;
  return 0;
switchD_0051e4d9_caseD_6:
  if (*(int *)((int)local_20 + 0x1a3) == 1) {
    local_10 = (undefined4 *)&DAT_007c2b58;
    local_18 = 0x33;
  }
  else if (*(int *)((int)local_20 + 0x1a3) == 2) {
    local_10 = (undefined4 *)&DAT_007c2df0;
    local_18 = 0x39;
  }
  else {
    local_10 = &DAT_007c30d8;
    local_18 = 0x46;
  }
  uVar15 = 0;
  if ((ushort)local_18 == 0) {
    DAT_00858df8 = (undefined4 *)local_84;
    return 0;
  }
  local_28 = 0x1a;
  local_24 = 0xe;
  local_1c = (uint *)(uint)*(ushort *)((int)local_20 + 0x1af);
  while( true ) {
    local_30 = *(int *)((int)local_10 + (uint)uVar15 * 0xd + 5) + 0x21 + local_20[0xf];
    local_2c = (*(int *)((int)local_10 + (uint)uVar15 * 0xd + 9) -
               (uint)*(ushort *)((int)local_20 + 0x1b1) * *(int *)((int)local_20 + 0x1c3)) +
               (int)local_1c + 0x16 + local_20[0x11];
    if ((((int)local_c < local_30) || (local_30 + 0x1a <= (int)local_c)) ||
       (((int)local_8 < local_2c || (local_2c + 0xe <= (int)local_8)))) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if ((bVar18) && ((int)local_8 < local_20[0x11] + 300)) break;
    uVar15 = uVar15 + 1;
    if ((ushort)local_18 <= uVar15) {
      DAT_00858df8 = (undefined4 *)local_84;
      return 0;
    }
  }
  thunk_FUN_00516a40(local_20,*(uint *)((int)local_10 + (uint)uVar15 * 0xd),
                     *(byte *)((int)local_10 + (uint)uVar15 * 0xd + 4),'\0');
  thunk_FUN_005134b0((int)local_20);
  DAT_00858df8 = (undefined4 *)local_84;
  return 0;
LAB_0051e1b2:
  *(undefined1 *)((int)local_20 + 0x1db) = 0x46;
switchD_0051dfcc_caseD_7:
  iVar4 = local_20[0x5e];
  if ((undefined4 *)iVar4 == local_10) {
    DAT_00858df8 = (undefined4 *)local_84;
    return 0;
  }
  if (iVar4 != 0) {
    local_20[10] = 0x4202;
    *(undefined2 *)(local_20 + 0xb) = 0;
    *(undefined2 *)((int)local_20 + 0x2e) = 2;
    local_20[0xc] = iVar4;
    if (DAT_00802a30 != (undefined4 *)0x0) {
      (**(code **)*DAT_00802a30)(local_20 + 6);
    }
  }
  local_20[0x5e] = (int)local_10;
  if (local_10 == (undefined4 *)0x0) {
    DAT_00858df8 = (undefined4 *)local_84;
    return 0;
  }
  local_20[10] = 0x4201;
  *(undefined2 *)(local_20 + 0xb) = 0;
  *(undefined2 *)((int)local_20 + 0x2e) = 2;
  local_20[0xc] = (int)local_10;
  (**(code **)*DAT_00802a30)(local_20 + 6);
  DAT_00858df8 = (undefined4 *)local_84;
  return 0;
}

