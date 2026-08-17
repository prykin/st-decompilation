#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::SetGCType

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_SetGCType_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_46=70;CASE_47=71;CASE_48=72

   [STSwitchEnumApplier] Switch target field_0493 uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_0493State. Cases:
   CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00577280 -> 0054BF40 @ 00577358; /CursorClassTy+0xc5 | 005A4350 -> 0054BF40 @ 005A4EFF;
   /CursorClassTy+0xc5

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00577280 -> 0054BF40 @ 00577358; /CursorClassTy+0xc9 | 005A4350 -> 0054BF40 @ 005A4EFF;
   /CursorClassTy+0xc9 */

undefined4 __thiscall
CursorClassTy::SetGCType
          (CursorClassTy *this,CursorClassTy_SetGCType_param_1Enum param_1,int param_2,int param_3)

{
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar2;
  char *pcVar3;
  BITMAPINFO *pBVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_58;
  CursorClassTy *local_14;
  undefined4 local_10;
  BITMAPINFO *local_c;
  uint local_8;

  local_10 = 1;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x8ee,0,iVar2,
                               "%s","CursorClassTy::SetGCType");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x8f0);
    return local_10;
  }
  if (local_14->field_0494 == param_1) {
switchD_0054bfbc_caseD_20:
    g_currentExceptionFrame = local_58.previous;
    return local_10;
  }
  local_14->field_0494 = param_1;
  local_14->field_00C5 = param_2;
  local_14->field_00C9 = param_3;
  switch((uint)param_1) {
  case 0:
    switch(local_14->field_0493) {
    case CASE_1:
      pcVar3 = "CUR_MENU";
      break;
    default:
      pcVar3 = "CUR_ARROW";
      break;
    case CASE_3:
      pcVar3 = "CUR_TASK";
      break;
    case CASE_4:
      pcVar3 = "CUR_REPORT";
      break;
    case CASE_5:
      pcVar3 = "CUR_CLOCK";
    }
    iVar7 = -1;
    iVar6 = -1;
    if (local_14->field_0493 == CASE_5) {
      uVar5 = 0x12;
      pBVar4 = (BITMAPINFO *)0xd;
      uVar2 = 1000;
    }
    else {
      uVar5 = 0;
      pBVar4 = nullptr;
      uVar2 = 0x32;
    }
    goto cf_common_exit_0054C01C;
  case 1:
  case 6:
    iVar7 = 0x20;
    iVar6 = 0x3b;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = "CUR_CMD";
    goto cf_common_exit_0054C06F;
  case 2:
  case 7:
    iVar7 = 0x32;
    iVar6 = 0x43;
    uVar5 = 0x1d;
    pBVar4 = (BITMAPINFO *)0x27;
    pcVar3 = "CUR_FIRE";
    break;
  case 3:
    iVar7 = 0x1f;
    iVar6 = 0x35;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = "CUR_OWNBOAT";
    break;
  case 4:
    iVar7 = 0x1f;
    iVar6 = 0x35;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = "CUR_OWNOBJ";
    goto cf_common_exit_0054C06F;
  case 5:
  case 0x14:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0;
    pBVar4 = nullptr;
    pcVar3 = "CUR_ARROW";
    break;
  case 8:
    iVar7 = 0x39;
    iVar6 = 0x37;
    uVar5 = 0x26;
    pBVar4 = (BITMAPINFO *)0x25;
    pcVar3 = "CUR_DCBOMBER";
    goto cf_common_exit_0054C06F;
  case 9:
    iVar7 = 0x34;
    iVar6 = 0x43;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = "CUR_CAPTURE";
    break;
  case 10:
    iVar7 = 0x34;
    iVar6 = 0x43;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = "CUR_CAPTUREUSE";
    goto cf_common_exit_0054C06F;
  case 0xb:
    iVar7 = 0x34;
    iVar6 = 0x43;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = "CUR_CAPTUREACS";
    goto cf_common_exit_0054C01C;
  case 0xc:
  case 0x1f:
    iVar7 = 0x34;
    iVar6 = 0x43;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = "CUR_PARALISE";
    goto cf_common_exit_0054C01C;
  case 0xd:
  case 0xe:
    iVar7 = 0x2c;
    iVar6 = 0x41;
    uVar5 = 0x1d;
    pBVar4 = (BITMAPINFO *)0x2a;
    pcVar3 = "CUR_DEFENCE";
    goto cf_common_exit_0054C06F;
  case 0xf:
  case 0x10:
    iVar7 = 0x20;
    iVar6 = 0x3b;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = "CUR_PATROL";
    break;
  case 0x11:
    iVar7 = 0x20;
    iVar6 = 0x3b;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    uVar2 = 0x32;
    pcVar3 = "CUR_EQUIPM";
    goto cf_common_exit_0054C01C;
  case 0x12:
    iVar7 = 0x26;
    iVar6 = 0x43;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    pcVar3 = "CUR_RC";
    goto cf_common_exit_0054C06F;
  case 0x13:
    iVar7 = 0x28;
    iVar6 = 0x3c;
    uVar5 = 0x1e;
    pBVar4 = (BITMAPINFO *)0x28;
    uVar2 = 0x32;
    pcVar3 = "CUR_UNLOADRC";
    goto cf_common_exit_0054C01C;
  case 0x15:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x13;
    pBVar4 = (BITMAPINFO *)0x23;
    pcVar3 = "CUR_NOBUILD";
    goto cf_common_exit_0054C06F;
  case 0x16:
    iVar7 = 0x3a;
    iVar6 = 0x38;
    uVar5 = 0x26;
    pBVar4 = (BITMAPINFO *)0x25;
    uVar2 = 0x32;
    pcVar3 = "CUR_DISMANTLING";
    goto cf_common_exit_0054C01C;
  case 0x17:
  case 0x18:
    iVar7 = 0x28;
    iVar6 = 0x32;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x23;
    uVar2 = 0x32;
    pcVar3 = "CUR_REPAIR";
    goto cf_common_exit_0054C01C;
  case 0x19:
    iVar7 = 0x20;
    iVar6 = 0x3b;
    uVar5 = 0x14;
    pBVar4 = (BITMAPINFO *)0x22;
    uVar2 = 0x32;
    pcVar3 = "CUR_VIEW";
    goto cf_common_exit_0054C01C;
  case 0x1a:
  case 0x1e:
    iVar7 = 0x32;
    iVar6 = 0x34;
    uVar5 = 0x25;
    pBVar4 = (BITMAPINFO *)0x25;
    pcVar3 = "CUR_UNLOADCNT";
    break;
  case 0x1b:
    iVar7 = 0x21;
    iVar6 = 0x3a;
    uVar5 = 0x13;
    pBVar4 = (BITMAPINFO *)0x21;
    pcVar3 = "CUR_REPLENISH";
    break;
  case 0x1c:
    iVar7 = 0x1b;
    iVar6 = 0x56;
    uVar5 = 0x13;
    pBVar4 = (BITMAPINFO *)0x34;
    pcVar3 = "CUR_FORMATION";
    break;
  case 0x1d:
    iVar7 = 0x2e;
    iVar6 = 0x41;
    uVar5 = 0x23;
    pBVar4 = (BITMAPINFO *)0x28;
    pcVar3 = "CUR_TELEPORT";
    goto cf_common_exit_0054C06F;
  default:
    goto switchD_0054bfbc_caseD_20;
  case 0x32:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = "CUR_SUP";
    goto cf_common_exit_0054C06F;
  case 0x33:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = "CUR_SDN";
    goto cf_common_exit_0054C01C;
  case 0x34:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = "CUR_SRT";
    break;
  case 0x35:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x1b;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = "CUR_SLT";
    goto cf_common_exit_0054C06F;
  case 0x36:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x16;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = "CUR_SLU";
    goto cf_common_exit_0054C01C;
  case 0x37:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x16;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = "CUR_SRU";
    break;
  case 0x38:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x20;
    pBVar4 = (BITMAPINFO *)0x24;
    pcVar3 = "CUR_SLD";
cf_common_exit_0054C06F:
    /* ST_CALLSITE[0054C073]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    SetImages(local_14,1,pcVar3,0x32,pBVar4,uVar5,iVar6,iVar7);
    /* ST_CALLSITE[0054C088]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  case 0x39:
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 0x20;
    pBVar4 = (BITMAPINFO *)0x24;
    uVar2 = 0x32;
    pcVar3 = "CUR_SRD";
cf_common_exit_0054C01C:
    /* ST_CALLSITE[0054C020]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    SetImages(local_14,1,pcVar3,uVar2,pBVar4,uVar5,iVar6,iVar7);
    /* ST_CALLSITE[0054C035]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
    iVar6 = param_1 - 0x3c;
    switch(iVar6) {
    case 0:
    case 1:
      local_c = (BITMAPINFO *)0x22;
      break;
    case 2:
    case 5:
    case 7:
      local_c = (BITMAPINFO *)0x3f;
      break;
    case 3:
    case 4:
    case 6:
      local_c = (BITMAPINFO *)0x5;
      break;
    default:
      goto switchD_0054c0ac_default;
    }
    switch(iVar6) {
    case 0:
    case 4:
    case 5:
      local_8 = 4;
      break;
    case 1:
    case 6:
    case 7:
      local_8 = 0x22;
      break;
    case 2:
    case 3:
      local_8 = 0x14;
    }
switchD_0054c0ac_default:
    iVar7 = -1;
    iVar6 = -1;
    pcVar3 = "CUR_SNO";
    pBVar4 = local_c;
    uVar5 = local_8;
    break;
  case 0x46:
    /* ST_CALLSITE[0054C358]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    SetImages(local_14,1,"CUR_HYPER",0x32,(BITMAPINFO *)0xd,0,0x1b,0xf);
    /* ST_CALLSITE[0054C36D]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  case 0x47:
    /* ST_CALLSITE[0054C397]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
    SetImages(local_14,1,"CUR_HELPNO",0x32,(BITMAPINFO *)0x1,1,0x1d,0x30);
    /* ST_CALLSITE[0054C3AC]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  case 0x48:
    iVar7 = 0x1e;
    iVar6 = 0x36;
    pcVar3 = "CUR_HELPYES";
    pBVar4 = (BITMAPINFO *)0x20;
    uVar5 = 0x12;
  }
  /* ST_CALLSITE[0054C3D6]: CALL 0x0040376f; direct=0040376F CursorClassTy::SetImages */
  SetImages(local_14,1,pcVar3,0x32,pBVar4,uVar5,iVar6,iVar7);
  /* ST_CALLSITE[0054C3EB]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
  DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

