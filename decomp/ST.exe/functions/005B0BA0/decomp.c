
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::GetMessage
   
   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

undefined4 __thiscall
ChooseMapTy::GetMessage(ChooseMapTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  ChooseMapTy_field_1A5FState CVar3;
  byte bVar4;
  int *piVar5;
  StartSystemTy *this_00;
  code *pcVar6;
  ChooseMapTy *this_01;
  undefined1 uVar7;
  bool bVar8;
  DWORD DVar9;
  int iVar10;
  uint *extraout_EAX;
  HANDLE pvVar11;
  undefined3 extraout_var;
  undefined4 uVar12;
  MMsgTy *pMVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  byte *pbVar17;
  undefined4 unaff_ESI;
  byte *pbVar18;
  undefined4 *unaff_EDI;
  UINT resourceId;
  char *pcVar19;
  char *pcVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  uint *puVar23;
  int iVar24;
  undefined4 uVar25;
  char local_6e0 [64];
  char local_6a0 [1044];
  byte local_28c [260];
  byte local_188 [260];
  InternalExceptionFrame local_84;
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
  DVar9 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar9;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  iVar10 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_40;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar24 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x6f7,0,iVar10,
                                &DAT_007a4ccc,s_ChooseMapTy__GetMessage_007cc8c0);
    if (iVar24 != 0) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return uVar12;
    }
    RaiseInternalException(iVar10,0,s_E____titans_Start_load_obj_cpp_007cc728,0x6f7);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_40,(int)param_1);
  StartSystemTy::ChatMessage(PTR_0081176c,param_1);
  uVar14 = *(uint *)&param_1->field_0x10;
  if (uVar14 < 0x6943) {
    if (uVar14 == 0x6942) {
      this_01->field_0045 = 0x200;
      this_01->field_0049 = 0;
      this_01->field_004D = 0x6102;
      this_01->field_0051 = *(undefined4 *)&param_1->field_0x14;
      thunk_FUN_005b66e0((STJellyGunC *)this_01);
      goto cf_common_exit_005B2053;
    }
    if (0x6327 < uVar14) {
      if (uVar14 < 0x6341) {
        if (uVar14 == 0x6340) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_01,
                     (AnonShape_005B6560_61F462DF *)&this_01->field_1A5B->field_055C,(int)param_1,0)
          ;
        }
        else {
          switch(uVar14) {
          case 0x6332:
            StartSystemTy::PaintBinDesc(PTR_0081176c,param_1);
            break;
          case 0x6333:
            MMMObjTy::PaintSlBut
                      ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_038D,
                       (int)param_1,0);
            break;
          case 0x6334:
            MMMObjTy::PaintSlBut
                      ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_041E,
                       (int)param_1,0);
            break;
          case 0x6335:
            PTR_0081176c->field_04CF =
                 *(int *)(*(int *)&param_1->field_0x18 + 4) + (uint)param_1->field_0016;
            if (PTR_0081176c->field_04B3 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,
                         PTR_0081176c->field_04B7,PTR_0081176c->field_04CB,PTR_0081176c->field_04CF)
              ;
            }
          }
        }
      }
      else if (uVar14 == 0x6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,
                   (AnonShape_005B6560_61F462DF *)&this_01->field_1A5B->field_05ED,(int)param_1,0);
      }
      else if (uVar14 == 0x693f) {
        thunk_FUN_005ae840((AnonShape_005AE840_42F3E2A7 *)this_01);
      }
      else if (uVar14 == 0x6940) {
        thunk_FUN_005ae950((AnonShape_005AE840_42F3E2A7 *)this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (uVar14 == 0x6327) {
      piVar5 = *(int **)&param_1->field_0x14;
      resourceId = 0x2342;
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005B5BE0::thunk_FUN_005b5be0
                ((AnonReceiver_005B5BE0 *)this_01,(AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C8B
                 ,piVar5);
      switch(this_01->field_1A5F) {
      case CASE_1:
      case CASE_2:
      case CASE_4:
      case CASE_5:
        resourceId = 0x2342;
        if (*piVar5 == 1) {
          resourceId = 0x2341;
        }
        break;
      case CASE_9:
      case CASE_A:
      case CASE_B:
        if (*piVar5 == 1) {
          resourceId = 0x233c;
        }
        else if (*piVar5 == 2) {
          resourceId = 0x233d;
        }
        else {
          resourceId = 0x233f;
        }
      }
      ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)this_01->field_1C8B,0,*piVar5 * 0x7c + -0x7c,0,
                       0x7a,this_01->field_1C8B->field_0008 -
                            ((-(uint)(piVar5[1] != 1) & 0xfffffffd) + 3));
      uVar12 = 2;
      iVar24 = -1;
      iVar10 = -1;
      LoadResourceString(resourceId,HINSTANCE_00807618);
      ccFntTy::WrStr(PTR_0081176c->field_0034,extraout_EAX,iVar10,iVar24,uVar12);
      FUN_006b35d0(DAT_008075a8,this_01->field_1C87);
      goto cf_common_exit_005B2053;
    }
    if (uVar14 < 0x6106) {
      if (uVar14 == 0x6105) {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = *(undefined4 *)&param_1->field_0x10;
        this_01->field_0051 = 0;
        this_01->field_0055 = 0;
        thunk_FUN_005b66e0((STJellyGunC *)this_01);
      }
      else {
        switch(uVar14) {
        case 0:
          NoneChooseMap(this_01,unaff_EDI);
          break;
        case 2:
          InitChooseMap(this_01,*(undefined1 *)(*(int *)&param_1->field_0x14 + 0x14),
                        *(byte *)(*(int *)&param_1->field_0x14 + 0x18));
          break;
        case 3:
          DoneChooseMap(this_01);
          break;
        case 5:
          PaintChooseMap(this_01,'\0');
        }
      }
      goto cf_common_exit_005B2053;
    }
    if (uVar14 < 0x6122) {
      if (uVar14 < 0x6120) {
        if (uVar14 == 0x610a) {
          this_01->field_0045 = 0x200;
          this_01->field_0049 = 0;
          this_01->field_004D = 0x610a;
          this_01->field_0051 = 7;
          thunk_FUN_005b66e0((STJellyGunC *)this_01);
        }
      }
      else {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = *(undefined4 *)&param_1->field_0x10;
        this_01->field_0051 = *(undefined4 *)&param_1->field_0x14;
        this_01->field_0055 = *(undefined4 *)&param_1->field_0x18;
        thunk_FUN_005b66e0((STJellyGunC *)this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (uVar14 != 0x6326) goto cf_common_exit_005B2053;
    piVar5 = *(int **)&param_1->field_0x14;
    switch(this_01->field_1A5F) {
    case CASE_1:
    case CASE_2:
      if (*piVar5 == 1) {
        this_01->field_1A5F = CASE_1;
      }
      else {
        this_01->field_1A5F = CASE_2;
      }
      PTR_0081176c->field_02EB = (char)*piVar5;
      if (this_01->field_1A60 == 0) goto cf_common_exit_005B0DCE;
      goto LAB_005b0dc0;
    default:
      goto cf_common_exit_005B0DCE;
    case CASE_4:
    case CASE_5:
      if (*piVar5 == 1) {
        this_01->field_1A5F = CASE_4;
      }
      else {
        this_01->field_1A5F = CASE_5;
      }
      PTR_0081176c->field_02EB = (char)*piVar5;
      iVar10 = this_01->field_1A60;
      break;
    case CASE_9:
    case CASE_A:
    case CASE_B:
      if (*piVar5 == 1) {
        this_01->field_1A5F = CASE_9;
      }
      else if (*piVar5 == 2) {
        this_01->field_1A5F = CASE_A;
      }
      else {
        this_01->field_1A5F = CASE_B;
      }
      PTR_0081176c->field_02EA = (char)*piVar5;
      iVar10 = this_01->field_1A60;
    }
    if (iVar10 != 0) {
LAB_005b0dc0:
      PrepFiles(this_01,this_01->field_1C93);
    }
cf_common_exit_005B0DCE:
    thunk_FUN_005b6730(this_01,10,'\x01',-1);
    goto cf_common_exit_005B2053;
  }
  if (0x6956 < uVar14) {
    if (0xc0a2 < uVar14) goto cf_common_exit_005B2053;
    if (uVar14 != 0xc0a2) {
      switch(uVar14) {
      case 0x8160:
        *(undefined4 *)&param_1->field_0x18 = 0x13;
        break;
      case 0x8161:
        uVar14 = (uint)*(ushort *)&param_1->field_0x14;
        iVar10 = this_01->field_1C9F->field_0008;
        if ((int)uVar14 < iVar10) {
          local_8 = *(uint **)(this_01->field_1C9F->field_0014 + uVar14 * 4);
        }
        else {
          iVar10 = uVar14 - iVar10;
          if (iVar10 < (int)this_01->field_1C97->field_0008) {
            local_8 = *(uint **)(this_01->field_1C97->field_0014 + iVar10 * 4);
          }
          else {
            local_8 = (uint *)0x0;
          }
        }
        local_c = (char *)0x0;
        FUN_006b4170((AnonShape_006C7610_838EDECF *)this_01->field_1C7B,0,0,
                     (uint)*(ushort *)&param_1->field_0x1a,
                     ((AnonShape_006C7610_838EDECF *)this_01->field_1C7B)->field_0004,0x13,0);
        if ((int)(uint)*(ushort *)&param_1->field_0x14 < (int)this_01->field_1C9F->field_0008) {
          pbVar17 = &DAT_007cc8b4;
          puVar23 = local_8;
          do {
            bVar4 = (byte)*puVar23;
            bVar8 = bVar4 < *pbVar17;
            if (bVar4 != *pbVar17) {
LAB_005b1d83:
              uVar14 = (uint)(1 - bVar8 == (uint)(bVar8 != 0));
              goto LAB_005b1da4;
            }
            if (bVar4 == 0) break;
            bVar4 = *(byte *)((int)puVar23 + 1);
            bVar8 = bVar4 < pbVar17[1];
            if (bVar4 != pbVar17[1]) goto LAB_005b1d83;
            puVar23 = (uint *)((int)puVar23 + 2);
            pbVar17 = pbVar17 + 2;
          } while (bVar4 != 0);
          uVar14 = 1;
        }
        else {
          uVar14 = (-(uint)(this_01->field_1C97->field_0008 != 0) & 3) - 1;
        }
LAB_005b1da4:
        pcVar16 = local_c;
        if (-1 < (int)uVar14) {
          pbVar17 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_01->field_1C7F,
                                         uVar14);
          pcVar16 = *(char **)(pbVar17 + 4);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C7B,2,
                 (0x13 - *(int *)(pbVar17 + 8)) / 2 + (uint)*(ushort *)&param_1->field_0x1a,'\x06',
                 pbVar17);
        }
        ccFntTy::SetSurf((ccFntTy *)PTR_0081176c->field_0030,(int)this_01->field_1C7B,0,
                         (int)(pcVar16 + 4),(uint)*(ushort *)&param_1->field_0x1a,
                         (this_01->field_1C7B->field_0004 - (int)pcVar16) + -4,0x13);
        ccFntTy::WrStr((ccFntTy *)PTR_0081176c->field_0030,local_8,2,-1,
                       (-(uint)(param_1->field_0016 != 0) & 2) + 1);
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,(&this_01->field_1C23)[*(ushort *)&param_1->field_0x1a / 0x13],
                   0xfffffffe,0x114,*(ushort *)&param_1->field_0x1a + 0x3f);
        break;
      case 0x8162:
        uVar14 = this_01->field_1C9F->field_0008;
        if (*(uint *)&param_1->field_0x14 < uVar14) {
          if (this_01->field_1A5F == CASE_3) {
            this_01->field_002D = 0x6956;
            (*(code *)this_01->field_0000->field_0000)(&this_01->field_0x1d);
          }
          else {
            if ((int)(uint)*(ushort *)&param_1->field_0x14 < (int)uVar14) {
              pbVar17 = *(byte **)(this_01->field_1C9F->field_0014 +
                                  (uint)*(ushort *)&param_1->field_0x14 * 4);
            }
            else {
              pbVar17 = (byte *)0x0;
            }
            pbVar22 = &DAT_007cc8b4;
            pbVar18 = pbVar17;
            do {
              bVar4 = *pbVar18;
              bVar8 = bVar4 < *pbVar22;
              if (bVar4 != *pbVar22) {
LAB_005b1b67:
                iVar10 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_005b1b6c;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar18[1];
              bVar8 = bVar4 < pbVar22[1];
              if (bVar4 != pbVar22[1]) goto LAB_005b1b67;
              pbVar18 = pbVar18 + 2;
              pbVar22 = pbVar22 + 2;
            } while (bVar4 != 0);
            iVar10 = 0;
LAB_005b1b6c:
            if (iVar10 == 0) {
              puVar1 = &this_01->field_1DA7;
              FUN_006b78c0(puVar1,puVar1);
              Library::MSVCRT::FUN_0072e730(puVar1,local_188,local_28c,(byte *)0x0,(byte *)0x0);
              Library::MSVCRT::__makepath
                        (puVar1,(char *)local_188,(char *)local_28c,(char *)0x0,(char *)0x0);
            }
            else {
              uVar14 = 0xffffffff;
              do {
                pbVar18 = pbVar17;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pbVar18 = pbVar17 + 1;
                bVar4 = *pbVar17;
                pbVar17 = pbVar18;
              } while (bVar4 != 0);
              local_8 = (uint *)~uVar14;
              iVar10 = -1;
              pcVar16 = &this_01->field_1DA7;
              do {
                pcVar19 = pcVar16;
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                pcVar19 = pcVar16 + 1;
                cVar2 = *pcVar16;
                pcVar16 = pcVar19;
              } while (cVar2 != '\0');
              pbVar17 = pbVar18 + -(int)local_8;
              pbVar18 = (byte *)(pcVar19 + -1);
              for (uVar14 = (uint)local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pbVar18 = *(undefined4 *)pbVar17;
                pbVar17 = pbVar17 + 4;
                pbVar18 = pbVar18 + 4;
              }
              for (uVar14 = (uint)local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pbVar18 = *pbVar17;
                pbVar17 = pbVar17 + 1;
                pbVar18 = pbVar18 + 1;
              }
            }
            puVar1 = &this_01->field_1DA7;
            FUN_006b78c0(puVar1,puVar1);
            if (this_01->field_1C8F != (HANDLE)0x0) {
              FindCloseChangeNotification(this_01->field_1C8F);
            }
            pvVar11 = FindFirstChangeNotificationA(puVar1,0,1);
            this_01->field_1C8F = pvVar11;
            if (pvVar11 == (HANDLE)0xffffffff) {
              this_01->field_1C8F = (HANDLE)0x0;
            }
            FUN_006b8280(puVar1,puVar1);
            PrepFiles(this_01,this_01->field_1C93);
          }
        }
        else {
          switch(this_01->field_1A5F) {
          case CASE_1:
          case CASE_2:
            this_01->field_002D = 0x694a;
            (*(code *)this_01->field_0000->field_0000)(&this_01->field_0x1d);
            break;
          case CASE_4:
          case CASE_5:
          case CASE_C:
          case CASE_13:
            this_01->field_002D = 0x694e;
            (*(code *)this_01->field_0000->field_0000)(&this_01->field_0x1d);
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
            this_01->field_002D = 0x6949;
            (*(code *)this_01->field_0000->field_0000)(&this_01->field_0x1d);
          }
        }
        break;
      case 0x8163:
        this_01->field_1C93 = *(undefined4 *)&param_1->field_0x14;
        this_01->field_1A64 = 1;
        this_01->field_1A68 = this_01->field_0061;
        break;
      case 0x8164:
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)&this_01->field_1A70,
                   (int)param_1,0);
        break;
      case 0x8165:
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)&this_01->field_1B01,
                   (int)param_1,0);
        break;
      case 0x8166:
        uVar14 = *(int *)(*(int *)&param_1->field_0x18 + 4) + (uint)param_1->field_0016;
        this_01->field_1BB2 = uVar14;
        if (this_01->field_1B96 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)this_01->field_1BDA,this_01->field_1B96,this_01->field_1B9A,
                     this_01->field_1BAE,uVar14);
        }
      }
      goto cf_common_exit_005B2053;
    }
    iVar10 = thunk_FUN_005ddb40((int)this_01->field_1A5B);
    if (iVar10 == 0) {
      if (DAT_008067a0 != '\0') {
        iVar10 = this_01->field_1A5B->field_0686;
        if (*(int *)(iVar10 + 8) < 1) {
          pcVar16 = (char *)0x0;
        }
        else {
          pcVar16 = (char *)**(undefined4 **)(iVar10 + 0x14);
        }
        bVar8 = thunk_FUN_005717e0(pcVar16);
        if (CONCAT31(extraout_var,bVar8) != 0) {
          iVar10 = this_01->field_1A5B->field_0686;
          if (*(int *)(iVar10 + 8) < 1) {
            CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
          }
          else {
            CFsgsConnection::SendChatMessage
                      ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar10 + 0x14));
          }
          goto LAB_005b2011;
        }
      }
      pcVar16 = local_6e0;
      for (iVar10 = 0x114; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16 = pcVar16 + 4;
      }
      *pcVar16 = '\0';
      uVar14 = 0xffffffff;
      pcVar16 = (char *)&DAT_00807ddd;
      do {
        pcVar19 = pcVar16;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar16 + 1;
        cVar2 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar2 != '\0');
      uVar14 = ~uVar14;
      this_00 = this_01->field_1A5B;
      pcVar16 = pcVar19 + -uVar14;
      pcVar19 = local_6e0;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar19 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar19 = pcVar19 + 1;
      }
      iVar10 = this_00->field_0686;
      if (*(int *)(iVar10 + 8) < 1) {
        pcVar16 = (char *)0x0;
      }
      else {
        pcVar16 = (char *)**(undefined4 **)(iVar10 + 0x14);
      }
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar16;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar16 + 1;
        cVar2 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar2 != '\0');
      uVar14 = ~uVar14;
      pcVar16 = pcVar19 + -uVar14;
      pcVar19 = local_6a0;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar19 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar19 = pcVar19 + 1;
      }
      local_c = local_6a0;
      StartSystemTy::AddToChat(this_00,(int)local_6e0);
      FUN_00715360(g_int_00811764,0,'\x1b',local_6e0,0x451,1,0xffffffff);
    }
