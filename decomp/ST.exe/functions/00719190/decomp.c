
int __cdecl
FUN_00719190(undefined4 *param_1,undefined4 *param_2,uint param_3,UINT param_4,int param_5,
            int *param_6,int param_7,uint param_8,uint *param_9)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_44c [256];
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_8 = 0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E__Ourlib_Palette_cpp_007f0718,0x17c,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    FUN_006a5e40(iVar2,0,0x7f0718,0x17d);
    return iVar2;
  }
  FUN_0072da70(local_44c,param_2,0x400);
  if (*param_6 < param_5) {
    if (*param_9 + param_7 <= param_8) {
      *param_9 = param_8;
      puVar6 = local_44c;
      uVar5 = 100;
      lVar4 = __ftol();
      FUN_00718d50((int)param_2,param_3,param_4,100,100 - (char)lVar4,uVar5,puVar6);
      FUN_006b0a20(param_1,(int)local_44c,param_3,param_4,1);
      *param_6 = *param_6 + 1;
      DAT_00858df8 = (undefined4 *)local_4c;
      return local_8;
    }
  }
  else {
    local_8 = -4;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return local_8;
}

