
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::IsAgAtt */

undefined4 __thiscall STGroupBoatC::IsAgAtt(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  uint uVar6;
  uint local_8;
  
  uVar6 = 0;
  uVar1 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      FUN_006acc70(*(int *)(this + 0x29),uVar5,&local_8);
      if ((short)local_8 != -1) {
        uVar5 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),this[0x24]),local_8,1);
        if (uVar5 == 0) {
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1758,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1759);
        }
        if (*(int *)(uVar5 + 0x7ea) == 0) {
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar6 & 0xffff;
    } while (uVar5 < uVar1);
  }
  return 1;
}

