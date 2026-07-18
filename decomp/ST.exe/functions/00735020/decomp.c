
void __cdecl FUN_00735020(undefined4 param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *local_8;
  
  DAT_008571f8 = (int *)FUN_0073c590();
  DAT_00857200 = DAT_008571f8[1] + -1;
  iVar1 = *DAT_008571f8;
  FUN_007405a0(param_2 + (iVar1 == 0x2d),param_3,(int)DAT_008571f8);
  DAT_00857204 = DAT_00857200 < DAT_008571f8[1] + -1;
  DAT_00857200 = DAT_008571f8[1] + -1;
  if ((DAT_00857200 < -4) || ((int)param_3 <= DAT_00857200)) {
    __cftoe_g(param_1,param_2,param_3,param_4);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_00857204) {
      do {
        local_8 = pcVar2;
        pcVar2 = local_8 + 1;
      } while (*local_8 != '\0');
      local_8[-1] = '\0';
    }
    __cftof_g(param_1,param_2,param_3);
  }
  return;
}

