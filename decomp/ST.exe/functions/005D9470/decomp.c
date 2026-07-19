
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::GetMessage */

undefined4 __thiscall SIDTy::GetMessage(SIDTy *this,int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  SIDTy *this_00;
  DWORD DVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  UINT UVar15;
  undefined4 unaff_ESI;
  int *piVar16;
  byte *pbVar17;
  void *unaff_EDI;
  char *pcVar18;
  byte *pbVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  InternalExceptionFrame local_64;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  SIDTy *local_10;
  uint local_c;
  uint *local_8;
  
  local_10 = this;
  DVar6 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar6;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar7 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar21 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x212,0,iVar7,&DAT_007a4ccc
                                ,s_SIDTy__GetMessage_007cd6d4);
    if (iVar21 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x212);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return uVar11;
  }
  thunk_FUN_005b6450(local_10,param_1);
  uVar12 = *(uint *)(param_1 + 0x10);
  if (uVar12 < 0x6980) {
    if (uVar12 != 0x697f) {
      if (uVar12 < 6) {
        if (uVar12 == 5) {
          PaintSID(this_00);
        }
        else if (uVar12 == 0) {
          NoneSID(this_00,unaff_EDI);
        }
        else if (uVar12 == 2) {
          InitSID(this_00);
        }
        else if (uVar12 == 3) {
          DoneSID(this_00);
        }
      }
      else if (uVar12 == 0x68ff) {
        this_00->field_1A5F = 0;
        this_00->field_002D = *(int *)(param_1 + 0x10) + 1;
        (**(code **)this_00->field_0000)(&this_00->field_0x1d);
      }
      else if (uVar12 == 0x6900) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        this_00->field_002D = 0x32;
        FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)&this_00->field_0x1d);
        if (*(int *)(this_00->field_1CD0 + 8) < 1) {
          pcVar8 = (char *)0x0;
        }
        else {
          pcVar8 = (char *)**(undefined4 **)(this_00->field_1CD0 + 0x14);
        }
        uVar12 = 0xffffffff;
        do {
          pcVar18 = pcVar8;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar18 = pcVar8 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar18;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        puVar1 = &this_00->field_1CD4;
        pcVar8 = pcVar18 + -uVar12;
        pcVar18 = puVar1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar18 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar18 = pcVar18 + 1;
        }
        FUN_006b7780(puVar1,puVar1);
        if (this_00->field_1CD4 != '\0') {
          if (this_00->field_1A5F == '\0') {
            local_8 = (uint *)0xffffffff;
            if (*(int *)(this_00->field_1CD0 + 8) < 1) {
              pcVar8 = (char *)0x0;
            }
            else {
              pcVar8 = (char *)**(undefined4 **)(this_00->field_1CD0 + 0x14);
            }
            Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar8,0x3f);
            puVar14 = (uint *)0x0;
            local_c = *(uint *)(this_00->field_1CCC + 8);
            puVar10 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar17 = (byte *)0x0;
                goto LAB_005d979c;
              }
              do {
                pbVar17 = *(byte **)(*(int *)(this_00->field_1CCC + 0x14) + (int)puVar14 * 4);
LAB_005d979c:
                pbVar19 = (byte *)&DAT_00807ddd;
                do {
                  bVar3 = *pbVar17;
                  bVar20 = bVar3 < *pbVar19;
                  if (bVar3 != *pbVar19) {
LAB_005d97c5:
                    iVar7 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar17[1];
                  bVar20 = bVar3 < pbVar19[1];
                  if (bVar3 != pbVar19[1]) goto LAB_005d97c5;
                  pbVar17 = pbVar17 + 2;
                  pbVar19 = pbVar19 + 2;
                } while (bVar3 != 0);
                iVar7 = 0;
LAB_005d97ca:
                puVar10 = puVar14;
              } while ((iVar7 != 0) &&
                      (puVar14 = (uint *)((int)puVar14 + 1), puVar10 = local_8,
                      (int)puVar14 < (int)local_c));
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
              this_00->field_0065 = 4;
              thunk_FUN_005b6730(this_00,2,'\x01',-1);
              FUN_006c18b0((uint)DAT_00807363);
            }
          }
          else {
            if (*(int *)(this_00->field_1CD0 + 8) < 1) {
              uVar11 = 0;
            }
            else {
              uVar11 = **(undefined4 **)(this_00->field_1CD0 + 0x14);
            }
            wsprintfA(&this_00->field_1CD4,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SAVEGAME__0079c19c,
                      uVar11);
            FUN_00725910(&this_00->field_1CD4,&DAT_007cc8bc,0,FUN_00725c20,0,0);
            PrepFiles(this_00);
            this_00->field_1A5F = 0;
            PaintExplanation(this_00);
            this_00->field_002D = 5;
            piVar16 = &this_00->field_1AF9;
            iVar7 = 2;
            do {
              if (*piVar16 != 0) {
                FUN_006e6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x1d);
              }
              piVar16 = piVar16 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
      }
      else if (uVar12 == 0x6901) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        if (this_00->field_1A5F == '\0') {
          if (((char)DAT_00807ddd != '\0') && (*(int *)(this_00->field_1CCC + 8) != 0)) {
            puVar1 = &this_00->field_0x1d;
            this_00->field_1A5F = 1;
            this_00->field_002D = 0x20;
            this_00->field_0031 = 0;
            FUN_006e6080(this_00,2,this_00->field_1AF1,(undefined4 *)puVar1);
            this_00->field_002D = 0x29;
            this_00->field_0031 = 0x19;
            FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)puVar1);
            this_00->field_002D = 5;
            piVar16 = &this_00->field_1AF9;
            local_8 = (uint *)0x2;
            do {
              if (*piVar16 != 0) {
                FUN_006e6080(this_00,2,*piVar16,(undefined4 *)puVar1);
              }
              piVar16 = piVar16 + 1;
              local_8 = (uint *)((int)local_8 - 1);
            } while (local_8 != (uint *)0x0);
            PaintExplanation(this_00);
          }
        }
        else {
          this_00->field_1A5F = 0;
          PaintExplanation(this_00);
          this_00->field_002D = 5;
          piVar16 = &this_00->field_1AF9;
          iVar7 = 2;
          do {
            if (*piVar16 != 0) {
              FUN_006e6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x1d);
            }
            piVar16 = piVar16 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          PrepFiles(this_00);
        }
      }
      goto cf_common_exit_005D9CCB;
    }
    iVar7 = this_00->field_1CC8;
    local_8 = *(uint **)(iVar7 + 0x14);
    if (local_8 == (uint *)0x0) {
      local_8 = (uint *)(((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 &
                         0x1ffffffc) * *(int *)(iVar7 + 8));
    }
    puVar9 = (undefined4 *)FUN_006b4fa0(iVar7);
    for (uVar12 = (uint)local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    for (uVar12 = (uint)local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar9 = 0xff;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),this_00->field_1CC8,0,0,0,0,0);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),(uint *)**(undefined4 **)(param_1 + 0x14),0,-1
                   ,2);
    uVar4 = *(ushort *)(param_1 + 0x18);
    if ((uVar4 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
      FUN_006b5b10(this_00->field_1CC8,0,(uint)uVar4,(uint)*(ushort *)(param_1 + 0x1a),(uint)uVar4,
                   *(ushort *)(param_1 + 0x1a) + 0xe,7,0xd);
    }
    iVar7 = this_00->field_1CC8;
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)this_00->field_1CB8,0,4,1,iVar7,0,0,0,*(int *)(iVar7 + 4),
               *(int *)(iVar7 + 8));
  }
  else {
    if (0x8163 < uVar12) {
      if (uVar12 == 0x8164) {
        puVar9 = &this_00->field_1B01;
      }
      else {
        if (uVar12 != 0x8165) {
          if (uVar12 == 0x8166) {
            uVar12 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
            this_00->field_1C43 = uVar12;
            if (this_00->field_1C27 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)this_00->field_1C6B,this_00->field_1C27,this_00->field_1C2B,
                         this_00->field_1C3F,uVar12);
            }
          }
          goto cf_common_exit_005D9CCB;
        }
        puVar9 = &this_00->field_1B92;
      }
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)puVar9,param_1,0);
      goto cf_common_exit_005D9CCB;
    }
    if (uVar12 == 0x8163) {
      iVar7 = *(int *)(this_00->field_1CCC + 8);
      if (iVar7 == 0) {
        iVar7 = this_00->field_1CD0;
        pcVar8 = (char *)&DAT_00807ddd;
      }
      else {
        if (*(int *)(param_1 + 0x14) < iVar7) {
          pcVar8 = *(char **)(*(int *)(this_00->field_1CCC + 0x14) + *(int *)(param_1 + 0x14) * 4);
        }
        else {
          pcVar8 = (char *)0x0;
        }
        Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar8,0x3f);
        if (*(int *)(param_1 + 0x14) < *(int *)(this_00->field_1CCC + 8)) {
          iVar7 = this_00->field_1CD0;
          pcVar8 = *(char **)(*(int *)(this_00->field_1CCC + 0x14) + *(int *)(param_1 + 0x14) * 4);
        }
        else {
          iVar7 = this_00->field_1CD0;
          pcVar8 = (char *)0x0;
        }
      }
      Library::DKW::TBL::FUN_006b6020(iVar7,0,pcVar8);
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1CD0;
      FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)&this_00->field_0x1d);
      goto cf_common_exit_005D9CCB;
    }
    if (0x8160 < uVar12) {
      if (uVar12 == 0x8161) {
        if ((int)(uint)*(ushort *)(param_1 + 0x14) < *(int *)(this_00->field_1CCC + 8)) {
          local_8 = *(uint **)(*(int *)(this_00->field_1CCC + 0x14) +
                              (uint)*(ushort *)(param_1 + 0x14) * 4);
        }
        else {
          local_8 = (uint *)0x0;
        }
        FUN_006b4170(this_00->field_1CB8,0,*(ushort *)(param_1 + 0x18) + 3,
                     *(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,0xff);
        iVar7 = this_00->field_1CBC;
        local_c = *(uint *)(iVar7 + 0x14);
        if (local_c == 0) {
          local_c = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc)
                    * *(int *)(iVar7 + 8);
        }
        puVar9 = (undefined4 *)FUN_006b4fa0(iVar7);
        for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined1 *)puVar9 = 0xff;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        if ((*(short *)(param_1 + 0x16) == 1) && (local_8 != (uint *)0x0)) {
          FUN_006b5ee0(this_00->field_1CB8,0,*(ushort *)(param_1 + 0x18) + 3,
                       *(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,0x87,0xd);
        }
        ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),this_00->field_1CBC,0,0,0,0,0);
        ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),local_8,0,-1,2);
        FUN_006b5440(this_00->field_1CB8,0,*(ushort *)(param_1 + 0x18) + 6,
                     *(ushort *)(param_1 + 0x1a) + 0x15,this_00->field_1CBC,0,0xff);
        FUN_006b35d0(DAT_008075a8,this_00->field_1CB4);
      }
      goto cf_common_exit_005D9CCB;
    }
    if (uVar12 == 0x8160) {
      *(undefined4 *)(param_1 + 0x18) = 0xe;
      goto cf_common_exit_005D9CCB;
    }
    if ((uVar12 < 0x6980) || (0x6981 < uVar12)) goto cf_common_exit_005D9CCB;
    piVar16 = *(int **)(param_1 + 0x18);
    local_c = CONCAT31(local_c._1_3_,*(char *)(param_1 + 0x10) + -0x7f);
    local_20 = *piVar16 + -0xe1;
    local_18 = piVar16[2];
    local_1c = piVar16[1] + -0x1a9;
    local_14 = piVar16[3];
    FUN_006b4170(this_00->field_1CB8,0,local_20,local_1c,local_18,local_14,0xff);
    MMObjTy::PaintButDib((MMObjTy *)this_00,this_00->field_1CB8,&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      UVar15 = (this_00->field_1A5F != '\0') + 0x24b8;
    }
    else {
      UVar15 = (-(uint)(this_00->field_1A5F != '\0') & 0xfffffffd) + 0x24bd;
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),this_00->field_1CB8,0,local_20,local_1c,
                     local_18,local_14);
    iVar7 = (*(short *)(param_1 + 0x14) != 1) + 2;
    iVar22 = -1;
    iVar21 = -1;
    puVar10 = (uint *)FUN_006b0140(UVar15,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar10,iVar21,iVar22,iVar7);
  }
  FUN_006b35d0(DAT_008075a8,this_00->field_1CB4);
cf_common_exit_005D9CCB:
  g_currentExceptionFrame = local_64.previous;
  uVar11 = MMObjTy::GetMessage((MMObjTy *)this_00,param_1);
  return uVar11;
}

