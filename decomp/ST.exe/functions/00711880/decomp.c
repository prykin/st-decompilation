
int FUN_00711880(byte *param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_2 < 0) {
      if (param_2 == -3) {
        uVar3 = FUN_00710fb0(local_8,param_1);
        param_2 = *(int *)((int)local_8 + 0x68) -
                  (int)*(short *)(*(int *)((int)local_8 + 0x9a) + 0x6a + (uVar3 & 0xffff) * 10);
      }
      else {
        uVar3 = FUN_00710fb0(local_8,param_1);
        param_2 = (*(int *)((int)local_8 + 0x68) -
                  (int)*(short *)(*(int *)((int)local_8 + 0x9a) + 0x6a + (uVar3 & 0xffff) * 10)) / 2
        ;
      }
    }
    if (param_3 < 0) {
      uVar3 = FUN_00710fb0(local_8,param_1);
      param_3 = (*(int *)((int)local_8 + 0x6c) -
                (int)*(short *)(*(int *)((int)local_8 + 0x9a) + 0x6c + (uVar3 & 0xffff) * 10)) / 2;
    }
    *(int *)((int)local_8 + 0x54) = param_3;
    *(int *)((int)local_8 + 0x50) = param_2;
    FUN_007116f0(param_1,param_4);
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x67f,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7f0190,0x681);
  return iVar2;
}

