
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ExpIsOver */

void __thiscall STBoatC::ExpIsOver(STBoatC *this,uint param_1)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  code *pcVar2;
  bool bVar3;
  STBoatC *pSVar4;
  int errorCode;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
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
  uVar6 = local_c;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3d7f,0,errorCode,
                               &DAT_007a4ccc,s_STBoatC__ExpIsOver_007ab918);
    if (iVar5 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3d80);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((int)local_c < 0) || ((int)((byte)local_8->field_0281 - 1) < (int)local_c)) {
    RaiseInternalException
              (-0x5001fff5,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
               0x3d71);
  }
  pAVar1 = (AnonShape_006ACC70_C8641025 *)(&local_8->field_0282)[uVar6];
  if (pAVar1 == (AnonShape_006ACC70_C8641025 *)0x0) {
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
               0x3d72);
  }
  uVar6 = local_10;
  FUN_006acc70(pAVar1,local_10,(undefined4 *)local_18);
  if (local_18[0] == 0x7fff) {
    RaiseInternalException
              (-0x5001fffe,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
               0x3d73);
  }
  local_18[0] = 0x7fff;
  Library::DKW::TBL::FUN_006ae140((uint *)pAVar1,uVar6,(undefined4 *)local_18);
  uVar6 = 0;
  bVar3 = true;
  if (0 < (int)pAVar1->field_000C) {
    do {
      FUN_006acc70(pAVar1,uVar6,(undefined4 *)local_18);
      if (local_18[0] != 0x7fff) {
        bVar3 = false;
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)pAVar1->field_000C);
  }
  pSVar4 = local_8;
  uVar6 = local_c;
  if (bVar3) {
    FUN_006ae110((byte *)(&local_8->field_0282)[local_c]);
    (&pSVar4->field_0282)[uVar6] = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

