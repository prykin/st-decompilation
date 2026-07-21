
void __cdecl
FUN_006a3930(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  bool bVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  undefined3 extraout_var;
  ushort local_c [2];
  uint local_8;
  
  uVar2 = thunk_FUN_006a3a00(param_1,param_2,param_3,param_4,param_5);
  puVar3 = (ushort *)thunk_FUN_006a3ae0(uVar2);
  iVar4 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(undefined4 *)local_c);
  bVar1 = thunk_FUN_006a24e0(local_c,(int)(short)iVar4,param_5,param_4,0xff);
  if ((CONCAT31(extraout_var,bVar1) == 0) || (puVar3 != (ushort *)(local_8 & 0xf))) {
    thunk_FUN_006a3420(param_5,puVar3);
    thunk_FUN_006a1620(param_1,param_2,param_3,param_4,0xff,param_5,param_6,param_7);
  }
  return;
}

