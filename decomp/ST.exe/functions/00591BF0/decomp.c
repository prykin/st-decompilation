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
  int iVar2;
  int iVar3;
  CampaignTy *this_00;
  DWORD DVar5;
  int iVar6;
  uint uVar6;
  DWORD *pDVar7;
  int *piVar8;
  int iVar11;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 local_284 [112];
  InternalExceptionFrame local_c4;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_38;
  uint local_34;
  undefined4 local_28;
  undefined2 local_1e;
  undefined2 local_1c;
  CampaignTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  DVar5 = timeGetTime();
  this->field_0061 = DVar5;
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
  LightPalette(local_c);
  AnimationCampaign(this_00);
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    iVar12 = 0;
    if (this_00->field_009A != '\0') {
      puVar11 = (uint *)&this_00->field_0x221;
      do {
        if (((*(int *)((int)puVar11 + -0x165) != 0) && (*(char *)((int)puVar11 + -0x13f) != '\0'))
           && (puVar11[9] <= this_00->field_0061 - puVar11[10])) {
          puVar11[10] = this_00->field_0061;
          uVar6 = puVar11[-5];
          puVar11[-5] = uVar6 + 1;
          if ((int)puVar11[-4] <= (int)(uVar6 + 1)) {
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
    uVar6 = (uint)(byte)this_00->field_009A;
    if (uVar6 != 0) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x56) != 0) {
          if (this_00->field_0061 - *(int *)((int)&this_00->field_0127 + iVar12 * 0x1fb) <
              *(uint *)((int)&this_00->field_0123 + iVar12 * 0x1fb)) {
            iVar12 = 0;
            local_8 = 0;
            if (uVar6 != 0) {
              pDVar7 = (DWORD *)&this_00->field_0x249;
              do {
                if (*(char *)((int)pDVar7 + -0x167) != '\0') {
                  *pDVar7 = this_00->field_0061;
                }
                iVar12 = iVar12 + 1;
                pDVar7 = (DWORD *)((int)pDVar7 + 0x1fb);
              } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
            }
          }
          else {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar10 = *(int *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x85);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (iVar10 < *(int *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x89) + -1) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if ((iVar10 == 0) &&
                 (uVar6 = *(uint *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x81),
                 uVar6 != 0xffffffff)) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)((int)&this_00->field_012B + iVar12 * 0x1fb),uVar6,0xfffffffe,
                           *(uint *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x99),
                           *(uint *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x9d));
              }
              *(int *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x85) =
                   *(int *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x85) + 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar6 = *(uint *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x81);
              if (uVar6 != 0xffffffff) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                Library::DKW::DDX::FUN_006b3730
                          (*(uint **)((int)&this_00->field_012B + iVar12 * 0x1fb),uVar6,
                           *(uint *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x85),
                           *(uint *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x99),
                           *(uint *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x9d));
              }
              local_8 = 0;
            }
            else {
              iVar10 = *(int *)((int)&this_00->field_017C + iVar12 * 0x1fb);
              if (iVar10 < *(int *)(&this_00->field_0x180 + iVar12 * 0x1fb) + -3) {
                if (iVar10 == 0) {
                  uVar6 = *(uint *)((int)&this_00->field_0178 + iVar12 * 0x1fb);
                  if (uVar6 != 0xffffffff) {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)&this_00->field_01BC + iVar12 * 0x1fb),uVar6,
                               0xfffffffe,*(uint *)((int)&this_00->field_0190 + iVar12 * 0x1fb),
                               *(uint *)((int)&this_00->field_0194 + iVar12 * 0x1fb));
                  }
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  if ((*(char *)((int)this_00->field_0066 + iVar12 * 0x1fb + 0x7c) != '\0') &&
                     (uVar6 = *(uint *)((int)&this_00->field_0209 + iVar12 * 0x1fb),
                     uVar6 != 0xffffffff)) {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)&this_00->field_024D + iVar12 * 0x1fb),uVar6,
                               0xfffffffe,*(uint *)(&this_00->field_0x221 + iVar12 * 0x1fb),
                               *(uint *)(&this_00->field_0x225 + iVar12 * 0x1fb));
                  }
                }
                *(int *)((int)&this_00->field_017C + iVar12 * 0x1fb) =
                     *(int *)((int)&this_00->field_017C + iVar12 * 0x1fb) + 1;
                uVar6 = *(uint *)((int)&this_00->field_0178 + iVar12 * 0x1fb);
                if (uVar6 != 0xffffffff) {
                  Library::DKW::DDX::FUN_006b3730
                            (*(uint **)((int)&this_00->field_01BC + iVar12 * 0x1fb),uVar6,
                             *(uint *)((int)&this_00->field_017C + iVar12 * 0x1fb),
                             *(uint *)((int)&this_00->field_0190 + iVar12 * 0x1fb),
                             *(uint *)((int)&this_00->field_0194 + iVar12 * 0x1fb));
                }
                thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar12 = iVar12 + 1;
        uVar6 = (uint)(byte)this_00->field_009A;
      } while (iVar12 < (int)uVar6);
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
      piVar8 = (int *)&this_00->field_0x491;
      do {
        iVar2 = piVar8[0x19];
        puVar9[-1] = iVar10;
        iVar3 = *piVar8;
        *puVar9 = 0;
        puVar9[2] = iVar2 + iVar3;
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
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this_00->field_000C + 8))(5,this_00->field_0066,0,local_80,0);
      iVar12 = this_00->field_1A5B;
      if (*(int *)(iVar12 + 0x2e6) != 0) {
        memset(&local_28, 0, 0x1a); /* compiler bulk-zero initialization */
        local_1c = 1;
        local_1e = 1;
        STPiece<2,2>(local_28) = 1;
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
      puVar11 = &this_00->field_0178;
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
            uVar6 = *(int *)((int)puVar11 + -0x8d) - 1;
            *(uint *)((int)puVar11 + -0x8d) = uVar6;
            if (*(uint *)((int)puVar11 + -0x91) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)((int)puVar11 + -0x4d),*(uint *)((int)puVar11 + -0x91),uVar6,
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
        puVar11 = &this_00->field_00E7;
        do {
          if (*puVar11 != 0xffffffff) {
            FUN_006b3af0((int *)puVar11[0x11],*puVar11);
          }
          iVar12 = iVar12 + 1;
          puVar11 = (uint *)((int)puVar11 + 0x1fb);
        } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)this_00->field_0066 + (uint)(byte)this_00->field_1A5A * 0x1fb + 0x6b) != 0)
      {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)
                   ((int)this_00->field_0066 + (uint)(byte)this_00->field_1A5A * 0x1fb + 0x5b));
        g_currentExceptionFrame = local_c4.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return;
}

