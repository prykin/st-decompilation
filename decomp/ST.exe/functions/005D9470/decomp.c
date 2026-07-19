
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::GetMessage */

undefined4 __thiscall SIDTy::GetMessage(SIDTy *this,int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
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
  int *piVar15;
  byte *pbVar16;
  void *unaff_EDI;
  char *pcVar17;
  byte *pbVar18;
  bool bVar19;
  int iVar20;
  undefined1 *puVar21;
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
  uVar6 = FUN_006e51b0(this->field_0010);
  this->field_0061 = uVar6;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar7 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar20 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x212,0,iVar7,&DAT_007a4ccc
                                ,s_SIDTy__GetMessage_007cd6d4);
    if (iVar20 == 0) {
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
        puVar9 = *(undefined4 **)this_00;
        this_00[0x42].field_0x55 = 0;
        *(int *)&this_00->field_0x2d = *(int *)(param_1 + 0x10) + 1;
        (*(code *)*puVar9)(&this_00->field_0x1d);
      }
      else if (uVar11 == 0x6900) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        uVar6 = *(undefined4 *)&this_00[0x44].field_0x21;
        *(undefined4 *)&this_00->field_0x2d = 0x32;
        FUN_006e6080(this_00,2,uVar6,(undefined4 *)&this_00->field_0x1d);
        if (*(int *)(*(int *)&this_00[0x49].field_0x3 + 8) < 1) {
          pcVar8 = (char *)0x0;
        }
        else {
          pcVar8 = (char *)**(undefined4 **)(*(int *)&this_00[0x49].field_0x3 + 0x14);
        }
        uVar11 = 0xffffffff;
        do {
          pcVar17 = pcVar8;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar17 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar17;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        puVar21 = &this_00[0x49].field_0x7;
        pcVar8 = pcVar17 + -uVar11;
        pcVar17 = puVar21;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar17 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar17 = pcVar17 + 1;
        }
        FUN_006b7780(puVar21,puVar21);
        if (this_00[0x49].field_0x7 != '\0') {
          if (this_00[0x42].field_0x55 == '\0') {
            local_8 = (uint *)0xffffffff;
            if (*(int *)(*(int *)&this_00[0x49].field_0x3 + 8) < 1) {
              pcVar8 = (char *)0x0;
            }
            else {
              pcVar8 = (char *)**(undefined4 **)(*(int *)&this_00[0x49].field_0x3 + 0x14);
            }
            Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar8,0x3f);
            puVar13 = (uint *)0x0;
            local_c = *(uint *)(*(int *)((int)&this_00[0x48].field_0061 + 3) + 8);
            puVar10 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar16 = (byte *)0x0;
                goto LAB_005d979c;
              }
              do {
                pbVar16 = *(byte **)(*(int *)(*(int *)((int)&this_00[0x48].field_0061 + 3) + 0x14) +
                                    (int)puVar13 * 4);
LAB_005d979c:
                pbVar18 = (byte *)&DAT_00807ddd;
                do {
                  bVar2 = *pbVar16;
                  bVar19 = bVar2 < *pbVar18;
                  if (bVar2 != *pbVar18) {
LAB_005d97c5:
                    iVar7 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar16[1];
                  bVar19 = bVar2 < pbVar18[1];
                  if (bVar2 != pbVar18[1]) goto LAB_005d97c5;
                  pbVar16 = pbVar16 + 2;
                  pbVar18 = pbVar18 + 2;
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
              *(undefined1 *)(this_00 + 1) = 4;
              thunk_FUN_005b6730(this_00,2,'\x01',-1);
              FUN_006c18b0((uint)DAT_00807363);
            }
          }
          else {
            if (*(int *)(*(int *)&this_00[0x49].field_0x3 + 8) < 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = **(undefined4 **)(*(int *)&this_00[0x49].field_0x3 + 0x14);
            }
            wsprintfA(&this_00[0x49].field_0x7,s__s_s_s_007c6edc,&DAT_00807680,
                      PTR_s_SAVEGAME__0079c19c,uVar6);
            FUN_00725910(&this_00[0x49].field_0x7,&DAT_007cc8bc,0,FUN_00725c20,0,0);
            PrepFiles(this_00);
            this_00[0x42].field_0x55 = 0;
            PaintExplanation(this_00);
            *(undefined4 *)&this_00->field_0x2d = 5;
            piVar15 = (int *)&this_00[0x44].field_0x25;
            iVar7 = 2;
            do {
              if (*piVar15 != 0) {
                FUN_006e6080(this_00,2,*piVar15,(undefined4 *)&this_00->field_0x1d);
              }
              piVar15 = piVar15 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
      }
      else if (uVar11 == 0x6901) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        if (this_00[0x42].field_0x55 == '\0') {
          if (((char)DAT_00807ddd != '\0') &&
             (*(int *)(*(int *)((int)&this_00[0x48].field_0061 + 3) + 8) != 0)) {
            uVar6 = *(undefined4 *)&this_00[0x44].field_0x1d;
            puVar21 = &this_00->field_0x1d;
            this_00[0x42].field_0x55 = 1;
            *(undefined4 *)&this_00->field_0x2d = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 0;
            FUN_006e6080(this_00,2,uVar6,(undefined4 *)puVar21);
            uVar6 = *(undefined4 *)&this_00[0x44].field_0x21;
            *(undefined4 *)&this_00->field_0x2d = 0x29;
            *(undefined4 *)&this_00->field_0x31 = 0x19;
            FUN_006e6080(this_00,2,uVar6,(undefined4 *)puVar21);
            *(undefined4 *)&this_00->field_0x2d = 5;
            piVar15 = (int *)&this_00[0x44].field_0x25;
            local_8 = (uint *)0x2;
            do {
              if (*piVar15 != 0) {
                FUN_006e6080(this_00,2,*piVar15,(undefined4 *)puVar21);
              }
              piVar15 = piVar15 + 1;
              local_8 = (uint *)((int)local_8 - 1);
            } while (local_8 != (uint *)0x0);
            PaintExplanation(this_00);
          }
        }
        else {
          this_00[0x42].field_0x55 = 0;
          PaintExplanation(this_00);
          *(undefined4 *)&this_00->field_0x2d = 5;
          piVar15 = (int *)&this_00[0x44].field_0x25;
          iVar7 = 2;
          do {
            if (*piVar15 != 0) {
              FUN_006e6080(this_00,2,*piVar15,(undefined4 *)&this_00->field_0x1d);
            }
            piVar15 = piVar15 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          PrepFiles(this_00);
        }
      }
      goto LAB_005d9ccb;
    }
    iVar7 = *(int *)&this_00[0x48].field_0x60;
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
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)&this_00[0x48].field_0x60,0,0,0,0,0)
    ;
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),(uint *)**(undefined4 **)(param_1 + 0x14),0,-1
                   ,2);
    uVar3 = *(ushort *)(param_1 + 0x18);
    if ((uVar3 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
      FUN_006b5b10(*(int *)&this_00[0x48].field_0x60,0,(uint)uVar3,(uint)*(ushort *)(param_1 + 0x1a)
                   ,(uint)uVar3,*(ushort *)(param_1 + 0x1a) + 0xe,7,0xd);
    }
    iVar7 = *(int *)&this_00[0x48].field_0x60;
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)&this_00[0x48].field_0x50,0,4,1,iVar7,0,0,0,*(int *)(iVar7 + 4),
               *(int *)(iVar7 + 8));
  }
  else {
    if (0x8163 < uVar11) {
      if (uVar11 == 0x8164) {
        puVar21 = &this_00[0x44].field_0x2d;
      }
      else {
        if (uVar11 != 0x8165) {
          if (uVar11 == 0x8166) {
            uVar11 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
            *(uint *)&this_00[0x47].field_0x40 = uVar11;
            if (*(uint *)&this_00[0x47].field_0x24 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)&this_00[0x48].field_0x3,*(uint *)&this_00[0x47].field_0x24,
                         *(uint *)&this_00[0x47].field_0x28,*(uint *)&this_00[0x47].field_0x3c,
                         uVar11);
            }
          }
          goto LAB_005d9ccb;
        }
        puVar21 = &this_00[0x45].field_0x59;
      }
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)puVar21,param_1,0);
      goto LAB_005d9ccb;
    }
    if (uVar11 == 0x8163) {
      iVar7 = *(int *)((int)&this_00[0x48].field_0061 + 3);
      iVar20 = *(int *)(iVar7 + 8);
      if (iVar20 == 0) {
        iVar7 = *(int *)&this_00[0x49].field_0x3;
        pcVar8 = (char *)&DAT_00807ddd;
      }
      else {
        if (*(int *)(param_1 + 0x14) < iVar20) {
          pcVar8 = *(char **)(*(int *)(iVar7 + 0x14) + *(int *)(param_1 + 0x14) * 4);
        }
        else {
          pcVar8 = (char *)0x0;
        }
        Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar8,0x3f);
        iVar20 = *(int *)((int)&this_00[0x48].field_0061 + 3);
        if (*(int *)(param_1 + 0x14) < *(int *)(iVar20 + 8)) {
          iVar7 = *(int *)&this_00[0x49].field_0x3;
          pcVar8 = *(char **)(*(int *)(iVar20 + 0x14) + *(int *)(param_1 + 0x14) * 4);
        }
        else {
          iVar7 = *(int *)&this_00[0x49].field_0x3;
          pcVar8 = (char *)0x0;
        }
      }
      Library::DKW::TBL::FUN_006b6020(iVar7,0,pcVar8);
      uVar6 = *(undefined4 *)&this_00[0x44].field_0x21;
      uVar4 = *(undefined4 *)&this_00[0x49].field_0x3;
      *(undefined4 *)&this_00->field_0x2d = 0x33;
      *(undefined4 *)&this_00->field_0x31 = uVar4;
      FUN_006e6080(this_00,2,uVar6,(undefined4 *)&this_00->field_0x1d);
      goto LAB_005d9ccb;
    }
    if (0x8160 < uVar11) {
      if (uVar11 == 0x8161) {
        iVar7 = *(int *)((int)&this_00[0x48].field_0061 + 3);
        if ((int)(uint)*(ushort *)(param_1 + 0x14) < *(int *)(iVar7 + 8)) {
          local_8 = *(uint **)(*(int *)(iVar7 + 0x14) + (uint)*(ushort *)(param_1 + 0x14) * 4);
        }
        else {
          local_8 = (uint *)0x0;
        }
        FUN_006b4170(*(int *)&this_00[0x48].field_0x50,0,*(ushort *)(param_1 + 0x18) + 3,
                     *(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,0xff);
        iVar7 = *(int *)&this_00[0x48].field_0x54;
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
          FUN_006b5ee0(*(int *)&this_00[0x48].field_0x50,0,*(ushort *)(param_1 + 0x18) + 3,
                       *(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,0x87,0xd);
        }
        ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)&this_00[0x48].field_0x54,0,0,0,
                         0,0);
        ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),local_8,0,-1,2);
        FUN_006b5440(*(int *)&this_00[0x48].field_0x50,0,*(ushort *)(param_1 + 0x18) + 6,
                     *(ushort *)(param_1 + 0x1a) + 0x15,*(int *)&this_00[0x48].field_0x54,0,0xff);
        FUN_006b35d0(DAT_008075a8,*(uint *)&this_00[0x48].field_0x4c);
      }
      goto LAB_005d9ccb;
    }
    if (uVar11 == 0x8160) {
      *(undefined4 *)(param_1 + 0x18) = 0xe;
      goto LAB_005d9ccb;
    }
    if ((uVar11 < 0x6980) || (0x6981 < uVar11)) goto LAB_005d9ccb;
    piVar15 = *(int **)(param_1 + 0x18);
    local_c = CONCAT31(local_c._1_3_,*(char *)(param_1 + 0x10) + -0x7f);
    local_20 = *piVar15 + -0xe1;
    local_18 = piVar15[2];
    local_1c = piVar15[1] + -0x1a9;
    local_14 = piVar15[3];
    FUN_006b4170(*(int *)&this_00[0x48].field_0x50,0,local_20,local_1c,local_18,local_14,0xff);
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)&this_00[0x48].field_0x50,&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      UVar14 = (this_00[0x42].field_0x55 != '\0') + 0x24b8;
    }
    else {
      UVar14 = (-(uint)(this_00[0x42].field_0x55 != '\0') & 0xfffffffd) + 0x24bd;
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)&this_00[0x48].field_0x50,0,local_20
                     ,local_1c,local_18,local_14);
    iVar7 = (*(short *)(param_1 + 0x14) != 1) + 2;
    iVar22 = -1;
    iVar20 = -1;
    puVar10 = (uint *)FUN_006b0140(UVar14,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar10,iVar20,iVar22,iVar7);
  }
  FUN_006b35d0(DAT_008075a8,*(uint *)&this_00[0x48].field_0x4c);
LAB_005d9ccb:
  g_currentExceptionFrame = local_64.previous;
  uVar6 = MMObjTy::GetMessage((MMObjTy *)this_00,param_1);
  return uVar6;
}

