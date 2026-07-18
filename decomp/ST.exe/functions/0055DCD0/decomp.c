
void __cdecl
FUN_0055dcd0(undefined4 *param_1,int *param_2,undefined4 param_3,char *param_4,int param_5,
            int param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 in_stack_fffffbb4;
  undefined4 local_4c;
  undefined4 local_48 [16];
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,in_stack_fffffbb4);
  if (iVar2 == 0) {
    FUN_006bd740(param_2);
    local_8 = FUN_006f1ce0(1,param_4,(int *)0x0,1);
    FUN_006bc360((int)local_8,(undefined4 *)&stack0xfffffbb4,(int *)0x0);
    FUN_00719080(param_1,(undefined4 *)&stack0xfffffbb4,0,0x100,param_5,param_6);
    FUN_006f20e0((uint *)&local_8);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_paltool_cpp_007c95d8,0x4b,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c95d8,0x4d);
  return;
}

