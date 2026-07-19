
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::ReloadLogoPlane */

int __thiscall TLOBaseTy::ReloadLogoPlane(TLOBaseTy *this)

{
  undefined4 *puVar1;
  code *pcVar2;
  TLOBaseTy *pTVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte local_15c [256];
  InternalExceptionFrame local_5c;
  TLOBaseTy *local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar3 = local_18;
  if (iVar4 == 0) {
    if (local_18->field_05F3 != 0) {
      iVar4 = *(int *)&local_18->field_0x1f5;
      puVar1 = &local_18->field_01D5;
      local_10 = *(int *)(iVar4 + 0x1e4);
      local_14 = *(int *)(iVar4 + 0x1e8);
      local_c = *(undefined4 *)(iVar4 + 0x1ec);
      iVar4 = thunk_FUN_004acd30(puVar1,'\r');
      if (iVar4 != 0) {
        iVar4 = thunk_FUN_004acd30(puVar1,'\r');
        local_8 = Library::DKW::LIB::FUN_006aac10(iVar4 << 2);
        iVar6 = 0;
        iVar4 = thunk_FUN_004acd30(puVar1,'\r');
        if (0 < iVar4) {
          do {
            uVar5 = thunk_FUN_004acdd0(puVar1,'\r',iVar6);
            local_8[iVar6] = uVar5;
            iVar6 = iVar6 + 1;
            iVar4 = thunk_FUN_004acd30(puVar1,'\r');
          } while (iVar6 < iVar4);
        }
      }
      wsprintfA((LPSTR)local_15c,s__s_1i_007ac908,pTVar3->field_05F3,
                *(undefined4 *)&pTVar3->field_0x5c0);
      iVar4 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,0xd,DAT_0080678c,local_15c,0x1d);
      if (iVar4 != 0) {
        RaiseInternalException(iVar4,DAT_007ed77c,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xd3);
      }
      thunk_FUN_004abce0(puVar1,0xd,local_10,local_14,'\0');
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\r',local_c);
      iVar6 = 0;
      iVar4 = thunk_FUN_004acd30(puVar1,'\r');
      if (0 < iVar4) {
        do {
          thunk_FUN_004ace00(puVar1,'\r',iVar6,local_8[iVar6]);
          iVar6 = iVar6 + 1;
          iVar4 = thunk_FUN_004acd30(puVar1,'\r');
        } while (iVar6 < iVar4);
      }
      FUN_006ab060(&local_8);
    }
    if (((*(int *)(&DAT_00791a10 + *(int *)&pTVar3->field_0x235 * 4) != 0) &&
        (*(int *)&pTVar3->field_0x5ac != 0x40)) && (*(int *)&pTVar3->field_0x5ac != 0x49)) {
      iVar4 = *(int *)&pTVar3->field_0x1f5;
      puVar1 = &pTVar3->field_01D5;
      local_10 = *(int *)(iVar4 + 0x130);
      local_14 = *(int *)(iVar4 + 0x134);
      local_c = *(undefined4 *)(iVar4 + 0x138);
      iVar4 = thunk_FUN_004acd30(puVar1,'\b');
      if (iVar4 != 0) {
        iVar4 = thunk_FUN_004acd30(puVar1,'\b');
        local_8 = Library::DKW::LIB::FUN_006aac10(iVar4 << 2);
        iVar6 = 0;
        iVar4 = thunk_FUN_004acd30(puVar1,'\b');
        if (0 < iVar4) {
          do {
            uVar5 = thunk_FUN_004acdd0(puVar1,'\b',iVar6);
            local_8[iVar6] = uVar5;
            iVar6 = iVar6 + 1;
            iVar4 = thunk_FUN_004acd30(puVar1,'\b');
          } while (iVar6 < iVar4);
        }
      }
      wsprintfA((LPSTR)local_15c,s__s_cover_1i_007ac8ec,pTVar3->field_05F3,
                *(undefined4 *)&pTVar3->field_0x5c0);
      iVar4 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,8,DAT_0080678c,local_15c,0x1d);
      if (iVar4 != 0) {
        RaiseInternalException(iVar4,DAT_007ed77c,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xea);
      }
      thunk_FUN_004abce0(puVar1,8,local_10,local_14,'\0');
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\b',local_c);
      iVar6 = 0;
      iVar4 = thunk_FUN_004acd30(puVar1,'\b');
      if (0 < iVar4) {
        do {
          thunk_FUN_004ace00(puVar1,'\b',iVar6,local_8[iVar6]);
          iVar6 = iVar6 + 1;
          iVar4 = thunk_FUN_004acd30(puVar1,'\b');
        } while (iVar6 < iVar4);
      }
      FUN_006ab060(&local_8);
    }
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xf6,0,iVar4,&DAT_007a4ccc,
                             s_TLOBaseTy__ReloadLogoPlane_error_007ad4f8);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xf7);
  return iVar4;
}