LAB_005b2011:
    Library::DKW::TBL::FUN_006b6020((uint *)this_01->field_1A5B->field_0686,0,&DAT_008016a0);
    this_01->field_002D = 0x33;
    *(undefined4 *)&this_01->field_0x31 = this_01->field_1A5B->field_0686;
    FUN_006e6080(this_01,2,this_01->field_1A5B->field_054C,(undefined4 *)&this_01->field_0x1d);
    goto cf_common_exit_005B2053;
  }
  if (uVar14 == 0x6956) {
    if ((((this_01->field_0065 != '\x01') || (CVar3 = this_01->field_1A5F, CVar3 == CASE_C)) ||
        (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13))))
    goto cf_common_exit_005B2053;
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    if ((uint)this_01->field_1C9F->field_0008 <= *(uint *)&this_01->field_0x31)
    goto cf_common_exit_005B2053;
    if (this_01->field_1A64 != 0) {
      ShowDescription(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    DAT_008087a0 = this_01->field_1A5F;
    uVar14 = 0xffffffff;
    pcVar16 = &DAT_0080ed16;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = (char *)&DAT_0080f33a;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->field_0008) {
      uVar12 = *(undefined4 *)(this_01->field_1C9F->field_0014 + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar12 = 0;
    }
    wsprintfA(&DAT_0080ef1e,s__s_s__s_007cc8dc,PTR_s_MISSIONS__0079c054,uVar12,&DAT_0080ed16);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->field_0008) {
      uVar12 = *(undefined4 *)(this_01->field_1C9F->field_0014 + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar12 = 0;
    }
    wsprintfA(&DAT_0080ed16,s__s_s__s_007cc8dc,&this_01->field_1DA7,uVar12,&DAT_0080f33a);
    DAT_008087a0 = CASE_3;
    iVar10 = thunk_FUN_0056e9e0(&DAT_00807620,1);
    if (iVar10 == 0) goto cf_common_exit_005B2053;
    uVar14 = 0xffffffff;
    pcVar16 = &DAT_00807784;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = (char *)&DAT_0080f22a;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->field_0008) {
      pcVar16 = *(char **)(this_01->field_1C9F->field_0014 + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      pcVar16 = (char *)0x0;
    }
    uVar14 = 0xffffffff;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    iVar10 = -1;
    pcVar16 = (char *)&DAT_0080f22a;
    do {
      pcVar20 = pcVar16;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar20 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar20;
    } while (cVar2 != '\0');
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = pcVar20 + -1;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    uVar14 = 0xffffffff;
    pcVar16 = PTR_s_CAMPAIGN_VPS_0079c05c;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    iVar10 = -1;
    pcVar16 = (char *)&DAT_0080f22a;
    do {
      pcVar20 = pcVar16;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar20 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar20;
    } while (cVar2 != '\0');
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = pcVar20 + -1;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    puVar21 = &DAT_0080c522;
    for (iVar10 = 0x9fc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar21 = 0;
      puVar21 = puVar21 + 1;
    }
    thunk_FUN_005b6350(this_01,0x6948,0,0);
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_20B4 = 1;
    this_01->field_20B7 = 0;
    (*(code *)this_01->field_0000->field_0008)();
    pMVar13 = this_01->field_1A5B->field_02E6;
LAB_005b1644:
    if (pMVar13 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar13,1,0,1);
    }
    goto cf_common_exit_005B2053;
  }
  switch(uVar14) {
  case 0x6943:
    thunk_FUN_005b6350(this_01,0x6942,*(undefined4 *)&param_1->field_0x14,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    CVar3 = this_01->field_1A5F;
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_20B4 = 1;
    if (((CVar3 == CASE_C) || (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13)))) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    this_01->field_20B7 = uVar7;
    (*(code *)this_01->field_0000->field_0008)();
    pMVar13 = this_01->field_1A5B->field_02E6;
    if (pMVar13 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar13,1,0,1);
    }
    break;
  case 0x6948:
    DAT_008087a0 = this_01->field_1A5F;
    switch(this_01->field_1A5F) {
    case CASE_1:
    case CASE_2:
    case CASE_6:
    case CASE_A:
      DAT_00808783 = 2;
      break;
    case CASE_3:
    case CASE_9:
    case CASE_B:
      DAT_00808783 = 1;
      break;
    case CASE_4:
    case CASE_5:
    case CASE_7:
    case CASE_C:
    case CASE_13:
      DAT_00808783 = 3;
    }
    this_01->field_0049 = 1;
    if (this_01->field_1A5F == CASE_3) {
      this_01->field_004D = 0x7101;
      this_01->field_0051 = 3;
      this_01->field_0055 = 0;
      thunk_FUN_005b66e0((STJellyGunC *)this_01);
    }
    else {
      this_01->field_004D = 0x60ff;
      thunk_FUN_005b66e0((STJellyGunC *)this_01);
    }
    break;
  case 0x6949:
  case 0x694a:
    if ((((this_01->field_0065 != '\x01') || (CVar3 = this_01->field_1A5F, CVar3 == CASE_C)) ||
        (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13)))) break;
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar14 = this_01->field_1C9F->field_0008;
    if ((*(uint *)&this_01->field_0x31 < uVar14) ||
       ((local_8 = (uint *)(*(uint *)&this_01->field_0x31 - uVar14), (int)local_8 < 0 ||
        ((int)this_01->field_1C97->field_0008 <= (int)local_8)))) break;
    uVar14 = 0xffffffff;
    pcVar16 = &this_01->field_1DA7;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = &DAT_0080ed16;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    if ((8 < this_01->field_1A5F) && (this_01->field_1A5F < CASE_C)) {
      uVar14 = 0xffffffff;
      pcVar16 = PTR_DAT_0079c06c;
      do {
        pcVar19 = pcVar16;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar16 + 1;
        cVar2 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar2 != '\0');
      uVar14 = ~uVar14;
      iVar10 = -1;
      pcVar16 = &DAT_0080ed16;
      do {
        pcVar20 = pcVar16;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar20 = pcVar16 + 1;
        cVar2 = *pcVar16;
        pcVar16 = pcVar20;
      } while (cVar2 != '\0');
      pcVar16 = pcVar19 + -uVar14;
      pcVar19 = pcVar20 + -1;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar19 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar19 = pcVar19 + 1;
      }
      _DAT_0080f32e = 1;
      DAT_0080879c = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->field_0008) {
      pcVar16 = *(char **)(this_01->field_1C97->field_0014 + (int)local_8 * 4);
    }
    else {
      pcVar16 = (char *)0x0;
    }
    uVar14 = 0xffffffff;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    iVar10 = -1;
    pcVar16 = &DAT_0080ed16;
    do {
      pcVar20 = pcVar16;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar20 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar20;
    } while (cVar2 != '\0');
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = pcVar20 + -1;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar14 = 0xffffffff;
    pcVar16 = &DAT_0080ed16;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = (char *)&DAT_0080ee1a;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar14 = 0xffffffff;
    pcVar16 = &DAT_00807680;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar2 != '\0');
    uVar15 = 0xffffffff;
    pcVar16 = (char *)((int)&DAT_0080ed12 + ~uVar14 + 3);
    do {
      pcVar19 = pcVar16;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    pcVar16 = pcVar19 + -uVar15;
    pcVar19 = &DAT_0080ef1e;
    for (uVar14 = uVar15 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    if (this_01->field_1A64 != 0) {
      ShowDescription(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    DAT_008087a0 = this_01->field_1A5F;
    if ((this_01->field_1A5F != CASE_0) && (this_01->field_1A5F < CASE_3)) {
      thunk_FUN_0056ef50((AnonShape_0056EF50_CAB83E9D *)&DAT_00807620);
      thunk_FUN_0056f040((AnonShape_0056F040_86F75ABE *)&DAT_00807620);
    }
    if (this_01->field_1A5F == CASE_1) {
      thunk_FUN_0056ebe0(0x807620);
    }
    thunk_FUN_005b6350(this_01,0x6948,0,0);
    CVar3 = this_01->field_1A5F;
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_20B4 = 1;
    if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    this_01->field_20B7 = uVar7;
    (*(code *)this_01->field_0000->field_0008)();
    pMVar13 = this_01->field_1A5B->field_02E6;
    goto LAB_005b1644;
  case 0x694b:
    CVar3 = this_01->field_1A5F;
    if (((CVar3 != CASE_C) && (CVar3 != CASE_4)) && ((CVar3 != CASE_5 && (CVar3 != CASE_13)))) {
      this_01->field_002D = 0x26;
      FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
      uVar14 = this_01->field_1C9F->field_0008;
      if (((uVar14 <= *(uint *)&this_01->field_0x31) &&
          (iVar10 = *(uint *)&this_01->field_0x31 - uVar14, -1 < iVar10)) &&
         (iVar10 < (int)this_01->field_1C97->field_0008)) {
        uVar14 = 0xffffffff;
        pcVar16 = &this_01->field_1DA7;
        do {
          pcVar19 = pcVar16;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar19 = pcVar16 + 1;
          cVar2 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar16 = pcVar19 + -uVar14;
        pcVar19 = &DAT_0080ed16;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        if (iVar10 < (int)this_01->field_1C97->field_0008) {
          pcVar16 = *(char **)(this_01->field_1C97->field_0014 + iVar10 * 4);
        }
        else {
          pcVar16 = (char *)0x0;
        }
        uVar14 = 0xffffffff;
        do {
          pcVar19 = pcVar16;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar19 = pcVar16 + 1;
          cVar2 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        iVar10 = -1;
        pcVar16 = &DAT_0080ed16;
        do {
          pcVar20 = pcVar16;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar20 = pcVar16 + 1;
          cVar2 = *pcVar16;
          pcVar16 = pcVar20;
        } while (cVar2 != '\0');
        pcVar16 = pcVar19 + -uVar14;
        pcVar19 = pcVar20 + -1;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar14 = 0xffffffff;
        pcVar16 = &DAT_0080ed16;
        do {
          pcVar19 = pcVar16;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar19 = pcVar16 + 1;
          cVar2 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar16 = pcVar19 + -uVar14;
        pcVar19 = (char *)&DAT_0080ee1a;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        if (this_01->field_1A64 != 0) {
          ShowDescription(this_01,this_01->field_1C93);
          this_01->field_1A64 = 0;
        }
        CVar3 = this_01->field_1A5F;
        if ((CVar3 != CASE_0) && (CVar3 < CASE_3)) {
          thunk_FUN_005b6350(this_01,0x6120,(uint)CVar3,(uint)CVar3);
          this_01->field_0x20b3 = 1;
          this_01->field_20B7 = 0;
          this_01->field_20B6 = 0;
          this_01->field_20B5 = 0;
          this_01->field_20B4 = 0;
          (*(code *)this_01->field_0000->field_0008)();
          if (this_01->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
            local_38 = 0;
            local_3c = 0x10001;
            local_34 = 0;
            local_30 = 0;
            thunk_FUN_005b8f40(this_01->field_1A5B->field_02E6,&local_3c);
          }
        }
      }
    }
    break;
  case 0x694c:
    switch((uint)this_01->field_1A5F) {
    case 4:
    case 5:
    case 0xc:
    case 0x13:
      uVar25 = 7;
      uVar12 = 0x6121;
      break;
    default:
      uVar25 = 6;
      uVar12 = 0x6120;
    }
    thunk_FUN_005b6350(this_01,uVar12,uVar25,(uint)this_01->field_1A5F);
    this_01->field_20B4 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_20B7 = 0;
    this_01->field_20B6 = 0;
    this_01->field_20B5 = 0;
    (*(code *)this_01->field_0000->field_0008)();
    if (this_01->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
      local_18 = 0;
      local_14 = 0;
      local_1c = 0x10101;
      local_10 = 0;
      thunk_FUN_005b8f40(this_01->field_1A5B->field_02E6,&local_1c);
    }
    break;
  case 0x694d:
    thunk_FUN_005b6350(this_01,0x6105,0,0);
    CVar3 = this_01->field_1A5F;
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_20B4 = 1;
    if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    this_01->field_20B7 = uVar7;
    goto LAB_005b1108;
  case 0x694e:
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar14 = this_01->field_1C9F->field_0008;
    if (((*(uint *)&this_01->field_0x31 < uVar14) ||
        (local_8 = (uint *)(*(uint *)&this_01->field_0x31 - uVar14), (int)local_8 < 0)) ||
       ((int)this_01->field_1C97->field_0008 <= (int)local_8)) break;
    uVar14 = 0xffffffff;
    pcVar16 = &this_01->field_1DA7;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = &DAT_0080ed16;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    if ((this_01->field_1A5F == CASE_C) ||
       ((this_01->field_1A5F == CASE_13 && (DAT_00803400 == '\f')))) {
      uVar14 = 0xffffffff;
      pcVar16 = PTR_DAT_0079c06c;
      do {
        pcVar19 = pcVar16;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar16 + 1;
        cVar2 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar2 != '\0');
      uVar14 = ~uVar14;
      iVar10 = -1;
      pcVar16 = &DAT_0080ed16;
      do {
        pcVar20 = pcVar16;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar20 = pcVar16 + 1;
        cVar2 = *pcVar16;
        pcVar16 = pcVar20;
      } while (cVar2 != '\0');
      pcVar16 = pcVar19 + -uVar14;
      pcVar19 = pcVar20 + -1;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar19 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar19 = pcVar19 + 1;
      }
      _DAT_0080f32e = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->field_0008) {
      pcVar16 = *(char **)(this_01->field_1C97->field_0014 + (int)local_8 * 4);
    }
    else {
      pcVar16 = (char *)0x0;
    }
    uVar14 = 0xffffffff;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    iVar10 = -1;
    pcVar16 = &DAT_0080ed16;
    do {
      pcVar20 = pcVar16;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar20 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar20;
    } while (cVar2 != '\0');
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = pcVar20 + -1;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar14 = 0xffffffff;
    pcVar16 = &DAT_0080ed16;
    do {
      pcVar19 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar2 != '\0');
    uVar14 = ~uVar14;
    pcVar16 = pcVar19 + -uVar14;
    pcVar19 = (char *)&DAT_0080ee1a;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    if (this_01->field_1A64 != 0) {
      ShowDescription(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    if (this_01->field_1A5F != CASE_13) {
      uVar14 = (uint)this_01->field_1A5F;
      uVar15 = uVar14;
      goto LAB_005b137f;
    }
    switch(DAT_00803400) {
    case '\x04':
      uVar15 = 0x13;
      uVar14 = 4;
      break;
    case '\x05':
      uVar15 = 0x13;
      uVar14 = 5;
      break;
    default:
      goto switchD_005b1362_caseD_6;
    case '\f':
      uVar15 = 0x13;
      uVar14 = 0xc;
      break;
    case '\x14':
    case '\x15':
      uVar15 = 0x13;
      uVar14 = 0x13;
    }
LAB_005b137f:
    thunk_FUN_005b6350(this_01,0x6121,uVar14,uVar15);
switchD_005b1362_caseD_6:
    this_01->field_0x20b3 = 1;
    this_01->field_20B4 = 0;
    this_01->field_20B6 = 0;
    this_01->field_20B5 = 0;
    this_01->field_20B7 = 0;
    (*(code *)this_01->field_0000->field_0008)();
    if (this_01->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
      local_28 = 0;
      local_24 = 0;
      local_2c = 0x10101;
      local_20 = 0;
      thunk_FUN_005b8f40(this_01->field_1A5B->field_02E6,&local_2c);
    }
    break;
  case 0x6951:
    thunk_FUN_005b6350(this_01,0x610a,0,0);
    CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
    this_01->field_20B7 = 1;
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_20B4 = 1;
LAB_005b1108:
    (*(code *)this_01->field_0000->field_0008)();
    pMVar13 = this_01->field_1A5B->field_02E6;
    if (pMVar13 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar13,1,0,1);
    }
  }
cf_common_exit_005B2053:
  g_currentExceptionFrame = local_84.previous;
  uVar12 = MMObjTy::GetMessage((MMObjTy *)this_01,(int)param_1);
  return uVar12;
}

