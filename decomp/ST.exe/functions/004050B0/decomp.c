
uint * __thiscall
STAllPlayersC::GetTOBJListFromDArr
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,int param_4,char param_5)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  STAllPlayersC *this_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_5c;
  undefined1 auStack_18 [4];
  STAllPlayersC *pSStack_14;
  int iStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  iStack_10 = *(int *)(param_2 + 0xc);
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  pSStack_14 = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_5c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2049,0,iVar4,&DAT_007a4ccc
                               ,s_STAllPlayersC__GetTOBJListFromDA_007a7fb4);
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x204a);
      return (uint *)0x0;
    }
    pcVar2 = (code *)swi(3);
    puVar7 = (uint *)(*pcVar2)();
    return puVar7;
  }
  puStack_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  this_00 = pSStack_14;
  iVar4 = 0;
  if (0 < iStack_10) {
    do {
      sVar1 = *(short *)(*(int *)(param_2 + 0x1c) + iVar4 * 2);
      uStack_8 = CONCAT22((short)((uint)*(int *)(param_2 + 0x1c) >> 0x10),sVar1);
      if (sVar1 != -1) {
        piVar5 = (int *)GetObjPtr(this_00,param_1,uStack_8,1);
        if (piVar5 == (int *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2040);
switchD_0043efb1_caseD_3a:
          bVar3 = false;
        }
        else {
          iVar6 = (**(code **)(*piVar5 + 0x2c))();
          if ((iVar6 != param_3) || (iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 0))
          goto switchD_0043efb1_caseD_3a;
          if (param_4 != 0) {
            switch(param_3) {
            case 0x38:
            case 0x39:
            case 0x4f:
            case 0x5e:
              if ((param_4 == 1) && (iVar6 = (**(code **)(*piVar5 + 0x88))(auStack_18), 0 < iVar6))
              {
                bVar3 = true;
                goto LAB_0043efd8;
              }
            }
            goto switchD_0043efb1_caseD_3a;
          }
          bVar3 = true;
        }
LAB_0043efd8:
        if ((bVar3) &&
           ((param_5 == -1 || (iVar6 = (**(code **)(*piVar5 + 0x6c))(), iVar6 == param_5)))) {
          Library::DKW::TBL::FUN_006ae1c0(puStack_c,&uStack_8);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iStack_10);
  }
  g_currentExceptionFrame = IStack_5c.previous;
  return puStack_c;
}

