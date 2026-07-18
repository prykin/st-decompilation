
void __cdecl
FUN_006a3930(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  ushort local_c [2];
  uint local_8;
  
  uVar1 = thunk_FUN_006a3a00(param_1,param_2,param_3,param_4,param_5);
  uVar1 = thunk_FUN_006a3ae0(uVar1);
  iVar2 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(undefined4 *)local_c);
  iVar2 = thunk_FUN_006a24e0(local_c,(int)(short)iVar2,param_5,param_4,0xff);
  if ((iVar2 == 0) || (uVar1 != (local_8 & 0xf))) {
    thunk_FUN_006a3420(param_5,uVar1);
    thunk_FUN_006a1620(param_1,param_2,param_3,param_4,0xff,param_5,param_6,param_7);
  }
  return;
}

