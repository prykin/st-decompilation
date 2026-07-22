#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00522E80; family_names=IntercomPanelTy::GetMessage; ret4=7;
   direct_offsets={10:2,14:2,18:2,1c:0} */

int __thiscall IntercomPanelTy::GetMessage(IntercomPanelTy *this,STMessage *message)

{
  ushort uVar1;
  STMessageId SVar2;
  AnonShape_00710790_4CBB90D4 *pAVar3;
  ushort *puVar4;
  code *pcVar5;
  IntercomPanelTy *this_00;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  AnonShape_00710790_4CBB90D4 **ppAVar10;
  AnonShape_00710790_4CBB90D4 *local_8dc [3];
  int local_8d0;
  int local_8cc;
  int local_8c8;
  int local_8c4;
  undefined4 local_8c0;
  DArrayTy *local_8bc;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\intercom.cpp",0x197,0,iVar6,
                               "%s","IntercomPanelTy::GetMessage");
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\intercom.cpp",0x197);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id == MESS_ID_CREATE) {
    PreInitIntercomPanel(local_c);
  }
  PanelTy::GetMessage((PanelTy *)this_00,message);
  SVar2 = message->id;
  if (SVar2 < MESS_BEHPANELTY_C0A0) {
    if (SVar2 != MESS_SHARED_C09F) {
      if (SVar2 == MESS_ID_NONE) {
        if (this_00->field_0172 == 3) {
          iVar6 = this_00->field_018C;
          if (this_00->field_0044 < iVar6) {
            this_00->field_0044 = this_00->field_0044 + 5;
          }
          if (iVar6 <= this_00->field_0044) {
            ppAVar10 = local_8dc;
            for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
              *ppAVar10 = (AnonShape_00710790_4CBB90D4 *)0x0;
              ppAVar10 = ppAVar10 + 1;
            }
            pAVar3 = this_00->field_0180;
            this_00->field_0044 = iVar6;
            this_00->field_0172 = 1;
            local_8dc[0] = (AnonShape_00710790_4CBB90D4 *)0x1;
            local_8dc[1] = (AnonShape_00710790_4CBB90D4 *)0x9;
            local_8dc[2] = pAVar3;
            if (*(int *)(pAVar3 + 1) != 0) {
              FUN_00710790(pAVar3);
            }
            local_8c4 = pAVar3->field_008A + 1;
            local_8d0 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe7) + 0x1e + this_00->field_003C;
            local_7c = 1;
            local_80 = 1;
            local_8cc = (0x14 - local_8c4) / 2 + 5 + this_00->field_0044;
            local_8b0 = this_00->field_0008;
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
                    ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                     this_00->field_0044);
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (this_00->field_0172 != 4) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        iVar6 = this_00->field_018C - this_00->field_0048;
        if (iVar6 < this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -5;
        }
        if (this_00->field_0044 <= iVar6) {
          this_00->field_0044 = iVar6;
          this_00->field_0172 = 2;
          this_00->field_017C = 0;
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_CREATE) {
        InitIntercomPanel(this_00);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (SVar2 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      DoneIntercomPanel(this_00);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    thunk_FUN_00521cf0((AnonShape_00521CF0_154649D2 *)this_00);
    Library::DKW::TBL::FUN_006b6020(&this_00->field_0198->flags,0,&DAT_008016a0);
    this_00->field_0028 = 0x33;
    this_00->field_002C = this_00->field_0198;
    FUN_006e6080(this_00,2,this_00->field_01A0,(undefined4 *)&this_00->field_0x18);
  }
  else if (SVar2 != MESS_BEHPANELTY_C0A0) {
    if (SVar2 != MESS_INTERCOMPANELTY_C0AF) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    puVar4 = this_00->field_019C;
    local_8 = *(uint *)(puVar4 + 10);
    if (local_8 == 0) {
      local_8 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar4 + 4);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0((int)puVar4);
    for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    ccFntTy::SetSurf(this_00->field_0180,(int)this_00->field_019C,0,0,0,0,0);
    ccFntTy::WrStr(this_00->field_0180,*(uint **)(message->arg0).ptr,0,-1,0);
    uVar1 = (message->arg1).words.low;
    if ((uVar1 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
      uVar9 = (uint)(message->arg1).words.high;
      FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_019C,0,(uint)uVar1,uVar9 + 1,
                   (uint)uVar1,
                   (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_019C)->field_0008 +
                   (uVar9 - 3),0x6c,0xd);
    }
    puVar4 = this_00->field_019C;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,
               (-(uint)(DAT_0080874e != '\x03') & 0xffffffe7) + 0x1e,5,(byte *)puVar4,0,0,0,
               *(int *)(puVar4 + 2),*(int *)(puVar4 + 4));
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
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

