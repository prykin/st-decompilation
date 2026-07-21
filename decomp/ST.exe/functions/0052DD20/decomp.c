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
  AnonShape_006B5B10_E0D06CF1 *pAVar1;
  uint *puVar2;
  code *pcVar3;
  PopUpTy *this_00;
  int iVar4;
  ccFntTy *pcVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  DArrayTy *pDVar8;
  DWORD DVar9;
  char *resourceString;
  int iVar10;
  uint uVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  uint uVar12;
  uint *puVar13;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte local_5;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x100,0,iVar4,"%s"
                                ,"PopUpTy::GetMessage");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x100);
    return 0xffff;
  }
  switch(message->id) {
  case MESS_ID_NONE:
    uVar12 = (uint)DAT_00807347;
    DVar9 = FUN_006e51b0(0x807620);
    if (((uVar12 * -1000 + 3000) * (3 - uVar12) < DVar9 - this_00->field_009D) ||
       ((int)(uint)DAT_00807346 < (int)this_00->field_0098[2])) {
      DVar9 = FUN_006e51b0(0x807620);
      this_00->field_009D = DVar9;
      if (this_00->field_009C != '\0') {
        FUN_006b7830((AnonShape_006B7830_769CA2DF *)this_00->field_0098,0);
        pAVar1 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0090;
        Library::DKW::WGR::FUN_006b55f0
                  (pAVar1,0,0,0,(byte *)pAVar1,0,0,0x13,pAVar1->field_0004,
                   (uint)(byte)this_00->field_009C * 0x13 + -0x13);
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0090,0,0,
                     (uint)(byte)this_00->field_009C * 0x13 + -0x13,
                     ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0090)->field_0004,0x13,0x89);
        puVar13 = this_00->field_0098;
        if ((int)puVar13[2] <= (int)(uint)DAT_00807346) {
          this_00->field_009C = (char)puVar13[2];
        }
        if ((int)(uint)DAT_00807346 <= (int)puVar13[2]) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          OutStr(this_00,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),DAT_00807346 - 1));
        }
        local_5 = 0;
        local_c = -0x18 - (int)this_00;
        local_14 = 0;
        local_10 = 0x1e;
        puVar13 = &this_00->field_0018;
        do {
          iVar4 = local_14;
          if ((DAT_00807342 == 0) || ((byte)this_00->field_009C <= local_5)) {
LAB_0052e184:
            puVar13[0xf] = 0;
            FUN_006b2800((int)PTR_008075a8,*puVar13,0,0x13);
            FUN_006b3af0((int *)PTR_008075a8,*puVar13);
          }
          else {
            puVar2 = this_00->field_0098;
            if (local_14 < (int)puVar2[2]) {
              iVar10 = *(int *)(puVar2[5] + local_c + (int)puVar13);
            }
            else {
              iVar10 = 0;
            }
            if (iVar10 == 0) goto LAB_0052e184;
            if (local_14 < (int)puVar2[2]) {
              resourceString = *(char **)(puVar2[5] + local_c + (int)puVar13);
            }
            else {
              resourceString = (char *)0x0;
            }
            uVar12 = FUN_00711110(this_00->field_0094,resourceString);
            if ((int)*(uint *)(this_00->field_0090 + 2) <= (int)uVar12) {
              uVar12 = *(uint *)(this_00->field_0090 + 2);
            }
            puVar13[0xf] = uVar12;
            FUN_006b2800((int)PTR_008075a8,*puVar13,uVar12,0x13);
            Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*puVar13,0xffffffff,0xd,local_10);
            Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,*puVar13);
          }
          local_5 = local_5 + 1;
          local_14 = iVar4 + 1;
          puVar13 = puVar13 + 1;
          local_10 = local_10 + 0x13;
        } while (local_5 < 0xf);
      }
    }
    break;
  case MESS_ID_CREATE:
    pcVar5 = (ccFntTy *)thunk_FUN_0052cce0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_0094 = pcVar5;
    pcVar5->field_007E = 1;
    *(undefined2 *)&pcVar5->field_0x9e = 0;
    pcVar5->field_0x9e = DAT_007c6ff0;
    iVar4 = 1;
    puVar7 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar12 = FUN_006b4fe0(DAT_0080679c);
    puVar6 = (ushort *)
             FUN_006b50c0((&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0x11d,
                          (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar7,iVar4);
    this_00->field_0090 = puVar6;
    uVar12 = *(uint *)(puVar6 + 10);
    if (uVar12 == 0) {
      uVar12 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar6 + 4);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0((int)puVar6);
    for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar7 = 0x89898989;
      puVar7 = puVar7 + 1;
    }
    uVar11 = 0x1e;
    local_10 = 0xf;
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar7 = 0x89;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar13 = &this_00->field_0018;
    do {
      FUN_006b2330((uint)PTR_008075a8,puVar13,8,0x405c22,puVar13[0xf],0x13,(uint)this_00);
      FUN_006b1bd0((AnonShape_006B1BD0_7C890E99 *)PTR_008075a8,*puVar13);
      Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*puVar13,0xffffffff,0xd,uVar11);
      FUN_006b3af0((int *)PTR_008075a8,*puVar13);
      puVar13 = puVar13 + 1;
      uVar11 = uVar11 + 0x13;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    pDVar8 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    this_00->field_0098 = &pDVar8->flags;
    DVar9 = FUN_006e51b0(0x807620);
    this_00->field_009D = DVar9;
    g_popUp_008016D8 = this_00;
    break;
  case MESS_SHARED_0003:
    g_popUp_008016D8 = (PopUpTy *)0x0;
    puVar13 = &local_18->field_0018;
    iVar4 = 0xf;
    do {
      if (*puVar13 != 0xffffffff) {
        FUN_006b3bb0((int *)PTR_008075a8,*puVar13);
        *puVar13 = 0xffffffff;
      }
      puVar13 = puVar13 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar5 = (ccFntTy *)0x0;
    if (this_00->field_0090 != (ushort *)0x0) {
      FreeAndNull(&this_00->field_0090);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar5 = extraout_ECX;
    }
    if (this_00->field_0094 != (ccFntTy *)0x0) {
      ccFntTy::operator(pcVar5,(uint *)this_00->field_0094);
      this_00->field_0094 = (ccFntTy *)0x0;
    }
    if ((AnonShape_006B5570_4D68B99C *)this_00->field_0098 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_00->field_0098);
      this_00->field_0098 = (uint *)0x0;
    }
    break;
  case MESS_SHARED_0005:
    local_10 = 0;
    iVar4 = -0x18 - (int)local_18;
    uVar12 = 0x1e;
    puVar13 = &local_18->field_0018;
    local_14 = 0xf;
    local_c = iVar4;
    do {
      if (*puVar13 != 0xffffffff) {
        if ((int)local_10 < (int)this_00->field_0098[2]) {
          iVar10 = *(int *)(this_00->field_0098[5] + iVar4 + (int)puVar13);
        }
        else {
          iVar10 = 0;
        }
        if (iVar10 != 0) {
          Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*puVar13,0xffffffff,0xd,uVar12);
          iVar4 = local_c;
        }
      }
      local_10 = local_10 + 1;
      puVar13 = puVar13 + 1;
      uVar12 = uVar12 + 0x13;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_14 = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = FUN_006e5fd0(this_00,message);
  return iVar4;
}

