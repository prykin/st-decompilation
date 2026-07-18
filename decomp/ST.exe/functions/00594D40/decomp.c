
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutTRGlProc */

void __thiscall
FSGSTy::OutTRGlProc(FSGSTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
                   int param_5,int param_6,int param_7,UINT param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  StartServTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  if (param_8 != 0) {
    local_48 = DAT_00858df8;
    DAT_00858df8 = &local_48;
    iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      MMMObjTy::OutRGlProc
                (param_2,param_1,param_2,param_3,param_4,param_5 + 0x16,param_6,param_7 + -0x16,
                 (undefined4 *)(DAT_0081176c + 0x140));
      MMMObjTy::OutRGlProc
                (param_3,param_1,param_2,param_3,param_4,param_5,param_6,0x15,
                 (undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 0;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0xfffffffe;
      puVar3 = (uint *)FUN_006b0140(param_8,DAT_00807618);
      StartServTy::WrTextDDX(this_00,0,param_4,param_5,param_6,0x15,puVar3,uVar5,uVar6,pvVar7,uVar8)
      ;
      DAT_00858df8 = (undefined4 *)local_48;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_48;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x73,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cbf70,0x73);
  }
  return;
}

