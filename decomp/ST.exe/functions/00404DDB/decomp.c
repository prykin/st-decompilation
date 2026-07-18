
int thunk_FUN_0054cdd0(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4,
                      undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  void *pvStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_10 = -4;
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar2 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_0054cbb0(param_2,&iStack_8);
    if (iVar2 == 0) {
      iStack_10 = FUN_006e6200(pvStack_14,iStack_8,param_1,param_3,&iStack_c,param_5,param_6);
    }
    iVar2 = iStack_10;
    if (param_4 != (int *)0x0) {
      *param_4 = iStack_c;
    }
    if (iStack_10 == 0) {
      thunk_FUN_0054cd90();
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return iVar2;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x128,0,0,
                       (byte *)s_Not_found_system_type_for_game_t_007c8488);
  if (iVar3 == 0) {
    FUN_006a5e40(iVar2,0,0x7c8430,0x129);
    return iStack_10;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

