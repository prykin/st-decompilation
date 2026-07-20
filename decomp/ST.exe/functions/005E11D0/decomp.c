
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PrepareTSurf */

void __thiscall
MTaskTy::PrepareTSurf(MTaskTy *this,AnonShape_005E11D0_D0F8BE03 *param_1,char param_2,char param_3)

{
  code *pcVar1;
  int errorCode;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    uVar5 = param_1->field_0014;
    if (uVar5 == 0) {
      uVar5 = ((uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              param_1->field_0008;
    }
    puVar2 = (undefined4 *)FUN_006b4fa0((int)param_1);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar2 = 0xff;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if (param_2 != '\0') {
      FUN_006c7610((AnonShape_006C7610_838EDECF *)param_1,0,0,0,param_1->field_0004,
                   param_1->field_0008,2,0);
      FUN_006c7570((AnonShape_006C7570_82D7EB54 *)param_1,0,0,0,(undefined4 *)param_1->field_0004,
                   param_1->field_0008,2,(-(param_3 != '\x01') & 0xecU) + 0x2c);
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x1b9,0,errorCode,
                             &DAT_007a4ccc,s_MTaskTy__PrepareTSurf_007cdad4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_task_obj_cpp_007cd994,0x1b9);
  return;
}

