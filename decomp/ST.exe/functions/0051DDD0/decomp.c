
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::GetMessage */

undefined4 __thiscall HelpPanelTy::GetMessage(HelpPanelTy *this,int param_1)

{
  char cVar1;
  ccFntTy *pcVar2;
  void *pvVar3;
  UINT *pUVar4;
  HelpPanelTy *this_00;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  char *pcVar9;
  uint *puVar10;
  LPSTR pCVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  undefined4 unaff_ESI;
  byte bVar17;
  void *unaff_EDI;
  char *pcVar18;
  bool bVar19;
  code *pcVar20;
  UINT UVar21;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xac7,0,iVar5,
                                &DAT_007a4ccc,s_HelpPanelTy__GetMessage_007c3db8);
    if (iVar12 != 0) {
      pcVar20 = (code *)swi(3);
      uVar13 = (*pcVar20)();
      return uVar13;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xac7);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    puVar7 = &local_20->field_004C;
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,puVar7);
    this_00->field_003C = *puVar7;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  PanelTy::GetMessage((PanelTy *)this_00,param_1);
  uVar14 = *(uint *)(param_1 + 0x10);
  if (uVar14 < 0xc001) {
    if (uVar14 == 0xc000) {
      UVar21 = 0x274e;
      pCVar11 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      UPanelTy::PaintIBut((UPanelTy *)this_00,param_1,pCVar11,UVar21);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (uVar14 < 0x8161) {
      if (uVar14 == 0x8160) {
        pcVar2 = this_00->field_01E4;
        if (pcVar2->field_00A0 != 0) {
          FUN_00710790((int)pcVar2);
        }
        *(int *)(param_1 + 0x18) = *(int *)&pcVar2->field_0x8a + 1;
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (0x60 < uVar14) {
        if (uVar14 == 0x61) {
          local_c = (uint)*(ushort *)(param_1 + 0x18);
          local_8 = (UINT *)(uint)*(ushort *)(param_1 + 0x1a);
          if (this_00->field_0172 != 1) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          switch(this_00->field_01A1) {
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 0xb:
          case 0xc:
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
                piVar6 = (int *)(*(int *)(this_00->field_01D7 + 8) * (int)local_1c +
                                *(int *)(this_00->field_01D7 + 0x1c));
              }
              else {
                piVar6 = (int *)0x0;
              }
              local_24 = piVar6[3];
              local_30 = this_00->field_003C + 0x21 + *piVar6;
              local_2c = piVar6[1] + local_18 + 0x16 + this_00->field_0044;
              local_28 = piVar6[2];
              if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                  ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if ((bVar19) && ((int)local_8 < this_00->field_0044 + 300)) break;
              local_1c = (uint *)((int)local_1c + 1);
              if (local_14 <= local_1c) {
                g_currentExceptionFrame = local_84.previous;
                return 0;
              }
            }
            LinkAct(this_00,*(int *)((int)piVar6 + 0x11),*(int *)((int)piVar6 + 0x15));
            uVar14 = *(uint *)((int)piVar6 + 0x15);
            pvVar3 = *(void **)((int)piVar6 + 0x11);
            switch((char)piVar6[4]) {
            case '\x01':
              RCProc(this_00,(int)pvVar3,uVar14,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x02':
              ObjProc(this_00,(int)pvVar3,uVar14,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x03':
              SubProc(this_00,(int)pvVar3,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x04':
              ArmProc(this_00,(int)pvVar3,uVar14,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x05':
              TechProc(this_00,(uint)pvVar3,(byte)uVar14,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x06':
              TTreeProc(this_00,(uint)pvVar3,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\a':
              MObjProc(this_00);
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\b':
              TipProc(this_00,pvVar3,uVar14,'\0');
              break;
            case '\n':
              IndexBut(this_00);
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\v':
              SpecProc(this_00,(int)pvVar3,uVar14,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\f':
              NatProc(this_00,(int)pvVar3,'\0');
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            PutToSHlp(this_00,(int)unaff_EDI);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case 6:
            goto switchD_0051e4d9_caseD_6;
          default:
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case 8:
            if (*(int *)(this_00->field_01D7 + 0xc) == 0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = *(int **)(this_00->field_01D7 + 0x1c);
            }
            local_30 = this_00->field_003C + 0x21 + *piVar6;
            local_2c = ((uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + piVar6[1] + 0x16 +
                       this_00->field_0044;
            local_28 = piVar6[2];
            local_24 = piVar6[3];
            if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
            if (!bVar19) {
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
        if (uVar14 == 0x6200) {
          this_00->field_01C3 = *(undefined4 *)(param_1 + 0x14);
          iVar5 = (ushort)this_00->field_01AF + 0x16;
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0068,0,0x21,iVar5,(int)this_00->field_01DC,0,0x21,
                     iVar5,0x19c,0x117 - (uint)(ushort)this_00->field_01AF);
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
        if (uVar14 != 0x6332) {
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
        pcVar2 = this_00->field_01E4;
        if (pcVar2->field_00A0 != 0) {
          FUN_00710790((int)pcVar2);
        }
        local_18 = *(uint *)&pcVar2->field_0x8a;
        if (DAT_0080874e == '\x03') {
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,5);
        }
        else {
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,(-(DAT_0080874e != '\x01') & 6U) + 1);
        }
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0068,0,0x21,0x16,(int)this_00->field_01DC,0,0x21,
                   0x16,0x19c,0x118);
        iVar5 = this_00->field_0218;
        local_1c = *(uint **)(iVar5 + 0x14);
        if (local_1c == (uint *)0x0) {
          local_1c = (uint *)(((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 &
                              0x1ffffffc) * *(int *)(iVar5 + 8));
        }
        puVar7 = (undefined4 *)FUN_006b4fa0(iVar5);
        for (uVar14 = (uint)local_1c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar7 = 0xffffffff;
          puVar7 = puVar7 + 1;
        }
        for (uVar14 = (uint)local_1c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar7 = 0xff;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        uVar15 = (uint)*(ushort *)(param_1 + 0x16);
        uVar14 = uVar15;
        if ((int)uVar15 < (int)(uVar15 + *(int *)((int)local_10 + 0x1e0))) {
          do {
            if ((int)uVar14 < (int)this_00->field_01D3[2]) {
              local_1c = *(uint **)(this_00->field_01D3[5] + uVar14 * 4);
            }
            else {
              local_1c = (uint *)0x0;
            }
            if (local_1c != (uint *)0x0) {
              ccFntTy::SetSurf(this_00->field_01E4,this_00->field_0218,0,0,
                               (uVar14 - uVar15) * local_18,*(int *)(this_00->field_0218 + 4),
                               local_18);
              ccFntTy::WrStr(this_00->field_01E4,local_1c,0,-1,(uint)local_14 & 0xff);
            }
            uVar15 = (uint)*(ushort *)(param_1 + 0x16);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)(uVar15 + *(int *)((int)local_10 + 0x1e0)));
        }
        Library::DKW::WGR::FUN_006b5110
                  (this_00->field_0068,0,0x21,0x16,this_00->field_0218,0,0,0,0x19c,0x118,0xff);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (uVar14 != 0x60) {
        if (uVar14 == 0) {
          if (this_00->field_0172 == 3) {
            iVar5 = this_00->field_0050;
            if ((int)this_00->field_0044 < iVar5) {
              this_00->field_0044 = this_00->field_0044 + 0x28;
            }
            if (iVar5 <= (int)this_00->field_0044) {
              this_00->field_0044 = iVar5;
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
          iVar5 = this_00->field_0050 - this_00->field_0048;
          if (iVar5 < (int)this_00->field_0044) {
            this_00->field_0044 = this_00->field_0044 + -0x28;
          }
          if ((int)this_00->field_0044 <= iVar5) {
            this_00->field_0044 = iVar5;
            this_00->field_0172 = 2;
          }
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                     this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (uVar14 == 2) {
          InitHelpPanel(this_00);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (uVar14 != 3) {
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
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 0xb:
        case 0xc:
          local_8 = (undefined4 *)0x0;
          local_14 = *(undefined4 **)(this_00->field_01D7 + 0xc);
          if (local_14 != (undefined4 *)0x0) {
            do {
              if (local_8 < local_14) {
                piVar6 = (int *)(*(int *)(this_00->field_01D7 + 8) * (int)local_8 +
                                *(int *)(this_00->field_01D7 + 0x1c));
              }
              else {
                piVar6 = (int *)0x0;
              }
              local_40 = this_00->field_003C + 0x21 + *piVar6;
              local_3c = piVar6[1] +
                         ((uint)(ushort)this_00->field_01AF -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + 0x16 +
                         this_00->field_0044;
              local_38 = piVar6[2];
              local_34 = piVar6[3];
              if (((((int)local_18 < local_40) || (local_38 + local_40 <= (int)local_18)) ||
                  ((int)local_c < local_3c)) || (local_34 + local_3c <= (int)local_c)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if ((bVar19) && ((int)local_c < this_00->field_0044 + 300)) goto LAB_0051e1b2;
              local_8 = (UINT *)((int)local_8 + 1);
            } while (local_8 < local_14);
          }
          break;
        case 6:
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
          uVar16 = 0;
          if ((ushort)local_14 != 0) {
            local_38 = 0x1a;
            local_34 = 0xe;
            local_1c = (uint *)(uint)(ushort)this_00->field_01AF;
            do {
              local_40 = *(int *)((int)local_8 + (uint)uVar16 * 0xd + 5) + 0x21 +
                         this_00->field_003C;
              local_3c = (*(int *)((int)local_8 + (uint)uVar16 * 0xd + 9) -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c +
                         0x16 + this_00->field_0044;
              if ((((int)local_18 < local_40) || (local_40 + 0x1a <= (int)local_18)) ||
                 (((int)local_c < local_3c || (local_3c + 0xe <= (int)local_c)))) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if ((bVar19) && ((int)local_c < this_00->field_0044 + 300)) {
                local_10 = (undefined4 *)
                           thunk_FUN_00528060(*(Global_sub_00528060_param_1Enum *)
                                               ((int)local_8 + (uint)uVar16 * 0xd),
                                              *(char *)((int)local_8 + (uint)uVar16 * 0xd + 4));
                if (local_10 != (undefined4 *)0x2711) goto LAB_0051e1b2;
                local_10 = (undefined4 *)0x0;
                break;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < (ushort)local_14);
          }
        }
      }
      goto switchD_0051dfcc_caseD_7;
    }
    if (0xbfff < uVar14) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (uVar14 == 0xbfff) {
      (*this_00->vtable->SetPanel)(this_00,'\0');
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    switch(uVar14) {
    case 0x8161:
      cVar1 = this_00->field_01A1;
      if (cVar1 == '\0') {
        iVar5 = this_00->field_01B3;
      }
      else {
        if (cVar1 != '\n') {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        iVar5 = this_00->field_01BB;
      }
      uVar14 = (uint)*(ushort *)(param_1 + 0x14);
      if (uVar14 < *(uint *)(iVar5 + 0xc)) {
        if (cVar1 == '\0') {
          local_8 = (UINT *)(*(int *)(this_00->field_01B3 + 8) * uVar14 +
                            *(int *)(this_00->field_01B3 + 0x1c));
        }
        else {
          local_8 = (UINT *)(*(int *)(this_00->field_01BB + 8) * uVar14 +
                            *(int *)(this_00->field_01BB + 0x1c));
        }
      }
      else {
        local_8 = (UINT *)0x0;
      }
      if (local_8 != (UINT *)0x0) {
        bVar19 = *(short *)(param_1 + 0x16) == 1;
        local_18 = *local_8;
        if (DAT_0080874e == '\x03') {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,!bVar19);
        }
        else if (DAT_0080874e == '\x01') {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,1);
        }
        else {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,bVar19 + '\a');
        }
        iVar5 = *(ushort *)(param_1 + 0x1a) + 0x16;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0068,0,0x21,iVar5,(int)this_00->field_01DC,0,0x21,
                   iVar5,0x19c,*(int *)(this_00->field_01EC + 8));
        iVar5 = this_00->field_01EC;
        uVar14 = *(uint *)(iVar5 + 0x14);
        if (uVar14 == 0) {
          uVar14 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar5 + 8);
        }
        puVar7 = (undefined4 *)FUN_006b4fa0(iVar5);
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar7 = 0xffffffff;
          puVar7 = puVar7 + 1;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar7 = 0xff;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        ccFntTy::SetSurf(this_00->field_01E4,this_00->field_01EC,0,0,0,0,0);
        pcVar9 = (char *)FUN_006b0140(local_18,DAT_00807618);
        uVar14 = 0xffffffff;
        do {
          pcVar18 = pcVar9;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar18;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar9 = pcVar18 + -uVar14;
        pcVar18 = (char *)&DAT_0080f33a;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar18 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar18 = pcVar18 + 1;
        }
        puVar10 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n');
        pUVar4 = local_8;
        while (local_8 = pUVar4, puVar10 != (uint *)0x0) {
          *(undefined1 *)puVar10 = 0x20;
          puVar10 = Library::MSVCRT::FUN_0072e560(puVar10,'\n');
          pUVar4 = local_8;
        }
        ccFntTy::WrStr(this_00->field_01E4,&DAT_0080f33a,
                       (uint)*(byte *)((int)pUVar4 + 0x11) * 0x14 + 10,-1,(uint)local_1c & 0xff);
        if ((this_00->field_01A1 == '\0') && (*(byte *)((int)pUVar4 + 0x11) != 0)) {
          if (DAT_0080874e == '\x03') {
            local_1c = (uint *)CONCAT31(local_1c._1_3_,0x29);
          }
          else {
            local_1c = (uint *)CONCAT31(local_1c._1_3_,(-(DAT_0080874e != '\x01') & 0x43U) + 0x10);
          }
          iVar12 = (uint)*(byte *)((int)pUVar4 + 0x11) * 0x14;
          local_10 = (undefined4 *)((uint)local_1c & 0xff);
          iVar5 = *(int *)(this_00->field_01EC + 8) / 2;
          FUN_006b5b10(this_00->field_01EC,0,iVar12,iVar5,iVar12 + 8,iVar5,(byte)local_1c,0xd);
          if (*(char *)((int)local_8 + 0x13) == '\0') {
            iVar5 = *(int *)(this_00->field_01EC + 8);
          }
          iVar12 = (uint)*(byte *)((int)local_8 + 0x11) * 0x14;
          FUN_006b5b10(this_00->field_01EC,0,iVar12,0,iVar12,iVar5,(byte)local_10,0xd);
          local_14 = (undefined4 *)0x0;
          local_c = (uint)*(ushort *)(param_1 + 0x14);
          local_18 = *(uint *)(this_00->field_01B3 + 0xc);
          local_1c = (uint *)local_c;
joined_r0x0051eec7:
          local_1c = (uint *)((int)local_1c + 1);
          if (local_1c < local_18) {
            if (local_1c < local_18) {
              iVar5 = *(int *)(this_00->field_01B3 + 8) * (int)local_1c +
                      *(int *)(this_00->field_01B3 + 0x1c);
            }
            else {
              iVar5 = 0;
            }
            if ((iVar5 == 0) || (bVar17 = *(byte *)(iVar5 + 0x11), bVar17 == 0)) goto LAB_0051ef61;
            uVar14 = local_c;
            if (bVar17 < *(byte *)((int)local_8 + 0x11)) {
              do {
                uVar14 = uVar14 - 1;
                if ((int)uVar14 < 1) goto joined_r0x0051eec7;
                if (uVar14 < local_18) {
                  iVar5 = *(int *)(this_00->field_01B3 + 8) * uVar14 +
                          *(int *)(this_00->field_01B3 + 0x1c);
                }
                else {
                  iVar5 = 0;
                }
                if ((iVar5 == 0) || (*(byte *)(iVar5 + 0x11) == 0)) goto joined_r0x0051eec7;
              } while (*(byte *)(iVar5 + 0x11) != bVar17);
              if (*(char *)(iVar5 + 0x13) == '\0') {
                local_14 = (undefined4 *)((uint)local_14 | 1 << (bVar17 & 0x1f));
              }
            }
            goto joined_r0x0051eec7;
          }
LAB_0051ef61:
          bVar17 = 0;
          iVar5 = 0;
          do {
            if (((uint)local_14 & 1 << (bVar17 & 0x1f)) != 0) {
              FUN_006b5b10(this_00->field_01EC,0,iVar5,0,iVar5,*(int *)(this_00->field_01EC + 8),
                           (byte)local_10,0xd);
            }
            iVar5 = iVar5 + 0x14;
            bVar17 = bVar17 + 1;
          } while (iVar5 < 0x280);
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
      cVar1 = this_00->field_01A1;
      if (cVar1 == '\0') {
        iVar5 = this_00->field_01B3;
      }
      else {
        if (cVar1 != '\n') {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        iVar5 = this_00->field_01BB;
      }
      uVar14 = *(uint *)(param_1 + 0x14);
      if (uVar14 < *(uint *)(iVar5 + 0xc)) {
        if (cVar1 == '\0') {
          local_1c = (uint *)(*(int *)(this_00->field_01B3 + 8) * uVar14 +
                             *(int *)(this_00->field_01B3 + 0x1c));
        }
        else {
          local_1c = (uint *)(*(int *)(this_00->field_01BB + 8) * uVar14 +
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
      bVar19 = false;
      uVar14 = *(uint *)((int)local_1c + 0xd);
      pvVar3 = *(void **)((int)local_1c + 9);
      switch((char)local_1c[2]) {
      default:
        goto switchD_0051ea9b_caseD_0;
      case '\x01':
        RCProc(this_00,(int)pvVar3,uVar14,'\0');
        break;
      case '\x02':
        ObjProc(this_00,(int)pvVar3,uVar14,'\0');
        break;
      case '\x03':
        SubProc(this_00,(int)pvVar3,'\0');
        break;
      case '\x04':
        ArmProc(this_00,(int)pvVar3,uVar14,'\0');
        break;
      case '\x05':
        TechProc(this_00,(uint)pvVar3,(byte)uVar14,'\0');
        break;
      case '\x06':
        TTreeProc(this_00,(uint)pvVar3,'\0');
        break;
      case '\a':
        MObjProc(this_00);
        break;
      case '\b':
        TipProc(this_00,pvVar3,uVar14,'\0');
        break;
      case '\n':
        IndexBut(this_00);
        break;
      case '\v':
        SpecProc(this_00,(int)pvVar3,uVar14,'\0');
        break;
      case '\f':
        NatProc(this_00,(int)pvVar3,'\0');
      }
      bVar19 = true;
switchD_0051ea9b_caseD_0:
      if (bVar19) {
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      ChangeTree(this_00,(int *)local_1c,*(int *)(param_1 + 0x14));
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0x8163:
      if (this_00->field_01A1 != '\n') {
        this_00->field_01B7 = *(undefined4 *)(param_1 + 0x14);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x1bf = *(undefined4 *)(param_1 + 0x14);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0x8164:
      pcVar20 = thunk_FUN_00529fe0;
      pCVar11 = thunk_FUN_00571240(s_BUT_SLUP_007c3e40,0);
      bVar17 = 6;
      break;
    case 0x8165:
      pcVar20 = thunk_FUN_00529fe0;
      pCVar11 = thunk_FUN_00571240(s_BUT_SLDN_007c3e34,0);
      bVar17 = 6;
      break;
    case 0x8166:
      pbVar8 = (byte *)FUN_0070b3a0(this_00->field_0220,0);
      DibPut((undefined4 *)this_00->field_0068,0x1c3,0x2d,'\x06',pbVar8);
      pbVar8 = (byte *)FUN_0070b3a0(this_00->field_0220,
                                    (*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) != 1) + 1);
      DibPut((undefined4 *)this_00->field_0068,0x1c3,*(ushort *)(param_1 + 0x16) + 0x2d,'\x06',
             pbVar8);
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
    switch(uVar14) {
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
      pcVar9 = s_BUT_HLPHOME_007c3884;
      break;
    case 0xc0b0:
      pcVar9 = s_BUT_HLPBACK_007c3e24;
      break;
    case 0xc0b1:
      pcVar9 = s_BUT_HLPINDEX_007c3e14;
      break;
    case 0xc0b2:
      pcVar9 = s_BUT_HLPPREV_007c3e04;
      break;
    case 0xc0b3:
      pcVar9 = s_BUT_HLPNEXT_007c3df4;
      break;
    case 0xc0b4:
      pcVar9 = s_BUT_HLPBWD_007c3de4;
      break;
    case 0xc0b5:
      pcVar9 = s_BUT_HLPFWD_007c3dd4;
    }
    pcVar20 = thunk_FUN_00529f90;
    pCVar11 = thunk_FUN_00571240(pcVar9,0);
    bVar17 = 1;
  }
  UPanelTy::PaintBut((UPanelTy *)this_00,param_1,bVar17,pCVar11,pcVar20);
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
  uVar16 = 0;
  if ((ushort)local_18 == 0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  local_28 = 0x1a;
  local_24 = 0xe;
  local_1c = (uint *)(uint)(ushort)this_00->field_01AF;
  while( true ) {
    local_30 = *(int *)((int)local_10 + (uint)uVar16 * 0xd + 5) + 0x21 + this_00->field_003C;
    local_2c = (*(int *)((int)local_10 + (uint)uVar16 * 0xd + 9) -
               (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c + 0x16 +
               this_00->field_0044;
    if ((((int)local_c < local_30) || (local_30 + 0x1a <= (int)local_c)) ||
       (((int)local_8 < local_2c || (local_2c + 0xe <= (int)local_8)))) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if ((bVar19) && ((int)local_8 < this_00->field_0044 + 300)) break;
    uVar16 = uVar16 + 1;
    if ((ushort)local_18 <= uVar16) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  TechProc(this_00,*(uint *)((int)local_10 + (uint)uVar16 * 0xd),
           *(byte *)((int)local_10 + (uint)uVar16 * 0xd + 4),'\0');
  PutToSHlp(this_00,(int)unaff_EDI);
  g_currentExceptionFrame = local_84.previous;
  return 0;
LAB_0051e1b2:
  this_00->field_01DB = 0x46;
switchD_0051dfcc_caseD_7:
  iVar5 = this_00->field_0178;
  if ((undefined4 *)iVar5 == local_10) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (iVar5 != 0) {
    this_00->field_0028 = 0x4202;
    *(undefined2 *)&this_00->field_0x2c = 0;
    this_00->field_002E = 2;
    *(int *)&this_00->field_0x30 = iVar5;
    if (DAT_00802a30 != (undefined4 *)0x0) {
      (**(code **)*DAT_00802a30)(&this_00->field_0x18);
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
  (**(code **)*DAT_00802a30)(&this_00->field_0x18);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}

