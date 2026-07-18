
undefined4 * FUN_00555fe0(uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  uVar6 = local_10;
  if (iVar2 == 0) {
    *param_1 = local_10 + 0x5d;
    local_8 = FUN_006aac10(local_10 + 0x5d);
    *local_8 = 0x46;
    local_8[1] = 0xff;
    local_8[2] = 2;
    local_8[5] = 1;
    local_8[6] = *(undefined4 *)(local_14 + 0x1c);
    *(bool *)(local_8 + 7) = local_c != (undefined4 *)0x0;
    if (local_c != (undefined4 *)0x0) {
      puVar4 = local_c;
      puVar7 = local_8 + 0x17;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_006ab060(&local_c);
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  if (local_8 != (undefined4 *)0x0) {
    FUN_006ab060(&local_8);
  }
  if (local_c != (undefined4 *)0x0) {
    FUN_006ab060(&local_c);
  }
  iVar3 = FUN_006ad4d0(s_E____titans_grig_traks_cpp_007c9104,0xed,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  FUN_006a5e40(iVar2,0,0x7c9104,0xee);
  return (undefined4 *)0x0;
}

