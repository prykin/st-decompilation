
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::DoneMTest */

void __thiscall MTestTy::DoneMTest(MTestTy *this)

{
  code *pcVar1;
  MTestTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  InternalExceptionFrame local_4c;
  MTestTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    SetAccelerator(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
    SetAccelerator(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    puVar4 = (undefined4 *)&this_00->field_0x61;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    this_00->field_0071 = 0x14;
    this_00->field_0075 = this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)&this_00->field_0x61);
    cMf32::RecMemFree(g_cMf32_00806780,&this_00->field_005D);
    DarkScreen(DAT_0080759c,10,2);
    if (g_holo_00811778 != (HoloTy *)0x0) {
      HoloTy::Done(g_holo_00811778);
      Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
      g_holo_00811778 = (HoloTy *)0x0;
    }
    if (this_00->field_0091 != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x81);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_test_obj_cpp_007cdcbc,0x4a,0,iVar2,&DAT_007a4ccc,
                             s_MTestTy__DoneMTest_007cdcfc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_test_obj_cpp_007cdcbc,0x4a);
  return;
}

