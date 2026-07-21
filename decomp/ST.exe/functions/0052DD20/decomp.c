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
  code *pcVar1;
  PopUpTy *this_00;
  int iVar2;
  ccFntTy *pcVar3;
  AnonPointee_PopUpTy_0090 *pAVar4;
  undefined4 *puVar5;
  uint *puVar6;
  DWORD DVar7;
  char *resourceString;
  int iVar8;
  uint uVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  int iVar10;
  uint uVar11;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte local_5;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x100,0,iVar2,"%s",
                               "PopUpTy::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x100);
    return 0xffff;
  }
  switch(message->id) {
  case MESS_ID_NONE:
    uVar11 = (uint)DAT_00807347;
    DVar7 = FUN_006e51b0(0x807620);
    if (((uVar11 * -1000 + 3000) * (3 - uVar11) < DVar7 - this_00->field_009D) ||
       ((int)(uint)DAT_00807346 < *(int *)(this_00->field_0098 + 8))) {
      DVar7 = FUN_006e51b0(0x807620);
      this_00->field_009D = DVar7;
      if (this_00->field_009C != '\0') {
        FUN_006b7830((AnonShape_006B7830_769CA2DF *)this_00->field_0098,0);
        pAVar4 = this_00->field_0090;
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)pAVar4,0,0,0,(byte *)pAVar4,0,0,0x13,
                   pAVar4->field_0004,(uint)(byte)this_00->field_009C * 0x13 + -0x13);
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0090,0,0,
                     (uint)(byte)this_00->field_009C * 0x13 + -0x13,this_00->field_0090->field_0004,
                     0x13,0x89);
        iVar2 = this_00->field_0098;
        if (*(int *)(iVar2 + 8) <= (int)(uint)DAT_00807346) {
          this_00->field_009C = *(undefined1 *)(iVar2 + 8);
        }
        if ((int)(uint)DAT_00807346 <= *(int *)(iVar2 + 8)) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          OutStr(this_00,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),DAT_00807346 - 1));
        }
        local_5 = 0;
        local_c = -0x18 - (int)this_00;
        local_14 = 0;
        local_10 = 0x1e;
        puVar6 = &this_00->field_0018;
        do {
          iVar2 = local_14;
          if ((DAT_00807342 == 0) || ((byte)this_00->field_009C <= local_5)) {
LAB_0052e184:
            puVar6[0xf] = 0;
            FUN_006b2800((int)DAT_008075a8,*puVar6,0,0x13);
            FUN_006b3af0(DAT_008075a8,*puVar6);
          }
          else {
            iVar8 = this_00->field_0098;
            if (local_14 < *(int *)(iVar8 + 8)) {
              iVar10 = *(int *)(*(int *)(iVar8 + 0x14) + local_c + (int)puVar6);
            }
            else {
              iVar10 = 0;
            }
            if (iVar10 == 0) goto LAB_0052e184;
            if (local_14 < *(int *)(iVar8 + 8)) {
              resourceString = *(char **)(*(int *)(iVar8 + 0x14) + local_c + (int)puVar6);
            }
            else {
              resourceString = (char *)0x0;
            }
            uVar9 = FUN_00711110(this_00->field_0094,resourceString);
            uVar11 = this_00->field_0090->field_0004;
            if ((int)uVar11 <= (int)uVar9) {
              uVar9 = uVar11;
            }
            puVar6[0xf] = uVar9;
            FUN_006b2800((int)DAT_008075a8,*puVar6,uVar9,0x13);
            Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar6,0xffffffff,0xd,local_10);
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar6);
          }
          local_5 = local_5 + 1;
          local_14 = iVar2 + 1;
          puVar6 = puVar6 + 1;
          local_10 = local_10 + 0x13;
        } while (local_5 < 0xf);
      }
    }
    break;
  case MESS_ID_CREATE:
    pcVar3 = (ccFntTy *)thunk_FUN_0052cce0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_0094 = pcVar3;
    pcVar3->field_007E = 1;
    *(undefined2 *)&pcVar3->field_0x9e = 0;
    pcVar3->field_0x9e = DAT_007c6ff0;
    iVar2 = 1;
    puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar11 = FUN_006b4fe0(DAT_0080679c);
    pAVar4 = (AnonPointee_PopUpTy_0090 *)
             FUN_006b50c0((&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0x11d,
                          (uint)*(ushort *)(DAT_0080679c + 0xe),uVar11,puVar5,iVar2);
    this_00->field_0090 = pAVar4;
    uVar11 = pAVar4->field_0014;
    if (uVar11 == 0) {
      uVar11 = ((uint)(ushort)pAVar4->field_000E * pAVar4->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pAVar4->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar4);
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = 0x89898989;
      puVar5 = puVar5 + 1;
    }
    uVar9 = 0x1e;
    local_10 = 0xf;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar5 = 0x89;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar6 = &this_00->field_0018;
    do {
      FUN_006b2330((uint)DAT_008075a8,puVar6,8,0x405c22,puVar6[0xf],0x13,(uint)this_00);
      FUN_006b1bd0((int)DAT_008075a8,*puVar6);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar6,0xffffffff,0xd,uVar9);
      FUN_006b3af0(DAT_008075a8,*puVar6);
      puVar6 = puVar6 + 1;
      uVar9 = uVar9 + 0x13;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    this_00->field_0098 = puVar6;
    DVar7 = FUN_006e51b0(0x807620);
    this_00->field_009D = DVar7;
    g_popUp_008016D8 = this_00;
    break;
  case MESS_SHARED_0003:
    g_popUp_008016D8 = (PopUpTy *)0x0;
    puVar6 = &local_18->field_0018;
    iVar2 = 0xf;
    do {
      if (*puVar6 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar6);
        *puVar6 = 0xffffffff;
      }
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pcVar3 = (ccFntTy *)0x0;
    if (this_00->field_0090 != (AnonPointee_PopUpTy_0090 *)0x0) {
      FreeAndNull(&this_00->field_0090);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar3 = extraout_ECX;
    }
    if (this_00->field_0094 != (ccFntTy *)0x0) {
      ccFntTy::operator(pcVar3,(uint *)this_00->field_0094);
      this_00->field_0094 = (ccFntTy *)0x0;
    }
    if ((AnonShape_006B5570_4D68B99C *)this_00->field_0098 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_00->field_0098);
      this_00->field_0098 = 0;
    }
    break;
  case MESS_SHARED_0005:
    local_10 = 0;
    iVar2 = -0x18 - (int)local_18;
    uVar11 = 0x1e;
    puVar6 = &local_18->field_0018;
    local_14 = 0xf;
    local_c = iVar2;
    do {
      if (*puVar6 != 0xffffffff) {
        if ((int)local_10 < *(int *)(this_00->field_0098 + 8)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar8 = *(int *)(*(int *)(this_00->field_0098 + 0x14) + iVar2 + (int)puVar6);
        }
        else {
          iVar8 = 0;
        }
        if (iVar8 != 0) {
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar6,0xffffffff,0xd,uVar11);
          iVar2 = local_c;
        }
      }
      local_10 = local_10 + 1;
      puVar6 = puVar6 + 1;
      uVar11 = uVar11 + 0x13;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_14 = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar2 = FUN_006e5fd0(this_00,message);
  return iVar2;
}

