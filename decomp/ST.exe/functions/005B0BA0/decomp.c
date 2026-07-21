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
   direct_offsets={10:4,14:24,18:5,1c:0} */

int __thiscall ChooseMapTy::GetMessage(ChooseMapTy *this,STMessage *message)

{
  undefined1 *puVar1;
  char cVar2;
  ChooseMapTy_field_1A5FState CVar3;
  byte bVar4;
  STMessageId SVar5;
  int *piVar6;
  StartSystemTy *this_00;
  code *pcVar7;
  ChooseMapTy *this_01;
  undefined1 uVar8;
  bool bVar9;
  DWORD DVar10;
  int iVar11;
  uint *puVar12;
  HANDLE pvVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  MMsgTy *pMVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *unaff_EDI;
  UINT resourceId;
  char *pcVar20;
  char *pcVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
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
  DVar10 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar10;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  iVar11 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  this_01 = local_40;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar24 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x6f7,0,iVar11,
                                "%s","ChooseMapTy::GetMessage");
    if (iVar24 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar11,0,"E:\\__titans\\Start\\load_obj.cpp",0x6f7);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_40,(int)message);
  StartSystemTy::ChatMessage(PTR_0081176c,(AnonShape_005DE050_5BD86458 *)message);
  SVar5 = message->id;
  if (SVar5 < MESS_WAITTY_6943) {
    if (SVar5 == MESS_CHOOSEMAPTY_6942) {
      this_01->field_0045 = 0x200;
      this_01->field_0049 = 0;
      this_01->field_004D = 0x6102;
      this_01->field_0051 = message->arg0;
      thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_01);
      goto cf_common_exit_005B2053;
    }
    if (MESS_CHOOSEMAPTY_6327 < SVar5) {
      if (SVar5 < MESS_SHARED_6341) {
        if (SVar5 == MESS_SETTMAPMTY_6340) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_01,
                     (AnonShape_005B6560_61F462DF *)&this_01->field_1A5B->field_055C,(int)message,0)
          ;
        }
        else {
          switch(SVar5) {
          case MESS_SHARED_6332:
            StartSystemTy::PaintBinDesc(PTR_0081176c,(AnonShape_005DE050_5BD86458 *)message);
            break;
          case MESS_WAITTY_6333:
            MMMObjTy::PaintSlBut
                      ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_038D,
                       (int)message,0);
            break;
          case MESS_SHARED_6334:
            MMMObjTy::PaintSlBut
                      ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_041E,
                       (int)message,0);
            break;
          case MESS_WAITTY_6335:
            PTR_0081176c->field_04CF =
                 *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
            if (PTR_0081176c->field_04B3 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,
                         PTR_0081176c->field_04B7,PTR_0081176c->field_04CB,PTR_0081176c->field_04CF)
              ;
            }
          }
        }
      }
      else if (SVar5 == MESS_SHARED_6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,
                   (AnonShape_005B6560_61F462DF *)&this_01->field_1A5B->field_05ED,(int)message,0);
      }
      else if (SVar5 == MESS_PRIVIDERTY_693F) {
        thunk_FUN_005ae840((AnonShape_005AE840_42F3E2A7 *)this_01);
      }
      else if (SVar5 == MESS_SHARED_6940) {
        thunk_FUN_005ae950((AnonShape_005AE840_42F3E2A7 *)this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar5 == MESS_CHOOSEMAPTY_6327) {
      piVar6 = (message->arg0).ptr;
      resourceId = 0x2342;
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005B5BE0::thunk_FUN_005b5be0
                ((AnonReceiver_005B5BE0 *)this_01,(AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C8B
                 ,piVar6);
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
      ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)this_01->field_1C8B,0,*piVar6 * 0x7c + -0x7c,0,
                       0x7a,this_01->field_1C8B->field_0008 -
                            ((-(uint)(piVar6[1] != 1) & 0xfffffffd) + 3));
      uVar26 = 2;
      iVar24 = -1;
      iVar11 = -1;
      puVar12 = (uint *)LoadResourceString(resourceId,HINSTANCE_00807618);
      ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar11,iVar24,uVar26);
      FUN_006b35d0(DAT_008075a8,this_01->field_1C87);
      goto cf_common_exit_005B2053;
    }
    if (SVar5 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
      if (SVar5 == MESS_SHARED_6105) {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = message->id;
        this_01->field_0051 = 0;
        this_01->field_0055 = 0;
        thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_01);
      }
      else {
        switch(SVar5) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        case MESS_ID_NONE:
          NoneChooseMap(this_01,unaff_EDI);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case MESS_ID_CREATE:
          InitChooseMap(this_01,*(undefined1 *)((message->arg0).u32 + 0x14),
                        *(byte *)((message->arg0).u32 + 0x18));
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
          thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_01);
        }
      }
      else {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = message->id;
        this_01->field_0051 = message->arg0;
        this_01->field_0055 = message->arg1;
        thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar5 != MESS_SHARED_6326) goto cf_common_exit_005B2053;
    pbVar18 = (message->arg0).ptr;
    switch(this_01->field_1A5F) {
    case CASE_1:
    case CASE_2:
      if (*(int *)pbVar18 == 1) {
        this_01->field_1A5F = CASE_1;
      }
      else {
        this_01->field_1A5F = CASE_2;
      }
      PTR_0081176c->field_02EB = *pbVar18;
      if (this_01->field_1A60 == 0) goto cf_common_exit_005B0DCE;
      goto LAB_005b0dc0;
    default:
      goto cf_common_exit_005B0DCE;
    case CASE_4:
    case CASE_5:
      if (*(int *)pbVar18 == 1) {
        this_01->field_1A5F = CASE_4;
      }
      else {
        this_01->field_1A5F = CASE_5;
      }
      PTR_0081176c->field_02EB = *pbVar18;
      iVar11 = this_01->field_1A60;
      break;
    case CASE_9:
    case CASE_A:
    case CASE_B:
      if (*(int *)pbVar18 == 1) {
        this_01->field_1A5F = CASE_9;
      }
      else if (*(int *)pbVar18 == 2) {
        this_01->field_1A5F = CASE_A;
      }
      else {
        this_01->field_1A5F = CASE_B;
      }
      PTR_0081176c->field_02EA = *pbVar18;
      iVar11 = this_01->field_1A60;
    }
    if (iVar11 != 0) {
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
        uVar15 = (uint)(message->arg0).words.low;
        iVar11 = this_01->field_1C9F->field_0008;
        if ((int)uVar15 < iVar11) {
          local_8 = *(uint **)(this_01->field_1C9F->field_0014 + uVar15 * 4);
        }
        else {
          iVar11 = uVar15 - iVar11;
          if (iVar11 < (int)this_01->field_1C97->field_0008) {
            local_8 = *(uint **)(this_01->field_1C97->field_0014 + iVar11 * 4);
          }
          else {
            local_8 = (uint *)0x0;
          }
        }
        local_c = (char *)0x0;
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C7B,0,0,
                     (uint)(message->arg1).words.high,
                     ((AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C7B)->field_0004,0x13,0);
        if ((int)(uint)(message->arg0).words.low < (int)this_01->field_1C9F->field_0008) {
          pbVar18 = &DAT_007cc8b4;
          puVar12 = local_8;
          do {
            bVar4 = (byte)*puVar12;
            bVar9 = bVar4 < *pbVar18;
            if (bVar4 != *pbVar18) {
LAB_005b1d83:
              uVar15 = (uint)(1 - bVar9 == (uint)(bVar9 != 0));
              goto LAB_005b1da4;
            }
            if (bVar4 == 0) break;
            bVar4 = *(byte *)((int)puVar12 + 1);
            bVar9 = bVar4 < pbVar18[1];
            if (bVar4 != pbVar18[1]) goto LAB_005b1d83;
            puVar12 = (uint *)((int)puVar12 + 2);
            pbVar18 = pbVar18 + 2;
          } while (bVar4 != 0);
          uVar15 = 1;
        }
        else {
          uVar15 = (-(uint)(this_01->field_1C97->field_0008 != 0) & 3) - 1;
        }
LAB_005b1da4:
        pcVar17 = local_c;
        if (-1 < (int)uVar15) {
          pbVar18 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_01->field_1C7F,
                                         uVar15);
          pcVar17 = *(char **)(pbVar18 + 4);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C7B,2,
                 (0x13 - *(int *)(pbVar18 + 8)) / 2 + (uint)(message->arg1).words.high,'\x06',
                 pbVar18);
        }
        ccFntTy::SetSurf(PTR_0081176c->field_0030,(int)this_01->field_1C7B,0,(int)(pcVar17 + 4),
                         (uint)(message->arg1).words.high,
                         (this_01->field_1C7B->field_0004 - (int)pcVar17) + -4,0x13);
        ccFntTy::WrStr(PTR_0081176c->field_0030,local_8,2,-1,
                       (-(uint)((message->arg0).words.high != 0) & 2) + 1);
        uVar15 = (uint)(message->arg1).words.high;
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,(&this_01->field_1C23)[uVar15 / 0x13],0xfffffffe,0x114,uVar15 + 0x3f
                  );
        break;
      case MESS_OPTPANELTY_8162:
        uVar15 = this_01->field_1C9F->field_0008;
        if ((message->arg0).u32 < uVar15) {
          if (this_01->field_1A5F == CASE_3) {
            this_01->field_002D = 0x6956;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_01->field_0000->field_0000)(&this_01->field_0x1d);
          }
          else {
            uVar16 = (uint)(message->arg0).words.low;
            if ((int)uVar16 < (int)uVar15) {
              pbVar18 = *(byte **)(this_01->field_1C9F->field_0014 + uVar16 * 4);
            }
            else {
              pbVar18 = (byte *)0x0;
            }
            pbVar23 = &DAT_007cc8b4;
            pbVar19 = pbVar18;
            do {
              bVar4 = *pbVar19;
              bVar9 = bVar4 < *pbVar23;
              if (bVar4 != *pbVar23) {
LAB_005b1b67:
                iVar11 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_005b1b6c;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar19[1];
              bVar9 = bVar4 < pbVar23[1];
              if (bVar4 != pbVar23[1]) goto LAB_005b1b67;
              pbVar19 = pbVar19 + 2;
              pbVar23 = pbVar23 + 2;
            } while (bVar4 != 0);
            iVar11 = 0;
LAB_005b1b6c:
            if (iVar11 == 0) {
              puVar1 = &this_01->field_1DA7;
              FUN_006b78c0(puVar1,puVar1);
              Library::MSVCRT::FUN_0072e730(puVar1,local_188,local_28c,(byte *)0x0,(byte *)0x0);
              Library::MSVCRT::__makepath
                        (puVar1,(char *)local_188,(char *)local_28c,(char *)0x0,(char *)0x0);
            }
            else {
              uVar15 = 0xffffffff;
              do {
                pbVar19 = pbVar18;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1;
                pbVar19 = pbVar18 + 1;
                bVar4 = *pbVar18;
                pbVar18 = pbVar19;
              } while (bVar4 != 0);
              local_8 = (uint *)~uVar15;
              iVar11 = -1;
              pcVar17 = &this_01->field_1DA7;
              do {
                pcVar20 = pcVar17;
                if (iVar11 == 0) break;
                iVar11 = iVar11 + -1;
                pcVar20 = pcVar17 + 1;
                cVar2 = *pcVar17;
                pcVar17 = pcVar20;
              } while (cVar2 != '\0');
              pbVar18 = pbVar19 + -(int)local_8;
              pbVar19 = (byte *)(pcVar20 + -1);
              for (uVar15 = (uint)local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined4 *)pbVar19 = *(undefined4 *)pbVar18;
                pbVar18 = pbVar18 + 4;
                pbVar19 = pbVar19 + 4;
              }
              for (uVar15 = (uint)local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                *pbVar19 = *pbVar18;
                pbVar18 = pbVar18 + 1;
                pbVar19 = pbVar19 + 1;
              }
            }
            puVar1 = &this_01->field_1DA7;
            FUN_006b78c0(puVar1,puVar1);
            if (this_01->field_1C8F != (HANDLE)0x0) {
              FindCloseChangeNotification(this_01->field_1C8F);
            }
            pvVar13 = FindFirstChangeNotificationA(puVar1,0,1);
            this_01->field_1C8F = pvVar13;
            if (pvVar13 == (HANDLE)0xffffffff) {
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
                  ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)&this_01->field_1A70,
                   (int)message,0);
        break;
      case MESS_OPTPANELTY_8165:
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)&this_01->field_1B01,
                   (int)message,0);
        break;
      case MESS_SHARED_8166:
        uVar15 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
        this_01->field_1BB2 = uVar15;
        if (this_01->field_1B96 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)this_01->field_1BDA,this_01->field_1B96,this_01->field_1B9A,
                     this_01->field_1BAE,uVar15);
        }
      }
      goto cf_common_exit_005B2053;
    }
    iVar11 = thunk_FUN_005ddb40((int)this_01->field_1A5B);
    if (iVar11 == 0) {
      if (DAT_008067a0 != '\0') {
        iVar11 = this_01->field_1A5B->field_0686;
        if (*(int *)(iVar11 + 8) < 1) {
          pcVar17 = (char *)0x0;
        }
        else {
          pcVar17 = (char *)**(undefined4 **)(iVar11 + 0x14);
        }
        bVar9 = thunk_FUN_005717e0(pcVar17);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,bVar9) != 0) {
          iVar11 = this_01->field_1A5B->field_0686;
          if (*(int *)(iVar11 + 8) < 1) {
            CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
          }
          else {
            CFsgsConnection::SendChatMessage
                      ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar11 + 0x14));
          }
          goto LAB_005b2011;
        }
      }
      pcVar17 = local_6e0;
      for (iVar11 = 0x114; iVar11 != 0; iVar11 = iVar11 + -1) {
        pcVar17[0] = '\0';
        pcVar17[1] = '\0';
        pcVar17[2] = '\0';
        pcVar17[3] = '\0';
        pcVar17 = pcVar17 + 4;
      }
      *pcVar17 = '\0';
      uVar15 = 0xffffffff;
      pcVar17 = (char *)&DAT_00807ddd;
      do {
        pcVar20 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar2 != '\0');
      uVar15 = ~uVar15;
      this_00 = this_01->field_1A5B;
      pcVar17 = pcVar20 + -uVar15;
      pcVar20 = local_6e0;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
      iVar11 = this_00->field_0686;
      if (*(int *)(iVar11 + 8) < 1) {
        pcVar17 = (char *)0x0;
      }
      else {
        pcVar17 = (char *)**(undefined4 **)(iVar11 + 0x14);
      }
      uVar15 = 0xffffffff;
      do {
        pcVar20 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar2 != '\0');
      uVar15 = ~uVar15;
      pcVar17 = pcVar20 + -uVar15;
      pcVar20 = local_6a0;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
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
  if (SVar5 == MESS_CHOOSEMAPTY_6956) {
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
    uVar15 = 0xffffffff;
    pcVar17 = &DAT_0080ed16;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = (char *)&DAT_0080f33a;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->field_0008) {
      uVar26 = *(undefined4 *)(this_01->field_1C9F->field_0014 + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar26 = 0;
    }
    wsprintfA(&DAT_0080ef1e,"%s%s\\%s",PTR_s_MISSIONS__0079c054,uVar26,&DAT_0080ed16);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->field_0008) {
      uVar26 = *(undefined4 *)(this_01->field_1C9F->field_0014 + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar26 = 0;
    }
    wsprintfA(&DAT_0080ed16,"%s%s\\%s",&this_01->field_1DA7,uVar26,&DAT_0080f33a);
    DAT_008087a0 = CASE_3;
    iVar11 = thunk_FUN_0056e9e0(&DAT_00807620,1);
    if (iVar11 == 0) goto cf_common_exit_005B2053;
    uVar15 = 0xffffffff;
    pcVar17 = &DAT_00807784;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = (char *)&DAT_0080f22a;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->field_0008) {
      pcVar17 = *(char **)(this_01->field_1C9F->field_0014 + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      pcVar17 = (char *)0x0;
    }
    uVar15 = 0xffffffff;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar17 = (char *)&DAT_0080f22a;
    do {
      pcVar21 = pcVar17;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar21 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar2 != '\0');
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = pcVar21 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    FUN_006b8280((char *)&DAT_0080f22a,(char *)&DAT_0080f22a);
    uVar15 = 0xffffffff;
    pcVar17 = PTR_s_CAMPAIGN_VPS_0079c05c;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar17 = (char *)&DAT_0080f22a;
    do {
      pcVar21 = pcVar17;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar21 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar2 != '\0');
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = pcVar21 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    puVar22 = &DAT_0080c522;
    for (iVar11 = 0x9fc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar22 = 0;
      puVar22 = puVar22 + 1;
    }
    thunk_FUN_005b6350(this_01,0x6948,0,0);
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    this_01->field_20B7 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_01->field_0000->field_0008)();
    pMVar14 = this_01->field_1A5B->field_02E6;
