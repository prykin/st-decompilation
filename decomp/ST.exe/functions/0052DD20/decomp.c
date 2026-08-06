#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0052DD20; family_names=PopUpTy::GetMessage; ret4=2;
   direct_offsets={10:1,14:4,18:4,1c:0} */

int __thiscall PopUpTy::GetMessage(PopUpTy *this,STMessage *message)

{
  RecoveredSourceFamily_dibcopy *pRVar1;
  uint *puVar2;
  PopUpTy *this_00;
  int local_EAX_36;
  ccFntTy *pcVar4;
  int uVar12;
  ushort *puVar5;
  undefined4 *puVar6;
  DArrayTy *pDVar7;
  DWORD DVar8;
  int iVar9;
  char *resourceString;
  int local_EAX_1044;
  int iVar4;
  int iVar10;
  int iVar11;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte local_5;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  local_EAX_36 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x100,0,local_EAX_36,
                                "%s","PopUpTy::GetMessage");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_36,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x100);
    return 0xffff;
  }
  switch(message->id) {
  case MESS_ID_NONE:
    uVar14 = (uint)DAT_00807347;
    DVar8 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
    if (((uVar14 * -1000 + 3000) * (3 - uVar14) < DVar8 - this_00->field_009D) ||
       ((int)(uint)DAT_00807346 < (int)this_00->field_0098[2])) {
      DVar8 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
      this_00->field_009D = DVar8;
      if (this_00->field_009C != '\0') {
        FUN_006b7830((AnonShape_006B7830_769CA2DF *)this_00->field_0098,0);
        pRVar1 = (RecoveredSourceFamily_dibcopy *)this_00->field_0090;
        Library::DKW::WGR::FUN_006b55f0
                  (pRVar1,0,0,0,(byte *)pRVar1,0,0,0x13,pRVar1->field_0004,
                   (uint)(byte)this_00->field_009C * 0x13 + -0x13);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0090,0,0,
                     (uint)(byte)this_00->field_009C * 0x13 + -0x13,
                     ((RecoveredSourceFamily_dibcopy *)this_00->field_0090)->field_0004,0x13,0x89);
        puVar15 = this_00->field_0098;
        if ((int)puVar15[2] <= (int)(uint)DAT_00807346) {
          this_00->field_009C = (char)puVar15[2];
        }
        if ((int)(uint)DAT_00807346 <= (int)puVar15[2]) {
          OutStr(this_00,DAT_00807346 - 1);
        }
        local_5 = 0;
        local_c = -0x18 - (int)this_00;
        local_14 = 0;
        local_10 = 0x1e;
        puVar15 = this_00->field_0018;
        do {
          iVar11 = local_14;
          if ((DAT_00807342 == 0) || ((byte)this_00->field_009C <= local_5)) {
LAB_0052e184:
            puVar15[0xf] = 0;
            FUN_006b2800(g_ddxContext_008075A8,*puVar15,0,0x13);
            FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar15);
          }
          else {
            puVar2 = this_00->field_0098;
            if (local_14 < (int)puVar2[2]) {
              iVar9 = *(int *)(puVar2[5] + local_c + (int)puVar15);
            }
            else {
              iVar9 = 0;
            }
            if (iVar9 == 0) goto LAB_0052e184;
            if (local_14 < (int)puVar2[2]) {
              resourceString = *(char **)(puVar2[5] + local_c + (int)puVar15);
            }
            else {
              resourceString = nullptr;
            }
            local_EAX_1044 = FUN_00711110(this_00->field_0094,resourceString);
            if ((int)*(uint *)(this_00->field_0090 + 2) <= local_EAX_1044) {
              local_EAX_1044 = *(uint *)(this_00->field_0090 + 2);
            }
            puVar15[0xf] = local_EAX_1044;
            FUN_006b2800(g_ddxContext_008075A8,*puVar15,local_EAX_1044,0x13);
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0xd,local_10);
            Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar15);
          }
          local_5 = local_5 + 1;
          local_14 = iVar11 + 1;
          puVar15 = puVar15 + 1;
          local_10 = local_10 + 0x13;
        } while (local_5 < 0xf);
      }
    }
    break;
  case MESS_ID_CREATE:
    pcVar4 = (ccFntTy *)thunk_FUN_0052cce0(PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_0094 = pcVar4;
    pcVar4->field_007E = 1;
    *(undefined2 *)&pcVar4->field_0x9e = 0;
    pcVar4->field_0x9e = DAT_007c6ff0;
    iVar11 = 1;
    puVar5 = PTR_0080679c + 0x14;
    uVar12 = FUN_006b4fe0((int)PTR_0080679c);
    puVar5 = (ushort *)
             FUN_006b50c0((&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0x11d,(uint)PTR_0080679c[7],
                          uVar12,(undefined4 *)puVar5,iVar11);
    this_00->field_0090 = puVar5;
    uVar14 = *(uint *)(puVar5 + 10);
    if (uVar14 == 0) {
      uVar14 = ((uint)puVar5[7] * *(int *)(puVar5 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar5 + 4);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int *)puVar5);
    for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar6 = 0x89898989;
      puVar6 = puVar6 + 1;
    }
    uVar13 = 0x1e;
    local_10 = 0xf;
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar6 = 0x89;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar15 = this_00->field_0018;
    do {
      FUN_006b2330(g_ddxContext_008075A8,puVar15,8,0x405c22,puVar15[0xf],0x13,(ushort *)this_00);
      FUN_006b1bd0((AnonShape_006B1BD0_7C890E99 *)g_ddxContext_008075A8,*puVar15);
      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0xd,uVar13);
      FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar15);
      puVar15 = puVar15 + 1;
      uVar13 = uVar13 + 0x13;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    pDVar7 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    this_00->field_0098 = &pDVar7->flags;
    DVar8 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
    this_00->field_009D = DVar8;
    g_popUp_008016D8 = this_00;
    break;
  case MESS_SHARED_0003:
    g_popUp_008016D8 = nullptr;
    puVar15 = local_18->field_0018;
    iVar11 = 0xf;
    do {
      if (*puVar15 != 0xffffffff) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,*puVar15);
        *puVar15 = 0xffffffff;
      }
      puVar15 = puVar15 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if (this_00->field_0090 != nullptr) {
      FreeAndNull(&this_00->field_0090);
    }
    if (this_00->field_0094 != nullptr) {
      ccFntTy::operator_delete((uint *)this_00->field_0094);
      this_00->field_0094 = nullptr;
    }
    if ((DArrayTy *)this_00->field_0098 != nullptr) {
      FUN_006b5570((DArrayTy *)this_00->field_0098);
      this_00->field_0098 = nullptr;
    }
    break;
  case MESS_SHARED_0005:
    local_10 = 0;
    iVar11 = -0x18 - (int)local_18;
    uVar14 = 0x1e;
    puVar15 = local_18->field_0018;
    local_14 = 0xf;
    local_c = iVar11;
    do {
      if (*puVar15 != 0xffffffff) {
        if ((int)local_10 < (int)this_00->field_0098[2]) {
          iVar9 = *(int *)(this_00->field_0098[5] + iVar11 + (int)puVar15);
        }
        else {
          iVar9 = 0;
        }
        if (iVar9 != 0) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0xd,uVar14);
          iVar11 = local_c;
        }
      }
      local_10 = local_10 + 1;
      puVar15 = puVar15 + 1;
      uVar14 = uVar14 + 0x13;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_14 = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = FUN_006e5fd0(this_00,message);
  return iVar4;
}

