
int __cdecl
FUN_0070be80(byte *param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,uint param_7
            )

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_4c [16];
  int local_c;
  int *local_8;
  
  uVar4 = DAT_00858df8;
  local_c = 0;
  local_8 = (int *)0x0;
  DAT_00858df8 = &stack0xffffffb0;
  iVar2 = __setjmp3(local_4c,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    local_8 = FUN_0070b900(param_1,param_2,param_3,param_4,param_5,param_7,8,(uint *)0x0,0);
    iVar2 = FUN_006b4fa0((int)local_8);
    FUN_006b4b20(&local_c,(uint)local_8,iVar2,param_6);
    if (local_8 != (int *)0x0) {
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return local_c;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_Mfimg_cpp_007effe0,0x3cb,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (local_8 != (int *)0x0) {
    FUN_006ab060(&local_8);
  }
  FUN_006a5e40(iVar2,0,0x7effe0,0x3cf);
  return 0;
}

