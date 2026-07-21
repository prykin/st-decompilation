#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::GetMessage */

undefined4 __thiscall
IntercomPanelTy::GetMessage(IntercomPanelTy *this,AnonShape_00522E80_C2E4EACA *param_1)

{
  ushort uVar1;
  uint *puVar2;
  byte *pbVar3;
  code *pcVar4;
  IntercomPanelTy *this_00;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint **ppuVar10;
  uint *local_8dc [3];
  int local_8d0;
  int local_8cc;
  int local_8c8;
  int local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_80;
  undefined4 local_7c;
  InternalExceptionFrame local_50;
  IntercomPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x197,0,iVar5,
                               &DAT_007a4ccc,s_IntercomPanelTy__GetMessage_007c41a0);
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x197);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1->field_0010 == 2) {
    PreInitIntercomPanel(local_c);
  }
  PanelTy::GetMessage((PanelTy *)this_00,(int)param_1);
  uVar9 = param_1->field_0010;
  if (uVar9 < 0xc0a0) {
    if (uVar9 != 0xc09f) {
      if (uVar9 == 0) {
        if (this_00->field_0172 == 3) {
          iVar5 = this_00->field_018C;
          if ((int)this_00->field_0044 < iVar5) {
            this_00->field_0044 = this_00->field_0044 + 5;
          }
          if (iVar5 <= (int)this_00->field_0044) {
            ppuVar10 = local_8dc;
            for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
              *ppuVar10 = (uint *)0x0;
              ppuVar10 = ppuVar10 + 1;
            }
            puVar2 = (uint *)this_00->field_0180;
            this_00->field_0044 = iVar5;
            this_00->field_0172 = 1;
            local_8dc[0] = (uint *)0x1;
            local_8dc[1] = (uint *)0x9;
            local_8dc[2] = puVar2;
            if (puVar2[0x28] != 0) {
              FUN_00710790(puVar2);
            }
            local_8c4 = *(int *)((int)puVar2 + 0x8a) + 1;
            local_8d0 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe7) + 0x1e +
                        *(int *)&this_00->field_0x3c;
            local_7c = 1;
            local_80 = 1;
            local_8cc = (0x14 - local_8c4) / 2 + 5 + this_00->field_0044;
            local_8b0 = *(undefined4 *)&this_00->field_0x8;
            local_8c8 = (-(uint)(DAT_0080874e != '\x03') & 0x32) + 700;
            local_8bc = this_00->field_0198;
            local_8ac = 2;
            local_88c = 2;
            local_84c = 2;
            local_8c0 = 0x104;
            local_8a8 = 0xc0a0;
            local_888 = 0xc0af;
            local_848 = 0xc09f;
            local_890 = local_8b0;
            local_850 = local_8b0;
            (*this_00->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_00->field_000C,6,&this_00->field_01A0,(int *)0x0,
                       local_8dc,1);
          }
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)&this_00->field_0x60,0xffffffff,
                     *(uint *)&this_00->field_0x3c,this_00->field_0044);
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (this_00->field_0172 != 4) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        iVar5 = this_00->field_018C - this_00->field_0048;
        if (iVar5 < (int)this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -5;
        }
        if ((int)this_00->field_0044 <= iVar5) {
          this_00->field_0044 = iVar5;
          this_00->field_0172 = 2;
          *(undefined4 *)&this_00->field_0x17c = 0;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)&this_00->field_0x60,0xffffffff,
                   *(uint *)&this_00->field_0x3c,this_00->field_0044);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (uVar9 == 2) {
        InitIntercomPanel(this_00);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (uVar9 != 3) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      DoneIntercomPanel(this_00);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    thunk_FUN_00521cf0((AnonShape_00521CF0_154649D2 *)this_00);
    Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_0198,0,&DAT_008016a0);
    *(undefined4 *)&this_00->field_0x28 = 0x33;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0198;
    FUN_006e6080(this_00,2,this_00->field_01A0,(undefined4 *)&this_00->field_0x18);
  }
  else if (uVar9 != 0xc0a0) {
    if (uVar9 != 0xc0af) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    iVar5 = this_00->field_019C;
    local_8 = *(uint *)(iVar5 + 0x14);
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar5 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar5);
    for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    ccFntTy::SetSurf((ccFntTy *)this_00->field_0180,this_00->field_019C,0,0,0,0,0);
    ccFntTy::WrStr((ccFntTy *)this_00->field_0180,(uint *)*param_1->field_0014,0,-1,0);
    uVar1 = param_1->field_0018;
    if ((uVar1 != 0xffff) || (param_1->field_001A != -1)) {
      FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)this_00->field_019C,0,(uint)uVar1,
                   (ushort)param_1->field_001A + 1,(uint)uVar1,
                   ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_019C)->field_0008 + -3 +
                   (uint)(ushort)param_1->field_001A,0x6c,0xd);
    }
    pbVar3 = (byte *)this_00->field_019C;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,
               (-(uint)(DAT_0080874e != '\x03') & 0xffffffe7) + 0x1e,5,pbVar3,0,0,0,
               *(int *)(pbVar3 + 4),*(int *)(pbVar3 + 8));
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)&this_00->field_0x60,0xffffffff,*(uint *)&this_00->field_0x3c,
               this_00->field_0044);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  if (this_00->field_0172 == 1) {
    SwitchIntercomPanel(this_00,0);
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

