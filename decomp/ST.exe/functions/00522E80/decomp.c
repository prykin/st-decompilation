
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::GetMessage */

undefined4 __thiscall IntercomPanelTy::GetMessage(IntercomPanelTy *this,int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  code *pcVar3;
  PanelTy *this_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar9;
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
  PanelTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = (PanelTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x197,0,iVar4,
                               &DAT_007a4ccc,s_IntercomPanelTy__GetMessage_007c41a0);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x197);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    PreInitIntercomPanel((IntercomPanelTy *)local_c);
  }
  PanelTy::GetMessage(this_00,param_1);
  uVar8 = *(uint *)(param_1 + 0x10);
  if (uVar8 < 0xc0a0) {
    if (uVar8 != 0xc09f) {
      if (uVar8 == 0) {
        if (*(short *)&this_00[3].field_0x52 == 3) {
          iVar4 = *(int *)&this_00[4].field_0xc;
          if (*(int *)&this_00->field_0x44 < iVar4) {
            *(int *)&this_00->field_0x44 = *(int *)&this_00->field_0x44 + 5;
          }
          if (iVar4 <= *(int *)&this_00->field_0x44) {
            piVar9 = local_8dc;
            for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar9 = 0;
              piVar9 = piVar9 + 1;
            }
            iVar7 = *(int *)(this_00 + 4);
            *(int *)&this_00->field_0x44 = iVar4;
            *(undefined2 *)&this_00[3].field_0x52 = 1;
            local_8dc[0] = 1;
            local_8dc[1] = 9;
            local_8dc[2] = iVar7;
            if (*(int *)(iVar7 + 0xa0) != 0) {
              FUN_00710790(iVar7);
            }
            local_8c4 = *(int *)(iVar7 + 0x8a) + 1;
            local_8dc[3] = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe7) + 0x1e +
                           this_00->field_003C;
            local_7c = 1;
            local_80 = 1;
            local_8cc = (0x14 - local_8c4) / 2 + 5 + *(int *)&this_00->field_0x44;
            local_8b0 = *(undefined4 *)&this_00->field_0x8;
            local_8c8 = (-(uint)(DAT_0080874e != '\x03') & 0x32) + 700;
            local_8bc = *(undefined4 *)&this_00[4].field_0x18;
            local_8ac = 2;
            local_88c = 2;
            local_84c = 2;
            local_8c0 = 0x104;
            local_8a8 = 0xc0a0;
            local_888 = 0xc0af;
            local_848 = 0xc09f;
            local_890 = local_8b0;
            local_850 = local_8b0;
            (**(code **)(**(int **)&this_00->field_0xc + 8))(6,&this_00[4].field_0x20,0,local_8dc,1)
            ;
          }
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + 1),0xffffffff,this_00->field_003C,
                     *(uint *)&this_00->field_0x44);
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (*(short *)&this_00[3].field_0x52 != 4) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        iVar4 = *(int *)&this_00[4].field_0xc - *(int *)&this_00->field_0x48;
        if (iVar4 < *(int *)&this_00->field_0x44) {
          *(int *)&this_00->field_0x44 = *(int *)&this_00->field_0x44 + -5;
        }
        if (*(int *)&this_00->field_0x44 <= iVar4) {
          *(int *)&this_00->field_0x44 = iVar4;
          *(undefined2 *)&this_00[3].field_0x52 = 2;
          this_00[3].field_005C = 0;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 1),0xffffffff,this_00->field_003C,
                   *(uint *)&this_00->field_0x44);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (uVar8 == 2) {
        InitIntercomPanel((IntercomPanelTy *)this_00);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (uVar8 != 3) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      DoneIntercomPanel((IntercomPanelTy *)this_00);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    thunk_FUN_00521cf0((int)this_00);
    Library::DKW::TBL::FUN_006b6020(*(int *)&this_00[4].field_0x18,0,&DAT_008016a0);
    uVar6 = *(undefined4 *)&this_00[4].field_0x20;
    uVar2 = *(undefined4 *)&this_00[4].field_0x18;
    *(undefined4 *)&this_00->field_0x28 = 0x33;
    *(undefined4 *)&this_00->field_0x2c = uVar2;
    FUN_006e6080(this_00,2,uVar6,(undefined4 *)&this_00->field_0x18);
  }
  else if (uVar8 != 0xc0a0) {
    if (uVar8 != 0xc0af) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    iVar4 = *(int *)&this_00[4].field_0x1c;
    local_8 = *(uint *)(iVar4 + 0x14);
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar4 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 4),*(int *)&this_00[4].field_0x1c,0,0,0,0,0);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 4),(uint *)**(undefined4 **)(param_1 + 0x14),0,-1,0);
    uVar1 = *(ushort *)(param_1 + 0x18);
    if ((uVar1 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
      FUN_006b5b10(*(int *)&this_00[4].field_0x1c,0,(uint)uVar1,*(ushort *)(param_1 + 0x1a) + 1,
                   (uint)uVar1,
                   *(int *)(*(int *)&this_00[4].field_0x1c + 8) + -3 +
                   (uint)*(ushort *)(param_1 + 0x1a),0x6c,0xd);
    }
    iVar4 = *(int *)&this_00[4].field_0x1c;
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)&this_00[1].field_0x8,0,
               (-(uint)(DAT_0080874e != '\x03') & 0xffffffe7) + 0x1e,5,iVar4,0,0,0,
               *(int *)(iVar4 + 4),*(int *)(iVar4 + 8));
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(this_00 + 1),0xffffffff,this_00->field_003C,
               *(uint *)&this_00->field_0x44);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  if (*(short *)&this_00[3].field_0x52 == 1) {
    SwitchIntercomPanel((IntercomPanelTy *)this_00,0);
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

