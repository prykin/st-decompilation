#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/intercom.cpp

// 00521900 IntercomPanelTy::PreInitIntercomPanel
#line 4 "decomp/ST.exe/functions/00521900/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::PreInitIntercomPanel */

void __thiscall st::fn_00521900(IntercomPanelTy *this)

{
  IntercomPanelTy *pIVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,(undefined4 *)&local_8->field_0x188);
    iVar3 = pIVar2->field_018C - pIVar2->field_0048;
    pIVar2->field_0044 = iVar3;
    pIVar2->field_0174 = iVar3 + pIVar2->field_0048;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\intercom.cpp",0x22,0,iVar3,"%s",
                             "IntercomPanelTy::PreInitIntercomPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\intercom.cpp",0x22);
  return;
}

// 005219E0 IntercomPanelTy::InitIntercomPanel
#line 4 "decomp/ST.exe/functions/005219E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::InitIntercomPanel */

void __thiscall st::fn_005219E0(IntercomPanelTy *this)

{
  IntercomPanelTy *pIVar2;
  int iVar3;
  undefined4 *puVar4;
  LPSTR text;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  DArrayTy *pDVar8;
  int iVar9;
  int *piVar10;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (iVar3 == 0) {
    g_intercomPanel_0080169C = local_8;
    puVar4 = st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0030);
    pIVar2->field_0180 = puVar4;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    iVar3 = 1;
    piVar10 = nullptr;
    text = st::fn_0040577C("BKG_EDITCHAT",0);
    puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,text,piVar10,iVar3);
    puVar7 = puVar5 + 0x14;
    iVar3 = 1;
    pIVar2->field_0184 = puVar5;
    uVar6 = st::fn_006B4FE0((int)puVar5);
    puVar7 = (ushort *)
             st::fn_006B50C0((-(uint)(DAT_0080874e != '\x03') & 0x32) + 700,0x14,
                          (uint)pIVar2->field_0184[7],uVar6,(undefined4 *)puVar7,iVar3);
    pIVar2->field_019C = puVar7;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pIVar2->field_0068,0,0,'\x01',(byte *)pIVar2->field_0184
          );
    pDVar8 = st::fn_006B54F0(nullptr,1,1);
    pIVar2->field_0198 = pDVar8;
    st::fn_006B6020(pDVar8,0,&DAT_008016a0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0("E:\\__titans\\Andrey\\intercom.cpp",0x34,0,iVar3,"%s",
                             "IntercomPanelTy::InitIntercomPanel");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\intercom.cpp",0x34);
  return;
}

// 00521B90 IntercomPanelTy::DoneIntercomPanel
#line 4 "decomp/ST.exe/functions/00521B90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::DoneIntercomPanel */

void __thiscall st::fn_00521B90(IntercomPanelTy *this)

{
  IntercomPanelTy *pIVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_0198 != nullptr) {
      st::fn_006B5570(local_8->field_0198);
      pIVar2->field_0198 = nullptr;
    }
    if (pIVar2->field_01A0 != 0) {
      st::fn_006E56B0(pIVar2->field_000C,pIVar2->field_01A0);
    }
    pIVar2->field_01A0 = 0;
    g_intercomPanel_0080169C = nullptr;
    if (pIVar2->field_0180 != nullptr) {
      st::fn_00710560(pIVar2->field_0180);
      pIVar2->field_0180 = nullptr;
    }
    if (pIVar2->field_0184 != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&pIVar2->field_0184);
    }
    if (pIVar2->field_019C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&pIVar2->field_019C);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\intercom.cpp",0x4a,0,errorCode,
                             "%s","IntercomPanelTy::DoneIntercomPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\intercom.cpp",0x4a);
  return;
}

// 00522D40 IntercomPanelTy::SwitchIntercomPanel
#line 4 "decomp/ST.exe/functions/00522D40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::SwitchIntercomPanel

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00522E80 -> 00522D40 @ 0052315F; literal 0 at 0052315B | 005449B0 -> 00522D40 @
   00546551; literal 0 at 0054654F | 005449B0 -> 00522D40 @ 0054667C; literal 1 at 0054667A |
   005449B0 -> 00522D40 @ 005466BB; literal 3 at 005466B9 */

