
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DeletePGPairs */

void __thiscall STAllPlayersC::DeletePGPairs(STAllPlayersC *this,char param_1)

{
  code *pcVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  byte *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  local_8 = *(byte **)((int)&DAT_007f5816 + param_1 * 0xa62);
  g_currentExceptionFrame = &local_58;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pbVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8 != (byte *)0x0) {
      iVar3 = *(int *)(local_8 + 0xc);
      if ((iVar3 != 0) && (uVar5 = 0, 0 < iVar3)) {
        do {
          FUN_006acc70((int)pbVar2,uVar5,&local_14);
          FUN_006ae110(local_14);
          FUN_006ae110(local_10);
          FUN_006ae110(local_c);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < iVar3);
      }
      FUN_006ae110(pbVar2);
      *(undefined4 *)((int)&DAT_007f5816 + param_1 * 0xa62) = 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  if (iVar3 != -0x5001fff7) {
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x29b3,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__DeletePGPairs_007a840c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x29b4);
  }
  return;
}

