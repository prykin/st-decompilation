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
  code *pcVar7;
  SIDTy *this_00;
  DWORD DVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  UINT resourceId;
  int *piVar17;
  byte *pbVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  char *pcVar19;
  byte *pbVar20;
  bool bVar21;
  int iVar22;
  AnonShape_005B6560_61F462DF *pAVar23;
  int iVar24;
  InternalExceptionFrame local_64;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  SIDTy *local_10;
  uint local_c;
  uint *local_8;

  local_10 = this;
  DVar8 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar8;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar9 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_10;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar22 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x212,0,iVar9,"%s"
                                ,"SIDTy::GetMessage");
    if (iVar22 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\Start\\sid_obj.cpp",0x212);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_005b6450(local_10,(int)message);
  SVar5 = message->id;
  if (SVar5 < MESS_SHARED_6980) {
    if (SVar5 != MESS_SHARED_697F) {
      if (SVar5 < 6) {
        if (SVar5 == MESS_SHARED_0005) {
          PaintSID(this_00);
        }
        else if (SVar5 == MESS_ID_NONE) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          NoneSID(this_00,unaff_EDI);
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
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)this_00->field_0000)(&this_00->field_0x1d);
      }
      else if (SVar5 == MESS_SHARED_6900) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        this_00->field_002D = 0x32;
        FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)&this_00->field_0x1d);
        if ((int)this_00->field_1CD0[2] < 1) {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar11 = *(char **)this_00->field_1CD0[5];
        }
        uVar14 = 0xffffffff;
        do {
          pcVar19 = pcVar11;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar19 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar19;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        puVar1 = &this_00->field_1CD4;
        pcVar11 = pcVar19 + -uVar14;
        pcVar19 = puVar1;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar19 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_006b7780(puVar1,puVar1);
        if (this_00->field_1CD4 != '\0') {
          if (this_00->field_1A5F == '\0') {
            local_8 = (uint *)0xffffffff;
            if ((int)this_00->field_1CD0[2] < 1) {
              pcVar11 = (char *)0x0;
            }
            else {
              pcVar11 = *(char **)this_00->field_1CD0[5];
            }
            Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar11,0x3f);
            puVar16 = (uint *)0x0;
            local_c = this_00->field_1CCC[2];
            puVar13 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar18 = (byte *)0x0;
                goto LAB_005d979c;
              }
              do {
                pbVar18 = *(byte **)(this_00->field_1CCC[5] + (int)puVar16 * 4);
LAB_005d979c:
                pbVar20 = (byte *)&DAT_00807ddd;
                do {
                  bVar3 = *pbVar18;
                  bVar21 = bVar3 < *pbVar20;
                  if (bVar3 != *pbVar20) {
LAB_005d97c5:
                    iVar9 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar18[1];
                  bVar21 = bVar3 < pbVar20[1];
                  if (bVar3 != pbVar20[1]) goto LAB_005d97c5;
                  pbVar18 = pbVar18 + 2;
                  pbVar20 = pbVar20 + 2;
                } while (bVar3 != 0);
                iVar9 = 0;
LAB_005d97ca:
                puVar13 = puVar16;
              } while ((iVar9 != 0) &&
                      (puVar16 = (uint *)((int)puVar16 + 1), puVar13 = local_8,
                      (int)puVar16 < (int)local_c));
            }
            local_8 = puVar13;
            DAT_00807340 = 1;
            if ((int)local_8 < 0) {
              thunk_FUN_005738d0(&g_sound);
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
            if ((int)this_00->field_1CD0[2] < 1) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(undefined4 *)this_00->field_1CD0[5];
            }
            wsprintfA(&this_00->field_1CD4,"%s%s%s",&DAT_00807680,PTR_s_SAVEGAME__0079c19c,
                      uVar10);
            FUN_00725910(&this_00->field_1CD4,&DAT_007cc8bc,0,FUN_00725c20,0,0);
            PrepFiles(this_00);
            this_00->field_1A5F = 0;
            PaintExplanation(this_00);
            this_00->field_002D = 5;
            piVar17 = &this_00->field_1AF9;
            iVar9 = 2;
            do {
              if (*piVar17 != 0) {
                FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x1d);
              }
              piVar17 = piVar17 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
      }
      else if (SVar5 == MESS_FSGSTY_6901) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        if (this_00->field_1A5F == '\0') {
          if (((char)DAT_00807ddd != '\0') && (this_00->field_1CCC[2] != 0)) {
            puVar1 = &this_00->field_0x1d;
            this_00->field_1A5F = 1;
            this_00->field_002D = 0x20;
            this_00->field_0031 = 0;
            FUN_006e6080(this_00,2,this_00->field_1AF1,(undefined4 *)puVar1);
            this_00->field_002D = 0x29;
            this_00->field_0031 = 0x19;
            FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)puVar1);
            this_00->field_002D = 5;
            piVar17 = &this_00->field_1AF9;
            local_8 = (uint *)0x2;
            do {
              if (*piVar17 != 0) {
                FUN_006e6080(this_00,2,*piVar17,(undefined4 *)puVar1);
              }
              piVar17 = piVar17 + 1;
              local_8 = (uint *)((int)local_8 - 1);
            } while (local_8 != (uint *)0x0);
            PaintExplanation(this_00);
          }
        }
        else {
          this_00->field_1A5F = 0;
          PaintExplanation(this_00);
          this_00->field_002D = 5;
          piVar17 = &this_00->field_1AF9;
          iVar9 = 2;
          do {
            if (*piVar17 != 0) {
              FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x1d);
            }
            piVar17 = piVar17 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          PrepFiles(this_00);
        }
      }
      goto cf_common_exit_005D9CCB;
    }
    puVar6 = this_00->field_1CC8;
    local_8 = *(uint **)(puVar6 + 10);
    if (local_8 == (uint *)0x0) {
      local_8 = (uint *)(((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                        *(int *)(puVar6 + 4));
    }
    puVar12 = (undefined4 *)FUN_006b4fa0((int)puVar6);
    for (uVar14 = (uint)local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar12 = 0xffffffff;
      puVar12 = puVar12 + 1;
    }
    for (uVar14 = (uint)local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar12 = 0xff;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)this_00->field_1CC8,0,0,0,0,0);
    ccFntTy::WrStr(PTR_0081176c->field_0034,*(uint **)(message->arg0).ptr,0,-1,2);
    uVar4 = (message->arg1).words.low;
    if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
      uVar14 = (uint)(message->arg1).words.high;
      FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CC8,0,(uint)uVar4,uVar14,
                   (uint)uVar4,uVar14 + 0xe,7,0xd);
    }
    puVar6 = this_00->field_1CC8;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CB8,0,4,1,(byte *)puVar6,0,0,0,
               *(int *)(puVar6 + 2),*(int *)(puVar6 + 4));
  }
  else {
    if (MESS_SIDTY_8163 < SVar5) {
      if (SVar5 == MESS_OPTPANELTY_8164) {
        pAVar23 = (AnonShape_005B6560_61F462DF *)&this_00->field_1B01;
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
        pAVar23 = (AnonShape_005B6560_61F462DF *)&this_00->field_1B92;
      }
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,pAVar23,(int)message,0);
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SIDTY_8163) {
      uVar14 = this_00->field_1CCC[2];
      if (uVar14 == 0) {
        puVar13 = this_00->field_1CD0;
        pcVar11 = (char *)&DAT_00807ddd;
      }
      else {
        if ((message->arg0).i32 < (int)uVar14) {
          pcVar11 = *(char **)(this_00->field_1CCC[5] + (message->arg0).i32 * 4);
        }
        else {
          pcVar11 = (char *)0x0;
        }
        Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar11,0x3f);
        if ((message->arg0).i32 < (int)this_00->field_1CCC[2]) {
          puVar13 = this_00->field_1CD0;
          pcVar11 = *(char **)(this_00->field_1CCC[5] + (message->arg0).i32 * 4);
        }
        else {
          puVar13 = this_00->field_1CD0;
          pcVar11 = (char *)0x0;
        }
      }
      Library::DKW::TBL::FUN_006b6020(puVar13,0,pcVar11);
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1CD0;
      FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)&this_00->field_0x1d);
      goto cf_common_exit_005D9CCB;
    }
    if (MESS_SHARED_8160 < SVar5) {
      if (SVar5 == MESS_SIDTY_8161) {
        uVar14 = (uint)(message->arg0).words.low;
        if ((int)uVar14 < (int)this_00->field_1CCC[2]) {
          local_8 = *(uint **)(this_00->field_1CCC[5] + uVar14 * 4);
        }
        else {
          local_8 = (uint *)0x0;
        }
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CB8,0,
                     (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,0xff)
        ;
        puVar6 = this_00->field_1CBC;
        local_c = *(uint *)(puVar6 + 10);
        if (local_c == 0) {
          local_c = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                    *(int *)(puVar6 + 4);
        }
        puVar12 = (undefined4 *)FUN_006b4fa0((int)puVar6);
        for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar12 = 0xffffffff;
          puVar12 = puVar12 + 1;
        }
        for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar12 = 0xff;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        if (((message->arg0).words.high == 1) && (local_8 != (uint *)0x0)) {
          FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CB8,0,
                       (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,
                       0x87,0xd);
        }
        ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)this_00->field_1CBC,0,0,0,0,0);
        ccFntTy::WrStr(PTR_0081176c->field_0034,local_8,0,-1,2);
        FUN_006b5440((int)this_00->field_1CB8,0,(message->arg1).words.low + 6,
                     (message->arg1).words.high + 0x15,(int)this_00->field_1CBC,0,0xff);
        FUN_006b35d0((int *)PTR_008075a8,this_00->field_1CB4);
      }
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SHARED_8160) {
      (message->arg1).u32 = 0xe;
      goto cf_common_exit_005D9CCB;
    }
    if ((SVar5 < MESS_SHARED_6980) || (MESS_SIDTY_6981 < SVar5)) goto cf_common_exit_005D9CCB;
    piVar17 = (message->arg1).ptr;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT31(local_c._1_3_,(char)message->id + 0x81);
    local_20 = *piVar17 + -0xe1;
    local_18 = piVar17[2];
    local_1c = piVar17[1] - 0x1a9;
    local_14 = piVar17[3];
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CB8,0,local_20,local_1c,local_18,
                 local_14,0xff);
    MMObjTy::PaintButDib((MMObjTy *)this_00,(int)this_00->field_1CB8,&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      resourceId = (this_00->field_1A5F != '\0') + 0x24b8;
    }
    else {
      resourceId = (-(uint)(this_00->field_1A5F != '\0') & 0xfffffffd) + 0x24bd;
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)this_00->field_1CB8,0,local_20,local_1c,local_18,
                     local_14);
    iVar9 = ((message->arg0).words.low != 1) + 2;
    iVar24 = -1;
    iVar22 = -1;
    puVar13 = (uint *)LoadResourceString(resourceId,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar13,iVar22,iVar24,iVar9);
  }
  FUN_006b35d0((int *)PTR_008075a8,this_00->field_1CB4);
cf_common_exit_005D9CCB:
  g_currentExceptionFrame = local_64.previous;
  iVar9 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar9;
}