LAB_005b1644:
    if (pMVar14 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar14,1,0,1);
    }
    goto cf_common_exit_005B2053;
  }
  switch(SVar5) {
  case MESS_WAITTY_6943:
    thunk_FUN_005b6350(this_01,0x6942,message->arg0,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    CVar3 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if (((CVar3 == CASE_C) || (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13)))) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    this_01->field_20B7 = uVar8;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_01->field_0000->field_0008)();
    pMVar14 = this_01->field_1A5B->field_02E6;
    if (pMVar14 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar14,1,0,1);
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
      thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_01);
    }
    else {
      this_01->field_004D = 0x60ff;
      thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_01);
    }
    break;
  case MESS_FSGSTY_6949:
  case MESS_FSGSTY_694A:
    if ((((this_01->field_0065 != '\x01') || (CVar3 = this_01->field_1A5F, CVar3 == CASE_C)) ||
        (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13)))) break;
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar15 = this_01->field_1C9F->field_0008;
    if ((*(uint *)&this_01->field_0x31 < uVar15) ||
       ((local_8 = (uint *)(*(uint *)&this_01->field_0x31 - uVar15), (int)local_8 < 0 ||
        ((int)this_01->field_1C97->field_0008 <= (int)local_8)))) break;
    uVar15 = 0xffffffff;
    pcVar17 = &this_01->field_1DA7;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = &DAT_0080ed16;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    if ((8 < this_01->field_1A5F) && (this_01->field_1A5F < CASE_C)) {
      uVar15 = 0xffffffff;
      pcVar17 = PTR_DAT_0079c06c;
      do {
        pcVar20 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar2 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar17 = &DAT_0080ed16;
      do {
        pcVar21 = pcVar17;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar21 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar2 != '\0');
      pcVar17 = pcVar20 + -uVar15;
      pcVar20 = pcVar21 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
      _DAT_0080f32e = 1;
      DAT_0080879c = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->field_0008) {
      pcVar17 = *(char **)(this_01->field_1C97->field_0014 + (int)local_8 * 4);
    }
    else {
      pcVar17 = (char *)0x0;
    }
    uVar15 = 0xffffffff;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar17 = &DAT_0080ed16;
    do {
      pcVar21 = pcVar17;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar21 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar2 != '\0');
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = pcVar21 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar17 = &DAT_0080ed16;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = (char *)&DAT_0080ee1a;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar17 = &DAT_00807680;
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar2 != '\0');
    uVar16 = 0xffffffff;
    pcVar17 = (char *)((int)&DAT_0080ed12 + ~uVar15 + 3);
    do {
      pcVar20 = pcVar17;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar16 = ~uVar16;
    pcVar17 = pcVar20 + -uVar16;
    pcVar20 = &DAT_0080ef1e;
    for (uVar15 = uVar16 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
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
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    this_01->field_20B7 = uVar8;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_01->field_0000->field_0008)();
    pMVar14 = this_01->field_1A5B->field_02E6;
    goto LAB_005b1644;
  case 0x694b:
    CVar3 = this_01->field_1A5F;
    if (((CVar3 != CASE_C) && (CVar3 != CASE_4)) && ((CVar3 != CASE_5 && (CVar3 != CASE_13)))) {
      this_01->field_002D = 0x26;
      FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
      uVar15 = this_01->field_1C9F->field_0008;
      if (((uVar15 <= *(uint *)&this_01->field_0x31) &&
          (iVar11 = *(uint *)&this_01->field_0x31 - uVar15, -1 < iVar11)) &&
         (iVar11 < (int)this_01->field_1C97->field_0008)) {
        uVar15 = 0xffffffff;
        pcVar17 = &this_01->field_1DA7;
        do {
          pcVar20 = pcVar17;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        uVar15 = ~uVar15;
        pcVar17 = pcVar20 + -uVar15;
        pcVar20 = &DAT_0080ed16;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar20 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar20 = pcVar20 + 1;
        }
        if (iVar11 < (int)this_01->field_1C97->field_0008) {
          pcVar17 = *(char **)(this_01->field_1C97->field_0014 + iVar11 * 4);
        }
        else {
          pcVar17 = (char *)0x0;
        }
        uVar15 = 0xffffffff;
        do {
          pcVar20 = pcVar17;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        uVar15 = ~uVar15;
        iVar11 = -1;
        pcVar17 = &DAT_0080ed16;
        do {
          pcVar21 = pcVar17;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar21 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar21;
        } while (cVar2 != '\0');
        pcVar17 = pcVar20 + -uVar15;
        pcVar20 = pcVar21 + -1;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar20 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar15 = 0xffffffff;
        pcVar17 = &DAT_0080ed16;
        do {
          pcVar20 = pcVar17;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar20 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar2 != '\0');
        uVar15 = ~uVar15;
        pcVar17 = pcVar20 + -uVar15;
        pcVar20 = (char *)&DAT_0080ee1a;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar20 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar20 = pcVar20 + 1;
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
      uVar26 = 0x6121;
      break;
    default:
      uVar25 = 6;
      uVar26 = 0x6120;
    }
    thunk_FUN_005b6350(this_01,uVar26,uVar25,(uint)this_01->field_1A5F);
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
      thunk_FUN_005b8f40(this_01->field_1A5B->field_02E6,&local_1c);
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
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    this_01->field_20B7 = uVar8;
    goto LAB_005b1108;
  case 0x694e:
    this_01->field_002D = 0x26;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar15 = this_01->field_1C9F->field_0008;
    if (((*(uint *)&this_01->field_0x31 < uVar15) ||
        (local_8 = (uint *)(*(uint *)&this_01->field_0x31 - uVar15), (int)local_8 < 0)) ||
       ((int)this_01->field_1C97->field_0008 <= (int)local_8)) break;
    uVar15 = 0xffffffff;
    pcVar17 = &this_01->field_1DA7;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = &DAT_0080ed16;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    if ((this_01->field_1A5F == CASE_C) ||
       ((this_01->field_1A5F == CASE_13 && (DAT_00803400 == '\f')))) {
      uVar15 = 0xffffffff;
      pcVar17 = PTR_DAT_0079c06c;
      do {
        pcVar20 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar2 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar17 = &DAT_0080ed16;
      do {
        pcVar21 = pcVar17;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar21 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar2 != '\0');
      pcVar17 = pcVar20 + -uVar15;
      pcVar20 = pcVar21 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
      _DAT_0080f32e = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->field_0008) {
      pcVar17 = *(char **)(this_01->field_1C97->field_0014 + (int)local_8 * 4);
    }
    else {
      pcVar17 = (char *)0x0;
    }
    uVar15 = 0xffffffff;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar17 = &DAT_0080ed16;
    do {
      pcVar21 = pcVar17;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar21 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar2 != '\0');
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = pcVar21 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar17 = &DAT_0080ed16;
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar2 != '\0');
    uVar15 = ~uVar15;
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = (char *)&DAT_0080ee1a;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    if (this_01->field_1A64 != 0) {
      ShowDescription(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    if (this_01->field_1A5F != CASE_13) {
      uVar15 = (uint)this_01->field_1A5F;
      uVar16 = uVar15;
      goto LAB_005b137f;
    }
    switch(DAT_00803400) {
    case '\x04':
      uVar16 = 0x13;
      uVar15 = 4;
      break;
    case '\x05':
      uVar16 = 0x13;
      uVar15 = 5;
      break;
    default:
      goto switchD_005b1362_caseD_6;
    case '\f':
      uVar16 = 0x13;
      uVar15 = 0xc;
      break;
    case '\x14':
    case '\x15':
      uVar16 = 0x13;
      uVar15 = 0x13;
    }
LAB_005b137f:
    thunk_FUN_005b6350(this_01,0x6121,uVar15,uVar16);
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
      thunk_FUN_005b8f40(this_01->field_1A5B->field_02E6,&local_2c);
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
    pMVar14 = this_01->field_1A5B->field_02E6;
    if (pMVar14 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar14,1,0,1);
    }
  }
cf_common_exit_005B2053:
  g_currentExceptionFrame = local_84.previous;
  iVar11 = MMObjTy::GetMessage((MMObjTy *)this_01,message);
  return iVar11;
}

