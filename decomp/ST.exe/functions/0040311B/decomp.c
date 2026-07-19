
void thunk_FUN_004f92b0(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  int iStack_c;
  uint uStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar2 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = ccFntTy::FormIndentSarr
                       (*(ccFntTy **)(iStack_c + 0x1d0),*param_1,(uint *)s________________007c21d8,
                        (uint *)&DAT_007c21ec,*(int *)(iStack_c + 0x104),0,0xffffffff,(char *)0x0,1)
    ;
    if ((byte *)*param_1 != (byte *)0x0) {
      FUN_006b5570((byte *)*param_1);
    }
    if (puVar3 == (uint *)0x0) {
      puVar3 = FUN_006b54f0((uint *)0x0,1,1);
      *param_1 = (int)puVar3;
    }
    else {
      *param_1 = (int)puVar3;
    }
    iVar2 = *(int *)(iStack_c + 0x1b0);
    uStack_8 = *(uint *)(iVar2 + 0x14);
    if (uStack_8 == 0) {
      uStack_8 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    ccFntTy::WrSarr(*(ccFntTy **)(iStack_c + 0x1d0),*param_1,0,-1,0,0,0);
    FUN_006b5570((byte *)*param_1);
    *(undefined4 *)(iStack_c + 0x243) = *(undefined4 *)(iStack_c + 0x9a0);
    *(undefined4 *)(iStack_c + 0x247) = param_2;
    FUN_006b3430(DAT_008075a8,*(uint *)(iStack_c + 0x178));
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x32f,0,iVar2,&DAT_007a4ccc,
                             s_CPanelTy__OutText__str_arr__time_007c21b0);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x32f);
  return;
}

