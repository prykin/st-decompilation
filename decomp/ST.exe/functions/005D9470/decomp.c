
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::GetMessage */

undefined4 __thiscall SIDTy::GetMessage(SIDTy *this,int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  code *pcVar5;
  SIDTy *this_00;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  UINT UVar14;
  undefined4 unaff_ESI;
  SIDTy *pSVar15;
  byte *pbVar16;
  void *unaff_EDI;
  SIDTy *pSVar17;
  char *pcVar18;
  SIDTy *pSVar19;
  byte *pbVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  InternalExceptionFrame local_64;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  SIDTy *local_10;
  uint local_c;
  uint *local_8;
  
  local_10 = this;
  uVar6 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x61) = uVar6;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar7 = __setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar22 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x212,0,iVar7,&DAT_007a4ccc
                                ,s_SIDTy__GetMessage_007cd6d4);
    if (iVar22 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x212);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return uVar6;
  }
  thunk_FUN_005b6450(local_10,param_1);
  uVar11 = *(uint *)(param_1 + 0x10);
  if (uVar11 < 0x6980) {
    if (uVar11 != 0x697f) {
      if (uVar11 < 6) {
        if (uVar11 == 5) {
          PaintSID(this_00);
        }
        else if (uVar11 == 0) {
          NoneSID(this_00,unaff_EDI);
        }
        else if (uVar11 == 2) {
          InitSID(this_00);
        }
        else if (uVar11 == 3) {
          DoneSID(this_00);
        }
      }
      else if (uVar11 == 0x68ff) {
        this_00[0x1a5f] = (SIDTy)0x0;
        *(int *)(this_00 + 0x2d) = *(int *)(param_1 + 0x10) + 1;
        (*(code *)**(undefined4 **)this_00)(this_00 + 0x1d);
      }
      else if (uVar11 == 0x6900) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        *(undefined4 *)(this_00 + 0x2d) = 0x32;
        FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1af5),(undefined4 *)(this_00 + 0x1d));
        if (*(int *)(*(int *)(this_00 + 0x1cd0) + 8) < 1) {
          pcVar8 = (char *)0x0;
        }
        else {
          pcVar8 = (char *)**(undefined4 **)(*(int *)(this_00 + 0x1cd0) + 0x14);
        }
        uVar11 = 0xffffffff;
        do {
          pcVar18 = pcVar8;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar18 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar18;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        pSVar15 = this_00 + 0x1cd4;
        pSVar17 = (SIDTy *)(pcVar18 + -uVar11);
        pSVar19 = pSVar15;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pSVar19 = *(undefined4 *)pSVar17;
          pSVar17 = pSVar17 + 4;
          pSVar19 = pSVar19 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pSVar19 = *pSVar17;
          pSVar17 = pSVar17 + 1;
          pSVar19 = pSVar19 + 1;
        }
        FUN_006b7780((char *)pSVar15,(char *)pSVar15);
        if (this_00[0x1cd4] != (SIDTy)0x0) {
          if (this_00[0x1a5f] == (SIDTy)0x0) {
            local_8 = (uint *)0xffffffff;
            if (*(int *)(*(int *)(this_00 + 0x1cd0) + 8) < 1) {
              pcVar8 = (char *)0x0;
            }
            else {
              pcVar8 = (char *)**(undefined4 **)(*(int *)(this_00 + 0x1cd0) + 0x14);
            }
            _strncpy((char *)&DAT_00807ddd,pcVar8,0x3f);
            puVar13 = (uint *)0x0;
            local_c = *(uint *)(*(int *)(this_00 + 0x1ccc) + 8);
            puVar10 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar16 = (byte *)0x0;
                goto LAB_005d979c;
              }
              do {
                pbVar16 = *(byte **)(*(int *)(*(int *)(this_00 + 0x1ccc) + 0x14) + (int)puVar13 * 4)
                ;
LAB_005d979c:
                pbVar20 = (byte *)&DAT_00807ddd;
                do {
                  bVar2 = *pbVar16;
                  bVar21 = bVar2 < *pbVar20;
                  if (bVar2 != *pbVar20) {
LAB_005d97c5:
                    iVar7 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar16[1];
                  bVar21 = bVar2 < pbVar20[1];
                  if (bVar2 != pbVar20[1]) goto LAB_005d97c5;
                  pbVar16 = pbVar16 + 2;
                  pbVar20 = pbVar20 + 2;
                } while (bVar2 != 0);
                iVar7 = 0;
LAB_005d97ca:
                puVar10 = puVar13;
              } while ((iVar7 != 0) &&
                      (puVar13 = (uint *)((int)puVar13 + 1), puVar10 = local_8,
                      (int)puVar13 < (int)local_c));
            }
            local_8 = puVar10;
            DAT_00807340 = 1;
            if ((int)local_8 < 0) {
              thunk_FUN_005738d0(&g_sound);
            }
            else {
              thunk_FUN_00572510(&g_sound);
            }
            if (DAT_00808446 != '\0') {
              DeleteCtrls(this_00);
              this_00[0x65] = (SIDTy)0x4;
              thunk_FUN_005b6730(this_00,2,'\x01',-1);
              FUN_006c18b0((uint)DAT_00807363);
            }
          }
          else {
            if (*(int *)(*(int *)(this_00 + 0x1cd0) + 8) < 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = **(undefined4 **)(*(int *)(this_00 + 0x1cd0) + 0x14);
            }
            wsprintfA((LPSTR)(this_00 + 0x1cd4),s__s_s_s_007c6edc,&DAT_00807680,
                      PTR_s_SAVEGAME__0079c19c,uVar6);
            FUN_00725910((char *)(this_00 + 0x1cd4),&DAT_007cc8bc,0,FUN_00725c20,0,0);
            PrepFiles(this_00);
            this_00[0x1a5f] = (SIDTy)0x0;
            PaintExplanation(this_00);
            *(undefined4 *)(this_00 + 0x2d) = 5;
            pSVar15 = this_00 + 0x1af9;
            iVar7 = 2;
            do {
              if (*(int *)pSVar15 != 0) {
                FUN_006e6080(this_00,2,*(int *)pSVar15,(undefined4 *)(this_00 + 0x1d));
              }
              pSVar15 = pSVar15 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
      }
      else if (uVar11 == 0x6901) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        if (this_00[0x1a5f] == (SIDTy)0x0) {
          if (((char)DAT_00807ddd != '\0') && (*(int *)(*(int *)(this_00 + 0x1ccc) + 8) != 0)) {
            pSVar15 = this_00 + 0x1d;
            this_00[0x1a5f] = (SIDTy)0x1;
            *(undefined4 *)(this_00 + 0x2d) = 0x20;
            *(undefined4 *)(this_00 + 0x31) = 0;
            FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1af1),(undefined4 *)pSVar15);
            *(undefined4 *)(this_00 + 0x2d) = 0x29;
            *(undefined4 *)(this_00 + 0x31) = 0x19;
            FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1af5),(undefined4 *)pSVar15);
            *(undefined4 *)(this_00 + 0x2d) = 5;
            pSVar17 = this_00 + 0x1af9;
            local_8 = (uint *)0x2;
            do {
              if (*(int *)pSVar17 != 0) {
                FUN_006e6080(this_00,2,*(int *)pSVar17,(undefined4 *)pSVar15);
              }
              pSVar17 = pSVar17 + 4;
              local_8 = (uint *)((int)local_8 - 1);
            } while (local_8 != (uint *)0x0);
            PaintExplanation(this_00);
          }
        }
        else {
          this_00[0x1a5f] = (SIDTy)0x0;
          PaintExplanation(this_00);
          *(undefined4 *)(this_00 + 0x2d) = 5;
          pSVar15 = this_00 + 0x1af9;
          iVar7 = 2;
          do {
            if (*(int *)pSVar15 != 0) {
              FUN_006e6080(this_00,2,*(int *)pSVar15,(undefined4 *)(this_00 + 0x1d));
            }
            pSVar15 = pSVar15 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          PrepFiles(this_00);
        }
      }
      goto LAB_005d9ccb;
    }
    iVar7 = *(int *)(this_00 + 0x1cc8);
    local_8 = *(uint **)(iVar7 + 0x14);
    if (local_8 == (uint *)0x0) {
      local_8 = (uint *)(((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 &
                         0x1ffffffc) * *(int *)(iVar7 + 8));
    }
    puVar9 = (undefined4 *)FUN_006b4fa0(iVar7);
    for (uVar11 = (uint)local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    for (uVar11 = (uint)local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar9 = 0xff;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_00 + 0x1cc8),0,0,0,0,0);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),(uint *)**(undefined4 **)(param_1 + 0x14),0,-1
                   ,2);
    uVar3 = *(ushort *)(param_1 + 0x18);
    if ((uVar3 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
      FUN_006b5b10(*(int *)(this_00 + 0x1cc8),0,(uint)uVar3,(uint)*(ushort *)(param_1 + 0x1a),
                   (uint)uVar3,*(ushort *)(param_1 + 0x1a) + 0xe,7,0xd);
    }
    iVar7 = *(int *)(this_00 + 0x1cc8);
    FUN_006b55f0(*(undefined4 **)(this_00 + 0x1cb8),0,4,1,iVar7,0,0,0,*(int *)(iVar7 + 4),
                 *(int *)(iVar7 + 8));
  }
  else {
    if (0x8163 < uVar11) {
      if (uVar11 == 0x8164) {
        pSVar15 = this_00 + 0x1b01;
      }
      else {
        if (uVar11 != 0x8165) {
          if (uVar11 == 0x8166) {
            uVar11 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
            *(uint *)(this_00 + 0x1c43) = uVar11;
            if (*(uint *)(this_00 + 0x1c27) != 0xffffffff) {
              FUN_006b3730(*(uint **)(this_00 + 0x1c6b),*(uint *)(this_00 + 0x1c27),
                           *(uint *)(this_00 + 0x1c2b),*(uint *)(this_00 + 0x1c3f),uVar11);
            }
          }
          goto LAB_005d9ccb;
        }
        pSVar15 = this_00 + 0x1b92;
      }
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)pSVar15,param_1,0);
      goto LAB_005d9ccb;
    }
    if (uVar11 == 0x8163) {
      iVar7 = *(int *)(*(int *)(this_00 + 0x1ccc) + 8);
      if (iVar7 == 0) {
        iVar7 = *(int *)(this_00 + 0x1cd0);
        pcVar8 = (char *)&DAT_00807ddd;
      }
      else {
        if (*(int *)(param_1 + 0x14) < iVar7) {
          pcVar8 = *(char **)(*(int *)(*(int *)(this_00 + 0x1ccc) + 0x14) +
                             *(int *)(param_1 + 0x14) * 4);
        }
        else {
          pcVar8 = (char *)0x0;
        }
        _strncpy((char *)&DAT_00807ddd,pcVar8,0x3f);
        if (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(this_00 + 0x1ccc) + 8)) {
          iVar7 = *(int *)(this_00 + 0x1cd0);
          pcVar8 = *(char **)(*(int *)(*(int *)(this_00 + 0x1ccc) + 0x14) +
                             *(int *)(param_1 + 0x14) * 4);
        }
        else {
          iVar7 = *(int *)(this_00 + 0x1cd0);
          pcVar8 = (char *)0x0;
        }
      }
      FUN_006b6020(iVar7,0,pcVar8);
      *(undefined4 *)(this_00 + 0x2d) = 0x33;
      *(undefined4 *)(this_00 + 0x31) = *(undefined4 *)(this_00 + 0x1cd0);
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1af5),(undefined4 *)(this_00 + 0x1d));
      goto LAB_005d9ccb;
    }
    if (0x8160 < uVar11) {
      if (uVar11 == 0x8161) {
        if ((int)(uint)*(ushort *)(param_1 + 0x14) < *(int *)(*(int *)(this_00 + 0x1ccc) + 8)) {
          local_8 = *(uint **)(*(int *)(*(int *)(this_00 + 0x1ccc) + 0x14) +
                              (uint)*(ushort *)(param_1 + 0x14) * 4);
        }
        else {
          local_8 = (uint *)0x0;
        }
        FUN_006b4170(*(int *)(this_00 + 0x1cb8),0,*(ushort *)(param_1 + 0x18) + 3,
                     *(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,0xff);
        iVar7 = *(int *)(this_00 + 0x1cbc);
        local_c = *(uint *)(iVar7 + 0x14);
        if (local_c == 0) {
          local_c = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc)
                    * *(int *)(iVar7 + 8);
        }
        puVar9 = (undefined4 *)FUN_006b4fa0(iVar7);
        for (uVar11 = local_c >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        for (uVar11 = local_c & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = 0xff;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        if ((*(short *)(param_1 + 0x16) == 1) && (local_8 != (uint *)0x0)) {
          FUN_006b5ee0(*(int *)(this_00 + 0x1cb8),0,*(ushort *)(param_1 + 0x18) + 3,
                       *(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,0x87,0xd);
        }
        ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_00 + 0x1cbc),0,0,0,0,0);
        ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),local_8,0,-1,2);
        FUN_006b5440(*(int *)(this_00 + 0x1cb8),0,*(ushort *)(param_1 + 0x18) + 6,
                     *(ushort *)(param_1 + 0x1a) + 0x15,*(int *)(this_00 + 0x1cbc),0,0xff);
        FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1cb4));
      }
      goto LAB_005d9ccb;
    }
    if (uVar11 == 0x8160) {
      *(undefined4 *)(param_1 + 0x18) = 0xe;
      goto LAB_005d9ccb;
    }
    if ((uVar11 < 0x6980) || (0x6981 < uVar11)) goto LAB_005d9ccb;
    piVar4 = *(int **)(param_1 + 0x18);
    local_c = CONCAT31(local_c._1_3_,*(char *)(param_1 + 0x10) + -0x7f);
    local_20 = *piVar4 + -0xe1;
    local_18 = piVar4[2];
    local_1c = piVar4[1] + -0x1a9;
    local_14 = piVar4[3];
    FUN_006b4170(*(int *)(this_00 + 0x1cb8),0,local_20,local_1c,local_18,local_14,0xff);
    MMObjTy::PaintButDib((MMObjTy *)this_00,*(int *)(this_00 + 0x1cb8),&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      UVar14 = (this_00[0x1a5f] != (SIDTy)0x0) + 0x24b8;
    }
    else {
      UVar14 = (-(uint)(this_00[0x1a5f] != (SIDTy)0x0) & 0xfffffffd) + 0x24bd;
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_00 + 0x1cb8),0,local_20,
                     local_1c,local_18,local_14);
    iVar7 = (*(short *)(param_1 + 0x14) != 1) + 2;
    iVar23 = -1;
    iVar22 = -1;
    puVar10 = (uint *)FUN_006b0140(UVar14,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar10,iVar22,iVar23,iVar7);
  }
  FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1cb4));
LAB_005d9ccb:
  g_currentExceptionFrame = local_64.previous;
  uVar6 = thunk_FUN_005b6430();
  return uVar6;
}

