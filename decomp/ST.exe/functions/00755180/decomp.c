
int FUN_00755180(int param_1,LPCSTR param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_ESI;
  int *piVar3;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_8 = 0;
  puVar1 = FUN_006b04d0(0x54);
  *(undefined4 **)(param_1 + 8) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -2;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_4 == 1) {
      FUN_006d4380(*(undefined4 **)(param_1 + 8),param_2,0);
    }
    else if (param_4 == 2) {
      FUN_006d4220(*(undefined4 **)(param_1 + 8),param_2,0x100000,0x100000);
    }
    else {
      FUN_006d4510(*(undefined4 **)(param_1 + 8),param_2,0x100000);
    }
    piVar3 = (int *)(param_1 + 8);
    DAT_00858df8 = (undefined4 *)local_4c;
    if ((uint)((undefined4 *)*piVar3)[0xe] < 0x20) {
      FUN_006d46a0((undefined4 *)*piVar3,0);
      FUN_006ab060(piVar3);
      return -5;
    }
    puVar1 = FUN_006b04d0(0x80);
    *(undefined4 **)(*piVar3 + 0x4c) = puVar1;
    *(undefined4 *)(*piVar3 + 0x50) = *(undefined4 *)(*piVar3 + 0x4c);
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1[0x14] == 0) {
      FUN_006d46a0(puVar1,0);
      FUN_006ab060(piVar3);
      return -2;
    }
    FUN_007550c0(puVar1[0x13],param_3);
    *(undefined4 *)(param_1 + 0x14) = 0x12;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  FUN_006ab060((undefined4 *)(param_1 + 8));
  return iVar2;
}

