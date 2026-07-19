
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::GetMessage */

undefined4 __thiscall InfocPanelTy::GetMessage(InfocPanelTy *this,int param_1)

{
  SpecPanelTy SVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  SpecPanelTy *this_00;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
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
  iVar8 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x11e,0,iVar8,
                                &DAT_007a4ccc,s_InfocPanelTy__GetMessage_007c3ffc);
    if (iVar10 != 0) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return uVar11;
    }
    RaiseInternalException(iVar8,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x11e);
    return 0xffff;
  }
  SpecPanelTy::GetMessage(local_10,param_1);
  uVar12 = *(uint *)(param_1 + 0x10);
  if (uVar12 < 0x61) {
    if (uVar12 == 0x60) {
      iVar8 = 0;
      local_14 = (uint)*(ushort *)(param_1 + 0x1a);
      local_c = 0;
      if (*(short *)(this_00 + 0x172) == 1) {
        local_8 = local_8 & 0xffffff00;
        do {
          iVar8 = (local_8 & 0xff) * 0x14;
          if (((((int)(uint)*(ushort *)(param_1 + 0x18) <
                 *(int *)(this_00 + (local_8 & 0xff) * 0x14 + 0x2d4)) ||
               (*(int *)(this_00 + iVar8 + 0x2dc) +
                *(int *)(this_00 + (local_8 & 0xff) * 0x14 + 0x2d4) <=
                (int)(uint)*(ushort *)(param_1 + 0x18))) ||
              ((int)local_14 < *(int *)(this_00 + iVar8 + 0x2d8))) ||
             (*(int *)(this_00 + iVar8 + 0x2e0) + *(int *)(this_00 + iVar8 + 0x2d8) <= (int)local_14
             )) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          iVar8 = 0;
          if (bVar5) {
            iVar8 = *(int *)(this_00 + ((local_8 & 0xff) + 0x25) * 0x14);
            break;
          }
          bVar7 = (char)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar7);
        } while (bVar7 < 0xc);
      }
      iVar10 = *(int *)(this_00 + 0x178);
      if (iVar10 != iVar8) {
        if (iVar10 != 0) {
          *(undefined4 *)(this_00 + 0x28) = 0x4202;
          *(undefined2 *)(this_00 + 0x2c) = 0;
          *(undefined2 *)(this_00 + 0x2e) = 2;
          *(int *)(this_00 + 0x30) = iVar10;
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(this_00 + 0x18);
          }
        }
        *(int *)(this_00 + 0x178) = iVar8;
        if (iVar8 != 0) {
          *(undefined4 *)(this_00 + 0x28) = 0x4201;
          *(undefined2 *)(this_00 + 0x2c) = 0;
          *(undefined2 *)(this_00 + 0x2e) = 2;
          *(int *)(this_00 + 0x30) = iVar8;
          (**(code **)*DAT_00802a30)(this_00 + 0x18);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else {
      if (uVar12 == 2) {
        InitInfocPanel((InfocPanelTy *)this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (uVar12 == 3) {
        DoneInfocPanel((InfocPanelTy *)this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (uVar12 == 0xb208) {
    this_00[0x3d4] = (SpecPanelTy)(**(char **)(param_1 + 0x14) + -1);
    PaintInfoc((InfocPanelTy *)this_00);
  }
  else if (uVar12 == 0xb209) {
    piVar2 = *(int **)(param_1 + 0x14);
    iVar8 = piVar2[3];
    iVar10 = *(int *)(this_00 + 0x3c);
    SVar1 = this_00[*piVar2 + 0x1ab];
    uVar12 = (DAT_0080874e != '\x03') - 1 & 0x11;
    local_c = CONCAT31(local_c._1_3_,SVar1);
    iVar3 = piVar2[4];
    iVar6 = DAT_00806734;
    if (*(int *)(this_00 + 0x5c) != 0) {
      iVar6 = *(int *)(this_00 + 0x44);
    }
    if (piVar2[1] == 0) {
      if (SVar1 != (SpecPanelTy)0xff) {
        uVar12 = (byte)SVar1 + 1;
      }
    }
    else if ((piVar2[1] == 1) && (SVar1 != (SpecPanelTy)0xff)) {
      uVar12 = (byte)SVar1 + 9;
    }
    pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x3c4),uVar12);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),iVar8 - iVar10,iVar3 - iVar6,'\x01',pbVar9);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
               *(uint *)(this_00 + 0x44));
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

