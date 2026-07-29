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
  ChooseMapTy_field_1A5FState CVar2;
  byte bVar3;
  STMessageId SVar4;
  int *piVar5;
  dword dVar6;
  DArrayTy *pDVar7;
  StartSystemTy *this_00;
  code *pcVar8;
  ChooseMapTy *this_01;
  undefined1 uVar9;
  bool bVar10;
  DWORD DVar11;
  int iVar12;
  uint *puVar13;
  HANDLE pvVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  MMsgTy *pMVar15;
  uint uVar16;
  undefined4 uVar17;
  char *pcVar18;
  byte *pbVar19;
  byte *pbVar20;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *unaff_EDI;
  UINT resourceId;
  char *pcVar21;
  char *pcVar22;
  byte *pbVar24;
  int iVar25;
  uint uVar26;
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
  DVar11 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar11;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  iVar12 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  this_01 = local_40;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar25 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x6f7,0,iVar12,
                                "%s","ChooseMapTy::GetMessage");
    if (iVar25 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar12,0,"E:\\__titans\\Start\\load_obj.cpp",0x6f7);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_40,message);
  StartSystemTy::ChatMessage(g_startSystem_0081176C,message);
  SVar4 = message->id;
  if (SVar4 < MESS_WAITTY_6943) {
    if (SVar4 == MESS_CHOOSEMAPTY_6942) {
      this_01->field_0045 = 0x200;
      this_01->field_0049 = 0;
      this_01->field_004D = 0x6102;
      this_01->field_0051 = message->arg0;
      thunk_FUN_005b66e0((MTaskTy *)this_01);
      goto cf_common_exit_005B2053;
    }
    if (MESS_CHOOSEMAPTY_6327 < SVar4) {
      if (SVar4 < MESS_SHARED_6341) {
        if (SVar4 == MESS_SETTMAPMTY_6340) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_01,
                     (RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1A5B->field_055C,
                     (int)message,0);
        }
        else {
          switch(SVar4) {
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
      else if (SVar4 == MESS_SHARED_6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1A5B->field_05ED,
                   (int)message,0);
      }
      else if (SVar4 == MESS_PRIVIDERTY_693F) {
        sub_005AE840(this_01);
      }
      else if (SVar4 == MESS_SHARED_6940) {
        sub_005AE950(this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar4 == MESS_CHOOSEMAPTY_6327) {
      piVar5 = (message->arg0).ptr;
      resourceId = 0x2342;
      sub_005B5BE0(this_01,(AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C8B,piVar5);
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
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C8B,0,
                       *piVar5 * 0x7c + -0x7c,0,0x7a,
                       this_01->field_1C8B->field_0008 -
                       ((-(uint)(piVar5[1] != 1) & 0xfffffffd) + 3));
      uVar26 = 2;
      iVar25 = -1;
      iVar12 = -1;
      puVar13 = (uint *)LoadResourceString(resourceId,g_module_00807618);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar13,iVar12,iVar25,uVar26);
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_01->field_1C87);
      goto cf_common_exit_005B2053;
    }
    if (SVar4 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
      if (SVar4 == MESS_SHARED_6105) {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = message->id;
        this_01->field_0051 = 0;
        this_01->field_0055 = 0;
        thunk_FUN_005b66e0((MTaskTy *)this_01);
      }
      else {
        switch(SVar4) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        case MESS_ID_NONE:
          NoneChooseMap(this_01,unaff_EDI);
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
    if (SVar4 < MESS_STAPPC_6122) {
      if (SVar4 < MESS_SHARED_6120) {
        if (SVar4 == MESS_SHARED_610A) {
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
    if (SVar4 != MESS_SHARED_6326) goto cf_common_exit_005B2053;
    pbVar19 = (message->arg0).ptr;
    switch(this_01->field_1A5F) {
    case CASE_1:
    case CASE_2:
      if (*(int *)pbVar19 == 1) {
        this_01->field_1A5F = CASE_1;
      }
      else {
        this_01->field_1A5F = CASE_2;
      }
      g_startSystem_0081176C->field_02EB = *pbVar19;
      if (this_01->field_1A60 == 0) goto cf_common_exit_005B0DCE;
      goto LAB_005b0dc0;
    default:
      goto cf_common_exit_005B0DCE;
    case CASE_4:
    case CASE_5:
      if (*(int *)pbVar19 == 1) {
        this_01->field_1A5F = CASE_4;
      }
      else {
        this_01->field_1A5F = CASE_5;
      }
      g_startSystem_0081176C->field_02EB = *pbVar19;
      iVar12 = this_01->field_1A60;
      break;
    case CASE_9:
    case CASE_A:
    case CASE_B:
      if (*(int *)pbVar19 == 1) {
        this_01->field_1A5F = CASE_9;
      }
      else if (*(int *)pbVar19 == 2) {
        this_01->field_1A5F = CASE_A;
      }
      else {
        this_01->field_1A5F = CASE_B;
      }
      g_startSystem_0081176C->field_02EA = *pbVar19;
      iVar12 = this_01->field_1A60;
    }
    if (iVar12 != 0) {
LAB_005b0dc0:
      PrepFiles(this_01,this_01->field_1C93);
    }
cf_common_exit_005B0DCE:
    thunk_FUN_005b6730(this_01,10,'\x01',-1);
    goto cf_common_exit_005B2053;
  }
  if (MESS_CHOOSEMAPTY_6956 < SVar4) {
    if (MESS_SHARED_C0A2 < SVar4) goto cf_common_exit_005B2053;
    if (SVar4 != MESS_SHARED_C0A2) {
      switch(SVar4) {
      case MESS_SHARED_8160:
        (message->arg1).u32 = 0x13;
        break;
      case MESS_SIDTY_8161:
        uVar26 = (uint)(message->arg0).words.low;
        dVar6 = this_01->field_1C9F->elementSize;
        if ((int)uVar26 < (int)dVar6) {
          local_8 = *(uint **)(this_01->field_1C9F->growCapacity + uVar26 * 4);
        }
        else {
          iVar12 = uVar26 - dVar6;
          if (iVar12 < (int)this_01->field_1C97->elementSize) {
            local_8 = *(uint **)(this_01->field_1C97->growCapacity + iVar12 * 4);
          }
          else {
            local_8 = (uint *)0x0;
          }
        }
        local_c = (char *)0x0;
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C7B,0,0,
                     (uint)(message->arg1).words.high,
                     ((AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C7B)->field_0004,0x13,0);
        if ((int)(uint)(message->arg0).words.low < (int)this_01->field_1C9F->elementSize) {
          pbVar19 = &DAT_007cc8b4;
          puVar13 = local_8;
          do {
            bVar3 = (byte)*puVar13;
            bVar10 = bVar3 < *pbVar19;
            if (bVar3 != *pbVar19) {
LAB_005b1d83:
              uVar26 = (uint)(1 - bVar10 == (uint)(bVar10 != 0));
              goto LAB_005b1da4;
            }
            if (bVar3 == 0) break;
            bVar3 = *(byte *)((int)puVar13 + 1);
            bVar10 = bVar3 < pbVar19[1];
            if (bVar3 != pbVar19[1]) goto LAB_005b1d83;
            puVar13 = (uint *)((int)puVar13 + 2);
            pbVar19 = pbVar19 + 2;
          } while (bVar3 != 0);
          uVar26 = 1;
        }
        else {
          uVar26 = (-(uint)(this_01->field_1C97->elementSize != 0) & 3) - 1;
        }
LAB_005b1da4:
        pcVar18 = local_c;
        if (-1 < (int)uVar26) {
          pbVar19 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_01->field_1C7F,
                                         uVar26);
          pcVar18 = *(char **)(pbVar19 + 4);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C7B,2,
                 (0x13 - *(int *)(pbVar19 + 8)) / 2 + (uint)(message->arg1).words.high,'\x06',
                 pbVar19);
        }
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0030,(int)this_01->field_1C7B,0,
                         (int)(pcVar18 + 4),(uint)(message->arg1).words.high,
                         (this_01->field_1C7B->field_0004 - (int)pcVar18) + -4,0x13);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0030,local_8,2,-1,
                       (-(uint)((message->arg0).words.high != 0) & 2) + 1);
        uVar26 = (uint)(message->arg1).words.high;
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_01->field_1C23[uVar26 / 0x13],0xfffffffe,0x114,
                   uVar26 + 0x3f);
        break;
      case MESS_OPTPANELTY_8162:
        uVar26 = this_01->field_1C9F->elementSize;
        if ((message->arg0).u32 < uVar26) {
          if (this_01->field_1A5F == CASE_3) {
            this_01->field_002D = 0x6956;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_01->field_0000->field_0000)(&this_01->field_0x1d);
          }
          else {
            uVar16 = (uint)(message->arg0).words.low;
            if ((int)uVar16 < (int)uVar26) {
              pbVar19 = *(byte **)(this_01->field_1C9F->growCapacity + uVar16 * 4);
            }
            else {
              pbVar19 = (byte *)0x0;
            }
            pbVar24 = &DAT_007cc8b4;
            pbVar20 = pbVar19;
            do {
              bVar3 = *pbVar20;
              bVar10 = bVar3 < *pbVar24;
              if (bVar3 != *pbVar24) {
LAB_005b1b67:
                iVar12 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_005b1b6c;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar20[1];
              bVar10 = bVar3 < pbVar24[1];
              if (bVar3 != pbVar24[1]) goto LAB_005b1b67;
              pbVar20 = pbVar20 + 2;
              pbVar24 = pbVar24 + 2;
            } while (bVar3 != 0);
            iVar12 = 0;
LAB_005b1b6c:
            if (iVar12 == 0) {
              pcVar18 = &this_01->field_1DA7;
              FUN_006b78c0(pcVar18,pcVar18);
              Library::MSVCRT::FUN_0072e730
                        ((byte *)pcVar18,local_188,local_28c,(byte *)0x0,(byte *)0x0);
              Library::MSVCRT::__makepath
                        (pcVar18,(char *)local_188,(char *)local_28c,(char *)0x0,(char *)0x0);
            }
            else {
              uVar26 = 0xffffffff;
              do {
                pbVar20 = pbVar19;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pbVar20 = pbVar19 + 1;
                bVar3 = *pbVar19;
                pbVar19 = pbVar20;
              } while (bVar3 != 0);
              local_8 = (uint *)~uVar26;
              iVar12 = -1;
              pcVar18 = &this_01->field_1DA7;
              do {
                pcVar21 = pcVar18;
                if (iVar12 == 0) break;
                iVar12 = iVar12 + -1;
                pcVar21 = pcVar18 + 1;
                cVar1 = *pcVar18;
                pcVar18 = pcVar21;
              } while (cVar1 != '\0');
              pbVar19 = pbVar20 + -(int)local_8;
              pbVar20 = (byte *)(pcVar21 + -1);
              for (uVar26 = (uint)local_8 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
                *(undefined4 *)pbVar20 = *(undefined4 *)pbVar19;
                pbVar19 = pbVar19 + 4;
                pbVar20 = pbVar20 + 4;
              }
              for (uVar26 = (uint)local_8 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pbVar20 = *pbVar19;
                pbVar19 = pbVar19 + 1;
                pbVar20 = pbVar20 + 1;
              }
            }
            pcVar18 = &this_01->field_1DA7;
            FUN_006b78c0(pcVar18,pcVar18);
            if (this_01->field_1C8F != (HANDLE)0x0) {
              FindCloseChangeNotification(this_01->field_1C8F);
            }
            pvVar14 = FindFirstChangeNotificationA(pcVar18,0,1);
            this_01->field_1C8F = pvVar14;
            if (pvVar14 == (HANDLE)0xffffffff) {
              this_01->field_1C8F = (HANDLE)0x0;
            }
            FUN_006b8280(pcVar18,pcVar18);
            PrepFiles(this_01,this_01->field_1C93);
          }
        }
        else {
          switch(this_01->field_1A5F) {
          case CASE_1:
          case CASE_2:
            this_01->field_002D = 0x694a;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_01->field_0000->field_0000)(&this_01->field_0x1d);
            break;
          case CASE_4:
          case CASE_5:
          case CASE_C:
          case CASE_13:
            this_01->field_002D = 0x694e;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_01->field_0000->field_0000)(&this_01->field_0x1d);
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
            this_01->field_002D = 0x6949;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_01->field_0000->field_0000)(&this_01->field_0x1d);
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
        uVar26 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
        this_01->field_1BB2 = uVar26;
        if (this_01->field_1B96 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)this_01->field_1BDA,this_01->field_1B96,this_01->field_1B9A,
                     this_01->field_1BAE,uVar26);
        }
      }
      goto cf_common_exit_005B2053;
    }
    iVar12 = thunk_FUN_005ddb40((int)this_01->field_1A5B);
    if (iVar12 == 0) {
      if (DAT_008067a0 != '\0') {
        pDVar7 = this_01->field_1A5B->field_0686;
        if ((int)pDVar7->elementSize < 1) {
          pcVar18 = (char *)0x0;
        }
        else {
          pcVar18 = *(char **)pDVar7->growCapacity;
        }
        bVar10 = thunk_FUN_005717e0(pcVar18);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,bVar10) != 0) {
          pDVar7 = this_01->field_1A5B->field_0686;
          if ((int)pDVar7->elementSize < 1) {
            CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
          }
          else {
            CFsgsConnection::SendChatMessage
                      ((CFsgsConnection *)&DAT_00802a90,*(char **)pDVar7->growCapacity);
          }
          goto LAB_005b2011;
        }
      }
      pcVar18 = local_6e0;
      for (iVar12 = 0x114; iVar12 != 0; iVar12 = iVar12 + -1) {
        pcVar18[0] = '\0';
        pcVar18[1] = '\0';
        pcVar18[2] = '\0';
        pcVar18[3] = '\0';
        pcVar18 = pcVar18 + 4;
      }
      *pcVar18 = '\0';
      uVar26 = 0xffffffff;
      pcVar18 = (char *)&DAT_00807ddd;
      do {
        pcVar21 = pcVar18;
        if (uVar26 == 0) break;
        uVar26 = uVar26 - 1;
        pcVar21 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar21;
      } while (cVar1 != '\0');
      uVar26 = ~uVar26;
      this_00 = this_01->field_1A5B;
      pcVar18 = pcVar21 + -uVar26;
      pcVar21 = local_6e0;
      for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
        *pcVar21 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar21 = pcVar21 + 1;
      }
      pDVar7 = this_00->field_0686;
      if ((int)pDVar7->elementSize < 1) {
        pcVar18 = (char *)0x0;
      }
      else {
        pcVar18 = *(char **)pDVar7->growCapacity;
      }
      uVar26 = 0xffffffff;
      do {
        pcVar21 = pcVar18;
        if (uVar26 == 0) break;
        uVar26 = uVar26 - 1;
        pcVar21 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar21;
      } while (cVar1 != '\0');
      uVar26 = ~uVar26;
      pcVar18 = pcVar21 + -uVar26;
      pcVar21 = local_6a0;
      for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
        *pcVar21 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar21 = pcVar21 + 1;
      }
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
  if (SVar4 == MESS_CHOOSEMAPTY_6956) {
    if ((((this_01->field_0065 != '\x01') || (CVar2 = this_01->field_1A5F, CVar2 == CASE_C)) ||
        (CVar2 == CASE_4)) || ((CVar2 == CASE_5 || (CVar2 == CASE_13))))
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
    uVar26 = 0xffffffff;
    pcVar18 = &DAT_0080ed16;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = (char *)&DAT_0080f33a;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->elementSize) {
      uVar17 = *(undefined4 *)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar17 = 0;
    }
    wsprintfA(&DAT_0080ef1e,"%s%s\\%s",PTR_s_MISSIONS__0079c054,uVar17,&DAT_0080ed16);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->elementSize) {
      uVar17 = *(undefined4 *)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar17 = 0;
    }
    wsprintfA(&DAT_0080ed16,"%s%s\\%s",&this_01->field_1DA7,uVar17,&DAT_0080f33a);
    DAT_008087a0 = CASE_3;
    iVar12 = STAppC::sub_0056E9E0((STAppC *)&DAT_00807620,1);
    if (iVar12 == 0) goto cf_common_exit_005B2053;
    uVar26 = 0xffffffff;
    pcVar18 = &DAT_00807784;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = (char *)&DAT_0080f22a;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->elementSize) {
      pcVar18 = *(char **)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      pcVar18 = (char *)0x0;
    }
    uVar26 = 0xffffffff;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    iVar12 = -1;
    pcVar18 = (char *)&DAT_0080f22a;
    do {
      pcVar22 = pcVar18;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar22 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar22;
    } while (cVar1 != '\0');
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = pcVar22 + -1;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    uVar26 = 0xffffffff;
    pcVar18 = PTR_s_CAMPAIGN_VPS_0079c05c;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    iVar12 = -1;
    pcVar18 = (char *)&DAT_0080f22a;
    do {
      pcVar22 = pcVar18;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar22 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar22;
    } while (cVar1 != '\0');
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = pcVar22 + -1;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    memset(&DAT_0080c522, 0, 0x27f0); /* compiler bulk-zero initialization */
    thunk_FUN_005b6350(this_01,0x6948,0,0);
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    this_01->field_20B7 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_01->field_0000->field_0008)();
    pMVar15 = this_01->field_1A5B->field_02E6;
