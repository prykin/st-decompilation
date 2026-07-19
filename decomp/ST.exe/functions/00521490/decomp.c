
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::GetMessage */

undefined4 __thiscall InfocPanelTy::GetMessage(InfocPanelTy *this,int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  InfocPanelTy *this_00;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  uint local_14;
  InfocPanelTy *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x11e,0,iVar7,
                                &DAT_007a4ccc,s_InfocPanelTy__GetMessage_007c3ffc);
    if (iVar10 != 0) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return uVar11;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x11e);
    return 0xffff;
  }
  SpecPanelTy::GetMessage((SpecPanelTy *)local_10,param_1);
  uVar8 = *(uint *)(param_1 + 0x10);
  if (uVar8 < 0x61) {
    if (uVar8 == 0x60) {
      iVar7 = 0;
      local_14 = (uint)*(ushort *)(param_1 + 0x1a);
      local_c = 0;
      if (*(short *)&this_00->field_0x172 == 1) {
        local_8 = local_8 & 0xffffff00;
        do {
          uVar8 = local_8 & 0xff;
          if (((((int)(uint)*(ushort *)(param_1 + 0x18) < (int)(&this_00->field_02D4)[uVar8 * 5]) ||
               ((int)((&this_00->field_02DC)[uVar8 * 5] + (&this_00->field_02D4)[uVar8 * 5]) <=
                (int)(uint)*(ushort *)(param_1 + 0x18))) ||
              ((int)local_14 < (int)(&this_00->field_02D8)[uVar8 * 5])) ||
             ((int)((&this_00->field_02E0)[uVar8 * 5] + (&this_00->field_02D8)[uVar8 * 5]) <=
              (int)local_14)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          iVar7 = 0;
          if (bVar4) {
            iVar7 = (&this_00->field_02E4)[(local_8 & 0xff) * 5];
            break;
          }
          bVar6 = (char)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar6);
        } while (bVar6 < 0xc);
      }
      iVar10 = *(int *)&this_00->field_0x178;
      if (iVar10 != iVar7) {
        if (iVar10 != 0) {
          this_00->field_0028 = 0x4202;
          this_00->field_002C = 0;
          this_00->field_002E = 2;
          *(int *)&this_00->field_0x30 = iVar10;
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(&this_00->field_0x18);
          }
        }
        *(int *)&this_00->field_0x178 = iVar7;
        if (iVar7 != 0) {
          this_00->field_0028 = 0x4201;
          this_00->field_002C = 0;
          this_00->field_002E = 2;
          *(int *)&this_00->field_0x30 = iVar7;
          (**(code **)*DAT_00802a30)(&this_00->field_0x18);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else {
      if (uVar8 == 2) {
        InitInfocPanel(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (uVar8 == 3) {
        DoneInfocPanel(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (uVar8 == 0xb208) {
    this_00->field_03D4 = **(char **)(param_1 + 0x14) + -1;
    PaintInfoc(this_00);
  }
  else if (uVar8 == 0xb209) {
    piVar1 = *(int **)(param_1 + 0x14);
    iVar7 = piVar1[3];
    iVar10 = this_00->field_003C;
    bVar6 = (&this_00->field_01AB)[*piVar1];
    uVar8 = (DAT_0080874e != '\x03') - 1 & 0x11;
    local_c = CONCAT31(local_c._1_3_,bVar6);
    iVar2 = piVar1[4];
    iVar5 = DAT_00806734;
    if (this_00->field_005C != 0) {
      iVar5 = this_00->field_0044;
    }
    if (piVar1[1] == 0) {
      if (bVar6 != 0xff) {
        uVar8 = bVar6 + 1;
      }
    }
    else if ((piVar1[1] == 1) && (bVar6 != 0xff)) {
      uVar8 = bVar6 + 9;
    }
    pbVar9 = (byte *)FUN_0070b3a0(this_00->field_03C4,uVar8);
    DibPut((undefined4 *)this_00->field_0068,iVar7 - iVar10,iVar2 - iVar5,'\x01',pbVar9);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)&this_00->field_0x60,0xffffffff,this_00->field_003C,
               this_00->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

