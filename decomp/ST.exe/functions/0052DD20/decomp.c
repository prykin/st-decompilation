
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::GetMessage */

undefined4 __thiscall PopUpTy::GetMessage(PopUpTy *this,int param_1)

{
  code *pcVar1;
  PopUpTy *this_00;
  int iVar2;
  ccFntTy *pcVar3;
  undefined4 *puVar4;
  uint *puVar5;
  DWORD DVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  ccFntTy *extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x100,0,iVar2,&DAT_007a4ccc,
                               s_PopUpTy__GetMessage_007c7040);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x100);
    return 0xffff;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    uVar12 = (uint)DAT_00807347;
    DVar6 = FUN_006e51b0(0x807620);
    if (((uVar12 * -1000 + 3000) * (3 - uVar12) < DVar6 - this_00->field_009D) ||
       ((int)(uint)DAT_00807346 < *(int *)(this_00->field_0098 + 8))) {
      DVar6 = FUN_006e51b0(0x807620);
      this_00->field_009D = DVar6;
      if (this_00->field_009C != '\0') {
        FUN_006b7830(this_00->field_0098,0);
        puVar4 = (undefined4 *)this_00->field_0090;
        Library::DKW::WGR::FUN_006b55f0
                  (puVar4,0,0,0,(byte *)puVar4,0,0,0x13,puVar4[1],
                   (uint)(byte)this_00->field_009C * 0x13 + -0x13);
        FUN_006b4170(this_00->field_0090,0,0,(uint)(byte)this_00->field_009C * 0x13 + -0x13,
                     *(int *)(this_00->field_0090 + 4),0x13,0x89);
        iVar2 = this_00->field_0098;
        if (*(int *)(iVar2 + 8) <= (int)(uint)DAT_00807346) {
          this_00->field_009C = *(undefined1 *)(iVar2 + 8);
        }
        if ((int)(uint)DAT_00807346 <= *(int *)(iVar2 + 8)) {
          OutStr(this_00,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),DAT_00807346 - 1));
        }
        local_5 = 0;
        local_c = -0x18 - (int)this_00;
        local_14 = 0;
        local_10 = 0x1e;
        puVar5 = &this_00->field_0018;
        do {
          iVar2 = local_14;
          if ((DAT_00807342 == 0) || ((byte)this_00->field_009C <= local_5)) {
LAB_0052e184:
            puVar5[0xf] = 0;
            FUN_006b2800((int)DAT_008075a8,*puVar5,0,0x13);
            FUN_006b3af0(DAT_008075a8,*puVar5);
          }
          else {
            iVar9 = this_00->field_0098;
            if (local_14 < *(int *)(iVar9 + 8)) {
              iVar11 = *(int *)(*(int *)(iVar9 + 0x14) + local_c + (int)puVar5);
            }
            else {
              iVar11 = 0;
            }
            if (iVar11 == 0) goto LAB_0052e184;
            if (local_14 < *(int *)(iVar9 + 8)) {
              puVar7 = *(uint **)(*(int *)(iVar9 + 0x14) + local_c + (int)puVar5);
            }
            else {
              puVar7 = (uint *)0x0;
            }
            uVar10 = FUN_00711110(this_00->field_0094,puVar7);
            uVar12 = *(uint *)(this_00->field_0090 + 4);
            if ((int)uVar12 <= (int)uVar10) {
              uVar10 = uVar12;
            }
            puVar5[0xf] = uVar10;
            FUN_006b2800((int)DAT_008075a8,*puVar5,uVar10,0x13);
            Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0xd,local_10);
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar5);
          }
          local_5 = local_5 + 1;
          local_14 = iVar2 + 1;
          puVar5 = puVar5 + 1;
          local_10 = local_10 + 0x13;
        } while (local_5 < 0xf);
      }
    }
    break;
  case 2:
    pcVar3 = (ccFntTy *)thunk_FUN_0052cce0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_0094 = pcVar3;
    pcVar3->field_007E = 1;
    *(undefined2 *)&pcVar3->field_0x9e = 0;
    pcVar3->field_0x9e = DAT_007c6ff0;
    iVar2 = 1;
    puVar4 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar12 = FUN_006b4fe0(DAT_0080679c);
    iVar2 = FUN_006b50c0((&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0x11d,
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar4,iVar2);
    this_00->field_0090 = iVar2;
    uVar12 = *(uint *)(iVar2 + 0x14);
    if (uVar12 == 0) {
      uVar12 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar4 = 0x89898989;
      puVar4 = puVar4 + 1;
    }
    uVar10 = 0x1e;
    local_10 = 0xf;
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar4 = 0x89;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar5 = &this_00->field_0018;
    do {
      FUN_006b2330((uint)DAT_008075a8,puVar5,8,0x405c22,puVar5[0xf],0x13,(uint)this_00);
      FUN_006b1bd0((int)DAT_008075a8,*puVar5);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0xd,uVar10);
      FUN_006b3af0(DAT_008075a8,*puVar5);
      puVar5 = puVar5 + 1;
      uVar10 = uVar10 + 0x13;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    this_00->field_0098 = puVar5;
    DVar6 = FUN_006e51b0(0x807620);
    this_00->field_009D = DVar6;
    g_popUp_008016D8 = this_00;
    break;
  case 3:
    g_popUp_008016D8 = (PopUpTy *)0x0;
    puVar5 = &local_18->field_0018;
    iVar2 = 0xf;
    do {
      if (*puVar5 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar5);
        *puVar5 = 0xffffffff;
      }
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pcVar3 = (ccFntTy *)0x0;
    if (this_00->field_0090 != 0) {
      FUN_006ab060((LPVOID *)&this_00->field_0090);
      pcVar3 = extraout_ECX;
    }
    if (this_00->field_0094 != (ccFntTy *)0x0) {
      ccFntTy::operator(pcVar3,(uint *)this_00->field_0094);
      this_00->field_0094 = (ccFntTy *)0x0;
    }
    if ((byte *)this_00->field_0098 != (byte *)0x0) {
      FUN_006b5570((byte *)this_00->field_0098);
      this_00->field_0098 = 0;
    }
    break;
  case 5:
    local_10 = 0;
    iVar2 = -0x18 - (int)local_18;
    uVar12 = 0x1e;
    puVar5 = &local_18->field_0018;
    local_14 = 0xf;
    local_c = iVar2;
    do {
      if (*puVar5 != 0xffffffff) {
        if ((int)local_10 < *(int *)(this_00->field_0098 + 8)) {
          iVar9 = *(int *)(*(int *)(this_00->field_0098 + 0x14) + iVar2 + (int)puVar5);
        }
        else {
          iVar9 = 0;
        }
        if (iVar9 != 0) {
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0xd,uVar12);
          iVar2 = local_c;
        }
      }
      local_10 = local_10 + 1;
      puVar5 = puVar5 + 1;
      uVar12 = uVar12 + 0x13;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_14 = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  uVar8 = FUN_006e5fd0();
  return uVar8;
}

