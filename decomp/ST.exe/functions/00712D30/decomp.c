
char * FUN_00712d30(char *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,
                   char *param_6,int param_7)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [17];
  uint *local_10;
  uint *local_c;
  char *local_8;
  
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_8 = (char *)0x0;
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = FUN_00712f80(param_2);
    if (puVar3 != (uint *)0x0) {
      local_c = puVar3;
      puVar4 = FUN_007126e0((int)puVar3,param_3,param_4,param_5,0,0xffffffff,param_6,param_7);
      local_10 = puVar4;
      FUN_006b5570((byte *)puVar3);
      local_c = (uint *)0x0;
      local_8 = FUN_00713080(param_1,(int)puVar4);
      if (puVar4 != (uint *)0x0) {
        FUN_006b5570((byte *)puVar4);
      }
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar5 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x88f,0,iVar2,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    pcVar6 = (char *)(*pcVar1)();
    return pcVar6;
  }
  if ((local_8 != (char *)0x0) && (local_8 != param_1)) {
    FUN_006ab060(&local_8);
  }
  if (local_c != (uint *)0x0) {
    FUN_006b5570((byte *)local_c);
  }
  if (local_10 != (uint *)0x0) {
    FUN_006b5570((byte *)local_10);
  }
  FUN_006a5e40(iVar2,0,0x7f0190,0x895);
  return (char *)0x0;
}