void __thiscall st::fn_00522D40(IntercomPanelTy *this,byte param_1)

{
  short sVar1;
  IntercomPanelTy *pIVar3;
  int errorCode;
  int iVar4;
  Global_sub_005252C0_param_1Enum GVar5;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pIVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\intercom.cpp",0x13b,0,errorCode,
                               "%s","IntercomPanelTy::SwitchIntercomPanel");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\intercom.cpp",0x13b);
    return;
  }
  sVar1 = local_8->field_0172;
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      local_8->field_0172 = 3;
      local_8->field_01A4 = param_1;
      GVar5 = CASE_AF;
      goto LAB_00522dd6;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  local_8->field_0172 = 4;
  if (local_8->field_01A0 != 0) {
    st::fn_006E56B0(local_8->field_000C,local_8->field_01A0);
  }
  pIVar3->field_01A0 = 0;
  GVar5 = CASE_B0;
LAB_00522dd6:
  st::fn_00405E2F(GVar5);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00522E80 IntercomPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/00522E80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00522E80; family_names=IntercomPanelTy::GetMessage; ret4=7;
   direct_offsets={10:2,14:2,18:2,1c:0} */

int __thiscall st::fn_00522E80(IntercomPanelTy *this,STMessage *message)

{
  ushort uVar1;
  STMessageId SVar2;
  AnonShape_00710790_4CBB90D4 *pAVar3;
  ushort *puVar4;
  IntercomPanelTy *this_00;
  int iVar6;
  byte *puVar7;
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
  iVar6 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Andrey\\intercom.cpp",0x197,0,iVar6,
                               "%s","IntercomPanelTy::GetMessage");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar6,0,"E:\\__titans\\Andrey\\intercom.cpp",0x197);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id == MESS_ID_CREATE) {
    st::fn_004031CA(local_c);
  }
  st::fn_004017F8((PanelTy *)this_00,message);
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
              *ppAVar10 = nullptr;
              ppAVar10 = ppAVar10 + 1;
            }
            pAVar3 = this_00->field_0180;
            this_00->field_0044 = iVar6;
            this_00->field_0172 = 1;
            local_8dc[0] = (AnonShape_00710790_4CBB90D4 *)0x1;
            local_8dc[1] = (AnonShape_00710790_4CBB90D4 *)0x9;
            local_8dc[2] = pAVar3;
            if (*(int *)(pAVar3 + 1) != 0) {
              st::fn_00710790(pAVar3);
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
                      ((SystemClassTy *)this_00->field_000C,6,&this_00->field_01A0,nullptr,
                       local_8dc,1);
          }
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C
                     ,this_00->field_0044);
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
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_CREATE) {
        st::fn_00405583(this_00);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (SVar2 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      st::fn_004021EE(this_00);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    st::fn_00403120((AnonShape_00521CF0_154649D2 *)this_00);
    st::fn_006B6020(this_00->field_0198,0,&DAT_008016a0);
    this_00->field_0028 = 0x33;
    this_00->field_002C = this_00->field_0198;
    st::fn_006E6080(this_00,2,this_00->field_01A0,(undefined4 *)&this_00->field_0x18);
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
    puVar7 = (byte *)st::fn_006B4FA0((int *)puVar4);
    memset(puVar7, 0, local_8); /* compiler bulk-zero initialization */
    st::fn_00710A90(this_00->field_0180,(int)this_00->field_019C,0,0,0,0,0);
    st::fn_007119C0(this_00->field_0180,*(uint **)(message->arg0).ptr,0,-1,0);
    uVar1 = (message->arg1).words.low;
    if ((uVar1 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
      uVar9 = (uint)(message->arg1).words.high;
      st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_019C,0,(uint)uVar1,uVar9 + 1,
                   (uint)uVar1,
                   (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_019C)->field_0008 +
                   (uVar9 - 3),0x6c,0xd);
    }
    puVar4 = this_00->field_019C;
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,
               (-(uint)(DAT_0080874e != '\x03') & 0xffffffe7) + 0x1e,5,(byte *)puVar4,0,0,0,
               *(int *)(puVar4 + 2),*(int *)(puVar4 + 4));
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
               this_00->field_0044);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  if (this_00->field_0172 == 1) {
    st::fn_00401DCF(this_00,0);
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

