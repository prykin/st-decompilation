
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DoneSettMap */

void __thiscall SettMapMTy::DoneSettMap(SettMapMTy *this)

{
  code *pcVar1;
  SettMapTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  uint uVar4;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  SettMapTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = (SettMapTy *)this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x65,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cd258,0x65);
    return;
  }
  if (*(int *)(local_8 + 0x2204) != 0) {
    FUN_006ab060((undefined4 *)(local_8 + 0x2204));
  }
  FUN_006b3bb0(DAT_008075a8,*(uint *)(this_00 + 0x2200));
  iVar2 = *(int *)(this_00 + 0x2237);
  *(undefined4 *)(this_00 + 0x2200) = 0xffffffff;
  if (iVar2 != 0) {
    uVar4 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar2 = 0;
        goto LAB_005cc360;
      }
      do {
        iVar2 = *(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c);
LAB_005cc360:
        if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
          FUN_006ab060((undefined4 *)(iVar2 + 8));
        }
        iVar2 = *(int *)(this_00 + 0x2237);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110(*(byte **)(this_00 + 0x2237));
    *(undefined4 *)(this_00 + 0x2237) = 0;
  }
  SettMapTy::DoneSettMap(this_00);
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

