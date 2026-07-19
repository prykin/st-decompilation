
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::GetMessage */

undefined4 __thiscall IntercomPanelTy::GetMessage(IntercomPanelTy *this,int param_1)

{
  ushort uVar1;
  code *pcVar2;
  IntercomPanelTy *this_00;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar8;
  int local_8dc [4];
  int local_8cc;
  int local_8c8;
  int local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_80;
  undefined4 local_7c;
  InternalExceptionFrame local_50;
  IntercomPanelTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x197,0,iVar3,
                               &DAT_007a4ccc,s_IntercomPanelTy__GetMessage_007c41a0);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x197);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    PreInitIntercomPanel(local_c);
  }
  PanelTy::GetMessage((PanelTy *)this_00,param_1);
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 < 0xc0a0) {
    if (uVar7 != 0xc09f) {
      if (uVar7 == 0) {
        if (*(short *)(this_00 + 0x172) == 3) {
          iVar3 = *(int *)(this_00 + 0x18c);
          if (*(int *)(this_00 + 0x44) < iVar3) {
            *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x44) + 5;
          }
          if (iVar3 <= *(int *)(this_00 + 0x44)) {
            piVar8 = local_8dc;
            for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar8 = 0;
              piVar8 = piVar8 + 1;
            }
            iVar6 = *(int *)(this_00 + 0x180);
            *(int *)(this_00 + 0x44) = iVar3;
            *(undefined2 *)(this_00 + 0x172) = 1;
            local_8dc[0] = 1;
            local_8dc[1] = 9;
            local_8dc[2] = iVar6;
            if (*(int *)(iVar6 + 0xa0) != 0) {
              FUN_00710790(iVar6);
            }
            local_8c4 = *(int *)(iVar6 + 0x8a) + 1;
            local_8dc[3] = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe7) + 0x1e +
                           *(int *)(this_00 + 0x3c);
            local_7c = 1;
            local_80 = 1;
            local_8cc = (0x14 - local_8c4) / 2 + 5 + *(int *)(this_00 + 0x44);
            local_8b0 = *(undefined4 *)(this_00 + 8);
            local_8c8 = (-(uint)(DAT_0080874e != '\x03') & 0x32) + 700;
            local_8bc = *(undefined4 *)(this_00 + 0x198);
            local_8ac = 2;
            local_88c = 2;
            local_84c = 2;
            local_8c0 = 0x104;
            local_8a8 = 0xc0a0;
            local_888 = 0xc0af;
            local_848 = 0xc09f;
            local_890 = local_8b0;
            local_850 = local_8b0;
            (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1a0,0,local_8dc,1);
          }
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                     *(uint *)(this_00 + 0x44));
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (*(short *)(this_00 + 0x172) != 4) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        iVar3 = *(int *)(this_00 + 0x18c) - *(int *)(this_00 + 0x48);
        if (iVar3 < *(int *)(this_00 + 0x44)) {
          *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x44) + -5;
        }
        if (*(int *)(this_00 + 0x44) <= iVar3) {
          *(int *)(this_00 + 0x44) = iVar3;
          *(undefined2 *)(this_00 + 0x172) = 2;
          *(undefined4 *)(this_00 + 0x17c) = 0;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                   *(uint *)(this_00 + 0x44));
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (uVar7 == 2) {
        InitIntercomPanel(this_00);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (uVar7 != 3) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      DoneIntercomPanel(this_00);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    thunk_FUN_00521cf0((int)this_00);
    Library::DKW::TBL::FUN_006b6020(*(int *)(this_00 + 0x198),0,&DAT_008016a0);
    *(undefined4 *)(this_00 + 0x28) = 0x33;
    *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this_00 + 0x198);
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1a0),(undefined4 *)(this_00 + 0x18));
  }
  else if (uVar7 != 0xc0a0) {
    if (uVar7 != 0xc0af) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    iVar3 = *(int *)(this_00 + 0x19c);
    local_8 = *(uint *)(iVar3 + 0x14);
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x180),*(int *)(this_00 + 0x19c),0,0,0,0,0);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x180),(uint *)**(undefined4 **)(param_1 + 0x14),0,-1,0);
    uVar1 = *(ushort *)(param_1 + 0x18);
    if ((uVar1 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
      FUN_006b5b10(*(int *)(this_00 + 0x19c),0,(uint)uVar1,*(ushort *)(param_1 + 0x1a) + 1,
                   (uint)uVar1,
                   *(int *)(*(int *)(this_00 + 0x19c) + 8) + -3 + (uint)*(ushort *)(param_1 + 0x1a),
                   0x6c,0xd);
    }
    iVar3 = *(int *)(this_00 + 0x19c);
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x68),0,
               (-(uint)(DAT_0080874e != '\x03') & 0xffffffe7) + 0x1e,5,iVar3,0,0,0,
               *(int *)(iVar3 + 4),*(int *)(iVar3 + 8));
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
               *(uint *)(this_00 + 0x44));
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  if (*(short *)(this_00 + 0x172) == 1) {
    SwitchIntercomPanel(this_00,0);
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

