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
  ushort *puVar6;
  int *piVar7;
  dword dVar8;
  SIDTy *this_00;
  DWORD DVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar18;
  UINT resourceId;
  byte *pbVar19;
  char *pcVar20;
  byte *pbVar21;
  bool bVar22;
  DArrayTy *pDVar23;
  RecoveredRecord_MMMObjTy_005B6560 *pRVar24;
  int iVar25;
  InternalExceptionFrame local_64;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  SIDTy *local_10;
  dword local_c;
  uint *local_8;

  local_10 = this;
  DVar10 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar10;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar11 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_10;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar25 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x212,0,iVar11,
                                "%s","SIDTy::GetMessage");
    if (iVar25 == 0) {
      RaiseInternalException(iVar11,0,"E:\\__titans\\Start\\sid_obj.cpp",0x212);
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
          PaintSID(this_00);
        }
        else if (SVar5 == MESS_ID_NONE) {
          NoneSID(this_00);
        }
        else if (SVar5 == MESS_ID_CREATE) {
          InitSID(this_00);
        }
        else if (SVar5 == MESS_SHARED_0003) {
          DoneSID(this_00);
        }
      }
      else if (SVar5 == MESS_MMSGTY_68FF) {
        this_00->field_1A5F = 0;
        this_00->field_002D = message->id + 1;
        this_00->GetMessage((STMessage *)&this_00->field_0x1d);
      }
      else if (SVar5 == MESS_SHARED_6900) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        uVar16 = this_00->field_1AF1[1];
        this_00->field_002D = 0x32;
        FUN_006e6080(this_00,2,uVar16,(undefined4 *)&this_00->field_0x1d);
        if ((int)this_00->field_1CD0->elementSize < 1) {
          pcVar13 = nullptr;
        }
        else {
          pcVar13 = *(char **)this_00->field_1CD0->growCapacity;
        }
        uVar16 = 0xffffffff;
        do {
          pcVar20 = pcVar13;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar20 = pcVar13 + 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar20;
        } while (cVar2 != '\0');
        uVar16 = ~uVar16;
        puVar1 = &this_00->field_1CD4;
        pcVar13 = pcVar20 + -uVar16;
        pcVar20 = puVar1;
        memmove(pcVar20, pcVar13, uVar16); /* compiler REP MOVS byte copy */
        FUN_006b7780(puVar1,puVar1);
        if (this_00->field_1CD4 != '\0') {
          if (this_00->field_1A5F == '\0') {
            local_8 = (uint *)0xffffffff;
            if ((int)this_00->field_1CD0->elementSize < 1) {
              pcVar13 = nullptr;
            }
            else {
              pcVar13 = *(char **)this_00->field_1CD0->growCapacity;
            }
            Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar13,0x3f);
            puVar18 = nullptr;
            local_c = this_00->field_1CCC->elementSize;
            puVar15 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar19 = nullptr;
                goto LAB_005d979c;
              }
              do {
                pbVar19 = *(byte **)(this_00->field_1CCC->growCapacity + (int)puVar18 * 4);
LAB_005d979c:
                pbVar21 = (byte *)&DAT_00807ddd;
                do {
                  bVar3 = *pbVar19;
                  bVar22 = bVar3 < *pbVar21;
                  if (bVar3 != *pbVar21) {
LAB_005d97c5:
                    iVar11 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar19[1];
                  bVar22 = bVar3 < pbVar21[1];
                  if (bVar3 != pbVar21[1]) goto LAB_005d97c5;
                  pbVar19 = pbVar19 + 2;
                  pbVar21 = pbVar21 + 2;
                } while (bVar3 != 0);
                iVar11 = 0;
LAB_005d97ca:
                puVar15 = puVar18;
              } while ((iVar11 != 0) &&
                      (puVar18 = (uint *)((int)puVar18 + 1), puVar15 = local_8,
                      (int)puVar18 < (int)local_c));
            }
            local_8 = puVar15;
            DAT_00807340 = 1;
            if ((int)local_8 < 0) {
              thunk_FUN_005738d0((AnonShape_005738D0_F693E267 *)&g_sound);
            }
            else {
              thunk_FUN_00572510((AnonShape_00572510_F06DC155 *)&g_sound);
            }
            if (DAT_00808446 != '\0') {
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
            wsprintfA(&this_00->field_1CD4,"%s%s%s",&DAT_00807680,PTR_s_SAVEGAME__0079c19c,
                      uVar12);
            FUN_00725910(&this_00->field_1CD4,&DAT_007cc8bc,0,FUN_00725c20,0,0);
            PrepFiles(this_00);
            this_00->field_1A5F = 0;
            PaintExplanation(this_00);
            this_00->field_002D = 5;
            puVar15 = this_00->field_1AF9;
            iVar11 = 2;
            do {
              if (*puVar15 != 0) {
                FUN_006e6080(this_00,2,*puVar15,(undefined4 *)&this_00->field_0x1d);
              }
              puVar15 = puVar15 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
      }
      else if (SVar5 == MESS_FSGSTY_6901) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        if (this_00->field_1A5F == '\0') {
          if (((char)DAT_00807ddd != '\0') && (this_00->field_1CCC->elementSize != 0)) {
            puVar1 = &this_00->field_0x1d;
            this_00->field_1A5F = 1;
            this_00->field_002D = 0x20;
            this_00->field_0031 = 0;
            FUN_006e6080(this_00,2,this_00->field_1AF1[0],(undefined4 *)puVar1);
            uVar16 = this_00->field_1AF1[1];
            this_00->field_002D = 0x29;
            this_00->field_0031 = 0x19;
            FUN_006e6080(this_00,2,uVar16,(undefined4 *)puVar1);
            this_00->field_002D = 5;
            puVar15 = this_00->field_1AF9;
            local_8 = (uint *)0x2;
            do {
              if (*puVar15 != 0) {
                FUN_006e6080(this_00,2,*puVar15,(undefined4 *)puVar1);
              }
              puVar15 = puVar15 + 1;
              local_8 = (uint *)((int)local_8 - 1);
            } while (local_8 != nullptr);
            PaintExplanation(this_00);
          }
        }
        else {
          this_00->field_1A5F = 0;
          PaintExplanation(this_00);
          this_00->field_002D = 5;
          puVar15 = this_00->field_1AF9;
          iVar11 = 2;
          do {
            if (*puVar15 != 0) {
              FUN_006e6080(this_00,2,*puVar15,(undefined4 *)&this_00->field_0x1d);
            }
            puVar15 = puVar15 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          PrepFiles(this_00);
        }
      }
      goto cf_common_exit_005D9CCB;
    }
    puVar6 = this_00->field_1CC8;
    local_8 = *(uint **)(puVar6 + 10);
    if (local_8 == nullptr) {
      local_8 = (uint *)(((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                        *(int *)(puVar6 + 4));
    }
    puVar14 = (undefined4 *)FUN_006b4fa0((int *)puVar6);
    for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
    for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined1 *)puVar14 = 0xff;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_1CC8,0,0,0,0,0);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,*(uint **)(message->arg0).ptr,0,-1,2);
    uVar4 = (message->arg1).words.low;
    if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
      uVar16 = (uint)(message->arg1).words.high;
      FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1CC8,0,(uint)uVar4,uVar16,
                   (uint)uVar4,uVar16 + 0xe,7,0xd);
    }
    puVar6 = this_00->field_1CC8;
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,4,1,(byte *)puVar6,0,0,0,
               *(int *)(puVar6 + 2),*(int *)(puVar6 + 4));
  }
  else {
    if (MESS_SIDTY_8163 < SVar5) {
      if (SVar5 == MESS_OPTPANELTY_8164) {
        pRVar24 = (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B01;
      }
      else {
        if (SVar5 != MESS_OPTPANELTY_8165) {
          if (SVar5 == MESS_SHARED_8166) {
            uVar16 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
            this_00->field_1C43 = uVar16;
            if (this_00->field_1C27 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)this_00->field_1C6B,this_00->field_1C27,this_00->field_1C2B,
                         this_00->field_1C3F,uVar16);
            }
          }
          goto cf_common_exit_005D9CCB;
        }
        pRVar24 = (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B92;
      }
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,pRVar24,(int)message,0);
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SIDTY_8163) {
      dVar8 = this_00->field_1CCC->elementSize;
      if (dVar8 == 0) {
        pDVar23 = this_00->field_1CD0;
        pcVar13 = (char *)&DAT_00807ddd;
      }
      else {
        if ((message->arg0).i32 < (int)dVar8) {
          pcVar13 = *(char **)(this_00->field_1CCC->growCapacity + (message->arg0).i32 * 4);
        }
        else {
          pcVar13 = nullptr;
        }
        Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar13,0x3f);
        if ((message->arg0).i32 < (int)this_00->field_1CCC->elementSize) {
          pDVar23 = this_00->field_1CD0;
          pcVar13 = *(char **)(this_00->field_1CCC->growCapacity + (message->arg0).i32 * 4);
        }
        else {
          pDVar23 = this_00->field_1CD0;
          pcVar13 = nullptr;
        }
      }
      Library::DKW::TBL::FUN_006b6020(&pDVar23->flags,0,pcVar13);
      uVar16 = this_00->field_1AF1[1];
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1CD0;
      FUN_006e6080(this_00,2,uVar16,(undefined4 *)&this_00->field_0x1d);
      goto cf_common_exit_005D9CCB;
    }
    if (MESS_SHARED_8160 < SVar5) {
      if (SVar5 == MESS_SIDTY_8161) {
        uVar16 = (uint)(message->arg0).words.low;
        if ((int)uVar16 < (int)this_00->field_1CCC->elementSize) {
          local_8 = *(uint **)(this_00->field_1CCC->growCapacity + uVar16 * 4);
        }
        else {
          local_8 = nullptr;
        }
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,
                     (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,0xff);
        puVar6 = this_00->field_1CBC;
        local_c = *(dword *)(puVar6 + 10);
        if (local_c == 0) {
          local_c = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                    *(int *)(puVar6 + 4);
        }
        puVar14 = (undefined4 *)FUN_006b4fa0((int *)puVar6);
        for (uVar16 = local_c >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
        }
        for (uVar16 = local_c & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar14 = 0xff;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        if (((message->arg0).words.high == 1) && (local_8 != nullptr)) {
          FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,
                       (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,
                       0x87,0xd);
        }
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_1CBC,0,0,0,0,0);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,local_8,0,-1,2);
        FUN_006b5440(this_00->field_1CB8,0,(message->arg1).words.low + 6,
                     (message->arg1).words.high + 0x15,(uint)this_00->field_1CBC,0,0xff);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1CB4);
      }
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SHARED_8160) {
      (message->arg1).u32 = 0xe;
      goto cf_common_exit_005D9CCB;
    }
    if ((SVar5 < MESS_SHARED_6980) || (MESS_SIDTY_6981 < SVar5)) goto cf_common_exit_005D9CCB;
    piVar7 = (message->arg1).ptr;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)message->id + 0x81));
    local_20 = *piVar7 + -0xe1;
    local_18 = piVar7[2];
    local_1c = piVar7[1] - 0x1a9;
    local_14 = piVar7[3];
    FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,local_20,local_1c,local_18,
                 local_14,0xff);
    MMObjTy::PaintButDib((MMObjTy *)this_00,(int)this_00->field_1CB8,&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      resourceId = (this_00->field_1A5F != '\0') + 0x24b8;
    }
    else {
      resourceId = (-(uint)(this_00->field_1A5F != '\0') & 0xfffffffd) + 0x24bd;
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_1CB8,0,local_20,local_1c
                     ,local_18,local_14);
    uVar16 = ((message->arg0).words.low != 1) + 2;
    iVar25 = -1;
    iVar11 = -1;
    puVar15 = (uint *)LoadResourceString(resourceId,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar15,iVar11,iVar25,uVar16);
  }
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1CB4);
cf_common_exit_005D9CCB:
  g_currentExceptionFrame = local_64.previous;
  iVar11 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar11;
}

