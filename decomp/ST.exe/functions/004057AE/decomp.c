
void __thiscall AiTactClassTy::GiveObjByGrpNum(AiTactClassTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int errorCode;
  undefined2 *puVar4;
  int *piVar5;
  AiFltClassTy *this_00;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined8 uVar8;
  InternalExceptionFrame IStack_4c;
  AiTactClassTy *pAStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pAStack_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0xc), uVar7 = extraout_EDX, uVar1 != 0)) {
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        if (uVar1 < *(uint *)(param_1 + 0xc)) {
          puVar4 = (undefined2 *)(*(int *)(param_1 + 8) * uVar1 + *(int *)(param_1 + 0x1c));
        }
        else {
          puVar4 = (undefined2 *)0x0;
        }
        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,CONCAT31((int3)((uint)uVar7 >> 8),pAStack_8[0x24])
                                     ,CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4),1);
          uVar7 = extraout_EDX_00;
        }
        if (piVar5 != (int *)0x0) {
          uVar8 = (**(code **)(*piVar5 + 0x2c))();
          uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if (((int)uVar8 < 1) || (0x28 < (int)uVar8)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) &&
             (this_00 = (AiFltClassTy *)thunk_FUN_0068e290(pAStack_8,(short)piVar5[0x207]),
             uVar7 = extraout_EDX_01, this_00 != (AiFltClassTy *)0x0)) {
            AiFltClassTy::_AddObjFlt(this_00,piVar5,0);
            FUN_006b0c70(param_1,uVar1);
            uVar7 = extraout_EDX_02;
          }
        }
      }
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x292,0,errorCode,&DAT_007a4ccc,
                             s_AiTactClassTy__GiveObjByGrpNum_007d5804);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x293);
  return;
}

