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
  char cVar1;
  ChooseMapTy_field_1A5FState CVar3;
  byte bVar4;
  STMessageId SVar5;
  int *piVar6;
  dword dVar7;
  DArrayTy *pDVar8;
  StartSystemTy *this_00;
  ChooseMapTy *this_01;
  undefined1 uVar10;
  bool bVar11;
  DWORD DVar12;
  int iVar13;
  uint *puVar14;
  HANDLE pvVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  MMsgTy *pMVar16;
  uint uVar17;
  undefined4 uVar18;
  char *pcVar19;
  byte *pbVar20;
  byte *pbVar21;
  UINT resourceId;
  char *pcVar22;
  char *pcVar23;
  byte *pbVar25;
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
  uint *local_8;
  byte CVar2;

  local_40 = this;
  DVar12 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar12;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  iVar13 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  this_01 = local_40;
  if (iVar13 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar26 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x6f7,0,iVar13,
                                "%s","ChooseMapTy::GetMessage");
    if (iVar26 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar13,0,"E:\\__titans\\Start\\load_obj.cpp",0x6f7);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_40,message);
  StartSystemTy::ChatMessage(g_startSystem_0081176C,message);
  SVar5 = message->id;
  if (SVar5 < MESS_WAITTY_6943) {
    if (SVar5 == MESS_CHOOSEMAPTY_6942) {
      this_01->field_0045 = 0x200;
      this_01->field_0049 = 0;
      this_01->field_004D = 0x6102;
      this_01->field_0051 = message->arg0;
      thunk_FUN_005b66e0((MTaskTy *)this_01);
      goto cf_common_exit_005B2053;
    }
    if (MESS_CHOOSEMAPTY_6327 < SVar5) {
      if (SVar5 < MESS_SHARED_6341) {
        if (SVar5 == MESS_SETTMAPMTY_6340) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_01,
                     (RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1A5B->field_055C,
                     (int)message,0);
        }
        else {
          switch(SVar5) {
          case MESS_SHARED_6332:
            StartSystemTy::PaintBinDesc
                      (g_startSystem_0081176C,(AnonShape_005DE050_5BD86458 *)message);
            break;
          case MESS_WAITTY_6333:
            MMMObjTy::PaintSlBut
                      ((MMMObjTy *)this_01,
                       (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_038D,
                       (int)message,0);
            break;
          case MESS_SHARED_6334:
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
      else if (SVar5 == MESS_SHARED_6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1A5B->field_05ED,
                   (int)message,0);
      }
      else if (SVar5 == MESS_PRIVIDERTY_693F) {
        sub_005AE840(this_01);
      }
      else if (SVar5 == MESS_SHARED_6940) {
        sub_005AE950(this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar5 == MESS_CHOOSEMAPTY_6327) {
      piVar6 = (message->arg0).ptr;
      resourceId = 0x2342;
      sub_005B5BE0(this_01,(RecoveredSourceFamily_dibcopy *)this_01->field_1C8B,piVar6);
      switch(this_01->field_1A5F) {
      case CASE_1:
      case CASE_2:
      case CASE_4:
      case CASE_5:
        resourceId = 0x2342;
        if (*piVar6 == 1) {
          resourceId = 0x2341;
        }
        break;
      case CASE_9:
      case CASE_A:
      case CASE_B:
        if (*piVar6 == 1) {
          resourceId = 0x233c;
        }
        else if (*piVar6 == 2) {
          resourceId = 0x233d;
        }
        else {
          resourceId = 0x233f;
        }
      }
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C8B,0,
                       *piVar6 * 0x7c + -0x7c,0,0x7a,
                       this_01->field_1C8B->field_0008 -
                       ((-(uint)(piVar6[1] != 1) & 0xfffffffd) + 3));
      uVar27 = 2;
      iVar26 = -1;
      iVar13 = -1;
      puVar14 = (uint *)LoadResourceString(resourceId,g_module_00807618);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar14,iVar13,iVar26,uVar27);
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_01->field_1C87);
      goto cf_common_exit_005B2053;
    }
    if (SVar5 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
      if (SVar5 == MESS_SHARED_6105) {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = message->id;
        this_01->field_0051 = 0;
        this_01->field_0055 = 0;
        thunk_FUN_005b66e0((MTaskTy *)this_01);
      }
      else {
        switch(SVar5) {
        case MESS_ID_NONE:
          NoneChooseMap(this_01);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case MESS_ID_CREATE:
          InitChooseMap(this_01,*(undefined1 *)((message->arg0).u32 + 0x14),
                        *(ChooseMapTy_InitChooseMap_param_2Enum *)((message->arg0).u32 + 0x18));
          break;
        case MESS_SHARED_0003:
          DoneChooseMap(this_01);
          break;
        case MESS_SHARED_0005:
          PaintChooseMap(this_01,'\0');
        }
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar5 < MESS_STAPPC_6122) {
      if (SVar5 < MESS_SHARED_6120) {
        if (SVar5 == MESS_SHARED_610A) {
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
    if (SVar5 != MESS_SHARED_6326) goto cf_common_exit_005B2053;
    pbVar20 = (message->arg0).ptr;
    switch(this_01->field_1A5F) {
    case CASE_1:
    case CASE_2:
      if (*(int *)pbVar20 == 1) {
        this_01->field_1A5F = CASE_1;
      }
      else {
        this_01->field_1A5F = CASE_2;
      }
      g_startSystem_0081176C->field_02EB = *pbVar20;
      if (this_01->field_1A60 == 0) goto cf_common_exit_005B0DCE;
      goto LAB_005b0dc0;
    default:
      goto cf_common_exit_005B0DCE;
    case CASE_4:
    case CASE_5:
      if (*(int *)pbVar20 == 1) {
        this_01->field_1A5F = CASE_4;
      }
      else {
        this_01->field_1A5F = CASE_5;
      }
      g_startSystem_0081176C->field_02EB = *pbVar20;
      iVar13 = this_01->field_1A60;
      break;
    case CASE_9:
    case CASE_A:
    case CASE_B:
      if (*(int *)pbVar20 == 1) {
        this_01->field_1A5F = CASE_9;
      }
      else if (*(int *)pbVar20 == 2) {
        this_01->field_1A5F = CASE_A;
      }
      else {
        this_01->field_1A5F = CASE_B;
      }
      g_startSystem_0081176C->field_02EA = *pbVar20;
      iVar13 = this_01->field_1A60;
    }
    if (iVar13 != 0) {
LAB_005b0dc0:
      PrepFiles(this_01,this_01->field_1C93);
    }
cf_common_exit_005B0DCE:
    thunk_FUN_005b6730(this_01,10,'\x01',-1);
    goto cf_common_exit_005B2053;
  }
  if (MESS_CHOOSEMAPTY_6956 < SVar5) {
    if (MESS_SHARED_C0A2 < SVar5) goto cf_common_exit_005B2053;
    if (SVar5 != MESS_SHARED_C0A2) {
      switch(SVar5) {
      case MESS_SHARED_8160:
        (message->arg1).u32 = 0x13;
        break;
      case MESS_SIDTY_8161:
        uVar27 = (uint)(message->arg0).words.low;
        dVar7 = this_01->field_1C9F->elementSize;
        if ((int)uVar27 < (int)dVar7) {
          local_8 = *(uint **)(this_01->field_1C9F->growCapacity + uVar27 * 4);
        }
        else {
          iVar13 = uVar27 - dVar7;
          if (iVar13 < (int)this_01->field_1C97->elementSize) {
            local_8 = *(uint **)(this_01->field_1C97->growCapacity + iVar13 * 4);
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
          pbVar20 = &DAT_007cc8b4;
          puVar14 = local_8;
          do {
            bVar4 = (byte)*puVar14;
            bVar11 = bVar4 < *pbVar20;
            if (bVar4 != *pbVar20) {
LAB_005b1d83:
              uVar27 = (uint)(1 - bVar11 == (uint)(bVar11 != 0));
              goto LAB_005b1da4;
            }
            if (bVar4 == 0) break;
            bVar4 = *(byte *)((int)puVar14 + 1);
            bVar11 = bVar4 < pbVar20[1];
            if (bVar4 != pbVar20[1]) goto LAB_005b1d83;
            puVar14 = (uint *)((int)puVar14 + 2);
            pbVar20 = pbVar20 + 2;
          } while (bVar4 != 0);
          uVar27 = 1;
        }
        else {
          uVar27 = (-(uint)(this_01->field_1C97->elementSize != 0) & 3) - 1;
        }
LAB_005b1da4:
        pcVar19 = local_c;
        if (-1 < (int)uVar27) {
          pbVar20 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_01->field_1C7F,
                                         uVar27);
          pcVar19 = *(char **)(pbVar20 + 4);
          DibPut((RecoveredSourceFamily_dibcopy *)this_01->field_1C7B,2,
                 (0x13 - *(int *)(pbVar20 + 8)) / 2 + (uint)(message->arg1).words.high,'\x06',
                 pbVar20);
        }
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0030,(int)this_01->field_1C7B,0,
                         (int)(pcVar19 + 4),(uint)(message->arg1).words.high,
                         (this_01->field_1C7B->field_0004 - (int)pcVar19) + -4,0x13);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0030,local_8,2,-1,
                       (-(uint)((message->arg0).words.high != 0) & 2) + 1);
        uVar27 = (uint)(message->arg1).words.high;
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_01->field_1C23[uVar27 / 0x13],0xfffffffe,0x114,
                   uVar27 + 0x3f);
        break;
      case MESS_OPTPANELTY_8162:
        uVar27 = this_01->field_1C9F->elementSize;
        if ((message->arg0).u32 < uVar27) {
          if (this_01->field_1A5F == CASE_3) {
            this_01->field_002D = 0x6956;
            this_01->GetMessage((STMessage *)&this_01->field_0x1d);
          }
          else {
            uVar17 = (uint)(message->arg0).words.low;
            if ((int)uVar17 < (int)uVar27) {
              pbVar20 = *(byte **)(this_01->field_1C9F->growCapacity + uVar17 * 4);
            }
            else {
              pbVar20 = nullptr;
            }
            pbVar25 = &DAT_007cc8b4;
            pbVar21 = pbVar20;
            do {
              bVar4 = *pbVar21;
              bVar11 = bVar4 < *pbVar25;
              if (bVar4 != *pbVar25) {
LAB_005b1b67:
                iVar13 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_005b1b6c;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar21[1];
              bVar11 = bVar4 < pbVar25[1];
              if (bVar4 != pbVar25[1]) goto LAB_005b1b67;
              pbVar21 = pbVar21 + 2;
              pbVar25 = pbVar25 + 2;
            } while (bVar4 != 0);
            iVar13 = 0;
LAB_005b1b6c:
            if (iVar13 == 0) {
              pcVar19 = &this_01->field_1DA7;
              FUN_006b78c0(pcVar19,pcVar19);
              Library::MSVCRT::FUN_0072e730
                        ((byte *)pcVar19,local_188,local_28c,nullptr,nullptr);
              Library::MSVCRT::__makepath
                        (pcVar19,(char *)local_188,(char *)local_28c,nullptr,nullptr);
            }
            else {
              uVar27 = 0xffffffff;
              do {
                pbVar21 = pbVar20;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pbVar21 = pbVar20 + 1;
                bVar4 = *pbVar20;
                pbVar20 = pbVar21;
              } while (bVar4 != 0);
              local_8 = (uint *)~uVar27;
              iVar13 = -1;
              pcVar19 = &this_01->field_1DA7;
              do {
                pcVar22 = pcVar19;
                if (iVar13 == 0) break;
                iVar13 = iVar13 + -1;
                pcVar22 = pcVar19 + 1;
                cVar1 = *pcVar19;
                pcVar19 = pcVar22;
              } while (cVar1 != '\0');
              pbVar20 = pbVar21 + -(int)local_8;
              pbVar21 = (byte *)(pcVar22 + -1);
              for (uVar27 = (uint)local_8 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
                *(undefined4 *)pbVar21 = *(undefined4 *)pbVar20;
                pbVar20 = pbVar20 + 4;
                pbVar21 = pbVar21 + 4;
              }
              for (uVar27 = (uint)local_8 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pbVar21 = *pbVar20;
                pbVar20 = pbVar20 + 1;
                pbVar21 = pbVar21 + 1;
              }
            }
            pcVar19 = &this_01->field_1DA7;
            FUN_006b78c0(pcVar19,pcVar19);
            if (this_01->field_1C8F != (HANDLE)0x0) {
              FindCloseChangeNotification(this_01->field_1C8F);
            }
            pvVar15 = FindFirstChangeNotificationA(pcVar19,0,1);
            this_01->field_1C8F = pvVar15;
            if (pvVar15 == (HANDLE)0xffffffff) {
              this_01->field_1C8F = (HANDLE)0x0;
            }
            FUN_006b8280(pcVar19,pcVar19);
            PrepFiles(this_01,this_01->field_1C93);
          }
        }
        else {
          switch(this_01->field_1A5F) {
          case CASE_1:
          case CASE_2:
            this_01->field_002D = 0x694a;
            this_01->GetMessage((STMessage *)&this_01->field_0x1d);
            break;
          case CASE_4:
          case CASE_5:
          case CASE_C:
          case CASE_13:
            this_01->field_002D = 0x694e;
            this_01->GetMessage((STMessage *)&this_01->field_0x1d);
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
            this_01->field_002D = 0x6949;
            this_01->GetMessage((STMessage *)&this_01->field_0x1d);
          }
        }
        break;
      case MESS_SIDTY_8163:
        this_01->field_1C93 = message->arg0;
        this_01->field_1A64 = 1;
        this_01->field_1A68 = this_01->field_0061;
        break;
      case MESS_OPTPANELTY_8164:
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,(RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1A70,
                   (int)message,0);
        break;
      case MESS_OPTPANELTY_8165:
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
    iVar13 = thunk_FUN_005ddb40((int)this_01->field_1A5B);
    if (iVar13 == 0) {
      if (DAT_008067a0 != '\0') {
        pDVar8 = this_01->field_1A5B->field_0686;
        if ((int)pDVar8->elementSize < 1) {
          pcVar19 = nullptr;
        }
        else {
          pcVar19 = *(char **)pDVar8->growCapacity;
        }
        bVar11 = thunk_FUN_005717e0(pcVar19);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,bVar11) != 0) {
          pDVar8 = this_01->field_1A5B->field_0686;
          if ((int)pDVar8->elementSize < 1) {
            CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,nullptr);
          }
          else {
            CFsgsConnection::SendChatMessage
                      ((CFsgsConnection *)&DAT_00802a90,*(char **)pDVar8->growCapacity);
          }
          goto LAB_005b2011;
        }
      }
      pcVar19 = local_6e0;
      for (iVar13 = 0x114; iVar13 != 0; iVar13 = iVar13 + -1) {
        pcVar19[0] = '\0';
        pcVar19[1] = '\0';
        pcVar19[2] = '\0';
        pcVar19[3] = '\0';
        pcVar19 = pcVar19 + 4;
      }
      *pcVar19 = '\0';
      uVar27 = 0xffffffff;
      pcVar19 = (char *)&DAT_00807ddd;
      do {
        pcVar22 = pcVar19;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar27 = ~uVar27;
      this_00 = this_01->field_1A5B;
      pcVar19 = pcVar22 + -uVar27;
      pcVar22 = local_6e0;
      memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
      uVar17 = 0;
      pDVar8 = this_00->field_0686;
      if ((int)pDVar8->elementSize < 1) {
        pcVar19 = nullptr;
      }
      else {
        pcVar19 = *(char **)pDVar8->growCapacity;
      }
      uVar27 = 0xffffffff;
      do {
        pcVar22 = pcVar19;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar27 = ~uVar27;
      pcVar19 = pcVar22 + -uVar27;
      pcVar22 = local_6a0;
      memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
      uVar17 = 0;
      local_c = local_6a0;
      StartSystemTy::AddToChat(this_00,(int)local_6e0);
      FUN_00715360(g_int_00811764,0,'\x1b',local_6e0,0x451,1,0xffffffff);
    }
LAB_005b2011:
    Library::DKW::TBL::FUN_006b6020(&this_01->field_1A5B->field_0686->flags,0,&DAT_008016a0);
    this_01->field_002D = 0x33;
    *(DArrayTy **)&this_01->field_0x31 = this_01->field_1A5B->field_0686;
    FUN_006e6080(this_01,2,this_01->field_1A5B->field_054C,(undefined4 *)&this_01->field_0x1d);
    goto cf_common_exit_005B2053;
  }
  if (SVar5 == MESS_CHOOSEMAPTY_6956) {
    if ((((this_01->field_0065 != '\x01') || (CVar3 = this_01->field_1A5F, CVar3 == CASE_C)) ||
        (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13))))
    goto cf_common_exit_005B2053;
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    if (this_01->field_1C9F->elementSize <= *(uint *)&this_01->field_0x31)
    goto cf_common_exit_005B2053;
    if (this_01->field_1A64 != 0) {
      ShowDescription(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    DAT_008087a0 = this_01->field_1A5F;
    uVar27 = 0xffffffff;
    pcVar19 = &DAT_0080ed16;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = (char *)&DAT_0080f33a;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->elementSize) {
      uVar18 = *(undefined4 *)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar18 = 0;
    }
    wsprintfA(&DAT_0080ef1e,"%s%s\\%s",PTR_s_MISSIONS__0079c054,uVar18,&DAT_0080ed16);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->elementSize) {
      uVar18 = *(undefined4 *)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar18 = 0;
    }
    wsprintfA(&DAT_0080ed16,"%s%s\\%s",&this_01->field_1DA7,uVar18,&DAT_0080f33a);
    DAT_008087a0 = CASE_3;
    iVar13 = STAppC::sub_0056E9E0((STAppC *)&DAT_00807620,1);
    if (iVar13 == 0) goto cf_common_exit_005B2053;
    uVar27 = 0xffffffff;
    pcVar19 = &DAT_00807784;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = (char *)&DAT_0080f22a;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->elementSize) {
      pcVar19 = *(char **)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      pcVar19 = nullptr;
    }
    uVar27 = 0xffffffff;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    iVar13 = -1;
    pcVar19 = (char *)&DAT_0080f22a;
    do {
      pcVar23 = pcVar19;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar23 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar23;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = pcVar23 + -1;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    uVar27 = 0xffffffff;
    pcVar19 = PTR_s_CAMPAIGN_VPS_0079c05c;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    iVar13 = -1;
    pcVar19 = (char *)&DAT_0080f22a;
    do {
      pcVar23 = pcVar19;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar23 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar23;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = pcVar23 + -1;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    memset(&DAT_0080c522, 0, 0x27f0); /* compiler bulk-zero initialization */
    thunk_FUN_005b6350(this_01,0x6948,0,0);
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    this_01->field_20B7 = 0;
    this_01->CloseButtons();
    pMVar16 = this_01->field_1A5B->field_02E6;
LAB_005b1644:
    if (pMVar16 != nullptr) {
      MMsgTy::HidePanel(pMVar16,1,0,1);
    }
    goto cf_common_exit_005B2053;
  }
  switch(SVar5) {
  case MESS_WAITTY_6943:
    thunk_FUN_005b6350(this_01,0x6942,(message->arg0).u32,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    CVar3 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if (((CVar3 == CASE_C) || (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13)))) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    this_01->field_20B7 = uVar10;
    this_01->CloseButtons();
    pMVar16 = this_01->field_1A5B->field_02E6;
    if (pMVar16 != nullptr) {
      MMsgTy::HidePanel(pMVar16,1,0,1);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
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
      thunk_FUN_005b66e0((MTaskTy *)this_01);
    }
    else {
      this_01->field_004D = 0x60ff;
      thunk_FUN_005b66e0((MTaskTy *)this_01);
    }
    break;
  case MESS_FSGSTY_6949:
  case MESS_FSGSTY_694A:
    if ((((this_01->field_0065 != '\x01') || (CVar3 = this_01->field_1A5F, CVar3 == CASE_C)) ||
        (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13)))) break;
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar27 = this_01->field_1C9F->elementSize;
    if ((*(uint *)&this_01->field_0x31 < uVar27) ||
       ((local_8 = (uint *)(*(uint *)&this_01->field_0x31 - uVar27), (int)local_8 < 0 ||
        ((int)this_01->field_1C97->elementSize <= (int)local_8)))) break;
    uVar27 = 0xffffffff;
    pcVar19 = &this_01->field_1DA7;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = &DAT_0080ed16;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    if ((8 < this_01->field_1A5F) && (this_01->field_1A5F < CASE_C)) {
      uVar27 = 0xffffffff;
      pcVar19 = PTR_DAT_0079c06c;
      do {
        pcVar22 = pcVar19;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar27 = ~uVar27;
      iVar13 = -1;
      pcVar19 = &DAT_0080ed16;
      do {
        pcVar23 = pcVar19;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar23 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar23;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar27;
      pcVar22 = pcVar23 + -1;
      memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
      uVar17 = 0;
      _DAT_0080f32e = 1;
      DAT_0080879c = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->elementSize) {
      pcVar19 = *(char **)(this_01->field_1C97->growCapacity + (int)local_8 * 4);
    }
    else {
      pcVar19 = nullptr;
    }
    uVar27 = 0xffffffff;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    iVar13 = -1;
    pcVar19 = &DAT_0080ed16;
    do {
      pcVar23 = pcVar19;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar23 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar23;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = pcVar23 + -1;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    uVar27 = 0xffffffff;
    pcVar19 = &DAT_0080ed16;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = (char *)&DAT_0080ee1a;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    uVar27 = 0xffffffff;
    pcVar19 = &DAT_00807680;
    do {
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar19 + 1;
    } while (cVar1 != '\0');
    uVar17 = 0xffffffff;
    pcVar19 = (char *)((int)&DAT_0080ed12 + ~uVar27 + 3);
    do {
      pcVar22 = pcVar19;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    pcVar19 = pcVar22 + -uVar17;
    pcVar22 = &DAT_0080ef1e;
    memmove(pcVar22, pcVar19, uVar17); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    if (this_01->field_1A64 != 0) {
      ShowDescription(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    DAT_008087a0 = this_01->field_1A5F;
    if ((this_01->field_1A5F != CASE_0) && (this_01->field_1A5F < CASE_3)) {
      STAppC::sub_0056EF50((STAppC *)&DAT_00807620);
      STAppC::sub_0056F040((STAppC *)&DAT_00807620);
    }
    if (this_01->field_1A5F == CASE_1) {
      STAppC::sub_0056EBE0((STAppC *)&DAT_00807620);
    }
    thunk_FUN_005b6350(this_01,0x6948,0,0);
    CVar3 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    this_01->field_20B7 = uVar10;
    this_01->CloseButtons();
    pMVar16 = this_01->field_1A5B->field_02E6;
    goto LAB_005b1644;
  case 0x694b:
    CVar3 = this_01->field_1A5F;
    if (((CVar3 != CASE_C) && (CVar3 != CASE_4)) && ((CVar3 != CASE_5 && (CVar3 != CASE_13)))) {
      this_01->field_002D = 0x26;
      FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
      uVar27 = this_01->field_1C9F->elementSize;
      if (((uVar27 <= *(uint *)&this_01->field_0x31) &&
          (iVar13 = *(uint *)&this_01->field_0x31 - uVar27, -1 < iVar13)) &&
         (iVar13 < (int)this_01->field_1C97->elementSize)) {
        uVar27 = 0xffffffff;
        pcVar19 = &this_01->field_1DA7;
        do {
          pcVar22 = pcVar19;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar22 = pcVar19 + 1;
          cVar1 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar1 != '\0');
        uVar27 = ~uVar27;
        pcVar19 = pcVar22 + -uVar27;
        pcVar22 = &DAT_0080ed16;
        memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        if (iVar13 < (int)this_01->field_1C97->elementSize) {
          pcVar19 = *(char **)(this_01->field_1C97->growCapacity + iVar13 * 4);
        }
        else {
          pcVar19 = nullptr;
        }
        uVar27 = 0xffffffff;
        do {
          pcVar22 = pcVar19;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar22 = pcVar19 + 1;
          cVar1 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar1 != '\0');
        uVar27 = ~uVar27;
        iVar13 = -1;
        pcVar19 = &DAT_0080ed16;
        do {
          pcVar23 = pcVar19;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar23 = pcVar19 + 1;
          cVar1 = *pcVar19;
          pcVar19 = pcVar23;
        } while (cVar1 != '\0');
        pcVar19 = pcVar22 + -uVar27;
        pcVar22 = pcVar23 + -1;
        memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar27 = 0xffffffff;
        pcVar19 = &DAT_0080ed16;
        do {
          pcVar22 = pcVar19;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar22 = pcVar19 + 1;
          cVar1 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar1 != '\0');
        uVar27 = ~uVar27;
        pcVar19 = pcVar22 + -uVar27;
        pcVar22 = (char *)&DAT_0080ee1a;
        memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        if (this_01->field_1A64 != 0) {
          ShowDescription(this_01,this_01->field_1C93);
          this_01->field_1A64 = 0;
        }
        CVar2 = this_01->field_1A5F;
        if ((CVar2 != 0) && (CVar2 < 3)) {
          thunk_FUN_005b6350(this_01,0x6120,(uint)CVar2,(uint)CVar2);
          this_01->field_0x20b3 = 1;
          this_01->field_20B7 = 0;
          this_01->field_0x20b6 = 0;
          this_01->field_0x20b5 = 0;
          this_01->field_0x20b4 = 0;
          this_01->CloseButtons();
          if (this_01->field_1A5B->field_02E6 != nullptr) {
            local_38 = 0;
            local_3c = 0x10001;
            local_34 = 0;
            local_30 = 0;
            MMsgTy::thunk_FUN_005b8f40(this_01->field_1A5B->field_02E6,&local_3c);
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
      uVar27 = 7;
      uVar18 = 0x6121;
      break;
    default:
      uVar27 = 6;
      uVar18 = 0x6120;
    }
    thunk_FUN_005b6350(this_01,uVar18,uVar27,(uint)this_01->field_1A5F);
    this_01->field_0x20b4 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_20B7 = 0;
    this_01->field_0x20b6 = 0;
    this_01->field_0x20b5 = 0;
    this_01->CloseButtons();
    if (this_01->field_1A5B->field_02E6 != nullptr) {
      local_18 = 0;
      local_14 = 0;
      local_1c = 0x10101;
      local_10 = 0;
      MMsgTy::thunk_FUN_005b8f40(this_01->field_1A5B->field_02E6,&local_1c);
    }
    break;
  case MESS_WAITTY_694D:
    thunk_FUN_005b6350(this_01,0x6105,0,0);
    CVar3 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    this_01->field_20B7 = uVar10;
    goto LAB_005b1108;
  case 0x694e:
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar27 = this_01->field_1C9F->elementSize;
    if (((*(uint *)&this_01->field_0x31 < uVar27) ||
        (local_8 = (uint *)(*(uint *)&this_01->field_0x31 - uVar27), (int)local_8 < 0)) ||
       ((int)this_01->field_1C97->elementSize <= (int)local_8)) break;
    uVar27 = 0xffffffff;
    pcVar19 = &this_01->field_1DA7;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = &DAT_0080ed16;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    if ((this_01->field_1A5F == CASE_C) ||
       ((this_01->field_1A5F == CASE_13 && (DAT_00803400 == '\f')))) {
      uVar27 = 0xffffffff;
      pcVar19 = PTR_DAT_0079c06c;
      do {
        pcVar22 = pcVar19;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar27 = ~uVar27;
      iVar13 = -1;
      pcVar19 = &DAT_0080ed16;
      do {
        pcVar23 = pcVar19;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar23 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar23;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar27;
      pcVar22 = pcVar23 + -1;
      memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
      uVar17 = 0;
      _DAT_0080f32e = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->elementSize) {
      pcVar19 = *(char **)(this_01->field_1C97->growCapacity + (int)local_8 * 4);
    }
    else {
      pcVar19 = nullptr;
    }
    uVar27 = 0xffffffff;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    iVar13 = -1;
    pcVar19 = &DAT_0080ed16;
    do {
      pcVar23 = pcVar19;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar23 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar23;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = pcVar23 + -1;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    uVar27 = 0xffffffff;
    pcVar19 = &DAT_0080ed16;
    do {
      pcVar22 = pcVar19;
      if (uVar27 == 0) break;
      uVar27 = uVar27 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar27 = ~uVar27;
    pcVar19 = pcVar22 + -uVar27;
    pcVar22 = (char *)&DAT_0080ee1a;
    memmove(pcVar22, pcVar19, uVar27); /* compiler REP MOVS byte copy */
    if (this_01->field_1A64 != 0) {
      ShowDescription(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    if (this_01->field_1A5F != CASE_13) {
      uVar27 = (uint)this_01->field_1A5F;
      uVar17 = uVar27;
      goto LAB_005b137f;
    }
    switch(DAT_00803400) {
    case '\x04':
      uVar17 = 0x13;
      uVar27 = 4;
      break;
    case '\x05':
      uVar17 = 0x13;
      uVar27 = 5;
      break;
    default:
      goto switchD_005b1362_caseD_6;
    case '\f':
      uVar17 = 0x13;
      uVar27 = 0xc;
      break;
    case '\x14':
    case '\x15':
      uVar17 = 0x13;
      uVar27 = 0x13;
    }
LAB_005b137f:
    thunk_FUN_005b6350(this_01,0x6121,uVar27,uVar17);
switchD_005b1362_caseD_6:
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 0;
    this_01->field_0x20b6 = 0;
    this_01->field_0x20b5 = 0;
    this_01->field_20B7 = 0;
    this_01->CloseButtons();
    if (this_01->field_1A5B->field_02E6 != nullptr) {
      local_28 = 0;
      local_24 = 0;
      local_2c = 0x10101;
      local_20 = 0;
      MMsgTy::thunk_FUN_005b8f40(this_01->field_1A5B->field_02E6,&local_2c);
    }
    break;
  case MESS_SHARED_6951:
    thunk_FUN_005b6350(this_01,0x610a,0,0);
    CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
    this_01->field_20B7 = 1;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
LAB_005b1108:
    this_01->CloseButtons();
    pMVar16 = this_01->field_1A5B->field_02E6;
    if (pMVar16 != nullptr) {
      MMsgTy::HidePanel(pMVar16,1,0,1);
    }
  }
cf_common_exit_005B2053:
  g_currentExceptionFrame = local_84.previous;
  iVar13 = MMObjTy::GetMessage((MMObjTy *)this_01,message);
  return iVar13;
}

