
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::Update */

void __thiscall BehPanelTy::Update(BehPanelTy *this)

{
  code *pcVar1;
  BehPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  BehPanelTy *pBVar4;
  void *unaff_EDI;
  BehPanelTy *pBVar5;
  short *psVar6;
  bool bVar7;
  InternalExceptionFrame local_6c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  BehPanelTy local_16;
  int local_14;
  BehPanelTy *local_10;
  int local_c;
  BehPanelTy *local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = this;
  iVar2 = __setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0xb2,0,iVar2,&DAT_007a4ccc
                               ,s_BehPanelTy__Update_007c1758);
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0xb2);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_28 = *(int *)(local_10 + 0x1ab);
  local_24 = *(undefined4 *)(local_10 + 0x1af);
  local_20 = *(undefined4 *)(local_10 + 0x1b3);
  local_1c = *(undefined4 *)(local_10 + 0x1b7);
  local_18 = *(undefined2 *)(local_10 + 0x1bb);
  local_16 = local_10[0x1bd];
  thunk_FUN_0043beb0(DAT_007fa174,0xb,(int *)(local_10 + 0x1ab));
  local_8 = (BehPanelTy *)&local_24;
  local_14 = -0x1af - (int)this_00;
  pBVar5 = this_00 + 0x1af;
  pBVar4 = this_00 + 0x1cf;
  local_c = 6;
  do {
    *(undefined4 *)(this_00 + 0x28) = 0x54;
    *(uint *)(this_00 + 0x2c) = (uint)(byte)pBVar5[6];
    *(BehPanelTy **)(this_00 + 0x30) = pBVar5 + local_14;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1be),(undefined4 *)(this_00 + 0x18));
    if (*pBVar5 != *local_8) {
      pBVar4[-1] = (BehPanelTy)0x1;
      iVar2 = thunk_FUN_00525390(*pBVar5,*(int *)(this_00 + 0x1ab));
      *(int *)pBVar4 = iVar2;
      iVar2 = thunk_FUN_005272b0(*pBVar5);
      *(int *)(pBVar4 + 8) = iVar2;
      pBVar4[0xc] = (BehPanelTy)0x3;
    }
    pBVar4 = pBVar4 + 0x27;
    pBVar5 = pBVar5 + 1;
    local_8 = local_8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iVar2 = 3;
  bVar7 = true;
  pBVar5 = this_00 + 0x1af;
  psVar6 = (short *)&local_24;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *(short *)pBVar5 == *psVar6;
    pBVar5 = pBVar5 + 2;
    psVar6 = psVar6 + 1;
  } while (bVar7);
  if (!bVar7) {
    *(undefined4 *)(this_00 + 0x28) = 5;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1be),(undefined4 *)(this_00 + 0x18));
  }
  if (this_00[0x1bb] != local_18._0_1_) {
    *(uint *)(this_00 + 0x2c) = (uint)(byte)this_00[0x1bb];
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1c2),(undefined4 *)(this_00 + 0x18));
  }
  if (this_00[0x1bc] != local_18._1_1_) {
    *(uint *)(this_00 + 0x2c) = (uint)(byte)this_00[0x1bc];
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1c6),(undefined4 *)(this_00 + 0x18));
  }
  if (this_00[0x1bd] != local_16) {
    *(uint *)(this_00 + 0x2c) = (uint)(byte)this_00[0x1bd];
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1ca),(undefined4 *)(this_00 + 0x18));
  }
  g_currentExceptionFrame = local_6c.previous;
  return;
}

