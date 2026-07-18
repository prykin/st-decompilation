
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::GetMessage */

undefined4 __thiscall BldBoatPanelTy::GetMessage(BldBoatPanelTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  ProdPanelTy *this_00;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  undefined1 local_14;
  undefined3 uStack_13;
  undefined1 local_10;
  short sStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  ProdPanelTy *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  local_8 = (ProdPanelTy *)this;
  iVar4 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_bldboat_cpp_007c17b4,0xec,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    FUN_006a5e40(iVar4,0,0x7c17b4,0xec);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    ProdPanelTy::PreInitProdPanel(local_8);
  }
  ProdPanelTy::GetMessage(this_00,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xb203) {
    if (uVar1 == 0xb202) {
      ProdPanelTy::PaintTab(this_00,param_1,&LAB_00402e7d);
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    if (uVar1 == 2) {
      InitBldBoatPanel((BldBoatPanelTy *)this_00);
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    if (uVar1 == 3) {
      thunk_FUN_004eef20((int)this_00);
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    if (uVar1 == 0xb201) {
      this_00[0x279] = this_00[0x278];
      this_00[0x278] = (ProdPanelTy)(**(char **)(param_1 + 0x14) + -1);
      thunk_FUN_005252c0(0xae);
      (**(code **)(*(int *)this_00 + 0x1c))();
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
  }
  else {
    switch(uVar1) {
    case 0xc09f:
    case 0xc0a0:
    case 0xc0a1:
    case 0xc0a2:
    case 0xc0a3:
      iVar4 = *(int *)(this_00 + (uint)(byte)this_00[0x278] * 4 + 0x27a);
      if ((iVar4 == 0) || (*(uint *)(iVar4 + 0xc) <= (uVar1 + *(int *)(this_00 + 0x199)) - 0xc09f))
      {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)
                 ((uVar1 + *(int *)(this_00 + 0x199) + -0xc09f) * *(int *)(iVar4 + 8) +
                 *(int *)(iVar4 + 0x1c));
      }
      if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
        sStack_f = 0;
        uStack_d = 0;
        _local_14 = CONCAT31((int3)*puVar5,1);
        local_10 = (undefined1)((uint)*puVar5 >> 0x18);
        local_c = 0;
        local_a = 0;
        if (*(int *)(param_1 + 0x18) == 0) {
          uVar3 = GetAsyncKeyState(0x10);
          sStack_f = (-(ushort)((uVar3 & 0x8000) != 0) & 9) + 1;
        }
        else {
          uVar3 = GetAsyncKeyState(0x10);
          sStack_f = (-(ushort)((uVar3 & 0x8000) != 0) & 0xfff7) - 1;
        }
        uStack_d = 0xff;
        local_c = 0xffff;
        local_a = 0xff;
        thunk_FUN_0054edf0((undefined4 *)0x1e,(undefined4 *)&local_14,0,0xffffffff);
        thunk_FUN_005252c0(0xae);
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      break;
    case 0xc0a4:
      *(undefined4 *)(this_00 + 0x199) = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_004ef140(this_00);
      thunk_FUN_005252c0(0xae);
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    case 0xc0af:
    case 0xc0b0:
    case 0xc0b1:
    case 0xc0b2:
    case 0xc0b3:
      PaintBldBut((BldBoatPanelTy *)this_00,param_1);
    }
  }
  DAT_00858df8 = (undefined4 *)local_58;
  return 0;
}

