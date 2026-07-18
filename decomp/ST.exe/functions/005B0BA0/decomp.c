
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::GetMessage */

undefined4 __thiscall ChooseMapTy::GetMessage(ChooseMapTy *this,int param_1)

{
  char cVar1;
  byte bVar2;
  StartSystemTy *pSVar3;
  int *piVar4;
  code *pcVar5;
  ChooseMapTy *this_00;
  ChooseMapTy CVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  HANDLE pvVar11;
  undefined3 extraout_var;
  MMsgTy *this_01;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  undefined4 unaff_ESI;
  byte *pbVar16;
  ChooseMapTy *pCVar17;
  undefined4 *unaff_EDI;
  UINT UVar18;
  char *pcVar19;
  char *pcVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  ChooseMapTy *pCVar23;
  int iVar24;
  undefined4 uVar25;
  char local_6e0 [64];
  char local_6a0 [1044];
  byte local_28c [260];
  byte local_188 [260];
  undefined4 *local_84;
  undefined4 local_80 [16];
  ChooseMapTy *local_40;
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
  uVar8 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x61) = uVar8;
  local_84 = DAT_00858df8;
  DAT_00858df8 = &local_84;
  iVar9 = __setjmp3(local_80,0,unaff_EDI,unaff_ESI);
  this_00 = local_40;
  if (iVar9 != 0) {
    DAT_00858df8 = local_84;
    iVar24 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x6f7,0,iVar9,&DAT_007a4ccc);
    if (iVar24 != 0) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
    FUN_006a5e40(iVar9,0,0x7cc728,0x6f7);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_40,param_1);
  StartSystemTy::ChatMessage(DAT_0081176c,param_1);
  uVar12 = *(uint *)(param_1 + 0x10);
  if (uVar12 < 0x6943) {
    if (uVar12 == 0x6942) {
      *(undefined4 *)(this_00 + 0x45) = 0x200;
      *(undefined4 *)(this_00 + 0x49) = 0;
      *(undefined4 *)(this_00 + 0x4d) = 0x6102;
      *(undefined4 *)(this_00 + 0x51) = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_005b66e0(this_00);
      goto switchD_005b0c37_caseD_1;
    }
    if (0x6327 < uVar12) {
      if (uVar12 < 0x6341) {
        if (uVar12 == 0x6340) {
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,*(int *)(this_00 + 0x1a5b) + 0x55c,param_1,0);
        }
        else {
          switch(uVar12) {
          case 0x6332:
            StartSystemTy::PaintBinDesc(DAT_0081176c,param_1);
            break;
          case 0x6333:
            MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(DAT_0081176c + 0x38d),param_1,0);
            break;
          case 0x6334:
            MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(DAT_0081176c + 0x41e),param_1,0);
            break;
          case 0x6335:
            *(uint *)(DAT_0081176c + 0x4cf) =
                 *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
            if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
              FUN_006b3730(*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),
                           *(uint *)(DAT_0081176c + 0x4b7),*(uint *)(DAT_0081176c + 0x4cb),
                           *(uint *)(DAT_0081176c + 0x4cf));
            }
          }
        }
      }
      else if (uVar12 == 0x6341) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_00,*(int *)(this_00 + 0x1a5b) + 0x5ed,param_1,0);
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
      piVar4 = *(int **)(param_1 + 0x14);
      UVar18 = 0x2342;
      thunk_FUN_005b5be0(this_00,*(int *)(this_00 + 0x1c8b),piVar4);
      switch(this_00[0x1a5f]) {
      case (ChooseMapTy)0x1:
      case (ChooseMapTy)0x2:
      case (ChooseMapTy)0x4:
      case (ChooseMapTy)0x5:
        UVar18 = 0x2342;
        if (*piVar4 == 1) {
          UVar18 = 0x2341;
        }
        break;
      case (ChooseMapTy)0x9:
      case (ChooseMapTy)0xa:
      case (ChooseMapTy)0xb:
        if (*piVar4 == 1) {
          UVar18 = 0x233c;
        }
        else if (*piVar4 == 2) {
          UVar18 = 0x233d;
        }
        else {
          UVar18 = 0x233f;
        }
      }
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_00 + 0x1c8b),0,
                       *piVar4 * 0x7c + -0x7c,0,0x7a,
                       *(int *)(*(int *)(this_00 + 0x1c8b) + 8) -
                       ((-(uint)(piVar4[1] != 1) & 0xfffffffd) + 3));
      uVar8 = 2;
      iVar24 = -1;
      iVar9 = -1;
      puVar10 = (uint *)FUN_006b0140(UVar18,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar10,iVar9,iVar24,uVar8);
      FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1c87));
      goto switchD_005b0c37_caseD_1;
    }
    if (uVar12 < 0x6106) {
      if (uVar12 == 0x6105) {
        *(undefined4 *)(this_00 + 0x45) = 0x200;
        *(undefined4 *)(this_00 + 0x49) = 0;
        *(undefined4 *)(this_00 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(this_00 + 0x51) = 0;
        *(undefined4 *)(this_00 + 0x55) = 0;
        thunk_FUN_005b66e0(this_00);
      }
      else {
        switch(uVar12) {
        case 0:
          NoneChooseMap(this_00,unaff_EDI);
          break;
        case 2:
          InitChooseMap(this_00,*(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14),
                        *(byte *)(*(int *)(param_1 + 0x14) + 0x18));
          break;
        case 3:
          DoneChooseMap(this_00);
          break;
        case 5:
          PaintChooseMap(this_00,'\0');
        }
      }
      goto switchD_005b0c37_caseD_1;
    }
    if (uVar12 < 0x6122) {
      if (uVar12 < 0x6120) {
        if (uVar12 == 0x610a) {
          *(undefined4 *)(this_00 + 0x45) = 0x200;
          *(undefined4 *)(this_00 + 0x49) = 0;
          *(undefined4 *)(this_00 + 0x4d) = 0x610a;
          *(undefined4 *)(this_00 + 0x51) = 7;
          thunk_FUN_005b66e0(this_00);
        }
      }
      else {
        *(undefined4 *)(this_00 + 0x45) = 0x200;
        *(undefined4 *)(this_00 + 0x49) = 0;
        *(undefined4 *)(this_00 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(this_00 + 0x51) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(this_00 + 0x55) = *(undefined4 *)(param_1 + 0x18);
        thunk_FUN_005b66e0(this_00);
      }
      goto switchD_005b0c37_caseD_1;
    }
    if (uVar12 != 0x6326) goto switchD_005b0c37_caseD_1;
    pSVar3 = *(StartSystemTy **)(param_1 + 0x14);
    switch(this_00[0x1a5f]) {
    case (ChooseMapTy)0x1:
    case (ChooseMapTy)0x2:
      if (*(int *)pSVar3 == 1) {
        this_00[0x1a5f] = (ChooseMapTy)0x1;
      }
      else {
        this_00[0x1a5f] = (ChooseMapTy)0x2;
      }
      DAT_0081176c[0x2eb] = *pSVar3;
      if (*(int *)(this_00 + 0x1a60) == 0) goto switchD_005b0d25_caseD_3;
      goto LAB_005b0dc0;
    default:
      goto switchD_005b0d25_caseD_3;
    case (ChooseMapTy)0x4:
    case (ChooseMapTy)0x5:
      if (*(int *)pSVar3 == 1) {
        this_00[0x1a5f] = (ChooseMapTy)0x4;
      }
      else {
        this_00[0x1a5f] = (ChooseMapTy)0x5;
      }
      DAT_0081176c[0x2eb] = *pSVar3;
      iVar9 = *(int *)(this_00 + 0x1a60);
      break;
    case (ChooseMapTy)0x9:
    case (ChooseMapTy)0xa:
    case (ChooseMapTy)0xb:
      if (*(int *)pSVar3 == 1) {
        this_00[0x1a5f] = (ChooseMapTy)0x9;
      }
      else if (*(int *)pSVar3 == 2) {
        this_00[0x1a5f] = (ChooseMapTy)0xa;
      }
      else {
        this_00[0x1a5f] = (ChooseMapTy)0xb;
      }
      DAT_0081176c[0x2ea] = *pSVar3;
      iVar9 = *(int *)(this_00 + 0x1a60);
    }
    if (iVar9 != 0) {
LAB_005b0dc0:
      PrepFiles(this_00,*(uint *)(this_00 + 0x1c93));
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
        iVar9 = *(int *)(*(int *)(this_00 + 0x1c9f) + 8);
        if ((int)uVar12 < iVar9) {
          local_8 = *(uint **)(*(int *)(*(int *)(this_00 + 0x1c9f) + 0x14) + uVar12 * 4);
        }
        else {
          iVar9 = uVar12 - iVar9;
          if (iVar9 < *(int *)(*(int *)(this_00 + 0x1c97) + 8)) {
            local_8 = *(uint **)(*(int *)(*(int *)(this_00 + 0x1c97) + 0x14) + iVar9 * 4);
          }
          else {
            local_8 = (uint *)0x0;
          }
        }
        local_c = (char *)0x0;
        FUN_006b4170(*(int *)(this_00 + 0x1c7b),0,0,(uint)*(ushort *)(param_1 + 0x1a),
                     *(int *)(*(int *)(this_00 + 0x1c7b) + 4),0x13,0);
        if ((int)(uint)*(ushort *)(param_1 + 0x14) < *(int *)(*(int *)(this_00 + 0x1c9f) + 8)) {
          pbVar15 = &DAT_007cc8b4;
          puVar10 = local_8;
          do {
            bVar2 = (byte)*puVar10;
            bVar7 = bVar2 < *pbVar15;
            if (bVar2 != *pbVar15) {
LAB_005b1d83:
              uVar12 = (uint)(1 - bVar7 == (uint)(bVar7 != 0));
              goto LAB_005b1da4;
            }
            if (bVar2 == 0) break;
            bVar2 = *(byte *)((int)puVar10 + 1);
            bVar7 = bVar2 < pbVar15[1];
            if (bVar2 != pbVar15[1]) goto LAB_005b1d83;
            puVar10 = (uint *)((int)puVar10 + 2);
            pbVar15 = pbVar15 + 2;
          } while (bVar2 != 0);
          uVar12 = 1;
        }
        else {
          uVar12 = (-(uint)(*(int *)(*(int *)(this_00 + 0x1c97) + 8) != 0) & 3) - 1;
        }
LAB_005b1da4:
        pcVar14 = local_c;
        if (-1 < (int)uVar12) {
          pbVar15 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x1c7f),uVar12);
          pcVar14 = *(char **)(pbVar15 + 4);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x1c7b),2,
                             (0x13 - *(int *)(pbVar15 + 8)) / 2 + (uint)*(ushort *)(param_1 + 0x1a),
                             '\x06',pbVar15);
        }
        ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x30),*(int *)(this_00 + 0x1c7b),0,pcVar14 + 4
                         ,(uint)*(ushort *)(param_1 + 0x1a),
                         (*(int *)(*(int *)(this_00 + 0x1c7b) + 4) - (int)pcVar14) + -4,0x13);
        ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x30),local_8,2,-1,
                       (-(uint)(*(short *)(param_1 + 0x16) != 0) & 2) + 1);
        FUN_006b3640(DAT_008075a8,
                     *(uint *)(this_00 + (*(ushort *)(param_1 + 0x1a) / 0x13) * 4 + 0x1c23),
                     0xfffffffe,0x114,*(ushort *)(param_1 + 0x1a) + 0x3f);
        break;
      case 0x8162:
        uVar12 = *(uint *)(*(int *)(this_00 + 0x1c9f) + 8);
        if (*(uint *)(param_1 + 0x14) < uVar12) {
          if (this_00[0x1a5f] == (ChooseMapTy)0x3) {
            *(undefined4 *)(this_00 + 0x2d) = 0x6956;
            (*(code *)**(undefined4 **)this_00)(this_00 + 0x1d);
          }
          else {
            if ((int)(uint)*(ushort *)(param_1 + 0x14) < (int)uVar12) {
              pbVar15 = *(byte **)(*(int *)(*(int *)(this_00 + 0x1c9f) + 0x14) +
                                  (uint)*(ushort *)(param_1 + 0x14) * 4);
            }
            else {
              pbVar15 = (byte *)0x0;
            }
            pbVar22 = &DAT_007cc8b4;
            pbVar16 = pbVar15;
            do {
              bVar2 = *pbVar16;
              bVar7 = bVar2 < *pbVar22;
              if (bVar2 != *pbVar22) {
LAB_005b1b67:
                iVar9 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                goto LAB_005b1b6c;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar16[1];
              bVar7 = bVar2 < pbVar22[1];
              if (bVar2 != pbVar22[1]) goto LAB_005b1b67;
              pbVar16 = pbVar16 + 2;
              pbVar22 = pbVar22 + 2;
            } while (bVar2 != 0);
            iVar9 = 0;
LAB_005b1b6c:
            if (iVar9 == 0) {
              pCVar17 = this_00 + 0x1da7;
              FUN_006b78c0((char *)pCVar17,(char *)pCVar17);
              FUN_0072e730((byte *)pCVar17,local_188,local_28c,(byte *)0x0,(byte *)0x0);
              __makepath((char *)pCVar17,(char *)local_188,(char *)local_28c,(char *)0x0,(char *)0x0
                        );
            }
            else {
              uVar12 = 0xffffffff;
              do {
                pbVar16 = pbVar15;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pbVar16 = pbVar15 + 1;
                bVar2 = *pbVar15;
                pbVar15 = pbVar16;
              } while (bVar2 != 0);
              local_8 = (uint *)~uVar12;
              iVar9 = -1;
              pCVar17 = this_00 + 0x1da7;
              do {
                pCVar23 = pCVar17;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pCVar23 = pCVar17 + 1;
                CVar6 = *pCVar17;
                pCVar17 = pCVar23;
              } while (CVar6 != (ChooseMapTy)0x0);
              pCVar17 = (ChooseMapTy *)(pbVar16 + -(int)local_8);
              pCVar23 = pCVar23 + -1;
              for (uVar12 = (uint)local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pCVar23 = *(undefined4 *)pCVar17;
                pCVar17 = pCVar17 + 4;
                pCVar23 = pCVar23 + 4;
              }
              for (uVar12 = (uint)local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pCVar23 = *pCVar17;
                pCVar17 = pCVar17 + 1;
                pCVar23 = pCVar23 + 1;
              }
            }
            pCVar17 = this_00 + 0x1da7;
            FUN_006b78c0((char *)pCVar17,(char *)pCVar17);
            if (*(HANDLE *)(this_00 + 0x1c8f) != (HANDLE)0x0) {
              FindCloseChangeNotification(*(HANDLE *)(this_00 + 0x1c8f));
            }
            pvVar11 = FindFirstChangeNotificationA((LPCSTR)pCVar17,0,1);
            *(HANDLE *)(this_00 + 0x1c8f) = pvVar11;
            if (pvVar11 == (HANDLE)0xffffffff) {
              *(undefined4 *)(this_00 + 0x1c8f) = 0;
            }
            FUN_006b8280((char *)pCVar17,(char *)pCVar17);
            PrepFiles(this_00,*(uint *)(this_00 + 0x1c93));
          }
        }
        else {
          switch(this_00[0x1a5f]) {
          case (ChooseMapTy)0x1:
          case (ChooseMapTy)0x2:
            *(undefined4 *)(this_00 + 0x2d) = 0x694a;
            (*(code *)**(undefined4 **)this_00)(this_00 + 0x1d);
            break;
          case (ChooseMapTy)0x4:
          case (ChooseMapTy)0x5:
          case (ChooseMapTy)0xc:
          case (ChooseMapTy)0x13:
            *(undefined4 *)(this_00 + 0x2d) = 0x694e;
            (*(code *)**(undefined4 **)this_00)(this_00 + 0x1d);
            break;
          case (ChooseMapTy)0x9:
          case (ChooseMapTy)0xa:
          case (ChooseMapTy)0xb:
            *(undefined4 *)(this_00 + 0x2d) = 0x6949;
            (*(code *)**(undefined4 **)this_00)(this_00 + 0x1d);
          }
        }
        break;
      case 0x8163:
        *(undefined4 *)(this_00 + 0x1c93) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(this_00 + 0x1a64) = 1;
        *(undefined4 *)(this_00 + 0x1a68) = *(undefined4 *)(this_00 + 0x61);
        break;
      case 0x8164:
        MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(this_00 + 0x1a70),param_1,0);
        break;
      case 0x8165:
        MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(this_00 + 0x1b01),param_1,0);
        break;
      case 0x8166:
        uVar12 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
        *(uint *)(this_00 + 0x1bb2) = uVar12;
        if (*(uint *)(this_00 + 0x1b96) != 0xffffffff) {
          FUN_006b3730(*(uint **)(this_00 + 0x1bda),*(uint *)(this_00 + 0x1b96),
                       *(uint *)(this_00 + 0x1b9a),*(uint *)(this_00 + 0x1bae),uVar12);
        }
      }
      goto switchD_005b0c37_caseD_1;
    }
    iVar9 = thunk_FUN_005ddb40(*(int *)(this_00 + 0x1a5b));
    if (iVar9 == 0) {
      if (DAT_008067a0 != '\0') {
        if (*(int *)(*(int *)(*(int *)(this_00 + 0x1a5b) + 0x686) + 8) < 1) {
          pcVar14 = (char *)0x0;
        }
        else {
          pcVar14 = (char *)**(undefined4 **)(*(int *)(*(int *)(this_00 + 0x1a5b) + 0x686) + 0x14);
        }
        bVar7 = thunk_FUN_005717e0(pcVar14);
        if (CONCAT31(extraout_var,bVar7) != 0) {
          if (*(int *)(*(int *)(*(int *)(this_00 + 0x1a5b) + 0x686) + 8) < 1) {
            CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
          }
          else {
            CFsgsConnection::SendChatMessage
                      ((CFsgsConnection *)&DAT_00802a90,
                       (char *)**(undefined4 **)
                                 (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x686) + 0x14));
          }
          goto LAB_005b2011;
        }
      }
      pcVar14 = local_6e0;
      for (iVar9 = 0x114; iVar9 != 0; iVar9 = iVar9 + -1) {
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
        pcVar19 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar19;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pSVar3 = *(StartSystemTy **)(this_00 + 0x1a5b);
      pcVar14 = pcVar19 + -uVar12;
      pcVar19 = local_6e0;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar19 = pcVar19 + 1;
      }
      iVar9 = *(int *)(pSVar3 + 0x686);
      if (*(int *)(iVar9 + 8) < 1) {
        pcVar14 = (char *)0x0;
      }
      else {
        pcVar14 = (char *)**(undefined4 **)(iVar9 + 0x14);
      }
      uVar12 = 0xffffffff;
      do {
        pcVar19 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar19;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pcVar14 = pcVar19 + -uVar12;
      pcVar19 = local_6a0;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar19 = pcVar19 + 1;
      }
      local_c = local_6a0;
      StartSystemTy::AddToChat(pSVar3,(int)local_6e0);
      FUN_00715360(DAT_00811764,0,'\x1b',local_6e0,0x451,1,0xffffffff);
    }
