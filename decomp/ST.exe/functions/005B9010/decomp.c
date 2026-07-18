
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::StatePanel */

void __thiscall MMsgTy::StatePanel(MMsgTy *this,int param_1)

{
  short sVar1;
  code *pcVar2;
  MMsgTy *this_00;
  MMsgTy MVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  MMsgTy *local_c;
  uint local_8;
  
  *(undefined4 *)(this + 0x2d) = 0x20;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar4 == 0) {
    local_8 = local_8 & 0xffffff00;
    if (local_c[0x9a] != (MMsgTy)0x0) {
      do {
        uVar5 = local_8 & 0xff;
        if ((*(int *)(this_00 + uVar5 * 4 + 0x66) == 0) ||
           (sVar1 = *(short *)(param_1 + uVar5 * 2), sVar1 == 0)) {
          *(undefined2 *)(this_00 + uVar5 * 2 + 0x1c82) = *(undefined2 *)(param_1 + uVar5 * 2);
        }
        else {
          if (sVar1 < 1) {
            *(undefined4 *)(this_00 + 0x31) = 0;
          }
          else {
            *(undefined4 *)(this_00 + 0x31) = 1;
          }
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + uVar5 * 4 + 0x66),
                       (undefined4 *)(this_00 + 0x1d));
        }
        MVar3 = (MMsgTy)((char)local_8 + 1);
        local_8 = CONCAT31(local_8._1_3_,MVar3);
      } while ((byte)MVar3 < (byte)this_00[0x9a]);
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar6 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1c1,0,iVar4,&DAT_007a4ccc);
  if (iVar6 == 0) {
    FUN_006a5e40(iVar4,0,0x7ccb74,0x1c1);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

