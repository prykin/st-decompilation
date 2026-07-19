
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelSI */

void __thiscall CPanelTy::Update4PanelSI(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  ccFntTy *this_01;
  char cVar11;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  char *pcVar12;
  short *psVar13;
  int *piVar14;
  void *unaff_EDI;
  int *piVar15;
  undefined4 *puVar16;
  short *psVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined4 local_140 [4];
  undefined4 local_130;
  undefined4 local_120 [4];
  undefined4 local_110;
  undefined4 local_100 [4];
  undefined4 local_f0;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  InternalExceptionFrame local_c0;
  CPanelTy *local_7c;
  int local_78;
  char local_74;
  char local_73;
  char local_72;
  char local_71;
  char local_70;
  short local_6f [6];
  char local_63;
  short local_62 [3];
  char local_5c;
  Global_sub_00526BA0_param_1Enum local_5b;
  int local_57;
  ushort local_51;
  ushort local_4d;
  byte local_49 [5];
  byte local_44;
  byte local_43;
  short local_3e;
  char local_3c;
  char local_3a;
  char local_31;
  int local_20;
  Global_sub_00526BA0_param_1Enum *local_1c;
  uint local_18;
  uint local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  uint local_c;
  uint local_8;
  
  local_c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c0;
  local_7c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_c0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_7c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_c0.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x8ae,0,iVar3,&DAT_007a4ccc
                               ,s_CPanelTy__Update4PanelSI_007c2900);
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x8ae);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar18 = &local_7c->field_0BF5;
  piVar14 = puVar18;
  piVar15 = &local_78;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar15 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar15 = piVar15 + 1;
  }
  puVar16 = puVar18;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  STAllPlayersC::GetPanelInfo(DAT_007fa174,4,puVar18);
  cVar10 = this_00->field_0BFA;
  if ((local_73 != cVar10) || (local_72 != this_00->field_0BFB)) {
cf_common_exit_0050E007:
    PaintCtrlObjSI(this_00);
    SetControlObjSI(this_00,'\x01');
    thunk_FUN_00506040((int)this_00);
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  if ((this_00->field_0BFB == '\x02') && (cVar10 == '\x01')) {
    cVar10 = '\0';
    cVar11 = '\0';
    uVar4 = 0;
    do {
      if ((&this_00->field_0BFE)[uVar4] != '\0') {
        cVar11 = cVar11 + '\x01';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
    uVar4 = 0;
    do {
      if (*(char *)((int)local_6f + uVar4) != '\0') {
        cVar10 = cVar10 + '\x01';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
    if (cVar11 == cVar10) {
      iVar3 = 3;
      bVar19 = true;
      psVar13 = (short *)&this_00->field_0BFE;
      psVar17 = local_6f;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar19 = *psVar13 == *psVar17;
        psVar13 = psVar13 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar19);
      if (bVar19) {
        if (this_00->field_0BFD != local_70) {
          thunk_FUN_004f1610(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
        local_c = local_c & 0xffffff00;
        pcVar12 = &this_00->field_0BFE;
        do {
          if (*pcVar12 != '\0') {
            thunk_FUN_004f17d0(this_00,0,(byte)local_c);
          }
          bVar2 = (char)local_c + 1;
          pcVar12 = pcVar12 + 1;
          local_c = CONCAT31(local_c._1_3_,bVar2);
        } while (bVar2 < 6);
        thunk_FUN_004f1610(this_00,'\0');
        thunk_FUN_0054a8d0(DAT_00802a30);
      }
      iVar3 = 3;
      bVar19 = true;
      psVar13 = (short *)&this_00->field_0C04;
      psVar17 = local_6f + 3;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar19 = *psVar13 == *psVar17;
        psVar13 = psVar13 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar19);
      if ((!bVar19) || (this_00->field_0BFC != local_71)) {
        thunk_FUN_004f4570(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_78);
      }
    }
    else {
      SetControlObjSI(this_00,'\x01');
    }
    if (((this_00->field_0C0A != local_63) || (this_00->field_0BFC != local_71)) &&
       (this_00->field_09C4 != 0)) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar4;
      FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
    }
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (this_00->field_0C24 != local_49[0]) {
        uVar4 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          local_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
            DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_8 < 0x21) {
          iVar3 = local_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
            DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,0x5c,0x50,this_00->field_09E1,0,0x5c,10,0x3c,
                   0x1e);
        PaintCostsXYSI(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
        if (-1 < (int)this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
    }
    else {
      PaintCtrlObjSI(this_00);
      SetControlObjSI(this_00,'\0');
      thunk_FUN_00506040((int)this_00);
    }
    if (this_00->field_0C4D == local_20) {
      g_currentExceptionFrame = local_c0.previous;
      return;
    }
    PaintIDSObj(this_00);
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  if (cVar10 != '\x01') {
    if (cVar10 != '\x04') {
      g_currentExceptionFrame = local_c0.previous;
      return;
    }
    if (local_78 == this_00->field_0BF5) {
      switch(this_00->field_0BF5) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfd:
      case 0xfe:
        goto switchD_0050c9ae_caseD_dd;
      default:
        g_currentExceptionFrame = local_c0.previous;
        return;
      }
    }
    goto cf_common_exit_0050E007;
  }
  if ((local_78 != this_00->field_0BF5) || (local_74 != this_00->field_0BF9))
  goto cf_common_exit_0050E007;
  cVar10 = '\0';
  cVar11 = '\0';
  uVar4 = 0;
  do {
    if ((&this_00->field_0BFE)[uVar4] != '\0') {
      cVar11 = cVar11 + '\x01';
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  uVar4 = 0;
  do {
    if (*(char *)((int)local_6f + uVar4) != '\0') {
      cVar10 = cVar10 + '\x01';
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  if (cVar11 == cVar10) {
    iVar3 = 3;
    bVar19 = true;
    psVar13 = (short *)&this_00->field_0BFE;
    psVar17 = local_6f;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar19 = *psVar13 == *psVar17;
      psVar13 = psVar13 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar19);
    if (bVar19) {
      if (this_00->field_0BFD != local_70) {
        thunk_FUN_004f1610(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
      local_c = local_c & 0xffffff00;
      pcVar12 = &this_00->field_0BFE;
      do {
        if (*pcVar12 != '\0') {
          thunk_FUN_004f17d0(this_00,0,(byte)local_c);
        }
        bVar2 = (char)local_c + 1;
        pcVar12 = pcVar12 + 1;
        local_c = CONCAT31(local_c._1_3_,bVar2);
      } while (bVar2 < 6);
      thunk_FUN_004f1610(this_00,'\0');
      thunk_FUN_0054a8d0(DAT_00802a30);
    }
    iVar3 = 3;
    bVar19 = true;
    psVar13 = (short *)&this_00->field_0C04;
    psVar17 = local_6f + 3;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar19 = *psVar13 == *psVar17;
      psVar13 = psVar13 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar19);
    if ((!bVar19) || (this_00->field_0BFC != local_71)) {
      thunk_FUN_004f4570(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_78);
    }
  }
  else {
    SetControlObjSI(this_00,'\x01');
  }
  if (((this_00->field_0C0A != local_63) || (this_00->field_0BFC != local_71)) &&
     (this_00->field_09C4 != 0)) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar4;
    FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
  }
  iVar3 = 3;
  bVar19 = true;
  psVar13 = (short *)&this_00->field_0xc0b;
  psVar17 = local_62;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar19 = *psVar13 == *psVar17;
    psVar13 = psVar13 + 1;
    psVar17 = psVar17 + 1;
  } while (bVar19);
  if ((!bVar19) || (this_00->field_0BFC != local_71)) {
    uVar4 = 0;
    piVar14 = &this_00->field_0B1F;
    do {
      if (*piVar14 != 0) {
        this_00->field_0028 = 0x20;
        if (this_00->field_0BFC == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = (uint)(byte)(&this_00->field_0xc0b)[uVar4];
        }
        *(uint *)&this_00->field_0x2c = uVar6;
        FUN_006e6080(this_00,2,*piVar14,(undefined4 *)&this_00->field_0x18);
      }
      uVar4 = uVar4 + 1;
      piVar14 = piVar14 + 1;
    } while (uVar4 < 6);
  }
  switch(this_00->field_0BF5) {
  case 0x53:
    cVar10 = this_00->field_0C3C;
    if (local_31 == cVar10) {
      if (cVar10 == '\x01') {
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,0x5c,0x50,this_00->field_09E1,0,0x5c,10,0x32,
                   0x19);
        PaintDamageXY(this_00,this_00->field_0194,0x5c,0x50,
                      CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0xc3d),0x2714);
        uVar4 = (uint)(*(int *)&this_00->field_0xc3d * 0x21) / 100;
        local_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          local_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
            DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_8 < 0x21) {
          iVar3 = local_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
            DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
      }
      else if (cVar10 == '\x02') {
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,0x28,0x79,this_00->field_09E1,0,0x28,0x33,
                   0x9b,0xf);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)&this_00->field_0xc3d);
        ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
        ccFntTy::WrStr(this_00->field_01BC,&DAT_0080f33a,-1,-1,1);
      }
      else if (cVar10 == '\x04') {
        if (this_00->field_0C31 == local_3c) {
          if (this_00->field_0C33 != local_3a) {
            Library::DKW::WGR::FUN_006b55f0
                      ((undefined4 *)this_00->field_0194,0,0x5c,0x50,this_00->field_09E1,0,0x5c,10,
                       0x32,0x19);
            PaintPerResSI(this_00);
          }
        }
        else {
          PaintCtrlObjSI(this_00);
          SetControlObjSI(this_00,'\x01');
          thunk_FUN_00506040((int)this_00);
        }
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
      break;
    }
    goto LAB_0050ce3f;
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    if (this_00->field_0C31 == local_3c) {
      if (this_00->field_0C31 == '\0') {
        if (this_00->field_0C2F != local_3e) {
          PaintCtrlObj(this_00,1);
          iVar3 = this_00->field_0302;
          if (iVar3 != 0) {
            puVar18 = local_120;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            local_110 = 5;
            FUN_006e6080(this_00,2,iVar3,local_120);
          }
        }
      }
      else if (this_00->field_0C33 != local_3a) {
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,0x5c,0x50,this_00->field_09E1,0,0x5c,10,0x32,
                   0x19);
        PaintPerResSI(this_00);
        if (-1 < (int)this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
      break;
    }
LAB_0050ce3f:
    PaintCtrlObjSI(this_00);
    SetControlObjSI(this_00,'\x01');
    thunk_FUN_00506040((int)this_00);
    break;
  case 0x5b:
    PaintArsenal(this_00);
    uVar4 = 0;
    do {
      if ((&this_00->field_0A15)[uVar4] != 0) {
        if (uVar4 == 3) {
          if (this_00->field_09D4 == '\x01') {
            this_00->field_0xaa2 = 0;
            this_00->field_0028 = 0x20;
            *(undefined4 *)&this_00->field_0x2c = 0;
            uVar20 = *(undefined4 *)&this_00->field_0xa21;
          }
          else {
            this_00->field_0xaa2 = 2;
            uVar20 = thunk_FUN_00525ef0(this_00->field_09D4 + CASE_2,3);
            *(undefined4 *)&this_00->field_0xaa3 = uVar20;
            if (this_00->field_0BFC == local_71) {
              this_00->field_0028 = 5;
              uVar20 = *(undefined4 *)&this_00->field_0xa21;
            }
            else {
              this_00->field_0028 = 0x20;
              *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
              uVar20 = *(undefined4 *)&this_00->field_0xa21;
            }
          }
        }
        else {
          uVar20 = thunk_FUN_00525ef0(this_00->field_09D4 + CASE_2,(char)uVar4);
          *(undefined4 *)(&this_00->field_0xa2e + uVar4 * 0x27) = uVar20;
          if (this_00->field_0BFC == local_71) {
            this_00->field_0028 = 5;
            uVar20 = (&this_00->field_0A15)[uVar4];
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
            uVar20 = (&this_00->field_0A15)[uVar4];
          }
        }
        FUN_006e6080(this_00,2,uVar20,(undefined4 *)&this_00->field_0x18);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    if (-1 < (int)this_00->field_015C) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,this_00->field_00A8
                );
    }
    break;
  case 0x5c:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (this_00->field_0C24 != local_49[0]) {
        uVar4 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          local_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
            DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_8 < 0x21) {
          iVar3 = local_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
            DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,0x5c,0x50,this_00->field_09E1,0,0x5c,10,0x3c,
                   0x1e);
        PaintCostsXYSI(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
        if (-1 < (int)this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
    }
    else {
      PaintCtrlObjSI(this_00);
      SetControlObjSI(this_00,'\0');
      thunk_FUN_00506040((int)this_00);
    }
    break;
  case 0x5d:
    DibPut((undefined4 *)this_00->field_0194,0,0x46,'\x01',(byte *)this_00->field_09E1);
    PaintBioSonar(this_00);
    break;
  case 0x5e:
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,(uint)(ushort)this_00->field_0C34);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,4);
    if (-1 < (int)this_00->field_015C) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,this_00->field_00A8
                );
    }
    break;
  case 0x61:
    if (this_00->field_0C2A != local_43) {
      uVar4 = ((uint)(byte)this_00->field_0C2A * 0x21) / 100;
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x5d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x5d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09E1,0,0x15,0x22,0xc3,
                                           0xc,0);
      if (pbVar5 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28e0,(uint)(byte)this_00->field_0C2A);
        ccFntTy::WrStr(this_00->field_01B8,&DAT_0080f33a,-1,-1,5);
        DibPut((undefined4 *)this_00->field_0194,0x15,0x68,'\x01',pbVar5);
        ccFntTy::EraseSufr(this_00->field_01B8);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (this_00->field_0C29 != local_44) {
      uVar4 = (uint)(byte)this_00->field_0C29;
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    break;
  case 0x62:
    if ((*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) ||
       (this_00->field_0C16 != local_57)) {
      pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,this_00->field_09F5,0,0x7f,0x20,0x24,
                                           0xb,0);
      if (pbVar5 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)&this_00->field_0xc12);
        ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
        DibPut((undefined4 *)this_00->field_0194,0x7f,0x66,'\x01',pbVar5);
        ccFntTy::EraseSufr(this_00->field_01C4);
      }
      pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,this_00->field_09F5,0,0xa5,9,0x24,0xb
                                           ,0);
      if (pbVar5 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,this_00->field_0C16);
        ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,4);
        DibPut((undefined4 *)this_00->field_0194,0xa5,0x4f,'\x01',pbVar5);
        ccFntTy::EraseSufr(this_00->field_01C4);
      }
      uVar4 = this_00->field_0C16;
      if (uVar4 < *(uint *)&this_00->field_0xc12) {
        uVar4 = 0x21;
      }
      else if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(uint *)&this_00->field_0xc12 * 0x21) / uVar4;
      }
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    break;
  case 99:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) {
      PaintCtrlObjSI(this_00);
      iVar3 = this_00->field_0302;
      if (iVar3 != 0) {
        puVar18 = local_e0;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        local_d0 = 5;
        FUN_006e6080(this_00,2,iVar3,local_e0);
      }
      break;
    }
    if (this_00->field_0C24 != local_49[0]) {
      uVar4 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (((this_00->field_0C1C == local_51) && (this_00->field_0C20 == local_4d)) ||
       (pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,this_00->field_09DD,0,100,0x13,0x18
                                             ,0xc,0), pbVar5 == (byte *)0x0)) break;
    if (this_00->field_0C1C != local_51) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)(ushort)this_00->field_0C1C);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,7);
      DibPut((undefined4 *)this_00->field_0194,100,0x59,'\x01',pbVar5);
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (this_00->field_0C20 != local_4d) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)(ushort)this_00->field_0C20);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
      DibPut((undefined4 *)this_00->field_0194,0xaf,0x59,'\x01',pbVar5);
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    this_01 = this_00->field_01C4;
    goto LAB_0050dfdc;
  case 100:
    if ((*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) ||
       (this_00->field_0C16 != local_57)) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,
                *(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12);
      ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,7);
      if (this_00->field_0C16 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)(*(int *)&this_00->field_0xc12 * 0x21) / (uint)this_00->field_0C16;
      }
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    break;
  case 0x67:
  case 0x68:
    if (this_00->field_0C11 != local_5c) {
      uVar4 = 0;
      if (this_00->field_0C11 != '\0') {
        iVar3 = 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x52,'\x01',pbVar5);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar4 < (byte)this_00->field_0C11);
      }
      if (uVar4 < 0x21) {
        iVar3 = uVar4 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x52,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) {
      uVar4 = 0;
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != 0) {
        iVar3 = 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x73,'\x01',pbVar5);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar4 < *(uint *)&this_00->field_0xc12);
      }
      if (uVar4 < 0x21) {
        iVar3 = uVar4 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x73,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    break;
  case 0x6d:
    local_8 = 0;
    local_c = 99;
    local_14 = 0x2c;
    local_1c = &local_5b;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    do {
      uVar6 = local_8;
      uVar4 = local_14;
      if (*local_1c != *local_10) {
        DibPut((undefined4 *)this_00->field_0194,local_14 - 2,0x55,'\x01',
               (byte *)this_00->field_0A11);
        uVar8 = thunk_FUN_00526ba0(*local_10,(&this_00->field_0C1A)[uVar6]);
        pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02C2,uVar8);
        DibPut((undefined4 *)this_00->field_0194,uVar4,0x57,'\x01',pbVar5);
        if (-1 < (int)this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
      if (local_49[uVar6] != (&this_00->field_0C24)[uVar6]) {
        local_18 = 0;
        uVar4 = (byte)(&this_00->field_0C24)[uVar6] / 10;
        if (uVar4 != 0) {
          iVar3 = 0x7e;
          local_18 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,7);
            DibPut((undefined4 *)this_00->field_0194,local_c,iVar3,'\x01',pbVar5);
            iVar3 = iVar3 + -4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_18 < 10) {
          iVar3 = local_18 * -4 + 0x7e;
          iVar9 = 10 - local_18;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,8);
            DibPut((undefined4 *)this_00->field_0194,local_c,iVar3,'\x01',pbVar5);
            iVar3 = iVar3 + -4;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (-1 < (int)this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      local_c = local_c + 0x1a;
    } while ((int)local_14 < 0xf6);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d_____d_007c28d4,(uint)(byte)this_00->field_0C24,
              (uint)(byte)this_00->field_0C25);
    pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09DD,0,0x5f,7,0x2f,0xb,0
                                        );
    if (pbVar5 == (byte *)0x0) break;
    ccFntTy::WrStr(this_00->field_01B8,&DAT_0080f33a,-1,-1,5);
    DibPut((undefined4 *)this_00->field_0194,0x5f,0x4d,'\x01',pbVar5);
    this_01 = this_00->field_01B8;
LAB_0050dfdc:
    ccFntTy::EraseSufr(this_01);
    break;
  case 0x6e:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == 0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,(uint)(ushort)this_00->field_0C2F);
        ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
        ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
      }
      else if (this_00->field_0C24 != local_49[0]) {
        uVar4 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          local_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
            DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_8 < 0x21) {
          iVar3 = local_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
            DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
        if (-1 < (int)this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
    }
    else {
      PaintCtrlObjSI(this_00);
      iVar3 = this_00->field_0302;
      if (iVar3 != 0) {
        puVar18 = local_100;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        local_f0 = 5;
        FUN_006e6080(this_00,2,iVar3,local_100);
      }
    }
    break;
  case 0x70:
  case 0x72:
  case 0x73:
    if (this_00->field_0C29 != local_44) {
      uVar4 = (uint)(byte)this_00->field_0C29;
      local_8 = 0;
      local_14 = uVar4;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09E1,0,0x24,6,0xa4,
                                           0x2b,0);
      if (pbVar5 != (byte *)0x0) {
        iVar22 = -1;
        iVar21 = -1;
        uVar20 = 5;
        iVar9 = -1;
        iVar3 = -1;
        puVar7 = (uint *)FUN_006b0140(0x36c4 - (local_14 < 0x21),DAT_00807618);
        ccFntTy::WrTxt(this_00->field_01B8,puVar7,iVar3,iVar9,uVar20,iVar21,iVar22);
        DibPut((undefined4 *)this_00->field_0194,0x24,0x4c,'\x01',pbVar5);
        ccFntTy::EraseSufr(this_00->field_01B8);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
  }
  if (this_00->field_0C4D == local_20) {
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  PaintIDSObj(this_00);
  g_currentExceptionFrame = local_c0.previous;
  return;
switchD_0050c9ae_caseD_dd:
  PaintCtrlObjSI(this_00);
  iVar3 = this_00->field_0302;
  if (iVar3 == 0) {
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  puVar18 = local_140;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
  }
  local_130 = 5;
  FUN_006e6080(this_00,2,iVar3,local_140);
  g_currentExceptionFrame = local_c0.previous;
  return;
}

