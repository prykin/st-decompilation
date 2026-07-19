
undefined4 __thiscall
STT3DSprC::Init(STT3DSprC *this,undefined4 param_1,uint param_2,uint param_3,uint param_4,
               uint param_5,uint param_6,uint param_7)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  STT3DSprC *pSStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pSStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_8;
  if (iVar3 == 0) {
    *(undefined4 *)(pSStack_8 + 0x34) = param_1;
    *(uint *)(pSStack_8 + 8) = param_3;
    *(uint *)(pSStack_8 + 4) = param_2;
    *(uint *)(pSStack_8 + 0x14) = param_7;
    FUN_006e8660(*(void **)(pSStack_8 + 0x3c),(int *)(pSStack_8 + 0x18),param_7,0,param_5,param_6,
                 param_2,param_3,param_4);
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)(pSVar2 + 0x14) * 0x24);
    *(undefined4 **)(pSVar2 + 0x20) = puVar4;
    for (uVar6 = *(int *)(pSVar2 + 0x14) * 9 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x2b1,0,iVar3,&DAT_007a4ccc,
                             s_STT3DSprC__Init_007ac710);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  return 0xffffffff;
}

