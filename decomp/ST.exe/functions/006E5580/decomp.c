
int FUN_006e5580(int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 local_6c;
  undefined4 local_68 [16];
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  local_6c = DAT_00858df8;
  DAT_00858df8 = &local_6c;
  iVar2 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_006e54b0(param_1,param_2,param_3,param_5);
    puVar5 = local_28;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_18 = 2;
    local_14 = param_4;
    iVar2 = (**(code **)*puVar3)(local_28);
    if (iVar2 == 0xffff) {
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7ee78c,0x3c1);
    }
    DAT_00858df8 = (undefined4 *)local_6c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_6c;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x3c3,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7ee78c,0x3c4);
  return iVar2;
}

