
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::CloseSprBut */

void __thiscall MMsgTy::CloseSprBut(MMsgTy *this)

{
  code *pcVar1;
  MMObjTy *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  MMObjTy MVar5;
  MMObjTy MVar6;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 local_54;
  undefined4 local_50 [16];
  MMObjTy *local_10;
  uint local_c;
  uint local_8;
  
  MVar6 = (MMObjTy)0x0;
  local_c = local_c & 0xffffff00;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  local_10 = (MMObjTy *)this;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,unaff_EBX);
  this_00 = local_10;
  if (iVar2 == 0) {
    MMObjTy::CloseButtons(local_10);
    MVar5 = (MMObjTy)0x0;
    local_8 = local_8 & 0xffffff00;
    if (this_00[0x9a] != (MMObjTy)0x0) {
      do {
        uVar3 = local_8 & 0xff;
        *(undefined4 *)(this_00 + uVar3 * 0x1fb + 0x127) = *(undefined4 *)(this_00 + 0x61);
        *(uint *)(this_00 + uVar3 * 0x1fb + 0x123) = ((local_c & 0xff) + 1) * 100;
        if (*(int *)(this_00 + uVar3 * 0x1fb + 0xbc) != 0) {
          local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
        }
        MVar5 = (MMObjTy)((char)MVar5 + 1);
        local_8 = CONCAT31(local_8._1_3_,MVar5);
      } while ((byte)MVar5 < (byte)this_00[0x9a]);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00[0x9a] != (MMObjTy)0x0) {
      do {
        if (*(uint *)(this_00 + (local_8 & 0xff) * 0x1fb + 0x178) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + (local_8 & 0xff) * 0x1fb + 0x1bc),
                       *(uint *)(this_00 + (local_8 & 0xff) * 0x1fb + 0x178));
        }
        MVar6 = (MMObjTy)((char)MVar6 + 1);
        local_8 = CONCAT31(local_8._1_3_,MVar6);
      } while ((byte)MVar6 < (byte)this_00[0x9a]);
    }
    HidePanel((MMsgTy *)this_00,1,1,1);
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1d3,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ccb74,0x1d3);
  return;
}

