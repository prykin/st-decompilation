
int __cdecl FUN_006f0d70(undefined4 param_1,char *param_2,undefined2 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_50 [16];
  undefined1 local_10 [12];
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    FUN_006f2310(0x1b,param_2,(undefined4 *)local_10,1);
    DAT_00858df8 = (undefined1 *)uVar4;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = local_10._1_2_;
    }
    return (int)(short)local_10._3_2_;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,0x2d4,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7eef88,0x2d6);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

