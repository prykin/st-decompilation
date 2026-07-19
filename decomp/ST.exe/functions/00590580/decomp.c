
/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::PaintMAdv */

void __thiscall MAdvTy::PaintMAdv(MAdvTy *this)

{
  code *pcVar1;
  MAdvTy *pMVar2;
  int iVar3;
  uint *puVar4;
  StartServTy *this_00;
  StartServTy *this_01;
  StartServTy *extraout_ECX;
  StartServTy *this_02;
  StartServTy *extraout_ECX_00;
  StartServTy *this_03;
  void *unaff_ESI;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  undefined4 uVar11;
  InternalExceptionFrame *pIVar12;
  undefined4 local_48 [16];
  MAdvTy *local_8;
  
  pIVar12 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar12);
  if (iVar3 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    pMVar2 = local_8;
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005E);
    pvVar10 = *(void **)(DAT_0081176c + 0x30);
    uVar11 = 1;
    uVar9 = 0xffffffff;
    if (pMVar2->field_005D == '\0') {
      uVar8 = 0xfffffffe;
      puVar4 = (uint *)FUN_006b0140(0x25e4,DAT_00807618);
      StartServTy::WrTextDDX(this_02,0,0,0x1b8,800,0x14,puVar4,uVar8,uVar9,pvVar10,uVar11);
      pvVar10 = *(void **)(DAT_0081176c + 0x30);
      uVar11 = 1;
      uVar8 = 0xffffffff;
      uVar9 = 0xffffffff;
      puVar4 = (uint *)FUN_006b0140(0x25e8,DAT_00807618);
      iVar7 = 0x8c;
      iVar6 = 800;
      iVar5 = 0x1cc;
      iVar3 = 0;
      this_03 = extraout_ECX_00;
    }
    else {
      uVar8 = 0xffffffff;
      puVar4 = (uint *)FUN_006b0140(0x25e5,DAT_00807618);
      StartServTy::WrTextDDX(this_00,0,10,10,0x30c,0x32,puVar4,uVar8,uVar9,pvVar10,uVar11);
      pvVar10 = *(void **)(DAT_0081176c + 0x30);
      uVar11 = 1;
      uVar8 = 0xffffffff;
      uVar9 = 0;
      puVar4 = (uint *)FUN_006b0140(0x25e6,DAT_00807618);
      StartServTy::WrTextDDX(this_01,0,0x10e,0x3c,0x20d,0xfa,puVar4,uVar9,uVar8,pvVar10,uVar11);
      pvVar10 = *(void **)(DAT_0081176c + 0x30);
      uVar11 = 1;
      uVar8 = 0xffffffff;
      uVar9 = 0;
      puVar4 = (uint *)FUN_006b0140(0x25e7,DAT_00807618);
      iVar7 = 0xe6;
      iVar6 = 0x302;
      iVar5 = 0x172;
      iVar3 = 0x14;
      this_03 = extraout_ECX;
    }
    StartServTy::WrTextDDX(this_03,0,iVar3,iVar5,iVar6,iVar7,puVar4,uVar9,uVar8,pvVar10,uVar11);
    g_currentExceptionFrame = pIVar12;
    return;
  }
  g_currentExceptionFrame = pIVar12;
  iVar5 = ReportDebugMessage(s_E____titans_Start_adv_obj_cpp_007cbc24,0x4d,0,iVar3,&DAT_007a4ccc,
                             s_MAdvTy__PaintMAdv_007cbc74);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_adv_obj_cpp_007cbc24,0x4d);
  return;
}

