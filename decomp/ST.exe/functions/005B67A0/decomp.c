
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMMObjTy::OutRGlProc */

void __thiscall
MMMObjTy::OutRGlProc
          (MMMObjTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
          int param_6,int param_7,undefined4 *param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  if (param_8 != (undefined4 *)0x0) {
    local_8 = param_8;
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    puVar2 = local_8;
    if (iVar3 == 0) {
      FUN_006c68f0(param_1,param_4,param_5,param_6,param_7,(int)(local_8 + 1));
      FUN_006c6850(param_1,param_4,param_5,param_6,param_7,*puVar2);
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_mmenuobj_cpp_007cca38,0x13b,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cca38,0x13b);
  }
  return;
}

