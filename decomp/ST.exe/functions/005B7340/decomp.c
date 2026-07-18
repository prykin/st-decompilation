
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::PaintMMsg */

void __thiscall MMsgTy::PaintMMsg(MMsgTy *this)

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
    if (*(uint *)(local_8 + 0x1cfb) != 0xffffffff) {
      FUN_006b3730(*(uint **)(local_8 + 0x1d3f),*(uint *)(local_8 + 0x1cfb),
                   *(uint *)(local_8 + 0x1cff),*(uint *)(local_8 + 0x1d13),
                   *(uint *)(local_8 + 0x1d17));
    }
    if (*(uint *)(pMVar2 + 0x1d8c) != 0xffffffff) {
      FUN_006b3730(*(uint **)(pMVar2 + 0x1dd0),*(uint *)(pMVar2 + 0x1d8c),*(uint *)(pMVar2 + 0x1d90)
                   ,*(uint *)(pMVar2 + 0x1da4),*(uint *)(pMVar2 + 0x1da8));
    }
    iVar3 = 0;
    if (pMVar2[0x9a] != (MMsgTy)0x0) {
      pMVar5 = pMVar2 + 0xff;
      do {
        if (*(uint *)(pMVar5 + -0x18) != 0xffffffff) {
          FUN_006b3730(*(uint **)(pMVar5 + 0x2c),*(uint *)(pMVar5 + -0x18),*(uint *)(pMVar5 + -0x14)
                       ,*(uint *)pMVar5,*(uint *)(pMVar5 + 4));
        }
        if (*(uint *)(pMVar5 + 0x79) != 0xffffffff) {
          FUN_006b3730(*(uint **)(pMVar5 + 0xbd),*(uint *)(pMVar5 + 0x79),*(uint *)(pMVar5 + 0x7d),
                       *(uint *)(pMVar5 + 0x91),*(uint *)(pMVar5 + 0x95));
        }
        if ((pMVar5[-0x1d] != (MMsgTy)0x0) && (*(uint *)(pMVar5 + 0x10a) != 0xffffffff)) {
          FUN_006b3730(*(uint **)(pMVar5 + 0x14e),*(uint *)(pMVar5 + 0x10a),
                       *(uint *)(pMVar5 + 0x10e),*(uint *)(pMVar5 + 0x122),*(uint *)(pMVar5 + 0x126)
                      );
        }
        iVar3 = iVar3 + 1;
        pMVar5 = pMVar5 + 0x1fb;
      } while (iVar3 < (int)(uint)(byte)pMVar2[0x9a]);
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x59,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7ccb74,0x59);
  return;
}

