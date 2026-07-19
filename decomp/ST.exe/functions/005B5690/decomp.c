
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::PaintSprBut */

void __thiscall
MMObjTy::PaintSprBut(MMObjTy *this,int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  MMObjTy *pMVar3;
  int iVar4;
  MMObjTy *pMVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0x8c,0,iVar4,&DAT_007a4ccc,
                               s_MMObjTy__PaintSprBut_007cca94);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0x8c);
    return;
  }
  switch(*(undefined2 *)(param_1 + 0x14)) {
  case 0:
  case 1:
  case 3:
    pMVar5 = local_8 + (param_2 & 0xff) * 0x1fb;
    iVar4 = *(int *)(pMVar5 + 0xef);
    break;
  case 2:
    pMVar5 = local_8 + (param_2 & 0xff) * 0x1fb;
    iVar4 = *(int *)(pMVar5 + 0xef) - param_3;
    break;
  default:
    goto switchD_005b56d4_default;
  }
  *(int *)(pMVar5 + 0xeb) = iVar4 + -1;
switchD_005b56d4_default:
  iVar4 = (param_2 & 0xff) * 0x1fb;
  if (*(uint *)(local_8 + (param_2 & 0xff) * 0x1fb + 0xe7) != 0xffffffff) {
    FUN_006b3730(*(uint **)(local_8 + iVar4 + 299),
                 *(uint *)(local_8 + (param_2 & 0xff) * 0x1fb + 0xe7),
                 *(uint *)(local_8 + iVar4 + 0xeb),*(uint *)(local_8 + iVar4 + 0xff),
                 *(uint *)(local_8 + iVar4 + 0x103));
  }
  if (pMVar3[iVar4 + 0xe2] != (MMObjTy)0x0) {
    switch(*(undefined2 *)(param_1 + 0x14)) {
    case 0:
    case 1:
    case 3:
      *(int *)(pMVar3 + iVar4 + 0x221) =
           *(int *)(pMVar3 + iVar4 + 0xff) + *(int *)(pMVar3 + iVar4 + 0xab);
      *(int *)(pMVar3 + iVar4 + 0x225) =
           *(int *)(pMVar3 + iVar4 + 0x103) + *(int *)(pMVar3 + iVar4 + 0xaf);
      break;
    case 2:
      *(int *)(pMVar3 + iVar4 + 0x221) =
           *(int *)(pMVar3 + iVar4 + 0xff) + *(int *)(pMVar3 + iVar4 + 0xb3);
      *(int *)(pMVar3 + iVar4 + 0x225) =
           *(int *)(pMVar3 + iVar4 + 0x103) + *(int *)(pMVar3 + iVar4 + 0xb7);
    }
    if (*(uint *)(pMVar3 + iVar4 + 0x209) != 0xffffffff) {
      FUN_006b3730(*(uint **)(pMVar3 + iVar4 + 0x24d),*(uint *)(pMVar3 + iVar4 + 0x209),
                   *(uint *)(pMVar3 + iVar4 + 0x20d),*(uint *)(pMVar3 + iVar4 + 0x221),
                   *(uint *)(pMVar3 + iVar4 + 0x225));
    }
  }
  iVar6 = *(int *)(pMVar3 + iVar4 + 400);
  uVar1 = *(undefined4 *)(pMVar3 + iVar4 + 0x194);
  switch(*(undefined2 *)(param_1 + 0x14)) {
  case 0:
    *(int *)(pMVar3 + iVar4 + 0x17c) = *(int *)(pMVar3 + iVar4 + 0x180) + -1;
    break;
  case 1:
    *(int *)(pMVar3 + iVar4 + 0x17c) = *(int *)(pMVar3 + iVar4 + 0x180) + -3;
    break;
  case 2:
    *(int *)(pMVar3 + iVar4 + 400) = iVar6 + param_4;
    *(int *)(pMVar3 + iVar4 + 0x194) = *(int *)(pMVar3 + iVar4 + 0x194) + param_5;
  case 3:
    *(int *)(pMVar3 + iVar4 + 0x17c) = *(int *)(pMVar3 + iVar4 + 0x180) + -2;
  }
  if (*(uint *)(pMVar3 + iVar4 + 0x178) != 0xffffffff) {
    FUN_006b3730(*(uint **)(pMVar3 + iVar4 + 0x1bc),*(uint *)(pMVar3 + iVar4 + 0x178),
                 *(uint *)(pMVar3 + iVar4 + 0x17c),*(uint *)(pMVar3 + iVar4 + 400),
                 *(uint *)(pMVar3 + iVar4 + 0x194));
  }
  *(int *)(pMVar3 + iVar4 + 400) = iVar6;
  *(undefined4 *)(pMVar3 + iVar4 + 0x194) = uVar1;
  if (*(short *)(param_1 + 0x14) == 2) {
    uVar7 = 4;
  }
  else {
    if (*(short *)(param_1 + 0x14) != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    uVar7 = 3;
  }
  thunk_FUN_005b6730(local_8,uVar7,'\x01',-1);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