LAB_005b1644:
    if (pMVar15 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar15,1,0,1);
    }
    goto cf_common_exit_005B2053;
  }
  switch(SVar4) {
  case MESS_WAITTY_6943:
    thunk_FUN_005b6350(this_01,0x6942,(message->arg0).u32,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    CVar2 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if (((CVar2 == CASE_C) || (CVar2 == CASE_4)) || ((CVar2 == CASE_5 || (CVar2 == CASE_13)))) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    this_01->field_20B7 = uVar9;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_01->field_0000->field_0008)();
    pMVar15 = this_01->field_1A5B->field_02E6;
    if (pMVar15 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar15,1,0,1);
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
    if ((((this_01->field_0065 != '\x01') || (CVar2 = this_01->field_1A5F, CVar2 == CASE_C)) ||
        (CVar2 == CASE_4)) || ((CVar2 == CASE_5 || (CVar2 == CASE_13)))) break;
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar26 = this_01->field_1C9F->elementSize;
    if ((*(uint *)&this_01->field_0x31 < uVar26) ||
       ((local_8 = (uint *)(*(uint *)&this_01->field_0x31 - uVar26), (int)local_8 < 0 ||
        ((int)this_01->field_1C97->elementSize <= (int)local_8)))) break;
    uVar26 = 0xffffffff;
    pcVar18 = &this_01->field_1DA7;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = &DAT_0080ed16;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    if ((8 < this_01->field_1A5F) && (this_01->field_1A5F < CASE_C)) {
      uVar26 = 0xffffffff;
      pcVar18 = PTR_DAT_0079c06c;
      do {
        pcVar21 = pcVar18;
        if (uVar26 == 0) break;
        uVar26 = uVar26 - 1;
        pcVar21 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar21;
      } while (cVar1 != '\0');
      uVar26 = ~uVar26;
      iVar12 = -1;
      pcVar18 = &DAT_0080ed16;
      do {
        pcVar22 = pcVar18;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar22 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar22;
      } while (cVar1 != '\0');
      pcVar18 = pcVar21 + -uVar26;
      pcVar21 = pcVar22 + -1;
      for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
        *pcVar21 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar21 = pcVar21 + 1;
      }
      _DAT_0080f32e = 1;
      DAT_0080879c = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->elementSize) {
      pcVar18 = *(char **)(this_01->field_1C97->growCapacity + (int)local_8 * 4);
    }
    else {
      pcVar18 = (char *)0x0;
    }
    uVar26 = 0xffffffff;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    iVar12 = -1;
    pcVar18 = &DAT_0080ed16;
    do {
      pcVar22 = pcVar18;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar22 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar22;
    } while (cVar1 != '\0');
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = pcVar22 + -1;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    uVar26 = 0xffffffff;
    pcVar18 = &DAT_0080ed16;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = (char *)&DAT_0080ee1a;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    uVar26 = 0xffffffff;
    pcVar18 = &DAT_00807680;
    do {
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    } while (cVar1 != '\0');
    uVar16 = 0xffffffff;
    pcVar18 = (char *)((int)&DAT_0080ed12 + ~uVar26 + 3);
    do {
      pcVar21 = pcVar18;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    pcVar18 = pcVar21 + -uVar16;
    pcVar21 = &DAT_0080ef1e;
    for (uVar26 = uVar16 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
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
    CVar2 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if ((((CVar2 == CASE_C) || (CVar2 == CASE_4)) || (CVar2 == CASE_5)) || (CVar2 == CASE_13)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    this_01->field_20B7 = uVar9;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_01->field_0000->field_0008)();
    pMVar15 = this_01->field_1A5B->field_02E6;
    goto LAB_005b1644;
  case 0x694b:
    CVar2 = this_01->field_1A5F;
    if (((CVar2 != CASE_C) && (CVar2 != CASE_4)) && ((CVar2 != CASE_5 && (CVar2 != CASE_13)))) {
      this_01->field_002D = 0x26;
      FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
      uVar26 = this_01->field_1C9F->elementSize;
      if (((uVar26 <= *(uint *)&this_01->field_0x31) &&
          (iVar12 = *(uint *)&this_01->field_0x31 - uVar26, -1 < iVar12)) &&
         (iVar12 < (int)this_01->field_1C97->elementSize)) {
        uVar26 = 0xffffffff;
        pcVar18 = &this_01->field_1DA7;
        do {
          pcVar21 = pcVar18;
          if (uVar26 == 0) break;
          uVar26 = uVar26 - 1;
          pcVar21 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar21;
        } while (cVar1 != '\0');
        uVar26 = ~uVar26;
        pcVar18 = pcVar21 + -uVar26;
        pcVar21 = &DAT_0080ed16;
        for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
          *pcVar21 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar21 = pcVar21 + 1;
        }
        if (iVar12 < (int)this_01->field_1C97->elementSize) {
          pcVar18 = *(char **)(this_01->field_1C97->growCapacity + iVar12 * 4);
        }
        else {
          pcVar18 = (char *)0x0;
        }
        uVar26 = 0xffffffff;
        do {
          pcVar21 = pcVar18;
          if (uVar26 == 0) break;
          uVar26 = uVar26 - 1;
          pcVar21 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar21;
        } while (cVar1 != '\0');
        uVar26 = ~uVar26;
        iVar12 = -1;
        pcVar18 = &DAT_0080ed16;
        do {
          pcVar22 = pcVar18;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar22 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar22;
        } while (cVar1 != '\0');
        pcVar18 = pcVar21 + -uVar26;
        pcVar21 = pcVar22 + -1;
        for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
          *pcVar21 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar26 = 0xffffffff;
        pcVar18 = &DAT_0080ed16;
        do {
          pcVar21 = pcVar18;
          if (uVar26 == 0) break;
          uVar26 = uVar26 - 1;
          pcVar21 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar21;
        } while (cVar1 != '\0');
        uVar26 = ~uVar26;
        pcVar18 = pcVar21 + -uVar26;
        pcVar21 = (char *)&DAT_0080ee1a;
        for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
          *pcVar21 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar21 = pcVar21 + 1;
        }
        if (this_01->field_1A64 != 0) {
          ShowDescription(this_01,this_01->field_1C93);
          this_01->field_1A64 = 0;
        }
        CVar2 = this_01->field_1A5F;
        if ((CVar2 != CASE_0) && (CVar2 < CASE_3)) {
          thunk_FUN_005b6350(this_01,0x6120,(uint)CVar2,(uint)CVar2);
          this_01->field_0x20b3 = 1;
          this_01->field_20B7 = 0;
          this_01->field_0x20b6 = 0;
          this_01->field_0x20b5 = 0;
          this_01->field_0x20b4 = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_01->field_0000->field_0008)();
          if (this_01->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
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
      uVar26 = 7;
      uVar17 = 0x6121;
      break;
    default:
      uVar26 = 6;
      uVar17 = 0x6120;
    }
    thunk_FUN_005b6350(this_01,uVar17,uVar26,(uint)this_01->field_1A5F);
    this_01->field_0x20b4 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_20B7 = 0;
    this_01->field_0x20b6 = 0;
    this_01->field_0x20b5 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_01->field_0000->field_0008)();
    if (this_01->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
      local_18 = 0;
      local_14 = 0;
      local_1c = 0x10101;
      local_10 = 0;
      MMsgTy::thunk_FUN_005b8f40(this_01->field_1A5B->field_02E6,&local_1c);
    }
    break;
  case MESS_WAITTY_694D:
    thunk_FUN_005b6350(this_01,0x6105,0,0);
    CVar2 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if ((((CVar2 == CASE_C) || (CVar2 == CASE_4)) || (CVar2 == CASE_5)) || (CVar2 == CASE_13)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    this_01->field_20B7 = uVar9;
    goto LAB_005b1108;
  case 0x694e:
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar26 = this_01->field_1C9F->elementSize;
    if (((*(uint *)&this_01->field_0x31 < uVar26) ||
        (local_8 = (uint *)(*(uint *)&this_01->field_0x31 - uVar26), (int)local_8 < 0)) ||
       ((int)this_01->field_1C97->elementSize <= (int)local_8)) break;
    uVar26 = 0xffffffff;
    pcVar18 = &this_01->field_1DA7;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = &DAT_0080ed16;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    if ((this_01->field_1A5F == CASE_C) ||
       ((this_01->field_1A5F == CASE_13 && (DAT_00803400 == '\f')))) {
      uVar26 = 0xffffffff;
      pcVar18 = PTR_DAT_0079c06c;
      do {
        pcVar21 = pcVar18;
        if (uVar26 == 0) break;
        uVar26 = uVar26 - 1;
        pcVar21 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar21;
      } while (cVar1 != '\0');
      uVar26 = ~uVar26;
      iVar12 = -1;
      pcVar18 = &DAT_0080ed16;
      do {
        pcVar22 = pcVar18;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar22 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar22;
      } while (cVar1 != '\0');
      pcVar18 = pcVar21 + -uVar26;
      pcVar21 = pcVar22 + -1;
      for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
        *pcVar21 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar21 = pcVar21 + 1;
      }
      _DAT_0080f32e = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->elementSize) {
      pcVar18 = *(char **)(this_01->field_1C97->growCapacity + (int)local_8 * 4);
    }
    else {
      pcVar18 = (char *)0x0;
    }
    uVar26 = 0xffffffff;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    iVar12 = -1;
    pcVar18 = &DAT_0080ed16;
    do {
      pcVar22 = pcVar18;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar22 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar22;
    } while (cVar1 != '\0');
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = pcVar22 + -1;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    uVar26 = 0xffffffff;
    pcVar18 = &DAT_0080ed16;
    do {
      pcVar21 = pcVar18;
      if (uVar26 == 0) break;
      uVar26 = uVar26 - 1;
      pcVar21 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar21;
    } while (cVar1 != '\0');
    uVar26 = ~uVar26;
    pcVar18 = pcVar21 + -uVar26;
    pcVar21 = (char *)&DAT_0080ee1a;
    for (uVar16 = uVar26 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *pcVar21 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar21 = pcVar21 + 1;
    }
    if (this_01->field_1A64 != 0) {
      ShowDescription(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    if (this_01->field_1A5F != CASE_13) {
      uVar26 = (uint)this_01->field_1A5F;
      uVar16 = uVar26;
      goto LAB_005b137f;
    }
    switch(DAT_00803400) {
    case '\x04':
      uVar16 = 0x13;
      uVar26 = 4;
      break;
    case '\x05':
      uVar16 = 0x13;
      uVar26 = 5;
      break;
    default:
      goto switchD_005b1362_caseD_6;
    case '\f':
      uVar16 = 0x13;
      uVar26 = 0xc;
      break;
    case '\x14':
    case '\x15':
      uVar16 = 0x13;
      uVar26 = 0x13;
    }
LAB_005b137f:
    thunk_FUN_005b6350(this_01,0x6121,uVar26,uVar16);
switchD_005b1362_caseD_6:
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 0;
    this_01->field_0x20b6 = 0;
    this_01->field_0x20b5 = 0;
    this_01->field_20B7 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_01->field_0000->field_0008)();
    if (this_01->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
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
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005b1108:
    (*(code *)this_01->field_0000->field_0008)();
    pMVar15 = this_01->field_1A5B->field_02E6;
    if (pMVar15 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar15,1,0,1);
    }
  }
cf_common_exit_005B2053:
  g_currentExceptionFrame = local_84.previous;
  iVar12 = MMObjTy::GetMessage((MMObjTy *)this_01,message);
  return iVar12;
}

