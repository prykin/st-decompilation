
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::HidePanel */

void __thiscall MMsgTy::HidePanel(MMsgTy *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  MMsgTy *this_00;
  int iVar2;
  int iVar3;
  MMsgTy MVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  MMsgTy *pMVar5;
  int *piVar6;
  undefined4 local_70;
  undefined4 local_6c [16];
  int local_2c [8];
  MMsgTy *local_c;
  uint local_8;
  
  if (this[0x65] != (MMsgTy)0x2) {
    local_70 = DAT_00858df8;
    DAT_00858df8 = &local_70;
    local_c = this;
    iVar2 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
    this_00 = local_c;
    if (iVar2 == 0) {
      iVar2 = 0xd;
      pMVar5 = local_c + 0x66;
      do {
        if (*(uint *)pMVar5 != 0) {
          FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pMVar5);
        }
        *(uint *)pMVar5 = 0;
        pMVar5 = pMVar5 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (param_2 == 0) {
        this_00[0x1caa] = (MMsgTy)0x0;
        this_00[0x1ca9] = (MMsgTy)0x0;
        this_00[0x1a5a] = (MMsgTy)0xff;
      }
      if (*(uint *)(this_00 + 0x1d8c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(this_00 + 0x1dd0),*(uint *)(this_00 + 0x1d8c));
      }
      iVar2 = *(int *)(this_00 + 0x1cab);
      if (iVar2 != 0) {
        piVar6 = local_2c;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        local_2c[3] = 2;
        local_2c[4] = 0x6940;
        local_2c[2] = iVar2;
        (**(code **)(**(int **)(this_00 + 0xc) + 0x18))(local_2c);
      }
      if (param_1 == 0) {
        this_00[0x65] = (MMsgTy)0x2;
        HideSprites(this_00);
        DAT_00858df8 = (undefined4 *)local_70;
        return;
      }
      if (param_3 == 0) {
        MVar4 = (MMsgTy)0x0;
        local_8 = (uint)local_8._1_3_ << 8;
        if (this_00[0x9a] != (MMsgTy)0x0) {
          do {
            if (this_00[(local_8 & 0xff) + 0x1c9c] != (MMsgTy)0x0) {
              iVar2 = (local_8 & 0xff) * 0x1fb;
              if (*(uint *)(this_00 + iVar2 + 0x178) != 0xffffffff) {
                FUN_006b3af0(*(int **)(this_00 + iVar2 + 0x1bc),*(uint *)(this_00 + iVar2 + 0x178));
              }
            }
            MVar4 = (MMsgTy)((char)MVar4 + 1);
            local_8 = CONCAT31(local_8._1_3_,MVar4);
          } while ((byte)MVar4 < (byte)this_00[0x9a]);
        }
      }
      else {
        MVar4 = (MMsgTy)0x0;
        *(undefined4 *)(this_00 + 0x1c9c) = 0x1010101;
        local_8 = (uint)local_8._1_3_ << 8;
        *(undefined4 *)(this_00 + 0x1ca0) = 0x1010101;
        *(undefined4 *)(this_00 + 0x1ca4) = 0x1010101;
        this_00[0x1ca8] = (MMsgTy)0x1;
        if (this_00[0x9a] != (MMsgTy)0x0) {
          do {
            if (*(uint *)(this_00 + (local_8 & 0xff) * 0x1fb + 0x178) != 0xffffffff) {
              FUN_006b3af0(*(int **)(this_00 + (local_8 & 0xff) * 0x1fb + 0x1bc),
                           *(uint *)(this_00 + (local_8 & 0xff) * 0x1fb + 0x178));
            }
            MVar4 = (MMsgTy)((char)MVar4 + 1);
            local_8 = CONCAT31(local_8._1_3_,MVar4);
          } while ((byte)MVar4 < (byte)this_00[0x9a]);
        }
      }
      this_00[0x65] = (MMsgTy)0x4;
      thunk_FUN_005b6730(this_00,6,'\x01',-1);
      DAT_00858df8 = (undefined4 *)local_70;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_70;
    iVar3 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1a4,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7ccb74,0x1a4);
  }
  return;
}

