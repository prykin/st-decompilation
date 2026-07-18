
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0072f5d0(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_ac [2];
  undefined4 local_a4;
  uint local_a0 [33];
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined4 *local_10;
  uint *local_c;
  undefined4 local_8;
  
  puVar1 = FUN_0072f870(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0x132;
    pcVar5 = "setlocal.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)local_a0);
    local_c = (uint *)thunk_FUN_006a3c10(sVar3 + 1,uVar4,pcVar5,iVar6);
    if (local_c == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = (undefined4 *)(&DAT_007f1234)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_00857208 + param_1 * 4);
      FUN_0073a330(local_18,(undefined4 *)(&DAT_00857250 + param_1 * 6),6);
      local_1c = DAT_00857220;
      puVar1 = FUN_0073a240(local_c,local_a0);
      (&DAT_007f1234)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_00857208 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_0073a330((undefined4 *)(&DAT_00857250 + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_00857220 = local_a4;
      }
      if (param_1 == 1) {
        _DAT_00857224 = local_a4;
      }
      iVar6 = (**(code **)(&DAT_007f1238 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (local_10 != (undefined4 *)&DAT_007f1120) {
          thunk_FUN_006a49c0(local_10,2);
        }
        uVar2 = (&DAT_007f1234)[param_1 * 3];
      }
      else {
        (&DAT_007f1234)[param_1 * 3] = local_10;
        thunk_FUN_006a49c0(local_c,2);
        *(undefined4 *)(&DAT_00857208 + param_1 * 4) = local_8;
        DAT_00857220 = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

