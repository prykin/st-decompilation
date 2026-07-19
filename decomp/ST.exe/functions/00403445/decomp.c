
int __cdecl thunk_FUN_006763f0(uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  STGroupC *this;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  uint *puStack_c;
  int iStack_8;
  
  uVar8 = 0;
  puStack_c = (uint *)0x0;
  iStack_8 = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_007fa174 == (STAllPlayersC *)0x0) {
      this = (STGroupC *)0x0;
    }
    else {
      this = (STGroupC *)thunk_FUN_0042b760(param_1,0);
    }
    if (this != (STGroupC *)0x0) {
      puStack_c = STGroupC::GetGroupContent(this,(int)unaff_EDI);
    }
    puVar2 = puStack_c;
    if (puStack_c[3] != 0) {
      uVar7 = 0;
      if (puStack_c[3] == 0) {
        puVar4 = (ushort *)0x0;
        goto LAB_00676470;
      }
      do {
        puVar4 = (ushort *)(puVar2[2] * uVar7 + puVar2[7]);
LAB_00676470:
        piVar5 = (int *)STAllPlayersC::GetObjPtr(DAT_007fa174,param_1,(uint)*puVar4,1);
        if (piVar5 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar5 + 0x2c))();
          if (iVar3 == 0x78) {
            iVar3 = *(int *)((int)piVar5 + 0x259);
          }
          else {
            iVar3 = 0;
          }
          if (param_2 == iVar3) {
            iVar3 = (**(code **)(*piVar5 + 0x2c))();
            if (iVar3 == 0x78) {
              iVar3 = *(int *)((int)piVar5 + 0x269);
            }
            else {
              iVar3 = -1;
            }
            if (param_3 == iVar3) {
              iStack_8 = iStack_8 + 1;
            }
          }
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar8 & 0xffff;
      } while (uVar7 < puVar2[3]);
    }
    if (puVar2 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar2);
    }
    g_currentExceptionFrame = IStack_50.previous;
    return iStack_8;
  }
  g_currentExceptionFrame = IStack_50.previous;
  if (puStack_c != (uint *)0x0) {
    FUN_006ae110((byte *)puStack_c);
  }
  iVar6 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x150,0,iVar3,&DAT_007a4ccc,
                             s__GetEmbrGrpTobjGrpExch_007d2dcc);
  if (iVar6 == 0) {
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x151);
    return iVar3;
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

