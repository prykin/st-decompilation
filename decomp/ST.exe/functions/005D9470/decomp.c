#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005D9470; family_names=SIDTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:14,18:7,1c:0} */

int __thiscall SIDTy::GetMessage(SIDTy *this,STMessage *message)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  STMessageId SVar5;
  SIDTyVTable *pSVar6;
  ushort *puVar7;
  int *piVar8;
  dword dVar9;
  SIDTy *this_00;
  DWORD DVar11;
  int local_EAX_48;
  undefined4 uVar12;
  undefined4 *puVar13;
  char *pcVar12_mg2;
  int iVar11;
  int iVar19;
  uint uVar14;
  char *pcVar16;
  UINT resourceId;
  uint *puVar17;
  byte *pbVar18;
  int iVar20;
  char *pcVar21;
  char *pcVar22;
  bool bVar23;
  DArrayTy *pDVar24;
  RecoveredRecord_MMMObjTy_005B6560 *pRVar25;
  int iVar26;
  InternalExceptionFrame local_64;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  SIDTy *local_10;
  dword local_c;
  char *local_8;

  local_10 = this;
  DVar11 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar11;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_EAX_48 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_48 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar19 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x212,0,local_EAX_48,
                                "%s","SIDTy::GetMessage");
    if (iVar19 == 0) {
      RaiseInternalException(local_EAX_48,0,"E:\\__titans\\Start\\sid_obj.cpp",0x212);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_005b6450(local_10,message);
  SVar5 = message->id;
  if (SVar5 < MESS_SHARED_6980) {
    if (SVar5 != MESS_SHARED_697F) {
      if (SVar5 < 6) {
        if (SVar5 == MESS_SHARED_0005) {
          /* ST_CALLSITE[005D9516]: CALL 0x004029cd; direct=004029CD SIDTy::PaintSID */
          PaintSID(this_00);
        }
        else if (SVar5 == MESS_ID_NONE) {
          /* ST_CALLSITE[005D950A]: CALL 0x00403d64; direct=00403D64 SIDTy::NoneSID */
          NoneSID(this_00);
        }
        else if (SVar5 == MESS_ID_CREATE) {
          /* ST_CALLSITE[005D94FE]: CALL 0x004029af; direct=004029AF SIDTy::InitSID */
          InitSID(this_00);
        }
        else if (SVar5 == MESS_SHARED_0003) {
          /* ST_CALLSITE[005D94F2]: CALL 0x00405b78; direct=00405B78 SIDTy::DoneSID */
          DoneSID(this_00);
        }
      }
      else if (SVar5 == MESS_MMSGTY_68FF) {
        pSVar6 = this_00->vtable;
        this_00->array_00BC[0xc].field_01DF = 0;
        this_00->field_002D = message->id + 1;
        /* ST_CALLSITE[005D9847]: CALL dword ptr [EDX] */
        (*pSVar6->GetMessage)(this_00,(STMessage *)&this_00->field_0x1d);
      }
      else if (SVar5 == MESS_SHARED_6900) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        this_00->field_002D = 0x32;
        FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)&this_00->field_0x1d);
        if ((int)this_00->field_1CD0->elementSize < 1) {
          pcVar22 = nullptr;
        }
        else {
          pcVar22 = *(char **)this_00->field_1CD0->growCapacity;
        }
        uVar14 = 0xffffffff;
        do {
          pcVar16 = pcVar22;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar16 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar16;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar22 = &this_00->field_1CD4;
        pcVar16 = pcVar16 + -uVar14;
        pcVar21 = pcVar22;
        memmove(pcVar21, pcVar16, uVar14); /* compiler REP MOVS byte copy */
        uVar14 = 0;
        FUN_006b7780(pcVar22,pcVar22);
        if (this_00->field_1CD4 != '\0') {
          if (this_00->array_00BC[0xc].field_01DF == '\0') {
            local_8 = (char *)0xffffffff;
            if ((int)this_00->field_1CD0->elementSize < 1) {
              pcVar22 = nullptr;
            }
            else {
              pcVar22 = *(char **)this_00->field_1CD0->growCapacity;
            }
            Library::MSVCRT::_strncpy(&CHAR_00h_00807ddd,pcVar22,0x3f);
            pcVar16 = nullptr;
            local_c = this_00->field_1CCC->elementSize;
            pcVar22 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar18 = nullptr;
                goto LAB_005d979c;
              }
              do {
                pbVar18 = *(byte **)(this_00->field_1CCC->growCapacity + (int)pcVar16 * 4);
LAB_005d979c:
                pcVar22 = &CHAR_00h_00807ddd;
                do {
                  bVar3 = *pbVar18;
                  bVar23 = bVar3 < (byte)*pcVar22;
                  if (bVar3 != *pcVar22) {
LAB_005d97c5:
                    iVar20 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar18[1];
                  bVar23 = bVar3 < (byte)pcVar22[1];
                  if (bVar3 != pcVar22[1]) goto LAB_005d97c5;
                  pbVar18 = pbVar18 + 2;
                  pcVar22 = pcVar22 + 2;
                } while (bVar3 != 0);
                iVar20 = 0;
LAB_005d97ca:
                pcVar22 = pcVar16;
              } while ((iVar20 != 0) &&
                      (pcVar16 = pcVar16 + 1, pcVar22 = local_8, (int)pcVar16 < (int)local_c));
            }
            local_8 = pcVar22;
            DAT_00807340 = 1;
            if ((int)local_8 < 0) {
              thunk_FUN_005738d0((AnonShape_005738D0_F693E267 *)&g_sound);
            }
            else {
              thunk_FUN_00572510((AnonShape_00572510_F06DC155 *)&g_sound);
            }
            if (DAT_00808446 != '\0') {
              /* ST_CALLSITE[005D9809]: CALL 0x00403a8f; direct=00403A8F SIDTy::DeleteCtrls */
              DeleteCtrls(this_00);
              this_00->field_0065 = 4;
              thunk_FUN_005b6730(this_00,2,'\x01',-1);
              FUN_006c18b0((uint)DAT_00807363);
            }
          }
          else {
            if ((int)this_00->field_1CD0->elementSize < 1) {
              uVar12 = 0;
            }
            else {
              uVar12 = *(undefined4 *)this_00->field_1CD0->growCapacity;
            }
            /* ST_CALLSITE[005D96E4]: CALL dword ptr [0x0085bde8] */
            wsprintfA(&this_00->field_1CD4,"%s%s%s",&CHAR_00h_00807680,
                      PTR_s_SAVEGAME__0079c19c,uVar12);
            FUN_00725910(&this_00->field_1CD4,&CHAR___007cc8bc,0,FUN_00725c20,0,0);
            /* ST_CALLSITE[005D9705]: CALL 0x0040392c; direct=0040392C SIDTy::PrepFiles */
            PrepFiles(this_00);
            this_00->array_00BC[0xc].field_01DF = 0;
            /* ST_CALLSITE[005D9713]: CALL 0x00402d3d; direct=00402D3D SIDTy::PaintExplanation */
            PaintExplanation(this_00);
            this_00->field_002D = 5;
            puVar17 = this_00->field_1AF9;
            iVar20 = 2;
            do {
              if (*puVar17 != 0) {
                FUN_006e6080(this_00,2,*puVar17,(undefined4 *)&this_00->field_0x1d);
              }
              puVar17 = puVar17 + 1;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
        }
      }
      else if (SVar5 == MESS_FSGSTY_6901) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        if (this_00->array_00BC[0xc].field_01DF == '\0') {
          if ((CHAR_00h_00807ddd != '\0') && (this_00->field_1CCC->elementSize != 0)) {
            uVar12 = this_00->field_1AF1;
            puVar1 = &this_00->field_0x1d;
            this_00->array_00BC[0xc].field_01DF = 1;
            this_00->field_002D = 0x20;
            this_00->field_0031 = 0;
            FUN_006e6080(this_00,2,uVar12,(undefined4 *)puVar1);
            this_00->field_002D = 0x29;
            this_00->field_0031 = 0x19;
            FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)puVar1);
            this_00->field_002D = 5;
            puVar17 = this_00->field_1AF9;
            local_8 = (char *)0x2;
            do {
              if (*puVar17 != 0) {
                FUN_006e6080(this_00,2,*puVar17,(undefined4 *)puVar1);
              }
              puVar17 = puVar17 + 1;
              local_8 = local_8 + -1;
            } while (local_8 != nullptr);
            /* ST_CALLSITE[005D9627]: CALL 0x00402d3d; direct=00402D3D SIDTy::PaintExplanation */
            PaintExplanation(this_00);
          }
        }
        else {
          this_00->array_00BC[0xc].field_01DF = 0;
          /* ST_CALLSITE[005D9559]: CALL 0x00402d3d; direct=00402D3D SIDTy::PaintExplanation */
          PaintExplanation(this_00);
          this_00->field_002D = 5;
          puVar17 = this_00->field_1AF9;
          iVar20 = 2;
          do {
            if (*puVar17 != 0) {
              FUN_006e6080(this_00,2,*puVar17,(undefined4 *)&this_00->field_0x1d);
            }
            puVar17 = puVar17 + 1;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          /* ST_CALLSITE[005D9588]: CALL 0x0040392c; direct=0040392C SIDTy::PrepFiles */
          PrepFiles(this_00);
        }
      }
      goto cf_common_exit_005D9CCB;
    }
    puVar7 = this_00->field_1CC8;
    local_8 = *(char **)(puVar7 + 10);
    if (local_8 == nullptr) {
      local_8 = (char *)(((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                        *(int *)(puVar7 + 4));
    }
    puVar13 = (undefined4 *)FUN_006b4fa0((int *)puVar7);
    for (uVar14 = (uint)local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    for (uVar14 = (uint)local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar13 = 0xff;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_1CC8,0,0,0,0,0);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,*(char **)(message->arg0).ptr,0,-1,2);
    uVar4 = (message->arg1).words.low;
    if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
      uVar14 = (uint)(message->arg1).words.high;
      FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1CC8,0,(uint)uVar4,uVar14,
                   (uint)uVar4,uVar14 + 0xe,7,0xd);
    }
    puVar7 = this_00->field_1CC8;
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,4,1,(byte *)puVar7,0,0,0,
               *(int *)(puVar7 + 2),*(int *)(puVar7 + 4));
  }
  else {
    if (MESS_SIDTY_8163 < SVar5) {
      if (SVar5 == MESS_OPTPANELTY_8164) {
        pRVar25 = (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B01;
      }
      else {
        if (SVar5 != MESS_OPTPANELTY_8165) {
          if (SVar5 == MESS_SHARED_8166) {
            uVar14 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
            this_00->field_1C43 = uVar14;
            if (this_00->field_1C27 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)this_00->field_1C6B,this_00->field_1C27,this_00->field_1C2B,
                         this_00->field_1C3F,uVar14);
            }
          }
          goto cf_common_exit_005D9CCB;
        }
        pRVar25 = (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B92;
      }
      /* ST_CALLSITE[005D9CC6]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,pRVar25,(int)message,0);
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SIDTY_8163) {
      dVar9 = this_00->field_1CCC->elementSize;
      if (dVar9 == 0) {
        pDVar24 = this_00->field_1CD0;
        pcVar22 = &CHAR_00h_00807ddd;
      }
      else {
        if ((message->arg0).i32 < (int)dVar9) {
          pcVar22 = *(char **)(this_00->field_1CCC->growCapacity + (message->arg0).i32 * 4);
        }
        else {
          pcVar22 = nullptr;
        }
        Library::MSVCRT::_strncpy(&CHAR_00h_00807ddd,pcVar22,0x3f);
        if ((message->arg0).i32 < (int)this_00->field_1CCC->elementSize) {
          pDVar24 = this_00->field_1CD0;
          pcVar22 = *(char **)(this_00->field_1CCC->growCapacity + (message->arg0).i32 * 4);
        }
        else {
          pDVar24 = this_00->field_1CD0;
          pcVar22 = nullptr;
        }
      }
      Library::DKW::TBL::FUN_006b6020(pDVar24,0,pcVar22);
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1CD0;
      FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)&this_00->field_0x1d);
      goto cf_common_exit_005D9CCB;
    }
    if (MESS_SHARED_8160 < SVar5) {
      if (SVar5 == MESS_SIDTY_8161) {
        uVar14 = (uint)(message->arg0).words.low;
        if ((int)uVar14 < (int)this_00->field_1CCC->elementSize) {
          local_8 = *(char **)(this_00->field_1CCC->growCapacity + uVar14 * 4);
        }
        else {
          local_8 = nullptr;
        }
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,
                     (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,0xff);
        puVar7 = this_00->field_1CBC;
        local_c = *(dword *)(puVar7 + 10);
        if (local_c == 0) {
          local_c = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                    *(int *)(puVar7 + 4);
        }
        puVar13 = (undefined4 *)FUN_006b4fa0((int *)puVar7);
        for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar13 = 0xffffffff;
          puVar13 = puVar13 + 1;
        }
        for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar13 = 0xff;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        if (((message->arg0).words.high == 1) && (local_8 != nullptr)) {
          FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,
                       (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,
                       0x87,0xd);
        }
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_1CBC,0,0,0,0,0);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,local_8,0,-1,2);
        FUN_006b5440(this_00->field_1CB8,0,(message->arg1).words.low + 6,
                     (message->arg1).words.high + 0x15,(tagBITMAPINFO *)this_00->field_1CBC,0,0xff);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1CB4);
      }
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SHARED_8160) {
      (message->arg1).u32 = 0xe;
      goto cf_common_exit_005D9CCB;
    }
    if ((SVar5 < MESS_SHARED_6980) || (MESS_SIDTY_6981 < SVar5)) goto cf_common_exit_005D9CCB;
    piVar8 = (message->arg1).ptr;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)message->id + 0x81));
    local_20 = *piVar8 + -0xe1;
    local_18 = piVar8[2];
    local_1c = piVar8[1] - 0x1a9;
    local_14 = piVar8[3];
    FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,local_20,local_1c,local_18,
                 local_14,0xff);
    /* ST_CALLSITE[005D99C1]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib((MMObjTy *)this_00,(int)this_00->field_1CB8,&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      resourceId = (this_00->array_00BC[0xc].field_01DF != '\0') + 0x24b8;
    }
    else {
      resourceId = (-(uint)(this_00->array_00BC[0xc].field_01DF != '\0') & 0xfffffffd) + 0x24bd;
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_1CB8,0,local_20,local_1c
                     ,local_18,local_14);
    uVar14 = ((message->arg0).words.low != 1) + 2;
    iVar26 = -1;
    iVar20 = -1;
    pcVar12_mg2 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar12_mg2,iVar20,iVar26,uVar14);
  }
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1CB4);
cf_common_exit_005D9CCB:
  g_currentExceptionFrame = local_64.previous;
  /* ST_CALLSITE[005D9CD9]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar11 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar11;
}

