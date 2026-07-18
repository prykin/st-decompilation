
undefined4 * FUN_007108b0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = FUN_006aac10(0x48);
    }
    else {
      puVar4 = param_1;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    *param_1 = *(undefined4 *)(local_8 + 0x44);
    param_1[1] = *(undefined4 *)(local_8 + 0x48);
    param_1[2] = *(undefined4 *)(local_8 + 0x4c);
    param_1[3] = *(undefined4 *)(local_8 + 0x50);
    param_1[4] = *(undefined4 *)(local_8 + 0x54);
    param_1[5] = *(undefined4 *)(local_8 + 0x58);
    param_1[6] = *(undefined4 *)(local_8 + 0x5c);
    param_1[7] = *(undefined4 *)(local_8 + 0x60);
    param_1[8] = *(undefined4 *)(local_8 + 100);
    param_1[9] = *(undefined4 *)(local_8 + 0x68);
    param_1[10] = *(undefined4 *)(local_8 + 0x6c);
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(local_8 + 0x70);
    *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)(local_8 + 0x72);
    *(undefined4 *)((int)param_1 + 0x32) = *(undefined4 *)(local_8 + 0x76);
    *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)(local_8 + 0x7a);
    *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)(local_8 + 0x7e);
    *(undefined2 *)((int)param_1 + 0x3e) = *(undefined2 *)(local_8 + 0x9e);
    param_1[0x10] = *(undefined4 *)(local_8 + 0x82);
    param_1[0x11] = *(undefined4 *)(local_8 + 0x96);
    DAT_00858df8 = (undefined4 *)local_4c;
    return param_1;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x436,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  FUN_006a5e40(iVar2,0,0x7f0190,0x438);
  return (undefined4 *)0x0;
}

