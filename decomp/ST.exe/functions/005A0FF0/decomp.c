
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoLogon */

void __thiscall FSGSTy::DoLogon(FSGSTy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *pFVar4;
  int iVar5;
  int iVar6;
  void *unaff_ESI;
  undefined4 uVar7;
  undefined4 local_58 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  FSGSTy *local_8;
  
  uVar7 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffa4;
  local_8 = this;
  iVar5 = __setjmp3(local_58,0,unaff_ESI,uVar7);
  this_00 = DAT_00802a30;
  if (iVar5 == 0) {
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(this_00 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(this_00,0,uVar2,uVar1);
      CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
      this_00[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
    }
    pFVar4 = local_8;
    (**(code **)(*(int *)local_8 + 8))();
    pFVar4[0x1a61] = (FSGSTy)0x2;
    iVar5 = *(int *)(pFVar4 + 0x1a5b);
    if (*(int *)(iVar5 + 0x2e6) != 0) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      thunk_FUN_005b8f40(*(void **)(iVar5 + 0x2e6),&local_18);
    }
    DAT_00858df8 = (undefined1 *)uVar7;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar7;
  iVar6 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x918,0,iVar5,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar5,0,0x7cbf70,0x918);
  return;
}

