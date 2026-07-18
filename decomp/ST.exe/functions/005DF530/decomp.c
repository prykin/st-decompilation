
void FUN_005df530(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  int *local_8;
  
  uVar4 = DAT_00858df8;
  if (((param_8 != (int *)0x0) && (local_8 = param_8, *param_8 != 0)) && (param_8[1] != 0)) {
    DAT_00858df8 = &stack0xffffffb4;
    iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
    if (iVar2 == 0) {
      iVar2 = *local_8;
      FUN_006b48e0(param_1,param_4,param_5,iVar2,0,0,0,*(uint *)(iVar2 + 4),*(int *)(iVar2 + 8),
                   local_8[1],0,0x10000ff);
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0x27,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cd994,0x27);
  }
  return;
}

