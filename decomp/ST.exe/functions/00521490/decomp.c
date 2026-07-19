
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
  SpecPanelTy *this_00;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  uint local_14;
  SpecPanelTy *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = (SpecPanelTy *)this;
  iVar7 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x11e,0,iVar7,&DAT_007a4ccc
                               ,s_InfocPanelTy__GetMessage_007c3ffc);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return uVar10;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x11e);
    return 0xffff;
  }
  SpecPanelTy::GetMessage(local_10,param_1);
  uVar11 = *(uint *)(param_1 + 0x10);
  if (uVar11 < 0x61) {
    if (uVar11 == 0x60) {
      iVar7 = 0;
      local_14 = (uint)*(ushort *)(param_1 + 0x1a);
      local_c = 0;
      if (*(short *)&this_00->field_0x172 == 1) {
        local_8 = local_8 & 0xffffff00;
        do {
          iVar7 = (local_8 & 0xff) * 0x14;
          if (((((int)(uint)*(ushort *)(param_1 + 0x18) <
                 *(int *)(&this_00[1].field_0x14f + (local_8 & 0xff) * 0x14)) ||
               (*(int *)(&this_00[1].field_0x157 + iVar7) +
                *(int *)(&this_00[1].field_0x14f + (local_8 & 0xff) * 0x14) <=
                (int)(uint)*(ushort *)(param_1 + 0x18))) ||
              ((int)local_14 < *(int *)(&this_00[1].field_0x153 + iVar7))) ||
             (*(int *)(&this_00[1].field_0x15b + iVar7) + *(int *)(&this_00[1].field_0x153 + iVar7)
              <= (int)local_14)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          iVar7 = 0;
          if (bVar4) {
            iVar7 = *(int *)(&this_00[1].field_0x15f + (local_8 & 0xff) * 0x14);
            break;
          }
          bVar6 = (char)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar6);
        } while (bVar6 < 0xc);
      }
      iVar9 = *(int *)&this_00->field_0x178;
      if (iVar9 != iVar7) {
        if (iVar9 != 0) {
          this_00->field_0028 = 0x4202;
          *(undefined2 *)&this_00->field_0x2c = 0;
          this_00->field_002E = 2;
          *(int *)&this_00->field_0x30 = iVar9;
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(&this_00->field_0x18);
          }
        }
        *(int *)&this_00->field_0x178 = iVar7;
        if (iVar7 != 0) {
          this_00->field_0028 = 0x4201;
          *(undefined2 *)&this_00->field_0x2c = 0;
          this_00->field_002E = 2;
          *(int *)&this_00->field_0x30 = iVar7;
          (**(code **)*DAT_00802a30)(&this_00->field_0x18);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else {
      if (uVar11 == 2) {
        InitInfocPanel((InfocPanelTy *)this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (uVar11 == 3) {
        DoneInfocPanel((InfocPanelTy *)this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (uVar11 == 0xb208) {
    this_00[2].field_0xca = **(char **)(param_1 + 0x14) + -1;
    PaintInfoc((InfocPanelTy *)this_00);
  }
  else if (uVar11 == 0xb209) {
    piVar1 = *(int **)(param_1 + 0x14);
    iVar7 = piVar1[3];
    iVar9 = *(int *)&this_00->field_0x3c;
    bVar6 = (&this_00[1].field_0x26)[*piVar1];
    uVar11 = (DAT_0080874e != '\x03') - 1 & 0x11;
    local_c = CONCAT31(local_c._1_3_,bVar6);
    iVar2 = piVar1[4];
    iVar5 = DAT_00806734;
    if (this_00->field_005C != 0) {
      iVar5 = *(int *)&this_00->field_0x44;
    }
    if (piVar1[1] == 0) {
      if (bVar6 != 0xff) {
        uVar11 = bVar6 + 1;
      }
    }
    else if ((piVar1[1] == 1) && (bVar6 != 0xff)) {
      uVar11 = bVar6 + 9;
    }
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)&this_00[2].field_0xba,uVar11);
    thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,iVar7 - iVar9,iVar2 - iVar5,'\x01',
                       pbVar8);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)&this_00->field_0x60,0xffffffff,*(uint *)&this_00->field_0x3c,
               *(uint *)&this_00->field_0x44);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

