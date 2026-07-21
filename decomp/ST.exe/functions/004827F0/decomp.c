
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ExpIsOver */

void __thiscall STBoatC::ExpIsOver(STBoatC *this,uint param_1)

{
  DArrayTy *array;
  code *pcVar1;
  bool bVar2;
  STBoatC *pSVar3;
  int errorCode;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  InternalExceptionFrame local_5c;
  short local_18 [4];
  uint local_10;
  uint local_c;
  STBoatC *local_8;
  
  local_10 = param_1 >> 0x10;
  local_c = param_1 & 0xffff;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  uVar5 = local_c;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3d7f,0,errorCode,
                               &DAT_007a4ccc,s_STBoatC__ExpIsOver_007ab918);
    if (iVar4 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3d80);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((int)local_c < 0) || ((int)((byte)local_8->field_0281 - 1) < (int)local_c)) {
    RaiseInternalException
              (-0x5001fff5,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
               0x3d71);
  }
  array = (DArrayTy *)(&local_8->field_0282)[uVar5];
  if (array == (DArrayTy *)0x0) {
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
               0x3d72);
  }
  uVar5 = local_10;
  DArrayGetElement(array,local_10,local_18);
  if (local_18[0] == 0x7fff) {
    RaiseInternalException
              (-0x5001fffe,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
               0x3d73);
  }
  local_18[0] = 0x7fff;
  Library::DKW::TBL::FUN_006ae140((uint *)array,uVar5,(undefined4 *)local_18);
  uVar5 = 0;
  bVar2 = true;
  if (0 < (int)array->count) {
    do {
      DArrayGetElement(array,uVar5,local_18);
      if (local_18[0] != 0x7fff) {
        bVar2 = false;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)array->count);
  }
  pSVar3 = local_8;
  uVar5 = local_c;
  if (bVar2) {
    DArrayDestroy((DArrayTy *)(&local_8->field_0282)[local_c]);
    (&pSVar3->field_0282)[uVar5] = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

