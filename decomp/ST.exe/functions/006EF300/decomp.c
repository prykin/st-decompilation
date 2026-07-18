
int __cdecl
FUN_006ef300(undefined4 param_1,char *param_2,undefined2 *param_3,undefined2 *param_4,
            undefined1 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_50 [16];
  short local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    FUN_006f2310(0xf,param_2,(undefined4 *)&local_10,1);
    DAT_00858df8 = (undefined1 *)uVar4;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = local_e;
    }
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = local_c;
    }
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = local_a;
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = local_9;
    }
    if (param_7 != (undefined1 *)0x0) {
      *param_7 = local_8;
    }
    return (int)local_10;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,0x1f,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7eef88,0x21);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

