
int __cdecl thunk_FUN_0067ef60(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_48;
  undefined4 auStack_44 [16];
  
  uStack_48 = DAT_00858df8;
  DAT_00858df8 = &uStack_48;
  iVar1 = __setjmp3(auStack_44,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_0067eea0(param_1);
    if (iVar1 == 0) {
      FUN_006b5aa0(DAT_00848a1c,(char *)param_1);
      iVar2 = FUN_006b5aa0(DAT_00848a18,&DAT_008016a0);
      iVar1 = thunk_FUN_0067ee40(iVar2);
    }
    else {
      iVar2 = thunk_FUN_0067ed20(param_1);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
    DAT_00858df8 = (undefined4 *)uStack_48;
    return iVar1;
  }
  DAT_00858df8 = (undefined4 *)uStack_48;
  return 0;
}

