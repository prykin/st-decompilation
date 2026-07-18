
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005b0ba0(void *this,int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int *this_00;
  undefined1 uVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  HANDLE pvVar10;
  undefined3 extraout_var;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  undefined4 unaff_ESI;
  byte *pbVar16;
  void *unaff_EDI;
  UINT UVar17;
  char *pcVar18;
  char *pcVar19;
  undefined4 *puVar20;
  byte *pbVar21;
  int iVar22;
  undefined4 uVar23;
  char local_6e0 [64];
  char local_6a0 [1044];
  byte local_28c [260];
  byte local_188 [260];
  undefined4 *local_84;
  undefined4 local_80 [16];
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  char *local_c;
  uint *local_8;
  
  local_40 = this;
  uVar7 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x61) = uVar7;
  local_84 = DAT_00858df8;
  DAT_00858df8 = &local_84;
  iVar8 = __setjmp3(local_80,0,unaff_EDI,unaff_ESI);
  this_00 = local_40;
  if (iVar8 != 0) {
    DAT_00858df8 = local_84;
    iVar22 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x6f7,0,iVar8,&DAT_007a4ccc);
    if (iVar22 != 0) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    FUN_006a5e40(iVar8,0,0x7cc728,0x6f7);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_40,param_1);
  thunk_FUN_005dd470(param_1);
  uVar12 = *(uint *)(param_1 + 0x10);
  if (uVar12 < 0x6943) {
    if (uVar12 == 0x6942) {
      *(undefined4 *)((int)this_00 + 0x45) = 0x200;
      *(undefined4 *)((int)this_00 + 0x49) = 0;
      *(undefined4 *)((int)this_00 + 0x4d) = 0x6102;
      *(undefined4 *)((int)this_00 + 0x51) = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_005b66e0(this_00);
      goto switchD_005b0c37_caseD_1;
    }
    if (0x6327 < uVar12) {
      if (uVar12 < 0x6341) {
        if (uVar12 == 0x6340) {
          thunk_FUN_005b6560(*(int *)((int)this_00 + 0x1a5b) + 0x55c,param_1,0);
        }
        else {
          switch(uVar12) {
          case 0x6332:
            thunk_FUN_005de050(DAT_0081176c,param_1);
            break;
          case 0x6333:
            thunk_FUN_005b6560((int)DAT_0081176c + 0x38d,param_1,0);
            break;
          case 0x6334:
            thunk_FUN_005b6560((int)DAT_0081176c + 0x41e,param_1,0);
            break;
          case 0x6335:
            *(uint *)((int)DAT_0081176c + 0x4cf) =
                 *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
            if (*(uint *)((int)DAT_0081176c + 0x4b3) != 0xffffffff) {
              FUN_006b3730(*(uint **)((int)DAT_0081176c + 0x4f7),
                           *(uint *)((int)DAT_0081176c + 0x4b3),*(uint *)((int)DAT_0081176c + 0x4b7)
                           ,*(uint *)((int)DAT_0081176c + 0x4cb),
                           *(uint *)((int)DAT_0081176c + 0x4cf));
            }
          }
        }
      }
      else if (uVar12 == 0x6341) {
        thunk_FUN_005b6560(*(int *)((int)this_00 + 0x1a5b) + 0x5ed,param_1,0);
      }
      else if (uVar12 == 0x693f) {
        thunk_FUN_005ae840((int)this_00);
      }
      else if (uVar12 == 0x6940) {
        thunk_FUN_005ae950(this_00);
      }
      goto switchD_005b0c37_caseD_1;
    }
    if (uVar12 == 0x6327) {
      piVar3 = *(int **)(param_1 + 0x14);
      UVar17 = 0x2342;
      thunk_FUN_005b5be0(this_00,*(int *)((int)this_00 + 0x1c8b),piVar3);
      switch(*(undefined1 *)((int)this_00 + 0x1a5f)) {
      case 1:
      case 2:
      case 4:
      case 5:
        UVar17 = 0x2342;
        if (*piVar3 == 1) {
          UVar17 = 0x2341;
        }
        break;
      case 9:
      case 10:
      case 0xb:
        if (*piVar3 == 1) {
          UVar17 = 0x233c;
        }
        else if (*piVar3 == 2) {
          UVar17 = 0x233d;
        }
        else {
          UVar17 = 0x233f;
        }
      }
      FUN_00710a90(*(int *)((int)this_00 + 0x1c8b),0,*piVar3 * 0x7c + -0x7c,0,0x7a,
                   *(int *)(*(int *)((int)this_00 + 0x1c8b) + 8) -
                   ((-(uint)(piVar3[1] != 1) & 0xfffffffd) + 3));
      uVar7 = 2;
      iVar22 = -1;
      iVar8 = -1;
      puVar9 = (uint *)FUN_006b0140(UVar17,DAT_00807618);
      FUN_007119c0(puVar9,iVar8,iVar22,uVar7);
      FUN_006b35d0(DAT_008075a8,*(uint *)((int)this_00 + 0x1c87));
      goto switchD_005b0c37_caseD_1;
    }
    if (uVar12 < 0x6106) {
      if (uVar12 == 0x6105) {
        *(undefined4 *)((int)this_00 + 0x45) = 0x200;
        *(undefined4 *)((int)this_00 + 0x49) = 0;
        *(undefined4 *)((int)this_00 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((int)this_00 + 0x51) = 0;
        *(undefined4 *)((int)this_00 + 0x55) = 0;
        thunk_FUN_005b66e0(this_00);
      }
      else {
        switch(uVar12) {
        case 0:
          thunk_FUN_005ad390(this_00);
          break;
        case 2:
          thunk_FUN_005ab300(*(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14),
                             *(byte *)(*(int *)(param_1 + 0x14) + 0x18));
          break;
        case 3:
          thunk_FUN_005acb30();
          break;
        case 5:
          thunk_FUN_005ad050('\0');
        }
      }
      goto switchD_005b0c37_caseD_1;
    }
    if (uVar12 < 0x6122) {
      if (uVar12 < 0x6120) {
        if (uVar12 == 0x610a) {
          *(undefined4 *)((int)this_00 + 0x45) = 0x200;
          *(undefined4 *)((int)this_00 + 0x49) = 0;
          *(undefined4 *)((int)this_00 + 0x4d) = 0x610a;
          *(undefined4 *)((int)this_00 + 0x51) = 7;
          thunk_FUN_005b66e0(this_00);
        }
      }
      else {
        *(undefined4 *)((int)this_00 + 0x45) = 0x200;
        *(undefined4 *)((int)this_00 + 0x49) = 0;
        *(undefined4 *)((int)this_00 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((int)this_00 + 0x51) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)((int)this_00 + 0x55) = *(undefined4 *)(param_1 + 0x18);
        thunk_FUN_005b66e0(this_00);
      }
      goto switchD_005b0c37_caseD_1;
    }
    if (uVar12 != 0x6326) goto switchD_005b0c37_caseD_1;
    piVar3 = *(int **)(param_1 + 0x14);
    switch(*(undefined1 *)((int)this_00 + 0x1a5f)) {
    case 1:
    case 2:
      if (*piVar3 == 1) {
        *(undefined1 *)((int)this_00 + 0x1a5f) = 1;
      }
      else {
        *(undefined1 *)((int)this_00 + 0x1a5f) = 2;
      }
      *(char *)((int)DAT_0081176c + 0x2eb) = (char)*piVar3;
      if (this_00[0x698] == 0) goto switchD_005b0d25_caseD_3;
      goto LAB_005b0dc0;
    default:
      goto switchD_005b0d25_caseD_3;
    case 4:
    case 5:
      if (*piVar3 == 1) {
        *(undefined1 *)((int)this_00 + 0x1a5f) = 4;
      }
      else {
        *(undefined1 *)((int)this_00 + 0x1a5f) = 5;
      }
      *(char *)((int)DAT_0081176c + 0x2eb) = (char)*piVar3;
      iVar8 = this_00[0x698];
      break;
    case 9:
    case 10:
    case 0xb:
      if (*piVar3 == 1) {
        *(undefined1 *)((int)this_00 + 0x1a5f) = 9;
      }
      else if (*piVar3 == 2) {
        *(undefined1 *)((int)this_00 + 0x1a5f) = 10;
      }
      else {
        *(undefined1 *)((int)this_00 + 0x1a5f) = 0xb;
      }
      *(char *)((int)DAT_0081176c + 0x2ea) = (char)*piVar3;
      iVar8 = this_00[0x698];
    }
    if (iVar8 != 0) {
LAB_005b0dc0:
      thunk_FUN_005afd00(this_00,*(uint *)((int)this_00 + 0x1c93));
    }
switchD_005b0d25_caseD_3:
    thunk_FUN_005b6730(this_00,10,'\x01',-1);
    goto switchD_005b0c37_caseD_1;
  }
  if (0x6956 < uVar12) {
    if (0xc0a2 < uVar12) goto switchD_005b0c37_caseD_1;
    if (uVar12 != 0xc0a2) {
      switch(uVar12) {
      case 0x8160:
        *(undefined4 *)(param_1 + 0x18) = 0x13;
        break;
      case 0x8161:
        uVar12 = (uint)*(ushort *)(param_1 + 0x14);
        iVar8 = *(int *)(*(int *)((int)this_00 + 0x1c9f) + 8);
        if ((int)uVar12 < iVar8) {
          local_8 = *(uint **)(*(int *)(*(int *)((int)this_00 + 0x1c9f) + 0x14) + uVar12 * 4);
        }
        else {
          iVar8 = uVar12 - iVar8;
          if (iVar8 < *(int *)(*(int *)((int)this_00 + 0x1c97) + 8)) {
            local_8 = *(uint **)(*(int *)(*(int *)((int)this_00 + 0x1c97) + 0x14) + iVar8 * 4);
          }
          else {
            local_8 = (uint *)0x0;
          }
        }
        local_c = (char *)0x0;
        FUN_006b4170(*(int *)((int)this_00 + 0x1c7b),0,0,(uint)*(ushort *)(param_1 + 0x1a),
                     *(int *)(*(int *)((int)this_00 + 0x1c7b) + 4),0x13,0);
        if ((int)(uint)*(ushort *)(param_1 + 0x14) < *(int *)(*(int *)((int)this_00 + 0x1c9f) + 8))
        {
          pbVar15 = &DAT_007cc8b4;
          puVar9 = local_8;
          do {
            bVar1 = (byte)*puVar9;
            bVar6 = bVar1 < *pbVar15;
            if (bVar1 != *pbVar15) {
LAB_005b1d83:
              uVar12 = (uint)(1 - bVar6 == (uint)(bVar6 != 0));
              goto LAB_005b1da4;
            }
            if (bVar1 == 0) break;
            bVar1 = *(byte *)((int)puVar9 + 1);
            bVar6 = bVar1 < pbVar15[1];
            if (bVar1 != pbVar15[1]) goto LAB_005b1d83;
            puVar9 = (uint *)((int)puVar9 + 2);
            pbVar15 = pbVar15 + 2;
          } while (bVar1 != 0);
          uVar12 = 1;
        }
        else {
          uVar12 = (-(uint)(*(int *)(*(int *)((int)this_00 + 0x1c97) + 8) != 0) & 3) - 1;
        }
LAB_005b1da4:
        pcVar14 = local_c;
        if (-1 < (int)uVar12) {
          pbVar15 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x1c7f),uVar12);
          pcVar14 = *(char **)(pbVar15 + 4);
          thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x1c7b),2,
                             (0x13 - *(int *)(pbVar15 + 8)) / 2 + (uint)*(ushort *)(param_1 + 0x1a),
                             '\x06',pbVar15);
        }
        FUN_00710a90(*(int *)((int)this_00 + 0x1c7b),0,pcVar14 + 4,(uint)*(ushort *)(param_1 + 0x1a)
                     ,(*(int *)(*(int *)((int)this_00 + 0x1c7b) + 4) - (int)pcVar14) + -4,0x13);
        FUN_007119c0(local_8,2,-1,(-(uint)(*(short *)(param_1 + 0x16) != 0) & 2) + 1);
        FUN_006b3640(DAT_008075a8,
                     *(uint *)((int)this_00 + (*(ushort *)(param_1 + 0x1a) / 0x13) * 4 + 0x1c23),
                     0xfffffffe,0x114,*(ushort *)(param_1 + 0x1a) + 0x3f);
        break;
      case 0x8162:
        uVar12 = *(uint *)(*(int *)((int)this_00 + 0x1c9f) + 8);
        if (*(uint *)(param_1 + 0x14) < uVar12) {
          if (*(char *)((int)this_00 + 0x1a5f) == '\x03') {
            *(undefined4 *)((int)this_00 + 0x2d) = 0x6956;
            (**(code **)*this_00)((int)this_00 + 0x1d);
          }
          else {
            if ((int)(uint)*(ushort *)(param_1 + 0x14) < (int)uVar12) {
              pbVar15 = *(byte **)(*(int *)(*(int *)((int)this_00 + 0x1c9f) + 0x14) +
                                  (uint)*(ushort *)(param_1 + 0x14) * 4);
            }
            else {
              pbVar15 = (byte *)0x0;
            }
            pbVar21 = &DAT_007cc8b4;
            pbVar16 = pbVar15;
            do {
              bVar1 = *pbVar16;
              bVar6 = bVar1 < *pbVar21;
              if (bVar1 != *pbVar21) {
LAB_005b1b67:
                iVar8 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_005b1b6c;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar16[1];
              bVar6 = bVar1 < pbVar21[1];
              if (bVar1 != pbVar21[1]) goto LAB_005b1b67;
              pbVar16 = pbVar16 + 2;
              pbVar21 = pbVar21 + 2;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_005b1b6c:
            if (iVar8 == 0) {
              pbVar15 = (byte *)((int)this_00 + 0x1da7);
              FUN_006b78c0((char *)pbVar15,(char *)pbVar15);
              FUN_0072e730(pbVar15,local_188,local_28c,(byte *)0x0,(byte *)0x0);
              __makepath((char *)pbVar15,(char *)local_188,(char *)local_28c,(char *)0x0,(char *)0x0
                        );
            }
            else {
              uVar12 = 0xffffffff;
              do {
                pbVar16 = pbVar15;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pbVar16 = pbVar15 + 1;
                bVar1 = *pbVar15;
                pbVar15 = pbVar16;
              } while (bVar1 != 0);
              local_8 = (uint *)~uVar12;
              iVar8 = -1;
              pcVar14 = (char *)((int)this_00 + 0x1da7);
              do {
                pcVar18 = pcVar14;
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                pcVar18 = pcVar14 + 1;
                cVar2 = *pcVar14;
                pcVar14 = pcVar18;
              } while (cVar2 != '\0');
              pbVar15 = pbVar16 + -(int)local_8;
              pbVar16 = (byte *)(pcVar18 + -1);
              for (uVar12 = (uint)local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pbVar16 = *(undefined4 *)pbVar15;
                pbVar15 = pbVar15 + 4;
                pbVar16 = pbVar16 + 4;
              }
              for (uVar12 = (uint)local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pbVar16 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                pbVar16 = pbVar16 + 1;
              }
            }
            pcVar14 = (char *)((int)this_00 + 0x1da7);
            FUN_006b78c0(pcVar14,pcVar14);
            if (*(HANDLE *)((int)this_00 + 0x1c8f) != (HANDLE)0x0) {
              FindCloseChangeNotification(*(HANDLE *)((int)this_00 + 0x1c8f));
            }
            pvVar10 = FindFirstChangeNotificationA(pcVar14,0,1);
            *(HANDLE *)((int)this_00 + 0x1c8f) = pvVar10;
            if (pvVar10 == (HANDLE)0xffffffff) {
              *(undefined4 *)((int)this_00 + 0x1c8f) = 0;
            }
            FUN_006b8280(pcVar14,pcVar14);
            thunk_FUN_005afd00(this_00,*(uint *)((int)this_00 + 0x1c93));
          }
        }
        else {
          switch(*(undefined1 *)((int)this_00 + 0x1a5f)) {
          case 1:
          case 2:
            *(undefined4 *)((int)this_00 + 0x2d) = 0x694a;
            (**(code **)*this_00)((int)this_00 + 0x1d);
            break;
          case 4:
          case 5:
          case 0xc:
          case 0x13:
            *(undefined4 *)((int)this_00 + 0x2d) = 0x694e;
            (**(code **)*this_00)((int)this_00 + 0x1d);
            break;
          case 9:
          case 10:
          case 0xb:
            *(undefined4 *)((int)this_00 + 0x2d) = 0x6949;
            (**(code **)*this_00)((int)this_00 + 0x1d);
          }
        }
        break;
      case 0x8163:
        *(undefined4 *)((int)this_00 + 0x1c93) = *(undefined4 *)(param_1 + 0x14);
        this_00[0x699] = 1;
        this_00[0x69a] = *(int *)((int)this_00 + 0x61);
        break;
      case 0x8164:
        thunk_FUN_005b6560((int)(this_00 + 0x69c),param_1,0);
        break;
      case 0x8165:
        thunk_FUN_005b6560((int)this_00 + 0x1b01,param_1,0);
        break;
      case 0x8166:
        uVar12 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
        *(uint *)((int)this_00 + 0x1bb2) = uVar12;
        if (*(uint *)((int)this_00 + 0x1b96) != 0xffffffff) {
          FUN_006b3730(*(uint **)((int)this_00 + 0x1bda),*(uint *)((int)this_00 + 0x1b96),
                       *(uint *)((int)this_00 + 0x1b9a),*(uint *)((int)this_00 + 0x1bae),uVar12);
        }
      }
      goto switchD_005b0c37_caseD_1;
    }
    iVar8 = thunk_FUN_005ddb40(*(int *)((int)this_00 + 0x1a5b));
    if (iVar8 == 0) {
      if (DAT_008067a0 != '\0') {
        iVar8 = *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x686);
        if (*(int *)(iVar8 + 8) < 1) {
          pcVar14 = (char *)0x0;
        }
        else {
          pcVar14 = (char *)**(undefined4 **)(iVar8 + 0x14);
        }
        bVar6 = thunk_FUN_005717e0(pcVar14);
        if (CONCAT31(extraout_var,bVar6) != 0) {
          iVar8 = *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x686);
          if (*(int *)(iVar8 + 8) < 1) {
            CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
          }
          else {
            CFsgsConnection::SendChatMessage
                      ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar8 + 0x14));
          }
          goto LAB_005b2011;
        }
      }
      pcVar14 = local_6e0;
      for (iVar8 = 0x114; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14[2] = '\0';
        pcVar14[3] = '\0';
        pcVar14 = pcVar14 + 4;
      }
      *pcVar14 = '\0';
      uVar12 = 0xffffffff;
      pcVar14 = (char *)&DAT_00807ddd;
      do {
        pcVar18 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar18 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar18;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar8 = *(int *)((int)this_00 + 0x1a5b);
      pcVar14 = pcVar18 + -uVar12;
      pcVar18 = local_6e0;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar18 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar18 = pcVar18 + 1;
      }
      iVar8 = *(int *)(iVar8 + 0x686);
      if (*(int *)(iVar8 + 8) < 1) {
        pcVar14 = (char *)0x0;
      }
      else {
        pcVar14 = (char *)**(undefined4 **)(iVar8 + 0x14);
      }
      uVar12 = 0xffffffff;
      do {
        pcVar18 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar18 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar18;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      pcVar14 = pcVar18 + -uVar12;
      pcVar18 = local_6a0;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar18 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar18 = pcVar18 + 1;
      }
      local_c = local_6a0;
      thunk_FUN_005dd850((int)local_6e0);
      FUN_00715360(DAT_00811764,0,'\x1b',local_6e0,0x451,1,0xffffffff);
    }
