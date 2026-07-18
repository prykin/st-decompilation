
int FUN_004ca3c0(void)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte local_15c [256];
  undefined4 *local_5c;
  undefined4 local_58 [16];
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (*(int *)(local_18 + 0x5f3) != 0) {
      iVar3 = *(int *)(local_18 + 0x1f5);
      pvVar1 = (void *)(local_18 + 0x1d5);
      local_10 = *(int *)(iVar3 + 0x1e4);
      local_14 = *(int *)(iVar3 + 0x1e8);
      local_c = *(undefined4 *)(iVar3 + 0x1ec);
      iVar3 = thunk_FUN_004acd30(pvVar1,'\r');
      if (iVar3 != 0) {
        iVar3 = thunk_FUN_004acd30(pvVar1,'\r');
        local_8 = FUN_006aac10(iVar3 << 2);
        iVar5 = 0;
        iVar3 = thunk_FUN_004acd30(pvVar1,'\r');
        if (0 < iVar3) {
          do {
            uVar4 = thunk_FUN_004acdd0(pvVar1,'\r',iVar5);
            local_8[iVar5] = uVar4;
            iVar5 = iVar5 + 1;
            iVar3 = thunk_FUN_004acd30(pvVar1,'\r');
          } while (iVar5 < iVar3);
        }
      }
      wsprintfA((LPSTR)local_15c,s__s_1i_007ac908,*(undefined4 *)(local_18 + 0x5f3),
                *(undefined4 *)(local_18 + 0x5c0));
      iVar3 = thunk_FUN_004ab880(0xd,DAT_0080678c,local_15c,0x1d);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0xd3);
      }
      thunk_FUN_004abce0(pvVar1,0xd,local_10,local_14,'\0');
      thunk_FUN_004abe40(pvVar1,'\r',local_c);
      iVar5 = 0;
      iVar3 = thunk_FUN_004acd30(pvVar1,'\r');
      if (0 < iVar3) {
        do {
          thunk_FUN_004ace00(pvVar1,'\r',iVar5,local_8[iVar5]);
          iVar5 = iVar5 + 1;
          iVar3 = thunk_FUN_004acd30(pvVar1,'\r');
        } while (iVar5 < iVar3);
      }
      FUN_006ab060(&local_8);
    }
    if (((*(int *)(&DAT_00791a10 + *(int *)(local_18 + 0x235) * 4) != 0) &&
        (*(int *)(local_18 + 0x5ac) != 0x40)) && (*(int *)(local_18 + 0x5ac) != 0x49)) {
      iVar3 = *(int *)(local_18 + 0x1f5);
      pvVar1 = (void *)(local_18 + 0x1d5);
      local_10 = *(int *)(iVar3 + 0x130);
      local_14 = *(int *)(iVar3 + 0x134);
      local_c = *(undefined4 *)(iVar3 + 0x138);
      iVar3 = thunk_FUN_004acd30(pvVar1,'\b');
      if (iVar3 != 0) {
        iVar3 = thunk_FUN_004acd30(pvVar1,'\b');
        local_8 = FUN_006aac10(iVar3 << 2);
        iVar5 = 0;
        iVar3 = thunk_FUN_004acd30(pvVar1,'\b');
        if (0 < iVar3) {
          do {
            uVar4 = thunk_FUN_004acdd0(pvVar1,'\b',iVar5);
            local_8[iVar5] = uVar4;
            iVar5 = iVar5 + 1;
            iVar3 = thunk_FUN_004acd30(pvVar1,'\b');
          } while (iVar5 < iVar3);
        }
      }
      wsprintfA((LPSTR)local_15c,s__s_cover_1i_007ac8ec,*(undefined4 *)(local_18 + 0x5f3),
                *(undefined4 *)(local_18 + 0x5c0));
      iVar3 = thunk_FUN_004ab880(8,DAT_0080678c,local_15c,0x1d);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0xea);
      }
      thunk_FUN_004abce0(pvVar1,8,local_10,local_14,'\0');
      thunk_FUN_004abe40(pvVar1,'\b',local_c);
      iVar5 = 0;
      iVar3 = thunk_FUN_004acd30(pvVar1,'\b');
      if (0 < iVar3) {
        do {
          thunk_FUN_004ace00(pvVar1,'\b',iVar5,local_8[iVar5]);
          iVar5 = iVar5 + 1;
          iVar3 = thunk_FUN_004acd30(pvVar1,'\b');
        } while (iVar5 < iVar3);
      }
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = local_5c;
    return 0;
  }
  DAT_00858df8 = local_5c;
  iVar5 = FUN_006ad4d0(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xf6,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  FUN_006a5e40(iVar3,0,0x7ad4d0,0xf7);
  return iVar3;
}

