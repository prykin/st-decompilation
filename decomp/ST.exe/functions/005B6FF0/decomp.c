
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::HideSprites */

void __thiscall MMsgTy::HideSprites(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  MMsgTy *pMVar5;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  MMsgTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 0xd;
    pMVar5 = local_8 + 0x66;
    do {
      if (*(uint *)pMVar5 != 0) {
        FUN_006e56b0(*(void **)(pMVar2 + 0xc),*(uint *)pMVar5);
      }
      *(uint *)pMVar5 = 0;
      pMVar5 = pMVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)(pMVar2 + 0x1cff) = 0;
    if (*(uint *)(pMVar2 + 0x1cfb) != 0xffffffff) {
      FUN_006b3730(*(uint **)(pMVar2 + 0x1d3f),*(uint *)(pMVar2 + 0x1cfb),*(uint *)(pMVar2 + 0x1cff)
                   ,*(uint *)(pMVar2 + 0x1d13),*(uint *)(pMVar2 + 0x1d17));
    }
    if (*(uint *)(pMVar2 + 0x1cfb) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pMVar2 + 0x1d3f),*(uint *)(pMVar2 + 0x1cfb));
    }
    if (*(uint *)(pMVar2 + 0x1d8c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pMVar2 + 0x1dd0),*(uint *)(pMVar2 + 0x1d8c));
    }
    iVar3 = 0;
    if (pMVar2[0x9a] != (MMsgTy)0x0) {
      pMVar5 = pMVar2 + 0xe7;
      do {
        *(uint *)(pMVar5 + 4) = 0;
        if (*(uint *)pMVar5 != 0xffffffff) {
          FUN_006b3730(*(uint **)(pMVar5 + 0x44),*(uint *)pMVar5,*(uint *)(pMVar5 + 4),
                       *(uint *)(pMVar5 + 0x18),*(uint *)(pMVar5 + 0x1c));
        }
        if (*(uint *)pMVar5 != 0xffffffff) {
          FUN_006b3af0(*(int **)(pMVar5 + 0x44),*(uint *)pMVar5);
        }
        if (*(uint *)(pMVar5 + 0x91) != 0xffffffff) {
          FUN_006b3af0(*(int **)(pMVar5 + 0xd5),*(uint *)(pMVar5 + 0x91));
        }
        if ((pMVar5[-5] != (MMsgTy)0x0) && (*(uint *)(pMVar5 + 0x122) != 0xffffffff)) {
          FUN_006b3af0(*(int **)(pMVar5 + 0x166),*(uint *)(pMVar5 + 0x122));
        }
        iVar3 = iVar3 + 1;
        pMVar5 = pMVar5 + 0x1fb;
      } while (iVar3 < (int)(uint)(byte)pMVar2[0x9a]);
    }
    pMVar2[0x65] = (MMsgTy)0x2;
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x41,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7ccb74,0x41);
  return;
}

