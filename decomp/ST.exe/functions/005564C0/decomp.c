
undefined4 FUN_005564c0(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  byte *local_10;
  uint local_c;
  ushort *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar5 = FUN_006ad4d0(s_E____titans_grig_traks_cpp_007c9104,0x151,0,iVar3,
                         (byte *)s_TraksClassTy__GetMessage_error_m_007c91fc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7c9104,0x152);
    return 0xffff;
  }
  *(undefined4 *)(local_14 + 0x20) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  FUN_006e5fd0();
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      thunk_FUN_005557b0(local_14);
      DAT_00802a7c = 0;
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    if (uVar1 == 0) {
      thunk_FUN_00555e80();
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    if (uVar1 == 2) {
      local_8 = (ushort *)0x0;
      if (DAT_00806754 != (cMf32 *)0x0) {
        local_8 = FUN_006f2d90(DAT_00806754,PTR_s_TRACKS_0079aebc,0,0);
      }
      if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 10) == 0)) {
        puVar4 = FUN_006ae290((uint *)0x0,0x32,0x3c,0x32);
        *(uint **)(local_14 + 0x24) = puVar4;
        *(int *)(local_14 + 0x1c) = DAT_00808754 * 0x7d;
      }
      else {
        thunk_FUN_00556170((int)local_8);
      }
      thunk_FUN_00555720();
      if ((DAT_00806754 != (cMf32 *)0x0) && (local_8 != (ushort *)0x0)) {
        cMf32::RecMemFree(DAT_00806754,(uint *)&local_8);
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
    }
  }
  else if (uVar1 == 0x10f) {
    local_c = 0;
    local_10 = (byte *)thunk_FUN_00555fe0(&local_c);
    STPlaySystemC::SaveObjData(DAT_00802a38,PTR_s_TRACKS_0079aebc,local_10,local_c,0xc);
    if (local_10 != (byte *)0x0) {
      FUN_006ab060(&local_10);
    }
  }
  DAT_00858df8 = (undefined4 *)local_58;
  return 0;
}

