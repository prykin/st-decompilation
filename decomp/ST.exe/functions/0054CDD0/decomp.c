
int FUN_0054cdd0(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4,undefined4 param_5
                ,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  void *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = -4;
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_0054cbb0(param_2,&local_8);
    if (iVar2 == 0) {
      local_10 = FUN_006e6200(local_14,local_8,param_1,param_3,&local_c,param_5,param_6);
    }
    iVar2 = local_10;
    if (param_4 != (int *)0x0) {
      *param_4 = local_c;
    }
    if (local_10 == 0) {
      thunk_FUN_0054cd90();
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return iVar2;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x128,0,0,
                       (byte *)s_Not_found_system_type_for_game_t_007c8488);
  if (iVar3 == 0) {
    FUN_006a5e40(iVar2,0,0x7c8430,0x129);
    return local_10;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

