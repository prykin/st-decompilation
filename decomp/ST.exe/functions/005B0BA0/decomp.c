#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::GetMessage

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402E4B|005B0BA0; family_names=ChooseMapTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:24,18:5,1c:0}

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

int __thiscall ChooseMapTy::GetMessage(ChooseMapTy *this,STMessage *message)

{
  byte bVar1;
  char cVar2;
  STMessageId SVar3;
  int *piVar4;
  DWORD DVar5;
  dword dVar6;
  StartSystemTy *this_00;
  DArrayTy *pDVar7;
  ChooseMapTy *this_01;
  undefined1 uVar9;
  bool bVar11;
  DWORD DVar9_mg0;
  int local_EAX_52;
  char *pcVar12;
  HANDLE pvVar10;
  BITMAPINFO *pBVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar13;
  int iVar25;
  MMsgTy *pMVar12;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  byte *pbVar16;
  byte *pbVar17;
  UINT resourceId;
  char *pcVar18;
  char *pcVar20;
  byte *pbVar22;
  bool bVar23;
  int iVar24;
  int iVar26;
  uint uVar27;
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
  byte *local_8;
  byte CVar2;
  char *pcVar19;

  local_40 = this;
  DVar9_mg0 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar9_mg0;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_EAX_52 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  this_01 = local_40;
  if (local_EAX_52 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar25 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x6f7,0,local_EAX_52,
                                "%s","ChooseMapTy::GetMessage");
    if (iVar25 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_52,0,"E:\\__titans\\Start\\load_obj.cpp",0x6f7);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_40,message);
  /* ST_CALLSITE[005B0BFB]: CALL 0x00402937; direct=00402937 StartSystemTy::ChatMessage */
  StartSystemTy::ChatMessage(g_startSystem_0081176C,message);
  SVar3 = message->id;
  if (SVar3 < MESS_WAITTY_6943) {
    if (SVar3 == MESS_CHOOSEMAPTY_6942) {
      this_01->field_0045 = 0x200;
      this_01->field_0049 = 0;
      this_01->field_004D = 0x6102;
      this_01->field_0051 = message->arg0;
      thunk_FUN_005b66e0((MTaskTy *)this_01);
      goto cf_common_exit_005B2053;
    }
    if (MESS_CHOOSEMAPTY_6327 < SVar3) {
      if (SVar3 < MESS_SHARED_6341) {
        if (SVar3 == MESS_SETTMAPMTY_6340) {
          /* ST_CALLSITE[005B0F8A]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_01,
                     (RecoveredRecord_MMMObjTy_005B6560 *)
                     (this_01->array_00BC[0xc].field_01DB + 0x55c),(int)message,0);
        }
        else {
          switch(SVar3) {
          case MESS_SHARED_6332:
            /* ST_CALLSITE[005B0EE5]: CALL 0x00404d72; direct=00404D72 StartSystemTy::PaintBinDesc */
            StartSystemTy::PaintBinDesc
                      (g_startSystem_0081176C,(AnonShape_005DE050_5BD86458 *)message);
            break;
          case MESS_WAITTY_6333:
            /* ST_CALLSITE[005B0F00]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
            MMMObjTy::PaintSlBut
                      ((MMMObjTy *)this_01,
                       (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_038D,
                       (int)message,0);
            break;
          case MESS_SHARED_6334:
            /* ST_CALLSITE[005B0F1B]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
            MMMObjTy::PaintSlBut
                      ((MMMObjTy *)this_01,
                       (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_041E,
                       (int)message,0);
            break;
          case MESS_WAITTY_6335:
            g_startSystem_0081176C->field_04CF =
                 *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
            if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)g_startSystem_0081176C->field_04F7,
                         g_startSystem_0081176C->field_04B3,g_startSystem_0081176C->field_04B7,
                         g_startSystem_0081176C->field_04CB,g_startSystem_0081176C->field_04CF);
            }
          }
        }
      }
      else if (SVar3 == MESS_SHARED_6341) {
        /* ST_CALLSITE[005B0FD2]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,
                   (RecoveredRecord_MMMObjTy_005B6560 *)
                   (this_01->array_00BC[0xc].field_01DB + 0x5ed),(int)message,0);
      }
      else if (SVar3 == MESS_PRIVIDERTY_693F) {
        /* ST_CALLSITE[005B0FB7]: CALL 0x00404d45; direct=00404D45 ChooseMapTy::sub_005AE840 */
        sub_005AE840(this_01);
      }
      else if (SVar3 == MESS_SHARED_6940) {
        /* ST_CALLSITE[005B0FAB]: CALL 0x00404084; direct=00404084 ChooseMapTy::sub_005AE950 */
        sub_005AE950(this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar3 == MESS_CHOOSEMAPTY_6327) {
      piVar4 = (message->arg0).ptr;
      resourceId = 0x2342;
      /* ST_CALLSITE[005B0DF2]: CALL 0x00404c0f; direct=00404C0F ChooseMapTy::sub_005B5BE0 */
      sub_005B5BE0(this_01,(RecoveredSourceFamily_dibcopy *)this_01->field_1C8B,piVar4);
      switch(this_01->array_00BC[0xc].field_01DF) {
      case 1:
      case 2:
      case 4:
      case 5:
        resourceId = 0x2342;
        if (*piVar4 == 1) {
          resourceId = 0x2341;
        }
        break;
      case 9:
      case 10:
      case 0xb:
        if (*piVar4 == 1) {
          resourceId = 0x233c;
        }
        else if (*piVar4 == 2) {
          resourceId = 0x233d;
        }
        else {
          resourceId = 0x233f;
        }
      }
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C8B,0,
                       *piVar4 * 0x7c + -0x7c,0,0x7a,
                       this_01->field_1C8B->field_0008 -
                       ((-(uint)(piVar4[1] != 1) & 0xfffffffd) + 3));
      uVar27 = 2;
      iVar26 = -1;
      iVar24 = -1;
      pcVar12 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar12,iVar24,iVar26,uVar27);
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_01->field_1C87);
      goto cf_common_exit_005B2053;
    }
    if (SVar3 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
      if (SVar3 == MESS_SHARED_6105) {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = message->id;
        this_01->field_0051 = 0;
        this_01->field_0055 = 0;
        thunk_FUN_005b66e0((MTaskTy *)this_01);
      }
      else {
        switch(SVar3) {
        case MESS_ID_NONE:
          /* ST_CALLSITE[005B0C70]: CALL 0x004029a5; direct=004029A5 ChooseMapTy::NoneChooseMap */
          NoneChooseMap(this_01);
          break;
        case MESS_ID_CREATE:
          /* ST_CALLSITE[005B0C4B]: CALL 0x00402cd4; direct=00402CD4 ChooseMapTy::InitChooseMap */
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          InitChooseMap(this_01,*(undefined1 *)((message->arg0).u32 + 0x14),
                        *(ChooseMapTy_InitChooseMap_param_2Enum *)((message->arg0).u32 + 0x18));
          break;
        case MESS_SHARED_0003:
          /* ST_CALLSITE[005B0C57]: CALL 0x0040417e; direct=0040417E ChooseMapTy::DoneChooseMap */
          DoneChooseMap(this_01);
          break;
        case MESS_SHARED_0005:
          /* ST_CALLSITE[005B0C64]: CALL 0x00402725; direct=00402725 ChooseMapTy::PaintChooseMap */
          PaintChooseMap(this_01,'\0');
        }
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar3 < MESS_STAPPC_6122) {
      if (SVar3 < MESS_SHARED_6120) {
        if (SVar3 == MESS_SHARED_610A) {
          this_01->field_0045 = 0x200;
          this_01->field_0049 = 0;
          this_01->field_004D = 0x610a;
          this_01->field_0051 = 7;
          thunk_FUN_005b66e0((MTaskTy *)this_01);
        }
      }
      else {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = message->id;
        this_01->field_0051 = message->arg0;
        this_01->field_0055 = message->arg1;
        thunk_FUN_005b66e0((MTaskTy *)this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar3 != MESS_SHARED_6326) goto cf_common_exit_005B2053;
    pbVar16 = (message->arg0).ptr;
    switch(this_01->array_00BC[0xc].field_01DF) {
    case 1:
    case 2:
      if (*(int *)pbVar16 == 1) {
        this_01->array_00BC[0xc].field_01DF = 1;
      }
      else {
        this_01->array_00BC[0xc].field_01DF = 2;
      }
      g_startSystem_0081176C->field_02EB = *pbVar16;
      if (this_01->array_00BC[0xc].field_01E0 == 0) goto cf_common_exit_005B0DCE;
      goto LAB_005b0dc0;
    default:
      goto cf_common_exit_005B0DCE;
    case 4:
    case 5:
      if (*(int *)pbVar16 == 1) {
        this_01->array_00BC[0xc].field_01DF = 4;
      }
      else {
        this_01->array_00BC[0xc].field_01DF = 5;
      }
      g_startSystem_0081176C->field_02EB = *pbVar16;
      iVar24 = this_01->array_00BC[0xc].field_01E0;
      break;
    case 9:
    case 10:
    case 0xb:
      if (*(int *)pbVar16 == 1) {
        this_01->array_00BC[0xc].field_01DF = 9;
      }
      else if (*(int *)pbVar16 == 2) {
        this_01->array_00BC[0xc].field_01DF = 10;
      }
      else {
        this_01->array_00BC[0xc].field_01DF = 0xb;
      }
      g_startSystem_0081176C->field_02EA = *pbVar16;
      iVar24 = this_01->array_00BC[0xc].field_01E0;
    }
    if (iVar24 != 0) {
LAB_005b0dc0:
      /* ST_CALLSITE[005B0DC9]: CALL 0x00403b0c; direct=00403B0C ChooseMapTy::PrepFiles */
      PrepFiles(this_01,this_01->field_1C93);
    }
cf_common_exit_005B0DCE:
    thunk_FUN_005b6730(this_01,10,'\x01',-1);
    goto cf_common_exit_005B2053;
  }
  if (MESS_CHOOSEMAPTY_6956 < SVar3) {
    if (MESS_SHARED_C0A2 < SVar3) goto cf_common_exit_005B2053;
    if (SVar3 != MESS_SHARED_C0A2) {
      switch(SVar3) {
      case MESS_SHARED_8160:
        (message->arg1).u32 = 0x13;
        break;
      case MESS_SIDTY_8161:
        uVar27 = (uint)(message->arg0).words.low;
        dVar6 = this_01->field_1C9F->elementSize;
        if ((int)uVar27 < (int)dVar6) {
          local_8 = *(byte **)(this_01->field_1C9F->growCapacity + uVar27 * 4);
        }
        else {
          iVar24 = uVar27 - dVar6;
          if (iVar24 < (int)this_01->field_1C97->elementSize) {
            local_8 = *(byte **)(this_01->field_1C97->growCapacity + iVar24 * 4);
          }
          else {
            local_8 = nullptr;
          }
        }
        local_c = nullptr;
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_01->field_1C7B,0,0,
                     (uint)(message->arg1).words.high,
                     ((RecoveredSourceFamily_dibcopy *)this_01->field_1C7B)->field_0004,0x13,0);
        if ((int)(uint)(message->arg0).words.low < (int)this_01->field_1C9F->elementSize) {
          pbVar17 = &DAT_007cc8b4;
          pbVar16 = local_8;
          do {
            bVar1 = *pbVar16;
            bVar23 = bVar1 < *pbVar17;
            if (bVar1 != *pbVar17) {
LAB_005b1d83:
              uVar27 = (uint)(1 - bVar23 == (uint)(bVar23 != 0));
              goto LAB_005b1da4;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar16[1];
            bVar23 = bVar1 < pbVar17[1];
            if (bVar1 != pbVar17[1]) goto LAB_005b1d83;
            pbVar16 = pbVar16 + 2;
            pbVar17 = pbVar17 + 2;
          } while (bVar1 != 0);
          uVar27 = 1;
        }
        else {
          uVar27 = (-(uint)(this_01->field_1C97->elementSize != 0) & 3) - 1;
        }
LAB_005b1da4:
        pcVar15 = local_c;
        if (-1 < (int)uVar27) {
          pBVar11 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_01->field_1C7F,uVar27);
          pcVar15 = (char *)(pBVar11->bmiHeader).biWidth;
          /* ST_CALLSITE[005B1DDE]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_01->field_1C7B,2,
                 (0x13 - (pBVar11->bmiHeader).biHeight) / 2 + (uint)(message->arg1).words.high,
                 '\x06',(byte *)pBVar11);
        }
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0030,(int)this_01->field_1C7B,0,
                         (int)(pcVar15 + 4),(uint)(message->arg1).words.high,
                         (this_01->field_1C7B->field_0004 - (int)pcVar15) + -4,0x13);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0030,(char *)local_8,2,-1,
                       (-(uint)((message->arg0).words.high != 0) & 2) + 1);
        uVar27 = (uint)(message->arg1).words.high;
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(&this_01->field_1C23)[uVar27 / 0x13],0xfffffffe,
                   0x114,uVar27 + 0x3f);
        break;
      case MESS_OPTPANELTY_8162:
        uVar27 = this_01->field_1C9F->elementSize;
        if ((message->arg0).u32 < uVar27) {
          if (this_01->array_00BC[0xc].field_01DF == '\x03') {
            this_01->field_002D = 0x6956;
            /* ST_CALLSITE[005B1C4E]: CALL dword ptr [EAX] */
            this_01->GetMessage((STMessage *)&this_01->field_0x1d);
          }
          else {
            uVar13 = (uint)(message->arg0).words.low;
            if ((int)uVar13 < (int)uVar27) {
              pbVar16 = *(byte **)(this_01->field_1C9F->growCapacity + uVar13 * 4);
            }
            else {
              pbVar16 = nullptr;
            }
            pbVar22 = &DAT_007cc8b4;
            pbVar17 = pbVar16;
            do {
              bVar1 = *pbVar17;
              bVar23 = bVar1 < *pbVar22;
              if (bVar1 != *pbVar22) {
LAB_005b1b67:
                iVar24 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                goto LAB_005b1b6c;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar17[1];
              bVar23 = bVar1 < pbVar22[1];
              if (bVar1 != pbVar22[1]) goto LAB_005b1b67;
              pbVar17 = pbVar17 + 2;
              pbVar22 = pbVar22 + 2;
            } while (bVar1 != 0);
            iVar24 = 0;
LAB_005b1b6c:
            if (iVar24 == 0) {
              pcVar15 = &this_01->field_1DA7;
              FUN_006b78c0(pcVar15,pcVar15);
              Library::MSVCRT::FUN_0072e730
                        ((byte *)pcVar15,local_188,local_28c,nullptr,nullptr);
              Library::MSVCRT::__makepath
                        (pcVar15,(char *)local_188,(char *)local_28c,nullptr,nullptr);
            }
            else {
              uVar27 = 0xffffffff;
              do {
                pbVar17 = pbVar16;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pbVar17 = pbVar16 + 1;
                bVar1 = *pbVar16;
                pbVar16 = pbVar17;
              } while (bVar1 != 0);
              local_8 = (byte *)~uVar27;
              iVar24 = -1;
              pcVar15 = &this_01->field_1DA7;
              do {
                pcVar18 = pcVar15;
                if (iVar24 == 0) break;
                iVar24 = iVar24 + -1;
                pcVar18 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar18;
              } while (cVar2 != '\0');
              pbVar16 = pbVar17 + -(int)local_8;
              pbVar17 = (byte *)(pcVar18 + -1);
              for (uVar27 = (uint)local_8 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
                *(undefined4 *)pbVar17 = *(undefined4 *)pbVar16;
                pbVar16 = pbVar16 + 4;
                pbVar17 = pbVar17 + 4;
              }
              for (uVar27 = (uint)local_8 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pbVar17 = *pbVar16;
                pbVar16 = pbVar16 + 1;
                pbVar17 = pbVar17 + 1;
              }
            }
            pcVar15 = &this_01->field_1DA7;
            FUN_006b78c0(pcVar15,pcVar15);
            if (this_01->field_1C8F != (HANDLE)0x0) {
              /* ST_CALLSITE[005B1BFF]: CALL dword ptr [0x0085bcac] */
              FindCloseChangeNotification(this_01->field_1C8F);
            }
            /* ST_CALLSITE[005B1C0A]: CALL dword ptr [0x0085bcfc] */
            pvVar10 = FindFirstChangeNotificationA(pcVar15,0,1);
            this_01->field_1C8F = pvVar10;
            if (pvVar10 == (HANDLE)0xffffffff) {
              this_01->field_1C8F = (HANDLE)0x0;
            }
            FUN_006b8280(pcVar15,pcVar15);
            /* ST_CALLSITE[005B1C35]: CALL 0x00403b0c; direct=00403B0C ChooseMapTy::PrepFiles */
            PrepFiles(this_01,this_01->field_1C93);
          }
        }
        else {
          switch(this_01->array_00BC[0xc].field_01DF) {
          case 1:
          case 2:
            this_01->field_002D = 0x694a;
            /* ST_CALLSITE[005B1C9B]: CALL dword ptr [EDX] */
            this_01->GetMessage((STMessage *)&this_01->field_0x1d);
            break;
          case 4:
          case 5:
          case 0xc:
          case 0x13:
            this_01->field_002D = 0x694e;
            /* ST_CALLSITE[005B1CB1]: CALL dword ptr [EDX] */
            this_01->GetMessage((STMessage *)&this_01->field_0x1d);
            break;
          case 9:
          case 10:
          case 0xb:
            this_01->field_002D = 0x6949;
            /* ST_CALLSITE[005B1C85]: CALL dword ptr [EAX] */
            this_01->GetMessage((STMessage *)&this_01->field_0x1d);
          }
        }
        break;
      case MESS_SIDTY_8163:
        DVar5 = this_01->field_0061;
        this_01->field_1C93 = message->arg0;
        this_01->array_00BC[0xc].field_01E4 = 1;
        this_01->array_00BC[0xc].field_01E8 = DVar5;
        break;
      case MESS_OPTPANELTY_8164:
        /* ST_CALLSITE[005B1E80]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_01->array_00BC[0xc].field_01F0,
                   (int)message,0);
        break;
      case MESS_OPTPANELTY_8165:
        /* ST_CALLSITE[005B1E95]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,(RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1B01,
                   (int)message,0);
        break;
      case MESS_SHARED_8166:
        uVar27 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
        this_01->field_1BB2 = uVar27;
        if (this_01->field_1B96 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)this_01->field_1BDA,this_01->field_1B96,this_01->field_1B9A,
                     this_01->field_1BAE,uVar27);
        }
      }
      goto cf_common_exit_005B2053;
    }
    iVar24 = thunk_FUN_005ddb40(this_01->array_00BC[0xc].field_01DB);
    if (iVar24 == 0) {
      if (DAT_008067a0 != '\0') {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar24 = *(int *)(this_01->array_00BC[0xc].field_01DB + 0x686);
        if (*(int *)(iVar24 + 8) < 1) {
          pcVar15 = nullptr;
        }
        else {
          pcVar15 = (char *)**(undefined4 **)(iVar24 + 0x14);
        }
        bVar11 = thunk_FUN_005717e0(pcVar15);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,bVar11) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar24 = *(int *)(this_01->array_00BC[0xc].field_01DB + 0x686);
          if (*(int *)(iVar24 + 8) < 1) {
            /* ST_CALLSITE[005B1F59]: CALL dword ptr [0x0085c064] */
            CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,nullptr);
          }
          else {
            /* ST_CALLSITE[005B1F46]: CALL dword ptr [0x0085c064] */
            CFsgsConnection::SendChatMessage
                      ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar24 + 0x14));
          }
          goto LAB_005b2011;
        }
      }
      pcVar15 = local_6e0;
      for (iVar24 = 0x114; iVar24 != 0; iVar24 = iVar24 + -1) {
        pcVar15[0] = '\0';
        pcVar15[1] = '\0';
        pcVar15[2] = '\0';
        pcVar15[3] = '\0';
        pcVar15 = pcVar15 + 4;
      }
      *pcVar15 = '\0';
      uVar27 = 0xffffffff;
      pcVar15 = &CHAR_00h_00807ddd;
      do {
        pcVar18 = pcVar15;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar18 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar18;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      this_00 = (StartSystemTy *)this_01->array_00BC[0xc].field_01DB;
      pcVar15 = pcVar18 + -uVar27;
      pcVar18 = local_6e0;
      memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
      uVar13 = 0;
      pDVar7 = this_00->field_0686;
      if ((int)pDVar7->elementSize < 1) {
        pcVar15 = nullptr;
      }
      else {
        pcVar15 = *(char **)pDVar7->growCapacity;
      }
      uVar27 = 0xffffffff;
      do {
        pcVar18 = pcVar15;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar18 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar18;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      pcVar15 = pcVar18 + -uVar27;
      pcVar18 = local_6a0;
      memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
      uVar13 = 0;
      uVar27 = 0;
      local_c = local_6a0;
      /* ST_CALLSITE[005B1FE8]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
      StartSystemTy::AddToChat(this_00,(int)local_6e0);
      FUN_00715360(g_int_00811764,0,'\x1b',local_6e0,0x451,1,0xffffffff);
    }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_005b2011:
    Library::DKW::TBL::FUN_006b6020
              (*(DArrayTy **)(this_01->array_00BC[0xc].field_01DB + 0x686),0,&CHAR_00h_008016a0);
    iVar24 = this_01->array_00BC[0xc].field_01DB;
    this_01->field_002D = 0x33;
    uVar14 = *(undefined4 *)(iVar24 + 0x686);
    this_01->field_0031 = (short)uVar14;
    this_01->field_0033 = (short)((uint)uVar14 >> 0x10);
    FUN_006e6080(this_01,2,*(undefined4 *)(iVar24 + 0x54c),(undefined4 *)&this_01->field_0x1d);
    goto cf_common_exit_005B2053;
  }
  if (SVar3 == MESS_CHOOSEMAPTY_6956) {
    if ((((this_01->field_0065 != '\x01') ||
         (cVar2 = this_01->array_00BC[0xc].field_01DF, cVar2 == '\f')) || (cVar2 == '\x04')) ||
       ((cVar2 == '\x05' || (cVar2 == '\x13')))) goto cf_common_exit_005B2053;
    uVar14 = this_01->array_00BC[0xc].field_01EC;
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,uVar14,(undefined4 *)&this_01->field_0x1d);
    STPiece<0,2>(uVar27) = this_01->field_0031;
    STPiece<2,2>(uVar27) = this_01->field_0033;
    if (this_01->field_1C9F->elementSize <= uVar27) goto cf_common_exit_005B2053;
    if (this_01->array_00BC[0xc].field_01E4 != 0) {
      /* ST_CALLSITE[005B1915]: CALL 0x004042b4; direct=004042B4 ChooseMapTy::ShowDescription */
      ShowDescription(this_01,this_01->field_1C93);
      this_01->array_00BC[0xc].field_01E4 = 0;
    }
    STPiece<0,1>(DAT_008087a0) = this_01->array_00BC[0xc].field_01DF;
    uVar27 = 0xffffffff;
    pcVar15 = &CHAR_00h_0080ed16;
    do {
      pcVar18 = pcVar15;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    pcVar15 = pcVar18 + -uVar27;
    pcVar18 = (char *)&DAT_0080f33a;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    uVar13 = 0;
    if (*(int *)&this_01->field_0031 < (int)this_01->field_1C9F->elementSize) {
      uVar14 = *(undefined4 *)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0031 * 4);
    }
    else {
      uVar14 = 0;
    }
    /* ST_CALLSITE[005B1985]: CALL ESI */
    wsprintfA(&CHAR_00h_0080ef1e,"%s%s\\%s",PTR_s_MISSIONS__0079c054,uVar14,
              &CHAR_00h_0080ed16);
    if (*(int *)&this_01->field_0031 < (int)this_01->field_1C9F->elementSize) {
      uVar14 = *(undefined4 *)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0031 * 4);
    }
    else {
      uVar14 = 0;
    }
    /* ST_CALLSITE[005B19B9]: CALL ESI */
    wsprintfA(&CHAR_00h_0080ed16,"%s%s\\%s",&this_01->field_1DA7,uVar14,&DAT_0080f33a);
    STPiece<0,1>(DAT_008087a0) = 3;
    /* ST_CALLSITE[005B19CC]: CALL 0x00404b4c; direct=00404B4C STAppC::sub_0056E9E0 */
    iVar24 = STAppC::sub_0056E9E0((STAppC *)&DAT_00807620,1);
    if (iVar24 == 0) goto cf_common_exit_005B2053;
    uVar27 = 0xffffffff;
    pcVar15 = &CHAR_00h_00807784;
    do {
      pcVar18 = pcVar15;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    pcVar15 = pcVar18 + -uVar27;
    pcVar18 = &CHAR_00h_0080f22a;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    uVar13 = 0;
    FUN_006b8280(&CHAR_00h_0080f22a,&CHAR_00h_0080f22a);
    if (*(int *)&this_01->field_0031 < (int)this_01->field_1C9F->elementSize) {
      pcVar15 = *(char **)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0031 * 4);
    }
    else {
      pcVar15 = nullptr;
    }
    uVar27 = 0xffffffff;
    do {
      pcVar18 = pcVar15;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    iVar24 = -1;
    pcVar15 = &CHAR_00h_0080f22a;
    do {
      pcVar20 = pcVar15;
      if (iVar24 == 0) break;
      iVar24 = iVar24 + -1;
      pcVar20 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar20;
    } while (cVar2 != '\0');
    pcVar15 = pcVar18 + -uVar27;
    pcVar18 = pcVar20 + -1;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    uVar13 = 0;
    FUN_006b8280(&CHAR_00h_0080f22a,&CHAR_00h_0080f22a);
    uVar27 = 0xffffffff;
    pcVar19 = PTR_s_CAMPAIGN_VPS_0079c05c;
    do {
      pcVar15 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar15 = pcVar19 + 1;
      cVar2 = *pcVar19;
      pcVar19 = pcVar15;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    iVar24 = -1;
    pcVar18 = &CHAR_00h_0080f22a;
    do {
      pcVar20 = pcVar18;
      if (iVar24 == 0) break;
      iVar24 = iVar24 + -1;
      pcVar20 = pcVar18 + 1;
      cVar2 = *pcVar18;
      pcVar18 = pcVar20;
    } while (cVar2 != '\0');
    pcVar15 = pcVar15 + -uVar27;
    pcVar18 = pcVar20 + -1;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    uVar13 = 0;
    memset(&DAT_0080c522, 0, 0x27f0); /* compiler bulk-zero initialization */
    thunk_FUN_005b6350(this_01,0x6948,0,0);
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_20B3 = 1;
    this_01->field_20B4 = 1;
    this_01->field_20B7 = 0;
    /* ST_CALLSITE[005B1ACD]: CALL dword ptr [EAX + 0x8] */
    this_01->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pMVar12 = *(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6);
LAB_005b1644:
    if (pMVar12 != nullptr) {
      /* ST_CALLSITE[005B1652]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      MMsgTy::HidePanel(pMVar12,1,0,1);
    }
    goto cf_common_exit_005B2053;
  }
  switch(SVar3) {
  case MESS_WAITTY_6943:
    thunk_FUN_005b6350(this_01,0x6942,(message->arg0).u32,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    cVar2 = this_01->array_00BC[0xc].field_01DF;
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_20B3 = 1;
    this_01->field_20B4 = 1;
    if (((cVar2 == '\f') || (cVar2 == '\x04')) || ((cVar2 == '\x05' || (cVar2 == '\x13')))) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    this_01->field_20B7 = uVar9;
    /* ST_CALLSITE[005B1093]: CALL dword ptr [EAX + 0x8] */
    this_01->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pMVar12 = *(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6);
    if (pMVar12 != nullptr) {
      /* ST_CALLSITE[005B10AF]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      MMsgTy::HidePanel(pMVar12,1,0,1);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
    STPiece<0,1>(DAT_008087a0) = this_01->array_00BC[0xc].field_01DF;
    switch(this_01->array_00BC[0xc].field_01DF) {
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
    cVar2 = this_01->array_00BC[0xc].field_01DF;
    this_01->field_0049 = 1;
    if (cVar2 == '\x03') {
      this_01->field_004D = 0x7101;
      this_01->field_0051 = 3;
      this_01->field_0055 = 0;
      thunk_FUN_005b66e0((MTaskTy *)this_01);
    }
    else {
      this_01->field_004D = 0x60ff;
      thunk_FUN_005b66e0((MTaskTy *)this_01);
    }
    break;
  case MESS_FSGSTY_6949:
  case MESS_FSGSTY_694A:
    if ((((this_01->field_0065 != '\x01') ||
         (cVar2 = this_01->array_00BC[0xc].field_01DF, cVar2 == '\f')) || (cVar2 == '\x04')) ||
       ((cVar2 == '\x05' || (cVar2 == '\x13')))) break;
    uVar14 = this_01->array_00BC[0xc].field_01EC;
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,uVar14,(undefined4 *)&this_01->field_0x1d);
    uVar27 = this_01->field_1C9F->elementSize;
    if ((*(uint *)&this_01->field_0031 < uVar27) ||
       ((local_8 = (byte *)(*(uint *)&this_01->field_0031 - uVar27), (int)local_8 < 0 ||
        ((int)this_01->field_1C97->elementSize <= (int)local_8)))) break;
    uVar27 = 0xffffffff;
    pcVar15 = &this_01->field_1DA7;
    do {
      pcVar18 = pcVar15;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    pcVar15 = pcVar18 + -uVar27;
    pcVar18 = &CHAR_00h_0080ed16;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    uVar13 = 0;
    bVar1 = this_01->array_00BC[0xc].field_01DF;
    if ((8 < bVar1) && (bVar1 < 0xc)) {
      uVar27 = 0xffffffff;
      pcVar15 = PTR_DAT_0079c06c;
      do {
        pcVar18 = pcVar15;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar18 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar18;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      iVar24 = -1;
      pcVar15 = &CHAR_00h_0080ed16;
      do {
        pcVar20 = pcVar15;
        if (iVar24 == 0) break;
        iVar24 = iVar24 + -1;
        pcVar20 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar20;
      } while (cVar2 != '\0');
      pcVar15 = pcVar18 + -uVar27;
      pcVar18 = pcVar20 + -1;
      memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
      uVar13 = 0;
      _DAT_0080f32e = 1;
      DAT_0080879c = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->elementSize) {
      pcVar15 = *(char **)(this_01->field_1C97->growCapacity + (int)local_8 * 4);
    }
    else {
      pcVar15 = nullptr;
    }
    uVar27 = 0xffffffff;
    do {
      pcVar18 = pcVar15;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    iVar24 = -1;
    pcVar15 = &CHAR_00h_0080ed16;
    do {
      pcVar20 = pcVar15;
      if (iVar24 == 0) break;
      iVar24 = iVar24 + -1;
      pcVar20 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar20;
    } while (cVar2 != '\0');
    pcVar15 = pcVar18 + -uVar27;
    pcVar18 = pcVar20 + -1;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    uVar13 = 0;
    uVar27 = 0xffffffff;
    pcVar15 = &CHAR_00h_0080ed16;
    do {
      pcVar18 = pcVar15;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    pcVar15 = pcVar18 + -uVar27;
    pcVar18 = (char *)&DAT_0080ee1a;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    uVar27 = 0xffffffff;
    pcVar15 = &CHAR_00h_00807680;
    do {
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar2 != '\0');
    uVar13 = 0xffffffff;
    pcVar15 = (char *)((int)&DAT_0080ed12 + ~uVar27 + 3);
    do {
      pcVar18 = pcVar15;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar13 = ~uVar13;
    pcVar15 = pcVar18 + -uVar13;
    pcVar18 = &CHAR_00h_0080ef1e;
    memmove(pcVar18, pcVar15, uVar13); /* compiler REP MOVS byte copy */
    uVar13 = 0;
    if (this_01->array_00BC[0xc].field_01E4 != 0) {
      /* ST_CALLSITE[005B158E]: CALL 0x004042b4; direct=004042B4 ChooseMapTy::ShowDescription */
      ShowDescription(this_01,this_01->field_1C93);
      this_01->array_00BC[0xc].field_01E4 = 0;
    }
    STPiece<0,1>(DAT_008087a0) = this_01->array_00BC[0xc].field_01DF;
    bVar1 = this_01->array_00BC[0xc].field_01DF;
    if ((bVar1 != 0) && (bVar1 < 3)) {
      /* ST_CALLSITE[005B15BC]: CALL 0x004025b3; direct=004025B3 STAppC::sub_0056EF50 */
      STAppC::sub_0056EF50((STAppC *)&DAT_00807620);
      /* ST_CALLSITE[005B15C6]: CALL 0x004039ae; direct=004039AE STAppC::sub_0056F040 */
      STAppC::sub_0056F040((STAppC *)&DAT_00807620);
    }
    if (this_01->array_00BC[0xc].field_01DF == '\x01') {
      /* ST_CALLSITE[005B15DB]: CALL 0x004025b8; direct=004025B8 STAppC::sub_0056EBE0 */
      STAppC::sub_0056EBE0((STAppC *)&DAT_00807620);
    }
    thunk_FUN_005b6350(this_01,0x6948,0,0);
    cVar2 = this_01->array_00BC[0xc].field_01DF;
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_20B3 = 1;
    this_01->field_20B4 = 1;
    if ((((cVar2 == '\f') || (cVar2 == '\x04')) || (cVar2 == '\x05')) || (cVar2 == '\x13')) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    this_01->field_20B7 = uVar9;
    /* ST_CALLSITE[005B1635]: CALL dword ptr [EDX + 0x8] */
    this_01->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pMVar12 = *(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6);
    goto LAB_005b1644;
  case 0x694b:
    cVar2 = this_01->array_00BC[0xc].field_01DF;
    if (((cVar2 != '\f') && (cVar2 != '\x04')) && ((cVar2 != '\x05' && (cVar2 != '\x13')))) {
      uVar14 = this_01->array_00BC[0xc].field_01EC;
      this_01->field_002D = 0x26;
      FUN_006e6080(this_01,2,uVar14,(undefined4 *)&this_01->field_0x1d);
      uVar27 = this_01->field_1C9F->elementSize;
      if (((uVar27 <= *(uint *)&this_01->field_0031) &&
          (iVar24 = *(uint *)&this_01->field_0031 - uVar27, -1 < iVar24)) &&
         (iVar24 < (int)this_01->field_1C97->elementSize)) {
        uVar27 = 0xffffffff;
        pcVar15 = &this_01->field_1DA7;
        do {
          pcVar18 = pcVar15;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar18 = pcVar15 + 1;
          cVar2 = *pcVar15;
          pcVar15 = pcVar18;
        } while (cVar2 != '\0');
        uVar27 = ~uVar27;
        pcVar15 = pcVar18 + -uVar27;
        pcVar18 = &CHAR_00h_0080ed16;
        memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
        uVar13 = 0;
        if (iVar24 < (int)this_01->field_1C97->elementSize) {
          pcVar15 = *(char **)(this_01->field_1C97->growCapacity + iVar24 * 4);
        }
        else {
          pcVar15 = nullptr;
        }
        uVar27 = 0xffffffff;
        do {
          pcVar18 = pcVar15;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar18 = pcVar15 + 1;
          cVar2 = *pcVar15;
          pcVar15 = pcVar18;
        } while (cVar2 != '\0');
        uVar27 = ~uVar27;
        iVar24 = -1;
        pcVar15 = &CHAR_00h_0080ed16;
        do {
          pcVar20 = pcVar15;
          if (iVar24 == 0) break;
          iVar24 = iVar24 + -1;
          pcVar20 = pcVar15 + 1;
          cVar2 = *pcVar15;
          pcVar15 = pcVar20;
        } while (cVar2 != '\0');
        pcVar15 = pcVar18 + -uVar27;
        pcVar18 = pcVar20 + -1;
        memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
        uVar13 = 0;
        uVar27 = 0xffffffff;
        pcVar15 = &CHAR_00h_0080ed16;
        do {
          pcVar18 = pcVar15;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar18 = pcVar15 + 1;
          cVar2 = *pcVar15;
          pcVar15 = pcVar18;
        } while (cVar2 != '\0');
        uVar27 = ~uVar27;
        pcVar15 = pcVar18 + -uVar27;
        pcVar18 = (char *)&DAT_0080ee1a;
        memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
        if (this_01->array_00BC[0xc].field_01E4 != 0) {
          /* ST_CALLSITE[005B1765]: CALL 0x004042b4; direct=004042B4 ChooseMapTy::ShowDescription */
          ShowDescription(this_01,this_01->field_1C93);
          this_01->array_00BC[0xc].field_01E4 = 0;
        }
        CVar2 = this_01->array_00BC[0xc].field_01DF;
        if ((CVar2 != 0) && (CVar2 < 3)) {
          thunk_FUN_005b6350(this_01,0x6120,(uint)CVar2,(uint)CVar2);
          this_01->field_20B3 = 1;
          this_01->field_20B7 = 0;
          this_01->field_20B6 = 0;
          this_01->field_20B5 = 0;
          this_01->field_20B4 = 0;
          /* ST_CALLSITE[005B17C4]: CALL dword ptr [EDX + 0x8] */
          this_01->CloseButtons();
          iVar24 = this_01->array_00BC[0xc].field_01DB;
          if (*(int *)(iVar24 + 0x2e6) != 0) {
            local_38 = 0;
            local_3c = 0x10001;
            local_34 = 0;
            local_30 = 0;
            MMsgTy::thunk_FUN_005b8f40(*(MMsgTy **)(iVar24 + 0x2e6),&local_3c);
          }
        }
      }
    }
    break;
  case 0x694c:
    uVar27 = (uint)(byte)this_01->array_00BC[0xc].field_01DF;
    switch(uVar27) {
    case 4:
    case 5:
    case 0xc:
    case 0x13:
      uVar13 = 7;
      uVar14 = 0x6121;
      break;
    default:
      uVar13 = 6;
      uVar14 = 0x6120;
    }
    thunk_FUN_005b6350(this_01,uVar14,uVar13,uVar27);
    this_01->field_20B4 = 1;
    this_01->field_20B3 = 1;
    this_01->field_20B7 = 0;
    this_01->field_20B6 = 0;
    this_01->field_20B5 = 0;
    /* ST_CALLSITE[005B1864]: CALL dword ptr [EDX + 0x8] */
    this_01->CloseButtons();
    iVar24 = this_01->array_00BC[0xc].field_01DB;
    if (*(int *)(iVar24 + 0x2e6) != 0) {
      local_18 = 0;
      local_14 = 0;
      local_1c = 0x10101;
      local_10 = 0;
      MMsgTy::thunk_FUN_005b8f40(*(MMsgTy **)(iVar24 + 0x2e6),&local_1c);
    }
    break;
  case MESS_WAITTY_694D:
    thunk_FUN_005b6350(this_01,0x6105,0,0);
    cVar2 = this_01->array_00BC[0xc].field_01DF;
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_20B3 = 1;
    this_01->field_20B4 = 1;
    if ((((cVar2 == '\f') || (cVar2 == '\x04')) || (cVar2 == '\x05')) || (cVar2 == '\x13')) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    this_01->field_20B7 = uVar9;
    goto LAB_005b1108;
  case 0x694e:
    uVar14 = this_01->array_00BC[0xc].field_01EC;
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,uVar14,(undefined4 *)&this_01->field_0x1d);
    uVar27 = this_01->field_1C9F->elementSize;
    if (((*(uint *)&this_01->field_0031 < uVar27) ||
        (local_8 = (byte *)(*(uint *)&this_01->field_0031 - uVar27), (int)local_8 < 0)) ||
       ((int)this_01->field_1C97->elementSize <= (int)local_8)) break;
    uVar27 = 0xffffffff;
    pcVar15 = &this_01->field_1DA7;
    do {
      pcVar18 = pcVar15;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    pcVar15 = pcVar18 + -uVar27;
    pcVar18 = &CHAR_00h_0080ed16;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    uVar13 = 0;
    cVar2 = this_01->array_00BC[0xc].field_01DF;
    if ((cVar2 == '\f') || ((cVar2 == '\x13' && (DAT_00803400 == '\f')))) {
      uVar27 = 0xffffffff;
      pcVar15 = PTR_DAT_0079c06c;
      do {
        pcVar18 = pcVar15;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar18 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar18;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      iVar24 = -1;
      pcVar15 = &CHAR_00h_0080ed16;
      do {
        pcVar20 = pcVar15;
        if (iVar24 == 0) break;
        iVar24 = iVar24 + -1;
        pcVar20 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar20;
      } while (cVar2 != '\0');
      pcVar15 = pcVar18 + -uVar27;
      pcVar18 = pcVar20 + -1;
      memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
      uVar13 = 0;
      _DAT_0080f32e = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->elementSize) {
      pcVar15 = *(char **)(this_01->field_1C97->growCapacity + (int)local_8 * 4);
    }
    else {
      pcVar15 = nullptr;
    }
    uVar27 = 0xffffffff;
    do {
      pcVar18 = pcVar15;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    iVar24 = -1;
    pcVar15 = &CHAR_00h_0080ed16;
    do {
      pcVar20 = pcVar15;
      if (iVar24 == 0) break;
      iVar24 = iVar24 + -1;
      pcVar20 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar20;
    } while (cVar2 != '\0');
    pcVar15 = pcVar18 + -uVar27;
    pcVar18 = pcVar20 + -1;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    uVar13 = 0;
    uVar27 = 0xffffffff;
    pcVar15 = &CHAR_00h_0080ed16;
    do {
      pcVar18 = pcVar15;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar18 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar18;
    } while (cVar2 != '\0');
    uVar27 = ~uVar27;
    pcVar15 = pcVar18 + -uVar27;
    pcVar18 = (char *)&DAT_0080ee1a;
    memmove(pcVar18, pcVar15, uVar27); /* compiler REP MOVS byte copy */
    if (this_01->array_00BC[0xc].field_01E4 != 0) {
      /* ST_CALLSITE[005B1329]: CALL 0x004042b4; direct=004042B4 ChooseMapTy::ShowDescription */
      ShowDescription(this_01,this_01->field_1C93);
      this_01->array_00BC[0xc].field_01E4 = 0;
    }
    bVar1 = this_01->array_00BC[0xc].field_01DF;
    if (bVar1 != 0x13) {
      uVar27 = (uint)bVar1;
      uVar13 = uVar27;
      goto LAB_005b137f;
    }
    switch(DAT_00803400) {
    case '\x04':
      uVar13 = 0x13;
      uVar27 = 4;
      break;
    case '\x05':
      uVar13 = 0x13;
      uVar27 = 5;
      break;
    default:
      goto switchD_005b1362_caseD_6;
    case '\f':
      uVar13 = 0x13;
      uVar27 = 0xc;
      break;
    case '\x14':
    case '\x15':
      uVar13 = 0x13;
      uVar27 = 0x13;
    }
LAB_005b137f:
    thunk_FUN_005b6350(this_01,0x6121,uVar27,uVar13);
switchD_005b1362_caseD_6:
    this_01->field_20B3 = 1;
    this_01->field_20B4 = 0;
    this_01->field_20B6 = 0;
    this_01->field_20B5 = 0;
    this_01->field_20B7 = 0;
    /* ST_CALLSITE[005B13B2]: CALL dword ptr [EAX + 0x8] */
    this_01->CloseButtons();
    iVar24 = this_01->array_00BC[0xc].field_01DB;
    if (*(int *)(iVar24 + 0x2e6) != 0) {
      local_28 = 0;
      local_24 = 0;
      local_2c = 0x10101;
      local_20 = 0;
      MMsgTy::thunk_FUN_005b8f40(*(MMsgTy **)(iVar24 + 0x2e6),&local_2c);
    }
    break;
  case MESS_SHARED_6951:
    thunk_FUN_005b6350(this_01,0x610a,0,0);
    /* ST_CALLSITE[005B1145]: CALL dword ptr [0x0085c074] */
    CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
    this_01->field_20B7 = 1;
    this_01->field_20B6 = 1;
    this_01->field_20B5 = 1;
    this_01->field_20B3 = 1;
    this_01->field_20B4 = 1;
LAB_005b1108:
    /* ST_CALLSITE[005B110C]: CALL dword ptr [EDX + 0x8] */
    this_01->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pMVar12 = *(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6);
    if (pMVar12 != nullptr) {
      /* ST_CALLSITE[005B1128]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      MMsgTy::HidePanel(pMVar12,1,0,1);
    }
  }
cf_common_exit_005B2053:
  g_currentExceptionFrame = local_84.previous;
  /* ST_CALLSITE[005B2062]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar13 = MMObjTy::GetMessage((MMObjTy *)this_01,message);
  return iVar13;
}

