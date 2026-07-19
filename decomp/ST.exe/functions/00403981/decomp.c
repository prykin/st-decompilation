
void __thiscall
FSGSTy::OutSGlProc(FSGSTy *this,int param_1,MMMObjTy *param_2,undefined4 param_3,int param_4,
                  int param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  StartServTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  InternalExceptionFrame IStack_50;
  int iStack_c;
  undefined4 *puStack_8;
  
  if (param_8 != 0) {
    IStack_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_50;
    iVar2 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      MMMObjTy::OutRGlProc
                (param_2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                 (undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      iVar2 = param_4 + 10;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256f,DAT_00807618);
      StartServTy::WrTextDDX
                (this_00,0,iVar2,param_5 + 10,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8);
      FUN_006c6850(param_1,iVar2,param_5 + 0x1e,param_6 + -0x14,0x8e,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256b,DAT_00807618);
      StartServTy::WrTextDDX
                (this_01,0,iVar2,param_5 + 0xb4,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8
                );
      FUN_006c6850(param_1,iVar2,param_5 + 200,param_6 + -0x14,0x19,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256c,DAT_00807618);
      StartServTy::WrTextDDX
                (this_02,0,iVar2,param_5 + 0xe1,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8
                );
      FUN_006c6850(param_1,iVar2,param_5 + 0xf5,param_6 + -0x14,0x19,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      iStack_c = param_6 + -0x1e;
      puStack_8 = (undefined4 *)(iStack_c / 2);
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256d,DAT_00807618);
      StartServTy::WrTextDDX
                ((StartServTy *)(param_5 + 0x11a),0,iVar2,param_5 + 0x11a,(int)(puStack_8 + -10),
                 0x14,puVar3,uVar5,uVar6,pvVar7,uVar8);
      FUN_006c6470(param_1,(int)puStack_8 + param_4 + -0x14,param_5 + 0x11c,puStack_8 + 10,0x19,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,(int)puStack_8 + param_4 + -0x12,param_5 + 0x11e,puStack_8 + 9,0x15,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,iVar2,param_5 + 0x138,(undefined4 *)(param_6 + -0x14),0x19,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,param_4 + 0xc,param_5 + 0x13a,(undefined4 *)(param_6 + -0x18),0x15,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      iVar2 = param_4 + ((int)(iStack_c + (iStack_c >> 0x1f & 3U)) >> 2);
      FUN_006c6470(param_1,iVar2 + 0xf,param_5 + 0x157,puStack_8,0x19,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,iVar2 + 0x11,param_5 + 0x159,puStack_8 + -1,0x15,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    g_currentExceptionFrame = IStack_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb3,0,iVar2,&DAT_007a4ccc,
                               s_FSGSTy__OutSGlProc_007cbfc8);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb3);
  }
  return;
}

