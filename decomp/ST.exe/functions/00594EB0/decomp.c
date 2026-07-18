
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutTRGlProc */

void __thiscall
FSGSTy::OutTRGlProc(FSGSTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
                   int param_5,int param_6,int param_7,int param_8)

{
  StartServTy *this_00;
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  StartServTy *this_01;
  StartServTy *this_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  if (param_8 != 0) {
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      MMMObjTy::OutRGlProc
                (param_3,param_1,param_2,param_3,param_4,param_5,param_6,param_7 + -0x5f,
                 (undefined4 *)(DAT_0081176c + 0x140));
      local_8 = param_4 + -0x15 + param_6;
      FUN_006c6660(param_1,local_8,param_5 + 0x26,7,param_7 - 0xab,3,0);
      FUN_006c6470(param_1,local_8,param_5 + 0x26,(undefined4 *)0x7,param_7 + -0xab,3,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0xffffffff;
      puVar3 = (uint *)FUN_006b0140(0x2616,DAT_00807618);
      StartServTy::WrTextDDX
                (this_01,0,param_4 + 10,param_5 + 0xf8,0xe6,0x19,puVar3,uVar5,uVar6,pvVar7,uVar8);
      FUN_006c6470(param_1,param_4 + 10,param_5 + 0xf8,(undefined4 *)0xe6,0x19,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,param_4 + 0xc,param_5 + 0xfa,(undefined4 *)0xe2,0x15,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      MMMObjTy::OutRGlProc
                (param_2,param_1,param_2,param_3,param_4,param_5 + -0x5c + param_7,param_6,0x5c,
                 (undefined4 *)(DAT_0081176c + 0x140));
      local_8 = param_6 + -0x14;
      uVar8 = 2;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x2569,DAT_00807618);
      this_00 = (StartServTy *)(param_5 + -0x57 + param_7);
      StartServTy::WrTextDDX
                (this_00,0,param_4 + 10,(int)this_00,local_8,0xf,puVar3,uVar5,uVar6,pvVar7,uVar8);
      FUN_006c6850(param_1,param_4 + 10,param_5 + -0x46 + param_7,local_8,0x16,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x2550,DAT_00807618);
      StartServTy::WrTextDDX
                ((StartServTy *)param_4,0,param_4 + 10,param_5 + -0x2f + param_7,local_8,0xf,puVar3,
                 uVar5,uVar6,pvVar7,uVar8);
      FUN_006c6850(param_1,param_4 + 10,param_5 + -0x1e + param_7,100,0x16,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0xffffffff;
      puVar3 = (uint *)FUN_006b0140(0x2566,DAT_00807618);
      StartServTy::WrTextDDX
                (this_02,0,param_4 + 0x78,param_5 + 0x155,0xa0,0x19,puVar3,uVar5,uVar6,pvVar7,uVar8)
      ;
      FUN_006c6470(param_1,param_4 + 0x78,param_5 + 0x155,(undefined4 *)0xa0,0x19,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,param_4 + 0x7a,param_5 + 0x157,(undefined4 *)0x9c,0x15,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x8c,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cbf70,0x8c);
  }
  return;
}

