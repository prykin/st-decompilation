
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksExec */

void __thiscall TraksClassTy::TraksExec(TraksClassTy *this)

{
  code *pcVar1;
  TraksClassTy *this_00;
  int iVar2;
  int iVar3;
  AnonShape_00555910_7455F960 *pAVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  InternalExceptionFrame local_4c;
  TraksClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    iVar2 = *(int *)(local_8->field_0024 + 0xc);
    if (iVar2 == 0) {
      pAVar4 = (AnonShape_00555910_7455F960 *)0x0;
    }
    else {
      pAVar4 = *(AnonShape_00555910_7455F960 **)(local_8->field_0024 + 0x1c);
    }
    uVar5 = 0;
    if (0 < iVar2) {
      do {
        if (-1 < (int)pAVar4->field_0032) {
          if (pAVar4->field_0038 == 0) {
            DrawTrakSprite(this_00,pAVar4);
          }
          else {
            FUN_006e8ba0(PTR_00807598,pAVar4->field_0032);
            pAVar4->field_0032 = 0xffffffff;
            iVar2 = this_00->field_0024;
            if (uVar5 < *(uint *)(iVar2 + 0xc)) {
              iVar2 = *(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c);
            }
            else {
              iVar2 = 0;
            }
            *(undefined4 *)(iVar2 + 0x32) = 0xffffffff;
            iVar2 = this_00->field_0828;
            if (iVar2 < 0x3ff) {
              this_00->field_0828 = iVar2 + 1;
              *(short *)(&this_00->field_0x2a + iVar2 * 2) = (short)uVar5;
            }
          }
        }
        pAVar4 = pAVar4 + 1;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < *(int *)(this_00->field_0024 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,200,0,iVar2,&DAT_007a4ccc,
                             s_TraksClassTy__TraksExec_error_007c9184);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_grig_traks_cpp_007c9104,0xc9);
  return;
}

