#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::PaintSprBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
MMObjTy::PaintSprBut(MMObjTy *this,int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  MMObjTy *pMVar3;
  int iVar4;
  int iVar6;
  int iVar5;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\mmenuobj.cpp",0x8c,0,iVar4,"%s",
                               "MMObjTy::PaintSprBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\mmenuobj.cpp",0x8c);
    return;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined2 *)(param_1 + 0x14)) {
  case 0:
  case 1:
  case 3:
    iVar6 = (param_2 & 0xff) * 0x1fb + (int)local_8;
    iVar7 = *(int *)(iVar6 + 0xef);
    break;
  case 2:
    iVar6 = (param_2 & 0xff) * 0x1fb + (int)local_8;
    iVar7 = *(int *)(iVar6 + 0xef) - param_3;
    break;
  default:
    goto switchD_005b56d4_default;
  }
  *(int *)(iVar6 + 0xeb) = iVar7 + -1;
switchD_005b56d4_default:
  iVar7 = (param_2 & 0xff) * 0x1fb;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar8 = *(uint *)((int)local_8 + (param_2 & 0xff) * 0x1fb + 0xe7);
  if (uVar8 != 0xffffffff) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::DKW::DDX::FUN_006b3730
              (*(uint **)((int)local_8 + iVar7 + 299),uVar8,*(uint *)((int)local_8 + iVar7 + 0xeb),
               *(uint *)((int)local_8 + iVar7 + 0xff),*(uint *)((int)local_8 + iVar7 + 0x103));
  }
  if (*(char *)((int)pMVar3 + iVar7 + 0xe2) != '\0') {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined2 *)(param_1 + 0x14)) {
    case 0:
    case 1:
    case 3:
      *(int *)((int)pMVar3 + iVar7 + 0x221) =
           *(int *)((int)pMVar3 + iVar7 + 0xff) + *(int *)((int)pMVar3 + iVar7 + 0xab);
      *(int *)((int)pMVar3 + iVar7 + 0x225) =
           *(int *)((int)pMVar3 + iVar7 + 0x103) + *(int *)((int)pMVar3 + iVar7 + 0xaf);
      break;
    case 2:
      *(int *)((int)pMVar3 + iVar7 + 0x221) =
           *(int *)((int)pMVar3 + iVar7 + 0xff) + *(int *)((int)pMVar3 + iVar7 + 0xb3);
      *(int *)((int)pMVar3 + iVar7 + 0x225) =
           *(int *)((int)pMVar3 + iVar7 + 0x103) + *(int *)((int)pMVar3 + iVar7 + 0xb7);
    }
    uVar8 = *(uint *)((int)pMVar3 + iVar7 + 0x209);
    if (uVar8 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)((int)pMVar3 + iVar7 + 0x24d),uVar8,
                 *(uint *)((int)pMVar3 + iVar7 + 0x20d),*(uint *)((int)pMVar3 + iVar7 + 0x221),
                 *(uint *)((int)pMVar3 + iVar7 + 0x225));
    }
  }
  iVar6 = *(int *)((int)pMVar3 + iVar7 + 400);
  uVar1 = *(undefined4 *)((int)pMVar3 + iVar7 + 0x194);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined2 *)(param_1 + 0x14)) {
  case 0:
    *(int *)((int)pMVar3 + iVar7 + 0x17c) = *(int *)((int)pMVar3 + iVar7 + 0x180) + -1;
    break;
  case 1:
    *(int *)((int)pMVar3 + iVar7 + 0x17c) = *(int *)((int)pMVar3 + iVar7 + 0x180) + -3;
    break;
  case 2:
    *(int *)((int)pMVar3 + iVar7 + 400) = iVar6 + param_4;
    *(int *)((int)pMVar3 + iVar7 + 0x194) = *(int *)((int)pMVar3 + iVar7 + 0x194) + param_5;
  case 3:
    *(int *)((int)pMVar3 + iVar7 + 0x17c) = *(int *)((int)pMVar3 + iVar7 + 0x180) + -2;
  }
  uVar8 = *(uint *)((int)pMVar3 + iVar7 + 0x178);
  if (uVar8 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b3730
              (*(uint **)((int)pMVar3 + iVar7 + 0x1bc),uVar8,*(uint *)((int)pMVar3 + iVar7 + 0x17c),
               *(uint *)((int)pMVar3 + iVar7 + 400),*(uint *)((int)pMVar3 + iVar7 + 0x194));
  }
  *(int *)((int)pMVar3 + iVar7 + 400) = iVar6;
  *(undefined4 *)((int)pMVar3 + iVar7 + 0x194) = uVar1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(short *)(param_1 + 0x14) == 2) {
    uVar8 = 4;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)(param_1 + 0x14) != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    uVar8 = 3;
  }
  thunk_FUN_005b6730(local_8,uVar8,'\x01',-1);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

