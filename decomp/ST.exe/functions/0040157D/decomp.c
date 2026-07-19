
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall STFieldC::CreateField(STFieldC *this,int param_1,int param_2)

{
  code *pcVar1;
  STFieldC *pSVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar6;
  InternalExceptionFrame IStack_50;
  STFieldC *pSStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pSStack_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Igor_To_gold_cpp_007cb19c,0x414,0,iVar3,&DAT_007a4ccc,
                               s_STFieldC__CreateField_007cb2c0);
    if (iVar3 == 0) {
      return puStack_8;
    }
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  if (*(int *)(pSStack_c + 0x255) == 0xdd) {
    pcVar6 = s_ResSmall_007cb100;
  }
  else if (*(int *)(pSStack_c + 0x255) == 0xde) {
    pcVar6 = s_ResSmallM_007cb10c;
  }
  else {
    pcVar6 = s_ResSmall_007cb100;
  }
  puVar4 = FUN_00709af0(DAT_00806774,0x1d,(byte *)pcVar6,0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar4 != (ushort *)0x0) && (*(void **)(pSVar2 + 0x211) != (void *)0x0)) {
    puVar5 = FUN_006e6460(*(void **)(pSVar2 + 0x211),*(undefined4 *)((int)puVar4 + 0x21),
                          *(int *)puVar4,(short)(*(int *)((int)puVar4 + 9) / 2),
                          (short)(*(int *)((int)puVar4 + 0xd) / 2),1,1);
    puStack_8 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puStack_8 = puVar5;
      FUN_006e6540((int)puVar5,(float)param_1 * _DAT_007904f8 + _DAT_007904f4,
                   (float)param_2 * _DAT_007904f8 + _DAT_007904f4,-1);
      g_currentExceptionFrame = IStack_50.previous;
      return puVar5;
    }
  }
  g_currentExceptionFrame = IStack_50.previous;
  return puStack_8;
}

