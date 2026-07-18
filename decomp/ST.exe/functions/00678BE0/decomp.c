
undefined4 * FUN_00678be0(uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_54 [16];
  int local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  uVar5 = DAT_00858df8;
  local_c = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  DAT_00858df8 = &stack0xffffffa8;
  iVar2 = __setjmp3(local_54,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    local_8 = thunk_FUN_0064d000(&local_10);
    if (local_14 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)(local_14 + 0x5d3);
    }
    local_c = thunk_FUN_0067d3b0(puVar4,local_8,local_10,param_1);
    local_c[3] = 1;
    if (local_8 != (undefined4 *)0x0) {
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return local_c;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  if (local_8 != (undefined4 *)0x0) {
    FUN_006ab060(&local_8);
  }
  if (local_c != (undefined4 *)0x0) {
    FUN_006ab060(&local_c);
  }
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x61,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  FUN_006a5e40(iVar2,0,0x7d2e4c,0x62);
  return (undefined4 *)0x0;
}

