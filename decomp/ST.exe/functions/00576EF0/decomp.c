
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::InitSystem */

undefined4 __thiscall GameSystemC::InitSystem(GameSystemC *this)

{
  code *pcVar1;
  short *psVar2;
  GameSystemC *pGVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  void *unaff_ESI;
  cMf32 *pcVar9;
  char *pcVar10;
  InternalExceptionFrame *in_stack_ffffff70;
  undefined4 local_8c [16];
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,in_stack_ffffff70);
  if (iVar4 == 0) {
    DAT_00806750 = LoadLand(g_cMf32_00806754,s_3D_MAP_007ca1e4);
    puVar5 = FUN_006b04d0(0x4f2);
    if (puVar5 == (undefined4 *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)FUN_006dbca0((int)puVar5);
    }
    psVar2 = DAT_00806750;
    DAT_00807598 = pvVar6;
    *(short **)((int)pvVar6 + 0x280) = DAT_00806750;
    iVar4 = (int)*psVar2 / 2;
    *(int *)((int)pvVar6 + 0x284) = iVar4;
    *(int *)((int)pvVar6 + 0x288) = iVar4 * iVar4;
    SystemClassTy::InitSystem((SystemClassTy *)local_8);
    FUN_006e8580(DAT_00807598,DAT_008075a8);
    pcVar10 = s_scmask_007cac10;
    pcVar9 = DAT_00806770;
    DAT_00806724 = Library::Ourlib::MFIMG::mfImtLoad
                             (DAT_00806770,s_scmask_007cac10,0,0,(undefined4 *)0x0,1);
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff70;
    iVar4 = Library::MSVCRT::__setjmp3(local_8c,0,pcVar9,pcVar10);
    pGVar3 = local_8;
    if (iVar4 == 0) {
      puVar5 = Library::Ourlib::MFPLA::mfPlaPtrTy(g_cMf32_00806760,PTR_s_ANIM_PALETTE_0079b1a8,0);
      pGVar3->field_0431 = puVar5;
    }
    pGVar3->field_042C = DAT_00808784;
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x86,0,iVar4,&DAT_007a4ccc,
                             s_GameSystemC__InitSystem_007cabf4);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  RaiseInternalException(iVar4,0,s_E____titans_tsystem_cpp_007cab5c,0x86);
  return 0xfffffffc;
}