LAB_005b2011:
    FUN_006b6020(*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x686),0,&DAT_008016a0);
    *(undefined4 *)((int)this_00 + 0x2d) = 0x33;
    *(undefined4 *)((int)this_00 + 0x31) = *(undefined4 *)(*(int *)((int)this_00 + 0x1a5b) + 0x686);
    FUN_006e6080(this_00,2,*(undefined4 *)(*(int *)((int)this_00 + 0x1a5b) + 0x54c),
                 (undefined4 *)((int)this_00 + 0x1d));
    goto switchD_005b0c37_caseD_1;
  }
  if (uVar12 == 0x6956) {
    if ((((*(char *)((int)this_00 + 0x65) != '\x01') ||
         (cVar2 = *(char *)((int)this_00 + 0x1a5f), cVar2 == '\f')) || (cVar2 == '\x04')) ||
       ((cVar2 == '\x05' || (cVar2 == '\x13')))) goto switchD_005b0c37_caseD_1;
    *(undefined4 *)((int)this_00 + 0x2d) = 0x26;
    FUN_006e6080(this_00,2,this_00[0x69b],(undefined4 *)((int)this_00 + 0x1d));
    if (*(uint *)(*(int *)((int)this_00 + 0x1c9f) + 8) <= *(uint *)((int)this_00 + 0x31))
    goto switchD_005b0c37_caseD_1;
    if (this_00[0x699] != 0) {
      thunk_FUN_005ae050(*(uint *)((int)this_00 + 0x1c93));
      this_00[0x699] = 0;
    }
    DAT_008087a0 = *(undefined1 *)((int)this_00 + 0x1a5f);
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = (char *)&DAT_0080f33a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    if (*(int *)((int)this_00 + 0x31) < *(int *)(*(int *)((int)this_00 + 0x1c9f) + 8)) {
      uVar7 = *(undefined4 *)
               (*(int *)(*(int *)((int)this_00 + 0x1c9f) + 0x14) + *(int *)((int)this_00 + 0x31) * 4
               );
    }
    else {
      uVar7 = 0;
    }
    wsprintfA(&DAT_0080ef1e,s__s_s__s_007cc8dc,PTR_s_MISSIONS__0079c054,uVar7,&DAT_0080ed16);
    if (*(int *)((int)this_00 + 0x31) < *(int *)(*(int *)((int)this_00 + 0x1c9f) + 8)) {
      uVar7 = *(undefined4 *)
               (*(int *)(*(int *)((int)this_00 + 0x1c9f) + 0x14) + *(int *)((int)this_00 + 0x31) * 4
               );
    }
    else {
      uVar7 = 0;
    }
    wsprintfA(&DAT_0080ed16,s__s_s__s_007cc8dc,(int)this_00 + 0x1da7,uVar7,&DAT_0080f33a);
    DAT_008087a0 = 3;
    iVar8 = thunk_FUN_0056e9e0(&DAT_00807620,1);
    if (iVar8 == 0) goto switchD_005b0c37_caseD_1;
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_00807784;
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = (char *)&DAT_0080f22a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    if (*(int *)((int)this_00 + 0x31) < *(int *)(*(int *)((int)this_00 + 0x1c9f) + 8)) {
      pcVar14 = *(char **)(*(int *)(*(int *)((int)this_00 + 0x1c9f) + 0x14) +
                          *(int *)((int)this_00 + 0x31) * 4);
    }
    else {
      pcVar14 = (char *)0x0;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    iVar8 = -1;
    pcVar14 = (char *)&DAT_0080f22a;
    do {
      pcVar19 = pcVar14;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar2 != '\0');
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = pcVar19 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    uVar12 = 0xffffffff;
    pcVar14 = PTR_s_CAMPAIGN_VPS_0079c05c;
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    iVar8 = -1;
    pcVar14 = (char *)&DAT_0080f22a;
    do {
      pcVar19 = pcVar14;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar2 != '\0');
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = pcVar19 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    puVar20 = &DAT_0080c522;
    for (iVar8 = 0x9fc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar20 = 0;
      puVar20 = puVar20 + 1;
    }
    thunk_FUN_005b6350(this_00,0x6948,0,0);
    *(undefined1 *)((int)this_00 + 0x20b6) = 1;
    *(undefined1 *)((int)this_00 + 0x20b5) = 1;
    *(undefined1 *)((int)this_00 + 0x20b3) = 1;
    *(undefined1 *)(this_00 + 0x82d) = 1;
    *(undefined1 *)((int)this_00 + 0x20b7) = 0;
    (**(code **)(*this_00 + 8))();
    pvVar11 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
LAB_005b1644:
    if (pvVar11 != (void *)0x0) {
      thunk_FUN_005b8c70(pvVar11,1,0,1);
    }
    goto switchD_005b0c37_caseD_1;
  }
  switch(uVar12) {
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,*(undefined4 *)(param_1 + 0x14),0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    cVar2 = *(char *)((int)this_00 + 0x1a5f);
    *(undefined1 *)((int)this_00 + 0x20b6) = 1;
    *(undefined1 *)((int)this_00 + 0x20b5) = 1;
    *(undefined1 *)((int)this_00 + 0x20b3) = 1;
    *(undefined1 *)(this_00 + 0x82d) = 1;
    if (((cVar2 == '\f') || (cVar2 == '\x04')) || ((cVar2 == '\x05' || (cVar2 == '\x13')))) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)((int)this_00 + 0x20b7) = uVar5;
    (**(code **)(*this_00 + 8))();
    pvVar11 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
    if (pvVar11 != (void *)0x0) {
      thunk_FUN_005b8c70(pvVar11,1,0,1);
    }
    break;
  case 0x6948:
    DAT_008087a0 = *(undefined1 *)((int)this_00 + 0x1a5f);
    switch(*(undefined1 *)((int)this_00 + 0x1a5f)) {
    case 1:
    case 2:
    case 6:
    case 10:
      DAT_00808783 = 2;
      break;
    case 3:
    case 9:
    case 0xb:
      DAT_00808783 = 1;
      break;
    case 4:
    case 5:
    case 7:
    case 0xc:
    case 0x13:
      DAT_00808783 = 3;
    }
    *(undefined4 *)((int)this_00 + 0x49) = 1;
    if (*(char *)((int)this_00 + 0x1a5f) == '\x03') {
      *(undefined4 *)((int)this_00 + 0x4d) = 0x7101;
      *(undefined4 *)((int)this_00 + 0x51) = 3;
      *(undefined4 *)((int)this_00 + 0x55) = 0;
      thunk_FUN_005b66e0(this_00);
    }
    else {
      *(undefined4 *)((int)this_00 + 0x4d) = 0x60ff;
      thunk_FUN_005b66e0(this_00);
    }
    break;
  case 0x6949:
  case 0x694a:
    if ((((*(char *)((int)this_00 + 0x65) != '\x01') ||
         (cVar2 = *(char *)((int)this_00 + 0x1a5f), cVar2 == '\f')) || (cVar2 == '\x04')) ||
       ((cVar2 == '\x05' || (cVar2 == '\x13')))) break;
    *(undefined4 *)((int)this_00 + 0x2d) = 0x26;
    FUN_006e6080(this_00,2,this_00[0x69b],(undefined4 *)((int)this_00 + 0x1d));
    uVar12 = *(uint *)(*(int *)((int)this_00 + 0x1c9f) + 8);
    if ((*(uint *)((int)this_00 + 0x31) < uVar12) ||
       ((local_8 = (uint *)(*(uint *)((int)this_00 + 0x31) - uVar12), (int)local_8 < 0 ||
        (*(int *)(*(int *)((int)this_00 + 0x1c97) + 8) <= (int)local_8)))) break;
    uVar12 = 0xffffffff;
    pcVar14 = (char *)((int)this_00 + 0x1da7);
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = &DAT_0080ed16;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    if ((8 < *(byte *)((int)this_00 + 0x1a5f)) && (*(byte *)((int)this_00 + 0x1a5f) < 0xc)) {
      uVar12 = 0xffffffff;
      pcVar14 = PTR_DAT_0079c06c;
      do {
        pcVar18 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar18 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar18;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar8 = -1;
      pcVar14 = &DAT_0080ed16;
      do {
        pcVar19 = pcVar14;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar19 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar19;
      } while (cVar2 != '\0');
      pcVar14 = pcVar18 + -uVar12;
      pcVar18 = pcVar19 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar18 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar18 = pcVar18 + 1;
      }
      _DAT_0080f32e = 1;
      DAT_0080879c = 1;
    }
    if ((int)local_8 < *(int *)(*(int *)((int)this_00 + 0x1c97) + 8)) {
      pcVar14 = *(char **)(*(int *)(*(int *)((int)this_00 + 0x1c97) + 0x14) + (int)local_8 * 4);
    }
    else {
      pcVar14 = (char *)0x0;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    iVar8 = -1;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar19 = pcVar14;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar2 != '\0');
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = pcVar19 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = (char *)&DAT_0080ee1a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_00807680;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    uVar13 = 0xffffffff;
    pcVar14 = (char *)((int)&DAT_0080ed12 + ~uVar12 + 3);
    do {
      pcVar18 = pcVar14;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar13 = ~uVar13;
    pcVar14 = pcVar18 + -uVar13;
    pcVar18 = &DAT_0080ef1e;
    for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    if (this_00[0x699] != 0) {
      thunk_FUN_005ae050(*(uint *)((int)this_00 + 0x1c93));
      this_00[0x699] = 0;
    }
    DAT_008087a0 = *(undefined1 *)((int)this_00 + 0x1a5f);
    if ((*(byte *)((int)this_00 + 0x1a5f) != 0) && (*(byte *)((int)this_00 + 0x1a5f) < 3)) {
      thunk_FUN_0056ef50(0x807620);
      thunk_FUN_0056f040(0x807620);
    }
    if (*(char *)((int)this_00 + 0x1a5f) == '\x01') {
      thunk_FUN_0056ebe0(0x807620);
    }
    thunk_FUN_005b6350(this_00,0x6948,0,0);
    cVar2 = *(char *)((int)this_00 + 0x1a5f);
    *(undefined1 *)((int)this_00 + 0x20b6) = 1;
    *(undefined1 *)((int)this_00 + 0x20b5) = 1;
    *(undefined1 *)((int)this_00 + 0x20b3) = 1;
    *(undefined1 *)(this_00 + 0x82d) = 1;
    if ((((cVar2 == '\f') || (cVar2 == '\x04')) || (cVar2 == '\x05')) || (cVar2 == '\x13')) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)((int)this_00 + 0x20b7) = uVar5;
    (**(code **)(*this_00 + 8))();
    pvVar11 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
    goto LAB_005b1644;
  case 0x694b:
    cVar2 = *(char *)((int)this_00 + 0x1a5f);
    if (((cVar2 != '\f') && (cVar2 != '\x04')) && ((cVar2 != '\x05' && (cVar2 != '\x13')))) {
      *(undefined4 *)((int)this_00 + 0x2d) = 0x26;
      FUN_006e6080(this_00,2,this_00[0x69b],(undefined4 *)((int)this_00 + 0x1d));
      uVar12 = *(uint *)(*(int *)((int)this_00 + 0x1c9f) + 8);
      if (((uVar12 <= *(uint *)((int)this_00 + 0x31)) &&
          (iVar8 = *(uint *)((int)this_00 + 0x31) - uVar12, -1 < iVar8)) &&
         (iVar8 < *(int *)(*(int *)((int)this_00 + 0x1c97) + 8))) {
        uVar12 = 0xffffffff;
        pcVar14 = (char *)((int)this_00 + 0x1da7);
        do {
          pcVar18 = pcVar14;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar18 = pcVar14 + 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar18;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pcVar14 = pcVar18 + -uVar12;
        pcVar18 = &DAT_0080ed16;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar18 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar18 = pcVar18 + 1;
        }
        if (iVar8 < *(int *)(*(int *)((int)this_00 + 0x1c97) + 8)) {
          pcVar14 = *(char **)(*(int *)(*(int *)((int)this_00 + 0x1c97) + 0x14) + iVar8 * 4);
        }
        else {
          pcVar14 = (char *)0x0;
        }
        uVar12 = 0xffffffff;
        do {
          pcVar18 = pcVar14;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar18 = pcVar14 + 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar18;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar8 = -1;
        pcVar14 = &DAT_0080ed16;
        do {
          pcVar19 = pcVar14;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar19 = pcVar14 + 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar19;
        } while (cVar2 != '\0');
        pcVar14 = pcVar18 + -uVar12;
        pcVar18 = pcVar19 + -1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar18 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar18 = pcVar18 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar14 = &DAT_0080ed16;
        do {
          pcVar18 = pcVar14;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar18 = pcVar14 + 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar18;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pcVar14 = pcVar18 + -uVar12;
        pcVar18 = (char *)&DAT_0080ee1a;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar18 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar18 = pcVar18 + 1;
        }
        if (this_00[0x699] != 0) {
          thunk_FUN_005ae050(*(uint *)((int)this_00 + 0x1c93));
          this_00[0x699] = 0;
        }
        bVar1 = *(byte *)((int)this_00 + 0x1a5f);
        if ((bVar1 != 0) && (bVar1 < 3)) {
          thunk_FUN_005b6350(this_00,0x6120,(uint)bVar1,(uint)bVar1);
          *(undefined1 *)((int)this_00 + 0x20b3) = 1;
          *(undefined1 *)((int)this_00 + 0x20b7) = 0;
          *(undefined1 *)((int)this_00 + 0x20b6) = 0;
          *(undefined1 *)((int)this_00 + 0x20b5) = 0;
          *(undefined1 *)(this_00 + 0x82d) = 0;
          (**(code **)(*this_00 + 8))();
          if (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6) != 0) {
            local_38 = 0;
            local_3c = 0x10001;
            local_34 = 0;
            local_30 = 0;
            thunk_FUN_005b8f40(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),&local_3c);
          }
        }
      }
    }
    break;
  case 0x694c:
    switch((uint)*(byte *)((int)this_00 + 0x1a5f)) {
    case 4:
    case 5:
    case 0xc:
    case 0x13:
      uVar23 = 7;
      uVar7 = 0x6121;
      break;
    default:
      uVar23 = 6;
      uVar7 = 0x6120;
    }
    thunk_FUN_005b6350(this_00,uVar7,uVar23,(uint)*(byte *)((int)this_00 + 0x1a5f));
    *(undefined1 *)(this_00 + 0x82d) = 1;
    *(undefined1 *)((int)this_00 + 0x20b3) = 1;
    *(undefined1 *)((int)this_00 + 0x20b7) = 0;
    *(undefined1 *)((int)this_00 + 0x20b6) = 0;
    *(undefined1 *)((int)this_00 + 0x20b5) = 0;
    (**(code **)(*this_00 + 8))();
    if (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6) != 0) {
      local_18 = 0;
      local_14 = 0;
      local_1c = 0x10101;
      local_10 = 0;
      thunk_FUN_005b8f40(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),&local_1c);
    }
    break;
  case 0x694d:
    thunk_FUN_005b6350(this_00,0x6105,0,0);
    cVar2 = *(char *)((int)this_00 + 0x1a5f);
    *(undefined1 *)((int)this_00 + 0x20b6) = 1;
    *(undefined1 *)((int)this_00 + 0x20b5) = 1;
    *(undefined1 *)((int)this_00 + 0x20b3) = 1;
    *(undefined1 *)(this_00 + 0x82d) = 1;
    if ((((cVar2 == '\f') || (cVar2 == '\x04')) || (cVar2 == '\x05')) || (cVar2 == '\x13')) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)((int)this_00 + 0x20b7) = uVar5;
    goto LAB_005b1108;
  case 0x694e:
    *(undefined4 *)((int)this_00 + 0x2d) = 0x26;
    FUN_006e6080(this_00,2,this_00[0x69b],(undefined4 *)((int)this_00 + 0x1d));
    uVar12 = *(uint *)(*(int *)((int)this_00 + 0x1c9f) + 8);
    if (((*(uint *)((int)this_00 + 0x31) < uVar12) ||
        (local_8 = (uint *)(*(uint *)((int)this_00 + 0x31) - uVar12), (int)local_8 < 0)) ||
       (*(int *)(*(int *)((int)this_00 + 0x1c97) + 8) <= (int)local_8)) break;
    uVar12 = 0xffffffff;
    pcVar14 = (char *)((int)this_00 + 0x1da7);
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = &DAT_0080ed16;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    if ((*(char *)((int)this_00 + 0x1a5f) == '\f') ||
       ((*(char *)((int)this_00 + 0x1a5f) == '\x13' && (DAT_00803400 == '\f')))) {
      uVar12 = 0xffffffff;
      pcVar14 = PTR_DAT_0079c06c;
      do {
        pcVar18 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar18 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar18;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar8 = -1;
      pcVar14 = &DAT_0080ed16;
      do {
        pcVar19 = pcVar14;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar19 = pcVar14 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar19;
      } while (cVar2 != '\0');
      pcVar14 = pcVar18 + -uVar12;
      pcVar18 = pcVar19 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar18 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar18 = pcVar18 + 1;
      }
      _DAT_0080f32e = 1;
    }
    if ((int)local_8 < *(int *)(*(int *)((int)this_00 + 0x1c97) + 8)) {
      pcVar14 = *(char **)(*(int *)(*(int *)((int)this_00 + 0x1c97) + 0x14) + (int)local_8 * 4);
    }
    else {
      pcVar14 = (char *)0x0;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    iVar8 = -1;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar19 = pcVar14;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar2 != '\0');
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = pcVar19 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar18 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar18 + -uVar12;
    pcVar18 = (char *)&DAT_0080ee1a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar18 = pcVar18 + 1;
    }
    if (this_00[0x699] != 0) {
      thunk_FUN_005ae050(*(uint *)((int)this_00 + 0x1c93));
      this_00[0x699] = 0;
    }
    if (*(byte *)((int)this_00 + 0x1a5f) != 0x13) {
      uVar12 = (uint)*(byte *)((int)this_00 + 0x1a5f);
      uVar13 = uVar12;
      goto LAB_005b137f;
    }
    switch(DAT_00803400) {
    case '\x04':
      uVar13 = 0x13;
      uVar12 = 4;
      break;
    case '\x05':
      uVar13 = 0x13;
      uVar12 = 5;
      break;
    default:
      goto switchD_005b1362_caseD_6;
    case '\f':
      uVar13 = 0x13;
      uVar12 = 0xc;
      break;
    case '\x14':
    case '\x15':
      uVar13 = 0x13;
      uVar12 = 0x13;
    }