LAB_005b2011:
    FUN_006b6020(*(int *)(*(int *)(this_00 + 0x1a5b) + 0x686),0,&DAT_008016a0);
    *(undefined4 *)(this_00 + 0x2d) = 0x33;
    *(undefined4 *)(this_00 + 0x31) = *(undefined4 *)(*(int *)(this_00 + 0x1a5b) + 0x686);
    FUN_006e6080(this_00,2,*(undefined4 *)(*(int *)(this_00 + 0x1a5b) + 0x54c),
                 (undefined4 *)(this_00 + 0x1d));
    goto switchD_005b0c37_caseD_1;
  }
  if (uVar12 == 0x6956) {
    if ((((this_00[0x65] != (ChooseMapTy)0x1) ||
         (CVar6 = this_00[0x1a5f], CVar6 == (ChooseMapTy)0xc)) || (CVar6 == (ChooseMapTy)0x4)) ||
       ((CVar6 == (ChooseMapTy)0x5 || (CVar6 == (ChooseMapTy)0x13)))) goto switchD_005b0c37_caseD_1;
    *(undefined4 *)(this_00 + 0x2d) = 0x26;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1a6c),(undefined4 *)(this_00 + 0x1d));
    if (*(uint *)(*(int *)(this_00 + 0x1c9f) + 8) <= *(uint *)(this_00 + 0x31))
    goto switchD_005b0c37_caseD_1;
    if (*(int *)(this_00 + 0x1a64) != 0) {
      ShowDescription(this_00,*(uint *)(this_00 + 0x1c93));
      *(undefined4 *)(this_00 + 0x1a64) = 0;
    }
    DAT_008087a0 = this_00[0x1a5f];
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar19 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar19 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar19 + -uVar12;
    pcVar19 = (char *)&DAT_0080f33a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar19 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar19 + 1;
    }
    if (*(int *)(this_00 + 0x31) < *(int *)(*(int *)(this_00 + 0x1c9f) + 8)) {
      uVar8 = *(undefined4 *)
               (*(int *)(*(int *)(this_00 + 0x1c9f) + 0x14) + *(int *)(this_00 + 0x31) * 4);
    }
    else {
      uVar8 = 0;
    }
    wsprintfA(&DAT_0080ef1e,s__s_s__s_007cc8dc,PTR_s_MISSIONS__0079c054,uVar8,&DAT_0080ed16);
    if (*(int *)(this_00 + 0x31) < *(int *)(*(int *)(this_00 + 0x1c9f) + 8)) {
      uVar8 = *(undefined4 *)
               (*(int *)(*(int *)(this_00 + 0x1c9f) + 0x14) + *(int *)(this_00 + 0x31) * 4);
    }
    else {
      uVar8 = 0;
    }
    wsprintfA(&DAT_0080ed16,s__s_s__s_007cc8dc,this_00 + 0x1da7,uVar8,&DAT_0080f33a);
    DAT_008087a0 = (ChooseMapTy)0x3;
    iVar9 = thunk_FUN_0056e9e0(&DAT_00807620,1);
    if (iVar9 == 0) goto switchD_005b0c37_caseD_1;
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_00807784;
    do {
      pcVar19 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar19 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar19 + -uVar12;
    pcVar19 = (char *)&DAT_0080f22a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar19 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar19 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    if (*(int *)(this_00 + 0x31) < *(int *)(*(int *)(this_00 + 0x1c9f) + 8)) {
      pcVar14 = *(char **)(*(int *)(*(int *)(this_00 + 0x1c9f) + 0x14) +
                          *(int *)(this_00 + 0x31) * 4);
    }
    else {
      pcVar14 = (char *)0x0;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar19 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar19 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar9 = -1;
    pcVar14 = (char *)&DAT_0080f22a;
    do {
      pcVar20 = pcVar14;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar20 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar20;
    } while (cVar1 != '\0');
    pcVar14 = pcVar19 + -uVar12;
    pcVar19 = pcVar20 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar19 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar19 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    uVar12 = 0xffffffff;
    pcVar14 = PTR_s_CAMPAIGN_VPS_0079c05c;
    do {
      pcVar19 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar19 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar9 = -1;
    pcVar14 = (char *)&DAT_0080f22a;
    do {
      pcVar20 = pcVar14;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar20 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar20;
    } while (cVar1 != '\0');
    pcVar14 = pcVar19 + -uVar12;
    pcVar19 = pcVar20 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar19 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar19 + 1;
    }
    puVar21 = &DAT_0080c522;
    for (iVar9 = 0x9fc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar21 = 0;
      puVar21 = puVar21 + 1;
    }
    thunk_FUN_005b6350(this_00,0x6948,0,0);
    this_00[0x20b6] = (ChooseMapTy)0x1;
    this_00[0x20b5] = (ChooseMapTy)0x1;
    this_00[0x20b3] = (ChooseMapTy)0x1;
    this_00[0x20b4] = (ChooseMapTy)0x1;
    this_00[0x20b7] = (ChooseMapTy)0x0;
    (**(code **)(*(int *)this_00 + 8))();
    this_01 = *(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6);
LAB_005b1644:
    if (this_01 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(this_01,1,0,1);
    }
    goto switchD_005b0c37_caseD_1;
  }
  switch(uVar12) {
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,*(undefined4 *)(param_1 + 0x14),0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    CVar6 = this_00[0x1a5f];
    this_00[0x20b6] = (ChooseMapTy)0x1;
    this_00[0x20b5] = (ChooseMapTy)0x1;
    this_00[0x20b3] = (ChooseMapTy)0x1;
    this_00[0x20b4] = (ChooseMapTy)0x1;
    if (((CVar6 == (ChooseMapTy)0xc) || (CVar6 == (ChooseMapTy)0x4)) ||
       ((CVar6 == (ChooseMapTy)0x5 || (CVar6 == (ChooseMapTy)0x13)))) {
      CVar6 = (ChooseMapTy)0x1;
    }
    else {
      CVar6 = (ChooseMapTy)0x0;
    }
    this_00[0x20b7] = CVar6;
    (**(code **)(*(int *)this_00 + 8))();
    if (*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),1,0,1);
    }
    break;
  case 0x6948:
    DAT_008087a0 = this_00[0x1a5f];
    switch(this_00[0x1a5f]) {
    case (ChooseMapTy)0x1:
    case (ChooseMapTy)0x2:
    case (ChooseMapTy)0x6:
    case (ChooseMapTy)0xa:
      DAT_00808783 = 2;
      break;
    case (ChooseMapTy)0x3:
    case (ChooseMapTy)0x9:
    case (ChooseMapTy)0xb:
      DAT_00808783 = 1;
      break;
    case (ChooseMapTy)0x4:
    case (ChooseMapTy)0x5:
    case (ChooseMapTy)0x7:
    case (ChooseMapTy)0xc:
    case (ChooseMapTy)0x13:
      DAT_00808783 = 3;
    }
    *(undefined4 *)(this_00 + 0x49) = 1;
    if (this_00[0x1a5f] == (ChooseMapTy)0x3) {
      *(undefined4 *)(this_00 + 0x4d) = 0x7101;
      *(undefined4 *)(this_00 + 0x51) = 3;
      *(undefined4 *)(this_00 + 0x55) = 0;
      thunk_FUN_005b66e0(this_00);
    }
    else {
      *(undefined4 *)(this_00 + 0x4d) = 0x60ff;
      thunk_FUN_005b66e0(this_00);
    }
    break;
  case 0x6949:
  case 0x694a:
    if ((((this_00[0x65] != (ChooseMapTy)0x1) ||
         (CVar6 = this_00[0x1a5f], CVar6 == (ChooseMapTy)0xc)) || (CVar6 == (ChooseMapTy)0x4)) ||
       ((CVar6 == (ChooseMapTy)0x5 || (CVar6 == (ChooseMapTy)0x13)))) break;
    *(undefined4 *)(this_00 + 0x2d) = 0x26;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1a6c),(undefined4 *)(this_00 + 0x1d));
    if ((*(uint *)(this_00 + 0x31) < *(uint *)(*(int *)(this_00 + 0x1c9f) + 8)) ||
       ((local_8 = (uint *)(*(uint *)(this_00 + 0x31) - *(uint *)(*(int *)(this_00 + 0x1c9f) + 8)),
        (int)local_8 < 0 || (*(int *)(*(int *)(this_00 + 0x1c97) + 8) <= (int)local_8)))) break;
    uVar12 = 0xffffffff;
    pCVar17 = this_00 + 0x1da7;
    do {
      pCVar23 = pCVar17;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pCVar23 = pCVar17 + 1;
      CVar6 = *pCVar17;
      pCVar17 = pCVar23;
    } while (CVar6 != (ChooseMapTy)0x0);
    uVar12 = ~uVar12;
    pCVar17 = pCVar23 + -uVar12;
    pCVar23 = (ChooseMapTy *)&DAT_0080ed16;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pCVar23 = *(undefined4 *)pCVar17;
      pCVar17 = pCVar17 + 4;
      pCVar23 = pCVar23 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pCVar23 = *pCVar17;
      pCVar17 = pCVar17 + 1;
      pCVar23 = pCVar23 + 1;
    }
    if ((8 < (byte)this_00[0x1a5f]) && ((byte)this_00[0x1a5f] < 0xc)) {
      uVar12 = 0xffffffff;
      pcVar14 = PTR_DAT_0079c06c;
      do {
        pcVar19 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar19;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      iVar9 = -1;
      pcVar14 = &DAT_0080ed16;
      do {
        pcVar20 = pcVar14;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar20 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar20;
      } while (cVar1 != '\0');
      pcVar14 = pcVar19 + -uVar12;
      pcVar19 = pcVar20 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar19 = pcVar19 + 1;
      }
      _DAT_0080f32e = 1;
      DAT_0080879c = 1;
    }
    if ((int)local_8 < *(int *)(*(int *)(this_00 + 0x1c97) + 8)) {
      pcVar14 = *(char **)(*(int *)(*(int *)(this_00 + 0x1c97) + 0x14) + (int)local_8 * 4);
    }
    else {
      pcVar14 = (char *)0x0;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar19 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar19 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar9 = -1;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar20 = pcVar14;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar20 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar20;
    } while (cVar1 != '\0');
    pcVar14 = pcVar19 + -uVar12;
    pcVar19 = pcVar20 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar19 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar19 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar19 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar19 + -uVar12;
    pcVar19 = (char *)&DAT_0080ee1a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar19 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_00807680;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    uVar13 = 0xffffffff;
    pcVar14 = (char *)((int)&DAT_0080ed12 + ~uVar12 + 3);
    do {
      pcVar19 = pcVar14;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    pcVar14 = pcVar19 + -uVar13;
    pcVar19 = &DAT_0080ef1e;
    for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar19 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar19 + 1;
    }
    if (*(int *)(this_00 + 0x1a64) != 0) {
      ShowDescription(this_00,*(uint *)(this_00 + 0x1c93));
      *(undefined4 *)(this_00 + 0x1a64) = 0;
    }
    DAT_008087a0 = this_00[0x1a5f];
    if ((this_00[0x1a5f] != (ChooseMapTy)0x0) && ((byte)this_00[0x1a5f] < 3)) {
      thunk_FUN_0056ef50(0x807620);
      thunk_FUN_0056f040(0x807620);
    }
    if (this_00[0x1a5f] == (ChooseMapTy)0x1) {
      thunk_FUN_0056ebe0(0x807620);
    }
    thunk_FUN_005b6350(this_00,0x6948,0,0);
    CVar6 = this_00[0x1a5f];
    this_00[0x20b6] = (ChooseMapTy)0x1;
    this_00[0x20b5] = (ChooseMapTy)0x1;
    this_00[0x20b3] = (ChooseMapTy)0x1;
    this_00[0x20b4] = (ChooseMapTy)0x1;
    if ((((CVar6 == (ChooseMapTy)0xc) || (CVar6 == (ChooseMapTy)0x4)) || (CVar6 == (ChooseMapTy)0x5)
        ) || (CVar6 == (ChooseMapTy)0x13)) {
      CVar6 = (ChooseMapTy)0x1;
    }
    else {
      CVar6 = (ChooseMapTy)0x0;
    }
    this_00[0x20b7] = CVar6;
    (**(code **)(*(int *)this_00 + 8))();
    this_01 = *(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6);
    goto LAB_005b1644;
  case 0x694b:
    CVar6 = this_00[0x1a5f];
    if (((CVar6 != (ChooseMapTy)0xc) && (CVar6 != (ChooseMapTy)0x4)) &&
       ((CVar6 != (ChooseMapTy)0x5 && (CVar6 != (ChooseMapTy)0x13)))) {
      *(undefined4 *)(this_00 + 0x2d) = 0x26;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1a6c),(undefined4 *)(this_00 + 0x1d));
      if (((*(uint *)(*(int *)(this_00 + 0x1c9f) + 8) <= *(uint *)(this_00 + 0x31)) &&
          (iVar9 = *(uint *)(this_00 + 0x31) - *(uint *)(*(int *)(this_00 + 0x1c9f) + 8), -1 < iVar9
          )) && (iVar9 < *(int *)(*(int *)(this_00 + 0x1c97) + 8))) {
        uVar12 = 0xffffffff;
        pCVar17 = this_00 + 0x1da7;
        do {
          pCVar23 = pCVar17;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pCVar23 = pCVar17 + 1;
          CVar6 = *pCVar17;
          pCVar17 = pCVar23;
        } while (CVar6 != (ChooseMapTy)0x0);
        uVar12 = ~uVar12;
        pCVar17 = pCVar23 + -uVar12;
        pCVar23 = (ChooseMapTy *)&DAT_0080ed16;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pCVar23 = *(undefined4 *)pCVar17;
          pCVar17 = pCVar17 + 4;
          pCVar23 = pCVar23 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pCVar23 = *pCVar17;
          pCVar17 = pCVar17 + 1;
          pCVar23 = pCVar23 + 1;
        }
        if (iVar9 < *(int *)(*(int *)(this_00 + 0x1c97) + 8)) {
          pcVar14 = *(char **)(*(int *)(*(int *)(this_00 + 0x1c97) + 0x14) + iVar9 * 4);
        }
        else {
          pcVar14 = (char *)0x0;
        }
        uVar12 = 0xffffffff;
        do {
          pcVar19 = pcVar14;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar19 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar19;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        iVar9 = -1;
        pcVar14 = &DAT_0080ed16;
        do {
          pcVar20 = pcVar14;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar20 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar20;
        } while (cVar1 != '\0');
        pcVar14 = pcVar19 + -uVar12;
        pcVar19 = pcVar20 + -1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar19 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar14 = &DAT_0080ed16;
        do {
          pcVar19 = pcVar14;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar19 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar19;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        pcVar14 = pcVar19 + -uVar12;
        pcVar19 = (char *)&DAT_0080ee1a;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar19 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar19 = pcVar19 + 1;
        }
        if (*(int *)(this_00 + 0x1a64) != 0) {
          ShowDescription(this_00,*(uint *)(this_00 + 0x1c93));
          *(undefined4 *)(this_00 + 0x1a64) = 0;
        }
        CVar6 = this_00[0x1a5f];
        if ((CVar6 != (ChooseMapTy)0x0) && ((byte)CVar6 < 3)) {
          thunk_FUN_005b6350(this_00,0x6120,(uint)(byte)CVar6,(uint)(byte)CVar6);
          this_00[0x20b3] = (ChooseMapTy)0x1;
          this_00[0x20b7] = (ChooseMapTy)0x0;
          this_00[0x20b6] = (ChooseMapTy)0x0;
          this_00[0x20b5] = (ChooseMapTy)0x0;
          this_00[0x20b4] = (ChooseMapTy)0x0;
          (**(code **)(*(int *)this_00 + 8))();
          if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != 0) {
            local_38 = 0;
            local_3c = 0x10001;
            local_34 = 0;
            local_30 = 0;
            thunk_FUN_005b8f40(*(void **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),&local_3c);
          }
        }
      }
    }
    break;
  case 0x694c:
    switch((uint)(byte)this_00[0x1a5f]) {
    case 4:
    case 5:
    case 0xc:
    case 0x13:
      uVar25 = 7;
      uVar8 = 0x6121;
      break;
    default:
      uVar25 = 6;
      uVar8 = 0x6120;
    }
    thunk_FUN_005b6350(this_00,uVar8,uVar25,(uint)(byte)this_00[0x1a5f]);
    this_00[0x20b4] = (ChooseMapTy)0x1;
    this_00[0x20b3] = (ChooseMapTy)0x1;
    this_00[0x20b7] = (ChooseMapTy)0x0;
    this_00[0x20b6] = (ChooseMapTy)0x0;
    this_00[0x20b5] = (ChooseMapTy)0x0;
    (**(code **)(*(int *)this_00 + 8))();
    if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != 0) {
      local_18 = 0;
      local_14 = 0;
      local_1c = 0x10101;
      local_10 = 0;
      thunk_FUN_005b8f40(*(void **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),&local_1c);
    }
    break;
  case 0x694d:
    thunk_FUN_005b6350(this_00,0x6105,0,0);
    CVar6 = this_00[0x1a5f];
    this_00[0x20b6] = (ChooseMapTy)0x1;
    this_00[0x20b5] = (ChooseMapTy)0x1;
    this_00[0x20b3] = (ChooseMapTy)0x1;
    this_00[0x20b4] = (ChooseMapTy)0x1;
    if ((((CVar6 == (ChooseMapTy)0xc) || (CVar6 == (ChooseMapTy)0x4)) || (CVar6 == (ChooseMapTy)0x5)
        ) || (CVar6 == (ChooseMapTy)0x13)) {
      CVar6 = (ChooseMapTy)0x1;
    }
    else {
      CVar6 = (ChooseMapTy)0x0;
    }
    this_00[0x20b7] = CVar6;
    goto LAB_005b1108;
  case 0x694e:
    *(undefined4 *)(this_00 + 0x2d) = 0x26;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1a6c),(undefined4 *)(this_00 + 0x1d));
    if (((*(uint *)(this_00 + 0x31) < *(uint *)(*(int *)(this_00 + 0x1c9f) + 8)) ||
        (local_8 = (uint *)(*(uint *)(this_00 + 0x31) - *(uint *)(*(int *)(this_00 + 0x1c9f) + 8)),
        (int)local_8 < 0)) || (*(int *)(*(int *)(this_00 + 0x1c97) + 8) <= (int)local_8)) break;
    uVar12 = 0xffffffff;
    pCVar17 = this_00 + 0x1da7;
    do {
      pCVar23 = pCVar17;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pCVar23 = pCVar17 + 1;
      CVar6 = *pCVar17;
      pCVar17 = pCVar23;
    } while (CVar6 != (ChooseMapTy)0x0);
    uVar12 = ~uVar12;
    pCVar17 = pCVar23 + -uVar12;
    pCVar23 = (ChooseMapTy *)&DAT_0080ed16;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pCVar23 = *(undefined4 *)pCVar17;
      pCVar17 = pCVar17 + 4;
      pCVar23 = pCVar23 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pCVar23 = *pCVar17;
      pCVar17 = pCVar17 + 1;
      pCVar23 = pCVar23 + 1;
    }
    if ((this_00[0x1a5f] == (ChooseMapTy)0xc) ||
       ((this_00[0x1a5f] == (ChooseMapTy)0x13 && (DAT_00803400 == '\f')))) {
      uVar12 = 0xffffffff;
      pcVar14 = PTR_DAT_0079c06c;
      do {
        pcVar19 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar19;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      iVar9 = -1;
      pcVar14 = &DAT_0080ed16;
      do {
        pcVar20 = pcVar14;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar20 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar20;
      } while (cVar1 != '\0');
      pcVar14 = pcVar19 + -uVar12;
      pcVar19 = pcVar20 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar19 = pcVar19 + 1;
      }
      _DAT_0080f32e = 1;
    }
    if ((int)local_8 < *(int *)(*(int *)(this_00 + 0x1c97) + 8)) {
      pcVar14 = *(char **)(*(int *)(*(int *)(this_00 + 0x1c97) + 0x14) + (int)local_8 * 4);
    }
    else {
      pcVar14 = (char *)0x0;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar19 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar19 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar9 = -1;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar20 = pcVar14;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar20 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar20;
    } while (cVar1 != '\0');
    pcVar14 = pcVar19 + -uVar12;
    pcVar19 = pcVar20 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar19 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar12 = 0xffffffff;
    pcVar14 = &DAT_0080ed16;
    do {
      pcVar19 = pcVar14;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar19 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar19;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar14 = pcVar19 + -uVar12;
    pcVar19 = (char *)&DAT_0080ee1a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar19 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar19 = pcVar19 + 1;
    }
    if (*(int *)(this_00 + 0x1a64) != 0) {
      ShowDescription(this_00,*(uint *)(this_00 + 0x1c93));
      *(undefined4 *)(this_00 + 0x1a64) = 0;
    }
    if (this_00[0x1a5f] != (ChooseMapTy)0x13) {
      uVar12 = (uint)(byte)this_00[0x1a5f];
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
    this_00[0x20b3] = (ChooseMapTy)0x1;
    this_00[0x20b4] = (ChooseMapTy)0x0;
    this_00[0x20b6] = (ChooseMapTy)0x0;
    this_00[0x20b5] = (ChooseMapTy)0x0;
    this_00[0x20b7] = (ChooseMapTy)0x0;
    (**(code **)(*(int *)this_00 + 8))();
    if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != 0) {
      local_28 = 0;
      local_24 = 0;
      local_2c = 0x10101;
      local_20 = 0;
      thunk_FUN_005b8f40(*(void **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),&local_2c);
    }
    break;
  case 0x6951:
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
    this_00[0x20b7] = (ChooseMapTy)0x1;
    this_00[0x20b6] = (ChooseMapTy)0x1;
    this_00[0x20b5] = (ChooseMapTy)0x1;
    this_00[0x20b3] = (ChooseMapTy)0x1;
    this_00[0x20b4] = (ChooseMapTy)0x1;
LAB_005b1108:
    (**(code **)(*(int *)this_00 + 8))();
    if (*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),1,0,1);
    }
  }
switchD_005b0c37_caseD_1:
  DAT_00858df8 = local_84;
  uVar8 = thunk_FUN_005b6430();
  return uVar8;
}

