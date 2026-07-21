#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::GetMessage */

undefined4 __thiscall STRubbishC::GetMessage(STRubbishC *this,AnonShape_0041AF40_F59F8577 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  code *pcVar5;
  STGameObjC *this_00;
  int iVar6;
  STWorldObject *pSVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  AnonShape_0062FA80_0B91B2B9 *pAVar11;
  InternalExceptionFrame local_58;
  STGameObjC *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  AnonShape_0062E740_213F21A8 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = (STGameObjC *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar10 = ReportDebugMessage(s_E____titans_nick_to_Rubb_cpp_007d1798,0xa6,0,iVar6,&DAT_007a4ccc,
                                s_STRubbishC__GetMessage_007d17bc);
    if (iVar10 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_nick_to_Rubb_cpp_007d1798,0xa8);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar6 = STGameObjC::GetMessage(local_14,param_1);
  if (iVar6 == 0xffff) {
    return 0xffff;
  }
  uVar4 = param_1->field_0010;
  if (3 < uVar4) {
    if (uVar4 == 0x108) {
      iVar6 = thunk_FUN_004ab050();
      thunk_FUN_00630000(this_00,iVar6);
    }
    else if (uVar4 == 0x10f) {
      local_10 = (byte *)thunk_FUN_0062f940(this_00,(uint *)&local_c);
      STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_10,local_c);
      FreeAndNull(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar4 == 3) {
    thunk_FUN_0062f7a0((AnonShape_0062F7A0_700302F7 *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar4 == 0) {
    iVar6 = *(int *)((int)&this_00[1].field_0028 + 1);
    if (iVar6 == 1) {
      if ((*(char *)&this_00[1].field_0028 == '\0') &&
         (iVar6 = thunk_FUN_0062fea0(this_00,*(int *)&this_00[1].field_0x4,
                                     *(int *)&this_00[1].field_0x8), iVar6 != 0)) {
        thunk_FUN_0062fe00((STJellyGunC *)this_00);
        *(undefined1 *)&this_00[1].field_0028 = 1;
      }
      thunk_FUN_0062f150((AnonShape_0062F150_AF81DB77 *)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (iVar6 != 2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    thunk_FUN_0062f900((STJellyGunC *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar4 != 2) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar11 = (AnonShape_0062FA80_0B91B2B9 *)param_1->field_0014;
  local_8 = (AnonShape_0062E740_213F21A8 *)pAVar11;
  if (*(int *)&pAVar11->field_0xc == 2) {
    thunk_FUN_0062fa80(this_00,pAVar11);
    if (*(char *)&this_00[1].field_0028 == '\0') {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    thunk_FUN_0062fe00((STJellyGunC *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (((*(int *)&this_00[1].field_0x4 < 0) || (*(int *)&this_00[1].field_0x8 < 0)) ||
     (*(int *)&this_00[1].field_0xc < 0)) {
    iVar6 = pAVar11->field_0014;
    sVar1 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    *(int *)&this_00[1].field_0x4 = iVar6;
    iVar6 = pAVar11->field_0018;
    sVar1 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    *(int *)&this_00[1].field_0x8 = iVar6;
    iVar6 = pAVar11->field_001C;
    if (iVar6 < 0) {
      iVar6 = (short)(iVar6 / 200) + -1;
    }
    else {
      iVar6 = (int)(short)(iVar6 / 200);
    }
    *(int *)&this_00[1].field_0xc = iVar6;
    iVar6 = thunk_FUN_004961b0(*(short *)&this_00[1].field_0x4,*(short *)&this_00[1].field_0x8,
                               (short)iVar6);
    if (iVar6 != 0) {
      sVar1 = *(short *)&this_00[1].field_0x4;
      sVar2 = *(short *)&this_00[1].field_0xc;
      sVar3 = *(short *)&this_00[1].field_0x8;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
          ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar2)) {
        pSVar7 = (STWorldObject *)0x0;
      }
      else {
        pSVar7 = g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                  (int)sVar1].objects[1];
        pAVar11 = (AnonShape_0062FA80_0B91B2B9 *)local_8;
      }
      if ((pSVar7 == (STWorldObject *)0x0) &&
         (iVar6 = DumpClassC::WritePtr
                            ((short)*(undefined4 *)&this_00[1].field_0x4,
                             (short)*(undefined4 *)&this_00[1].field_0x8,
                             (short)*(undefined4 *)&this_00[1].field_0xc,1,
                             (AnonShape_00495EC0_95A268C6 *)this_00),
         pAVar11 = (AnonShape_0062FA80_0B91B2B9 *)local_8, iVar6 == 0)) {
        iVar6 = local_8->field_0014;
        sVar1 = (short)(iVar6 >> 0x1f);
        if (iVar6 < 0) {
          iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) -
                         (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                              (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
        }
        *(int *)&this_00[1].field_0x4 = iVar6;
        iVar10 = local_8->field_0018;
        sVar1 = (short)(iVar10 >> 0x1f);
        if (iVar10 < 0) {
          iVar10 = (short)(((short)(iVar10 / 0xc9) + sVar1) -
                          (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar1) -
                               (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
        }
        *(int *)&this_00[1].field_0x8 = iVar10;
        iVar8 = local_8->field_001C;
        sVar1 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 200) + sVar1) -
                         (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 200) + sVar1) -
                              (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
        }
        *(int *)&this_00[1].field_0xc = iVar8;
        iVar6 = thunk_FUN_0062fea0(this_00,iVar6,iVar10);
        *(char *)&this_00[1].field_0028 = (char)iVar6;
        goto LAB_0062ea02;
      }
    }
    thunk_FUN_0062f900((STJellyGunC *)this_00);
  }
LAB_0062ea02:
  iVar6 = thunk_FUN_0062fca0(this_00,(AnonShape_0062FCA0_22A9EE35 *)pAVar11);
  if (iVar6 == 0xffff) {
    return 0xffff;
  }
  *(undefined4 *)((int)&this_00[1].field_0028 + 1) = 1;
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

