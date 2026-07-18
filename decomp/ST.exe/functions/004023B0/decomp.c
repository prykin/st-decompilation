
void thunk_FUN_00594b90(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                       int param_6,int param_7,undefined4 *param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  undefined4 *puStack_8;
  
  if (param_8 != (undefined4 *)0x0) {
    puStack_8 = param_8;
    uStack_50 = DAT_00858df8;
    DAT_00858df8 = &uStack_50;
    iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
    puVar2 = puStack_8;
    if (iVar3 == 0) {
      FUN_006c68f0(param_1,param_4,param_5,param_6,param_7,(int)(puStack_8 + 1));
      FUN_006c6850(param_1,param_4,param_5,param_6,param_7,*puVar2);
      FUN_006c6660(param_1,param_4 + -0x15 + param_6,param_5 + 0x26,7,param_7 - 0x62,3,0);
      FUN_006c6470(param_1,param_4 + -0x15 + param_6,param_5 + 0x26,(undefined4 *)0x7,
                   param_7 + -0x62,3,*puVar2);
      iStack_c = param_5 + -0x16 + param_7;
      FUN_006c53b0(param_1,param_4,iStack_c,param_4 + -1 + param_6,iStack_c,*puVar2);
      FUN_006c53b0(param_1,param_4 + 0x168,iStack_c,param_4 + 0x168,param_5 + -1 + param_7,*puVar2);
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x66,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cbf70,0x66);
  }
  return;
}