LAB_005b137f:
    thunk_FUN_005b6350(this_00,0x6121,uVar12,uVar13);
switchD_005b1362_caseD_6:
    *(undefined1 *)((int)this_00 + 0x20b3) = 1;
    *(undefined1 *)(this_00 + 0x82d) = 0;
    *(undefined1 *)((int)this_00 + 0x20b6) = 0;
    *(undefined1 *)((int)this_00 + 0x20b5) = 0;
    *(undefined1 *)((int)this_00 + 0x20b7) = 0;
    (**(code **)(*this_00 + 8))();
    if (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6) != 0) {
      local_28 = 0;
      local_24 = 0;
      local_2c = 0x10101;
      local_20 = 0;
      thunk_FUN_005b8f40(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),&local_2c);
    }
    break;
  case 0x6951:
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
    *(undefined1 *)((int)this_00 + 0x20b7) = 1;
    *(undefined1 *)((int)this_00 + 0x20b6) = 1;
    *(undefined1 *)((int)this_00 + 0x20b5) = 1;
    *(undefined1 *)((int)this_00 + 0x20b3) = 1;
    *(undefined1 *)(this_00 + 0x82d) = 1;
LAB_005b1108:
    (**(code **)(*this_00 + 8))();
    pvVar11 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
    if (pvVar11 != (void *)0x0) {
      thunk_FUN_005b8c70(pvVar11,1,0,1);
    }
  }
switchD_005b0c37_caseD_1:
  DAT_00858df8 = local_84;
  uVar7 = thunk_FUN_005b6430();
  return uVar7;
}

