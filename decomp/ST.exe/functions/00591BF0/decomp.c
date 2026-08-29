#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::NoneCampaign
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneCampaign(CampaignTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00591DCE RET | 005920E0 RET | 00592174 RET | 005921BC RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall CampaignTy::NoneCampaign(CampaignTy *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  CampaignTy *this_00;
  DWORD DVar6;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar11;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint local_284 [112];
  InternalExceptionFrame local_c4;
  uint local_80 [4];
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 *local_38;
  uint local_34;
  uint local_28;
  ushort local_1e;
  ushort local_1c;
  CampaignTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  /* ST_CALLSITE[00591C08]: CALL dword ptr [0x0085bedc] */
  DVar6 = timeGetTime();
  this->field_0061 = DVar6;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar6 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0x117,0,iVar6,
                                "%s","CampaignTy::NoneCampaign");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\camp_obj.cpp",0x117);
    return;
  }
  /* ST_CALLSITE[00591C48]: CALL 0x0040261c; direct=0040261C CampaignTy::LightPalette */
  LightPalette(local_c);
  /* ST_CALLSITE[00591C4F]: CALL 0x00404f4d; direct=00404F4D CampaignTy::AnimationCampaign */
  AnimationCampaign(this_00);
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    iVar12 = 0;
    if (this_00->field_009A != '\0') {
      puVar11 = &this_00->field_00BB[0].field_014A.field_001C;
      do {
        if (((*(int *)((int)puVar11 + -0x165) != 0) && (*(char *)((int)puVar11 + -0x13f) != '\0'))
           && (puVar11[9] <= this_00->field_0061 - puVar11[10])) {
          puVar11[10] = this_00->field_0061;
          uVar7 = puVar11[-5];
          puVar11[-5] = uVar7 + 1;
          if ((int)puVar11[-4] <= (int)(uVar7 + 1)) {
            puVar11[-5] = 0;
          }
          if (puVar11[-6] != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)puVar11[0xb],puVar11[-6],puVar11[-5],*puVar11,puVar11[1]);
          }
        }
        iVar12 = iVar12 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
    }
  }
  else if (cVar1 == '\x03') {
    iVar12 = 0;
    uVar7 = (uint)(byte)this_00->field_009A;
    if (uVar7 != 0) {
      do {
        if (this_00->field_00BB[iVar12].field_0001 != 0) {
          if (this_00->field_0061 - this_00->field_00BB[iVar12].field_0028.field_0044 <
              (uint)this_00->field_00BB[iVar12].field_0028.field_0040) {
            iVar12 = 0;
            local_8 = 0;
            if (uVar7 != 0) {
              piVar8 = &this_00->field_00BB[0].field_014A.field_0044;
              do {
                if (*(char *)((int)piVar8 + -0x167) != '\0') {
                  *piVar8 = this_00->field_0061;
                }
                iVar12 = iVar12 + 1;
                piVar8 = (int *)((int)piVar8 + 0x1fb);
              } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
            }
          }
          else {
            iVar10 = this_00->field_00BB[iVar12].field_0028.field_0008;
            if (iVar10 < this_00->field_00BB[iVar12].field_0028.field_000C + -1) {
              if ((iVar10 == 0) &&
                 (uVar7 = this_00->field_00BB[iVar12].field_0028.field_0004, uVar7 != 0xffffffff)) {
                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)this_00->field_00BB[iVar12].field_0028.field_0048,uVar7,
                           0xfffffffe,this_00->field_00BB[iVar12].field_0028.field_001C,
                           this_00->field_00BB[iVar12].field_0028.field_0020);
              }
              this_00->field_00BB[iVar12].field_0028.field_0008 =
                   this_00->field_00BB[iVar12].field_0028.field_0008 + 1;
              uVar7 = this_00->field_00BB[iVar12].field_0028.field_0004;
              if (uVar7 != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)this_00->field_00BB[iVar12].field_0028.field_0048,uVar7,
                           this_00->field_00BB[iVar12].field_0028.field_0008,
                           this_00->field_00BB[iVar12].field_0028.field_001C,
                           this_00->field_00BB[iVar12].field_0028.field_0020);
              }
              local_8 = 0;
            }
            else {
              iVar10 = this_00->field_00BB[iVar12].field_00B9.field_0008;
              if (iVar10 < this_00->field_00BB[iVar12].field_00B9.field_000C + -3) {
                if (iVar10 == 0) {
                  uVar7 = this_00->field_00BB[iVar12].field_00B9.field_0004;
                  if (uVar7 != 0xffffffff) {
                    Library::DKW::DDX::FUN_006b34d0
                              ((uint *)this_00->field_00BB[iVar12].field_00B9.field_0048,uVar7,
                               0xfffffffe,this_00->field_00BB[iVar12].field_00B9.field_001C,
                               this_00->field_00BB[iVar12].field_00B9.field_0020);
                  }
                  if ((this_00->field_00BB[iVar12].field_0027 != '\0') &&
                     (uVar7 = this_00->field_00BB[iVar12].field_014A.field_0004, uVar7 != 0xffffffff
                     )) {
                    Library::DKW::DDX::FUN_006b34d0
                              ((uint *)this_00->field_00BB[iVar12].field_014A.field_0048,uVar7,
                               0xfffffffe,this_00->field_00BB[iVar12].field_014A.field_001C,
                               this_00->field_00BB[iVar12].field_014A.field_0020);
                  }
                }
                this_00->field_00BB[iVar12].field_00B9.field_0008 =
                     this_00->field_00BB[iVar12].field_00B9.field_0008 + 1;
                uVar7 = this_00->field_00BB[iVar12].field_00B9.field_0004;
                if (uVar7 != 0xffffffff) {
                  Library::DKW::DDX::FUN_006b3730
                            ((uint *)this_00->field_00BB[iVar12].field_00B9.field_0048,uVar7,
                             this_00->field_00BB[iVar12].field_00B9.field_0008,
                             this_00->field_00BB[iVar12].field_00B9.field_001C,
                             this_00->field_00BB[iVar12].field_00B9.field_0020);
                }
                thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar12 = iVar12 + 1;
        uVar7 = (uint)(byte)this_00->field_009A;
      } while (iVar12 < (int)uVar7);
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      iVar10 = 1;
      memset(local_80, 0, 0x58); /* compiler bulk-zero initialization */
      iVar12 = 0;
      memset(local_284, 0, 0x1c0); /* compiler bulk-zero initialization */
      puVar9 = local_284 + 1;
      iVar12 = 3;
      piVar8 = (int *)&this_00->field_00BB[1].field_01DB;
      do {
        iVar3 = piVar8[0x19];
        puVar9[-1] = iVar10;
        iVar4 = *piVar8;
        *puVar9 = 0;
        puVar9[2] = iVar3 + iVar4;
        puVar9[4] = piVar8[2];
        iVar10 = iVar10 + 1;
        puVar9[3] = piVar8[0x1a] + piVar8[1];
        puVar9[5] = piVar8[3];
        puVar9 = puVar9 + 0x1c;
        iVar12 = iVar12 + -1;
        piVar8 = (int *)((int)piVar8 + 0x1fb);
      } while (iVar12 != 0);
      local_70 = this_00->field_0008;
      local_34 = (uint)DAT_0080874e;
      local_38 = local_284;
      local_6c = 2;
      local_4c = 2;
      local_80[0] = 1;
      local_68 = 0x68ff;
      local_48 = 0x697f;
      local_50 = local_70;
      /* ST_CALLSITE[0059208E]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
      STStructuralVirtualCall<void>(STField<int *>(this_00,0xC), 0x8, 5, this_00->field_0066, 0, local_80, 0);
      iVar12 = this_00->field_00BB[0xc].field_01DC;
      if (STField<int>(iVar12,0x2E6) != 0) {
        memset(&local_28, 0, 0x1a); /* compiler bulk-zero initialization */
        local_1c = 1;
        local_1e = 1;
        STPiece<2,2>(local_28) = 1;
        /* ST_CALLSITE[005920C5]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
        MMsgTy::StatePanel(*(MMsgTy **)(iVar12 + 0x2e6),(int)&local_28);
      }
      this_00->field_0065 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    iVar12 = 0;
    if (this_00->field_009A != '\0') {
      puVar11 = &this_00->field_00BB[0].field_00B9.field_0004;
      do {
        if (this_00->field_0061 - *(int *)((int)puVar11 + -0x51) < *(uint *)((int)puVar11 + -0x55))
        {
LAB_00591d08:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar11 + -0xbd) != '\0') {
            if (*puVar11 != 0xffffffff) {
              FUN_006b3af0((int *)puVar11[0x11],*puVar11);
            }
            if ((*(char *)((int)puVar11 + -0x96) != '\0') &&
               (STField<uint>(puVar11,0x91) != 0xffffffff)) {
              FUN_006b3af0(STField<int *>(puVar11,0xd5),STField<uint>(puVar11,0x91));
            }
            *(undefined1 *)((int)puVar11 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar11 + -0x8d)) {
            uVar7 = *(int *)((int)puVar11 + -0x8d) - 1;
            *(uint *)((int)puVar11 + -0x8d) = uVar7;
            if (*(uint *)((int)puVar11 + -0x91) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)((int)puVar11 + -0x4d),*(uint *)((int)puVar11 + -0x91),uVar7,
                         *(uint *)((int)puVar11 + -0x79),*(uint *)((int)puVar11 + -0x75));
            }
            goto LAB_00591d08;
          }
        }
        iVar12 = iVar12 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
    }
    iVar12 = 0;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_009A != '\0') {
        puVar11 = &this_00->field_00BB[0].field_0028.field_0004;
        do {
          if (*puVar11 != 0xffffffff) {
            FUN_006b3af0((int *)puVar11[0x11],*puVar11);
          }
          iVar12 = iVar12 + 1;
          puVar11 = (uint *)((int)puVar11 + 0x1fb);
        } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
      }
      bVar2 = this_00->field_00BB[0xc].field_01DB;
      if (*(int *)&this_00->field_00BB[bVar2].field_0x16 != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_00BB[bVar2].field_0x6);
        g_currentExceptionFrame = local_c4.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return;
}

