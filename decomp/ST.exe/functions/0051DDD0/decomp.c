
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::GetMessage
   
   [STSwitchEnumApplier] Switch target field_01A1 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_field_01A1State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8;CASE_B=11;CASE_C=12 */

undefined4 __thiscall HelpPanelTy::GetMessage(HelpPanelTy *this,int param_1)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  ccFntTy *pcVar3;
  void *pvVar4;
  UINT *pUVar5;
  HelpPanelTy *this_00;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  uint *puVar11;
  LPSTR pCVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  undefined4 unaff_ESI;
  byte bVar18;
  void *unaff_EDI;
  char *pcVar19;
  bool bVar20;
  code *pcVar21;
  UINT UVar22;
  InternalExceptionFrame local_84;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  HelpPanelTy *local_20;
  uint *local_1c;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  UINT *local_8;
  
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_20 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xac7,0,iVar6,
                                &DAT_007a4ccc,s_HelpPanelTy__GetMessage_007c3db8);
    if (iVar13 != 0) {
      pcVar21 = (code *)swi(3);
      uVar14 = (*pcVar21)();
      return uVar14;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xac7);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    puVar8 = &local_20->field_004C;
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,puVar8);
    this_00->field_003C = *puVar8;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  PanelTy::GetMessage((PanelTy *)this_00,param_1);
  uVar15 = *(uint *)(param_1 + 0x10);
  if (uVar15 < 0xc001) {
    if (uVar15 == 0xc000) {
      UVar22 = 0x274e;
      pCVar12 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      UPanelTy::PaintIBut((UPanelTy *)this_00,param_1,pCVar12,UVar22);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (uVar15 < 0x8161) {
      if (uVar15 == 0x8160) {
        pcVar3 = this_00->field_01E4;
        if (pcVar3->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar3);
        }
        *(int *)(param_1 + 0x18) = *(int *)&pcVar3->field_0x8a + 1;
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (0x60 < uVar15) {
        if (uVar15 == 0x61) {
          local_c = (uint)*(ushort *)(param_1 + 0x18);
          local_8 = (UINT *)(uint)*(ushort *)(param_1 + 0x1a);
          if (this_00->field_0172 != 1) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          switch(this_00->field_01A1) {
          case CASE_1:
          case CASE_2:
          case CASE_3:
          case CASE_4:
          case CASE_5:
          case CASE_B:
          case CASE_C:
            local_1c = (uint *)0x0;
            local_14 = *(undefined4 **)(this_00->field_01D7 + 0xc);
            if (local_14 == (undefined4 *)0x0) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            local_18 = (uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3;
            while( true ) {
              if (local_1c < local_14) {
                piVar7 = (int *)(*(int *)(this_00->field_01D7 + 8) * (int)local_1c +
                                *(int *)(this_00->field_01D7 + 0x1c));
              }
              else {
                piVar7 = (int *)0x0;
              }
              local_24 = piVar7[3];
              local_30 = this_00->field_003C + 0x21 + *piVar7;
              local_2c = piVar7[1] + local_18 + 0x16 + this_00->field_0044;
              local_28 = piVar7[2];
              if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                  ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              if ((bVar20) && ((int)local_8 < this_00->field_0044 + 300)) break;
              local_1c = (uint *)((int)local_1c + 1);
              if (local_14 <= local_1c) {
                g_currentExceptionFrame = local_84.previous;
                return 0;
              }
            }
            LinkAct(this_00,*(int *)((int)piVar7 + 0x11),*(int *)((int)piVar7 + 0x15));
            uVar15 = *(uint *)((int)piVar7 + 0x15);
            pvVar4 = *(void **)((int)piVar7 + 0x11);
            switch((char)piVar7[4]) {
            case '\x01':
              RCProc(this_00,(int)pvVar4,uVar15,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x02':
              ObjProc(this_00,(int)pvVar4,uVar15,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x03':
              SubProc(this_00,(int)pvVar4,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x04':
              ArmProc(this_00,(int)pvVar4,uVar15,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x05':
              TechProc(this_00,(uint)pvVar4,(byte)uVar15,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x06':
              TTreeProc(this_00,(uint)pvVar4,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\a':
              MObjProc(this_00);
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\b':
              TipProc(this_00,pvVar4,uVar15,'\0');
              break;
            case '\n':
              IndexBut(this_00);
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\v':
              SpecProc(this_00,(int)pvVar4,uVar15,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\f':
              NatProc(this_00,(int)pvVar4,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            PutToSHlp(this_00,(int)unaff_EDI);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case CASE_6:
            goto switchD_0051e4d9_caseD_6;
          default:
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case CASE_8:
            if (*(int *)(this_00->field_01D7 + 0xc) == 0) {
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = *(int **)(this_00->field_01D7 + 0x1c);
            }
            local_30 = this_00->field_003C + 0x21 + *piVar7;
            local_2c = ((uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + piVar7[1] + 0x16 +
                       this_00->field_0044;
            local_28 = piVar7[2];
            local_24 = piVar7[3];
            if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
              bVar20 = false;
            }
            else {
              bVar20 = true;
            }
            if (!bVar20) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            if (this_00->field_0044 + 300 <= (int)local_8) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            DAT_0080734d = DAT_0080734d == '\0';
            thunk_FUN_00515180(this_00,'\b');
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
        }
        if (uVar15 == 0x6200) {
          this_00->field_01C3 = *(undefined4 *)(param_1 + 0x14);
          iVar6 = (ushort)this_00->field_01AF + 0x16;
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0068,0,0x21,iVar6,(byte *)this_00->field_01DC,0,
                     0x21,iVar6,0x19c,0x117 - (uint)(ushort)this_00->field_01AF);
          Library::DKW::WGR::FUN_006b5110
                    (this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
                     this_00->field_0218,0,0,(uint)(ushort)this_00->field_01B1 * this_00->field_01C3
                     ,0x19c,0x117 - (uint)(ushort)this_00->field_01AF,0xff);
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                     this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (uVar15 != 0x6332) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        local_10 = *(undefined4 **)(param_1 + 0x1c);
        if (local_10 == (undefined4 *)0x0) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (this_00->field_01D3 == (uint *)0x0) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pcVar3 = this_00->field_01E4;
        if (pcVar3->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar3);
        }
        local_18 = *(uint *)&pcVar3->field_0x8a;
        if (DAT_0080874e == '\x03') {
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,5);
        }
        else {
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,(-(DAT_0080874e != '\x01') & 6U) + 1);
        }
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0068,0,0x21,0x16,(byte *)this_00->field_01DC,0,0x21,
                   0x16,0x19c,0x118);
        iVar6 = this_00->field_0218;
        local_1c = *(uint **)(iVar6 + 0x14);
        if (local_1c == (uint *)0x0) {
          local_1c = (uint *)(((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                              0x1ffffffc) * *(int *)(iVar6 + 8));
        }
        puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
        for (uVar15 = (uint)local_1c >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        for (uVar15 = (uint)local_1c & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar8 = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        uVar16 = (uint)*(ushort *)(param_1 + 0x16);
        uVar15 = uVar16;
        if ((int)uVar16 < (int)(uVar16 + *(int *)((int)local_10 + 0x1e0))) {
          do {
            if ((int)uVar15 < (int)this_00->field_01D3[2]) {
              local_1c = *(uint **)(this_00->field_01D3[5] + uVar15 * 4);
            }
            else {
              local_1c = (uint *)0x0;
            }
            if (local_1c != (uint *)0x0) {
              ccFntTy::SetSurf(this_00->field_01E4,this_00->field_0218,0,0,
                               (uVar15 - uVar16) * local_18,*(int *)(this_00->field_0218 + 4),
                               local_18);
              ccFntTy::WrStr(this_00->field_01E4,local_1c,0,-1,(uint)local_14 & 0xff);
            }
            uVar16 = (uint)*(ushort *)(param_1 + 0x16);
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)(uVar16 + *(int *)((int)local_10 + 0x1e0)));
        }
        Library::DKW::WGR::FUN_006b5110
                  (this_00->field_0068,0,0x21,0x16,this_00->field_0218,0,0,0,0x19c,0x118,0xff);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (uVar15 != 0x60) {
        if (uVar15 == 0) {
          if (this_00->field_0172 == 3) {
            iVar6 = this_00->field_0050;
            if ((int)this_00->field_0044 < iVar6) {
              this_00->field_0044 = this_00->field_0044 + 0x28;
            }
            if (iVar6 <= (int)this_00->field_0044) {
              this_00->field_0044 = iVar6;
              this_00->field_0172 = 1;
              ShiftControls(this_00,1);
            }
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                       this_00->field_0044);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          if (this_00->field_0172 != 4) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          iVar6 = this_00->field_0050 - this_00->field_0048;
          if (iVar6 < (int)this_00->field_0044) {
            this_00->field_0044 = this_00->field_0044 + -0x28;
          }
          if ((int)this_00->field_0044 <= iVar6) {
            this_00->field_0044 = iVar6;
            this_00->field_0172 = 2;
          }
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                     this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (uVar15 == 2) {
          InitHelpPanel(this_00);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (uVar15 != 3) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        DoneHelpPanel(this_00);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      local_18 = (uint)*(ushort *)(param_1 + 0x18);
      local_10 = (undefined4 *)0x0;
      local_c = (uint)*(ushort *)(param_1 + 0x1a);
      this_00->field_01DB = 0;
      if (this_00->field_0172 == 1) {
        switch(this_00->field_01A1) {
        case CASE_1:
        case CASE_2:
        case CASE_3:
        case CASE_4:
        case CASE_5:
        case CASE_B:
        case CASE_C:
          local_8 = (undefined4 *)0x0;
          local_14 = *(undefined4 **)(this_00->field_01D7 + 0xc);
          if (local_14 != (undefined4 *)0x0) {
            do {
              if (local_8 < local_14) {
                piVar7 = (int *)(*(int *)(this_00->field_01D7 + 8) * (int)local_8 +
                                *(int *)(this_00->field_01D7 + 0x1c));
              }
              else {
                piVar7 = (int *)0x0;
              }
              local_40 = this_00->field_003C + 0x21 + *piVar7;
              local_3c = piVar7[1] +
                         ((uint)(ushort)this_00->field_01AF -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + 0x16 +
                         this_00->field_0044;
              local_38 = piVar7[2];
              local_34 = piVar7[3];
              if (((((int)local_18 < local_40) || (local_38 + local_40 <= (int)local_18)) ||
                  ((int)local_c < local_3c)) || (local_34 + local_3c <= (int)local_c)) {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              if ((bVar20) && ((int)local_c < this_00->field_0044 + 300)) goto LAB_0051e1b2;
              local_8 = (UINT *)((int)local_8 + 1);
            } while (local_8 < local_14);
          }
          break;
        case CASE_6:
          if (this_00->field_01A3 == 1) {
            local_8 = (UINT *)&DAT_007c2b58;
            local_14 = (undefined4 *)0x33;
          }
          else if (this_00->field_01A3 == 2) {
            local_8 = (UINT *)&DAT_007c2df0;
            local_14 = (undefined4 *)0x39;
          }
          else {
            local_8 = &DAT_007c30d8;
            local_14 = (undefined4 *)0x46;
          }
          uVar17 = 0;
          if ((ushort)local_14 != 0) {
            local_38 = 0x1a;
            local_34 = 0xe;
            local_1c = (uint *)(uint)(ushort)this_00->field_01AF;
            do {
              local_40 = *(int *)((int)local_8 + (uint)uVar17 * 0xd + 5) + 0x21 +
                         this_00->field_003C;
              local_3c = (*(int *)((int)local_8 + (uint)uVar17 * 0xd + 9) -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c +
                         0x16 + this_00->field_0044;
              if ((((int)local_18 < local_40) || (local_40 + 0x1a <= (int)local_18)) ||
                 (((int)local_c < local_3c || (local_3c + 0xe <= (int)local_c)))) {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              if ((bVar20) && ((int)local_c < this_00->field_0044 + 300)) {
                local_10 = (undefined4 *)
                           thunk_FUN_00528060(*(Global_sub_00528060_param_1Enum *)
                                               ((int)local_8 + (uint)uVar17 * 0xd),
                                              *(char *)((int)local_8 + (uint)uVar17 * 0xd + 4));
                if (local_10 != (undefined4 *)0x2711) goto LAB_0051e1b2;
                local_10 = (undefined4 *)0x0;
                break;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < (ushort)local_14);
          }
        }
      }
      goto switchD_0051dfcc_caseD_7;
    }
    if (0xbfff < uVar15) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (uVar15 == 0xbfff) {
      (*this_00->vtable->SetPanel)(this_00,'\0');
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    switch(uVar15) {
    case 0x8161:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        iVar6 = this_00->field_01B3;
      }
      else {
        if (HVar2 != (CASE_8|CASE_2)) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        iVar6 = this_00->field_01BB;
      }
      uVar15 = (uint)*(ushort *)(param_1 + 0x14);
      if (uVar15 < *(uint *)(iVar6 + 0xc)) {
        if (HVar2 == 0) {
          local_8 = (UINT *)(*(int *)(this_00->field_01B3 + 8) * uVar15 +
                            *(int *)(this_00->field_01B3 + 0x1c));
        }
        else {
          local_8 = (UINT *)(*(int *)(this_00->field_01BB + 8) * uVar15 +
                            *(int *)(this_00->field_01BB + 0x1c));
        }
      }
      else {
        local_8 = (UINT *)0x0;
      }
      if (local_8 != (UINT *)0x0) {
        bVar20 = *(short *)(param_1 + 0x16) == 1;
        local_18 = *local_8;
        if (DAT_0080874e == '\x03') {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,!bVar20);
        }
        else if (DAT_0080874e == '\x01') {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,1);
        }
        else {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,bVar20 + '\a');
        }
        iVar6 = *(ushort *)(param_1 + 0x1a) + 0x16;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0068,0,0x21,iVar6,(byte *)this_00->field_01DC,0,0x21
                   ,iVar6,0x19c,*(int *)(this_00->field_01EC + 8));
        iVar6 = this_00->field_01EC;
        uVar15 = *(uint *)(iVar6 + 0x14);
        if (uVar15 == 0) {
          uVar15 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar6 + 8);
        }
        puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar8 = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        ccFntTy::SetSurf(this_00->field_01E4,this_00->field_01EC,0,0,0,0,0);
        pcVar10 = (char *)FUN_006b0140(local_18,HINSTANCE_00807618);
        uVar15 = 0xffffffff;
        do {
          pcVar19 = pcVar10;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar19 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar19;
        } while (cVar1 != '\0');
        uVar15 = ~uVar15;
        pcVar10 = pcVar19 + -uVar15;
        pcVar19 = (char *)&DAT_0080f33a;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar19 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar19 = pcVar19 + 1;
        }
        puVar11 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n');
        pUVar5 = local_8;
        while (local_8 = pUVar5, puVar11 != (uint *)0x0) {
          *(undefined1 *)puVar11 = 0x20;
          puVar11 = Library::MSVCRT::FUN_0072e560(puVar11,'\n');
          pUVar5 = local_8;
        }
        ccFntTy::WrStr(this_00->field_01E4,&DAT_0080f33a,
                       (uint)*(byte *)((int)pUVar5 + 0x11) * 0x14 + 10,-1,(uint)local_1c & 0xff);
        if ((this_00->field_01A1 == 0) && (*(byte *)((int)pUVar5 + 0x11) != 0)) {
          if (DAT_0080874e == '\x03') {
            local_1c = (uint *)CONCAT31(local_1c._1_3_,0x29);
          }
          else {
            local_1c = (uint *)CONCAT31(local_1c._1_3_,(-(DAT_0080874e != '\x01') & 0x43U) + 0x10);
          }
          iVar13 = (uint)*(byte *)((int)pUVar5 + 0x11) * 0x14;
          local_10 = (undefined4 *)((uint)local_1c & 0xff);
          iVar6 = *(int *)(this_00->field_01EC + 8) / 2;
          FUN_006b5b10(this_00->field_01EC,0,iVar13,iVar6,iVar13 + 8,iVar6,(byte)local_1c,0xd);
          if (*(char *)((int)local_8 + 0x13) == '\0') {
            iVar6 = *(int *)(this_00->field_01EC + 8);
          }
          iVar13 = (uint)*(byte *)((int)local_8 + 0x11) * 0x14;
          FUN_006b5b10(this_00->field_01EC,0,iVar13,0,iVar13,iVar6,(byte)local_10,0xd);
          local_14 = (undefined4 *)0x0;
          local_c = (uint)*(ushort *)(param_1 + 0x14);
          local_18 = *(uint *)(this_00->field_01B3 + 0xc);
          local_1c = (uint *)local_c;
joined_r0x0051eec7:
          local_1c = (uint *)((int)local_1c + 1);
          if (local_1c < local_18) {
            if (local_1c < local_18) {
              iVar6 = *(int *)(this_00->field_01B3 + 8) * (int)local_1c +
                      *(int *)(this_00->field_01B3 + 0x1c);
            }
            else {
              iVar6 = 0;
            }
            if ((iVar6 == 0) || (bVar18 = *(byte *)(iVar6 + 0x11), bVar18 == 0)) goto LAB_0051ef61;
            uVar15 = local_c;
            if (bVar18 < *(byte *)((int)local_8 + 0x11)) {
              do {
                uVar15 = uVar15 - 1;
                if ((int)uVar15 < 1) goto joined_r0x0051eec7;
                if (uVar15 < local_18) {
                  iVar6 = *(int *)(this_00->field_01B3 + 8) * uVar15 +
                          *(int *)(this_00->field_01B3 + 0x1c);
                }
                else {
                  iVar6 = 0;
                }
                if ((iVar6 == 0) || (*(byte *)(iVar6 + 0x11) == 0)) goto joined_r0x0051eec7;
              } while (*(byte *)(iVar6 + 0x11) != bVar18);
              if (*(char *)(iVar6 + 0x13) == '\0') {
                local_14 = (undefined4 *)((uint)local_14 | 1 << (bVar18 & 0x1f));
              }
            }
            goto joined_r0x0051eec7;
          }
LAB_0051ef61:
          bVar18 = 0;
          iVar6 = 0;
          do {
            if (((uint)local_14 & 1 << (bVar18 & 0x1f)) != 0) {
              FUN_006b5b10(this_00->field_01EC,0,iVar6,0,iVar6,*(int *)(this_00->field_01EC + 8),
                           (byte)local_10,0xd);
            }
            iVar6 = iVar6 + 0x14;
            bVar18 = bVar18 + 1;
          } while (iVar6 < 0x280);
        }
        FUN_006b5440(this_00->field_0068,0,0x21,*(ushort *)(param_1 + 0x1a) + 0x16,
                     this_00->field_01EC,0,0xff);
      }
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,this_00->field_0044
                );
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0x8162:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        iVar6 = this_00->field_01B3;
      }
      else {
        if (HVar2 != (CASE_8|CASE_2)) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        iVar6 = this_00->field_01BB;
      }
      uVar15 = *(uint *)(param_1 + 0x14);
      if (uVar15 < *(uint *)(iVar6 + 0xc)) {
        if (HVar2 == 0) {
          local_1c = (uint *)(*(int *)(this_00->field_01B3 + 8) * uVar15 +
                             *(int *)(this_00->field_01B3 + 0x1c));
        }
        else {
          local_1c = (uint *)(*(int *)(this_00->field_01BB + 8) * uVar15 +
                             *(int *)(this_00->field_01BB + 0x1c));
        }
      }
      else {
        local_1c = (uint *)0x0;
      }
      if (local_1c == (uint *)0x0) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      bVar20 = false;
      uVar15 = *(uint *)((int)local_1c + 0xd);
      pvVar4 = *(void **)((int)local_1c + 9);
      switch((char)local_1c[2]) {
      default:
        goto switchD_0051ea9b_caseD_0;
      case '\x01':
        RCProc(this_00,(int)pvVar4,uVar15,'\0');
        break;
      case '\x02':
        ObjProc(this_00,(int)pvVar4,uVar15,'\0');
        break;
      case '\x03':
        SubProc(this_00,(int)pvVar4,'\0');
        break;
      case '\x04':
        ArmProc(this_00,(int)pvVar4,uVar15,'\0');
        break;
      case '\x05':
        TechProc(this_00,(uint)pvVar4,(byte)uVar15,'\0');
        break;
      case '\x06':
        TTreeProc(this_00,(uint)pvVar4,'\0');
        break;
      case '\a':
        MObjProc(this_00);
        break;
      case '\b':
        TipProc(this_00,pvVar4,uVar15,'\0');
        break;
      case '\n':
        IndexBut(this_00);
        break;
      case '\v':
        SpecProc(this_00,(int)pvVar4,uVar15,'\0');
        break;
      case '\f':
        NatProc(this_00,(int)pvVar4,'\0');
      }
      bVar20 = true;
switchD_0051ea9b_caseD_0:
      if (bVar20) {
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      ChangeTree(this_00,(int *)local_1c,*(int *)(param_1 + 0x14));
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0x8163:
      if (this_00->field_01A1 != (CASE_8|CASE_2)) {
        this_00->field_01B7 = *(undefined4 *)(param_1 + 0x14);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x1bf = *(undefined4 *)(param_1 + 0x14);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0x8164:
      pcVar21 = thunk_FUN_00529fe0;
      pCVar12 = thunk_FUN_00571240(s_BUT_SLUP_007c3e40,0);
      bVar18 = 6;
      break;
    case 0x8165:
      pcVar21 = thunk_FUN_00529fe0;
      pCVar12 = thunk_FUN_00571240(s_BUT_SLDN_007c3e34,0);
      bVar18 = 6;
      break;
    case 0x8166:
      pbVar9 = (byte *)FUN_0070b3a0(this_00->field_0220,0);
      DibPut((undefined4 *)this_00->field_0068,0x1c3,0x2d,'\x06',pbVar9);
      pbVar9 = (byte *)FUN_0070b3a0(this_00->field_0220,
                                    (*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) != 1) + 1);
      DibPut((undefined4 *)this_00->field_0068,0x1c3,*(ushort *)(param_1 + 0x16) + 0x2d,'\x06',
             pbVar9);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,this_00->field_0044
                );
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto cf_common_exit_0051F19A;
    }
  }
  else {
    switch(uVar15) {
    case 0xc09f:
      HomeBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a0:
      BackBut(this_00,unaff_EDI);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a1:
      IndexBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a2:
      PrevBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a3:
      NextBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a4:
      BwdBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a5:
      FwdBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto cf_common_exit_0051F19A;
    case 0xc0af:
      pcVar10 = s_BUT_HLPHOME_007c3884;
      break;
    case 0xc0b0:
      pcVar10 = s_BUT_HLPBACK_007c3e24;
      break;
    case 0xc0b1:
      pcVar10 = s_BUT_HLPINDEX_007c3e14;
      break;
    case 0xc0b2:
      pcVar10 = s_BUT_HLPPREV_007c3e04;
      break;
    case 0xc0b3:
      pcVar10 = s_BUT_HLPNEXT_007c3df4;
      break;
    case 0xc0b4:
      pcVar10 = s_BUT_HLPBWD_007c3de4;
      break;
    case 0xc0b5:
      pcVar10 = s_BUT_HLPFWD_007c3dd4;
    }
    pcVar21 = thunk_FUN_00529f90;
    pCVar12 = thunk_FUN_00571240(pcVar10,0);
    bVar18 = 1;
  }
  UPanelTy::PaintBut((UPanelTy *)this_00,param_1,bVar18,pCVar12,pcVar21);
cf_common_exit_0051F19A:
  g_currentExceptionFrame = local_84.previous;
  return 0;
switchD_0051e4d9_caseD_6:
  if (this_00->field_01A3 == 1) {
    local_10 = (undefined4 *)&DAT_007c2b58;
    local_18 = 0x33;
  }
  else if (this_00->field_01A3 == 2) {
    local_10 = (undefined4 *)&DAT_007c2df0;
    local_18 = 0x39;
  }
  else {
    local_10 = &DAT_007c30d8;
    local_18 = 0x46;
  }
  uVar17 = 0;
  if ((ushort)local_18 == 0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  local_28 = 0x1a;
  local_24 = 0xe;
  local_1c = (uint *)(uint)(ushort)this_00->field_01AF;
  while( true ) {
    local_30 = *(int *)((int)local_10 + (uint)uVar17 * 0xd + 5) + 0x21 + this_00->field_003C;
    local_2c = (*(int *)((int)local_10 + (uint)uVar17 * 0xd + 9) -
               (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c + 0x16 +
               this_00->field_0044;
    if ((((int)local_c < local_30) || (local_30 + 0x1a <= (int)local_c)) ||
       (((int)local_8 < local_2c || (local_2c + 0xe <= (int)local_8)))) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if ((bVar20) && ((int)local_8 < this_00->field_0044 + 300)) break;
    uVar17 = uVar17 + 1;
    if ((ushort)local_18 <= uVar17) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  TechProc(this_00,*(uint *)((int)local_10 + (uint)uVar17 * 0xd),
           *(byte *)((int)local_10 + (uint)uVar17 * 0xd + 4),'\0');
  PutToSHlp(this_00,(int)unaff_EDI);
  g_currentExceptionFrame = local_84.previous;
  return 0;
LAB_0051e1b2:
  this_00->field_01DB = 0x46;
switchD_0051dfcc_caseD_7:
  UVar22 = this_00->field_0178;
  if ((undefined4 *)UVar22 == local_10) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (UVar22 != 0) {
    this_00->field_0028 = 0x4202;
    *(undefined2 *)&this_00->field_0x2c = 0;
    this_00->field_002E = 2;
    *(UINT *)&this_00->field_0x30 = UVar22;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      (*(code *)**(undefined4 **)PTR_00802a30)(&this_00->field_0x18);
    }
  }
  this_00->field_0178 = local_10;
  if (local_10 == (undefined4 *)0x0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  this_00->field_0028 = 0x4201;
  *(undefined2 *)&this_00->field_0x2c = 0;
  this_00->field_002E = 2;
  *(undefined4 **)&this_00->field_0x30 = local_10;
  (*(code *)**(undefined4 **)PTR_00802a30)(&this_00->field_0x18);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}

