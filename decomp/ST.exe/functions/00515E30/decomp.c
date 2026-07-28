#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::AddLinks */

void __thiscall
HelpPanelTy::AddLinks(HelpPanelTy *this,int *param_1,char param_2,int param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_88;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34;
  int local_33;
  int local_2f;
  undefined4 local_28;
  uint local_24;
  HelpPanelTy *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  char local_5;

  local_28 = *(undefined4 *)(this->field_024C + 4);
  local_18 = *(int *)(this->field_024C + 2);
  local_14 = 1;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_20 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  this_00 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_88.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x460,0,iVar3,"%s"
                               ,"HelpPanelTy::AddLinks");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x460);
    return;
  }
  if (DAT_007e68a0 != '\0') {
    pcVar6 = &DAT_007e68a0;
    local_10 = &DAT_007e68a5;
    do {
      if (((*pcVar6 == param_2) && (local_10[-1] == param_3)) && (*local_10 == param_4)) {
        local_c = (int *)((int)local_10 + 5);
        local_1c = 1;
LAB_00515ee1:
        if ((*(char *)((int)local_c + -1) != '\0') && (uVar7 = 0, *local_c != 0)) {
          if (local_14 != 0) {
            CheckBkView(this_00,*param_1,0xf);
            ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,*param_1,0x19c,0xf);
            uVar10 = 3;
            iVar9 = -1;
            iVar3 = -1;
            puVar4 = (uint *)LoadResourceString(0x55f6,g_module_00807618);
            ccFntTy::WrStr(this_00->field_01E0,puVar4,iVar3,iVar9,uVar10);
            local_14 = 0;
            *param_1 = *param_1 + 0xf;
          }
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0x50,*param_1 + 1,'\x01',
                 (byte *)this_00->field_024C);
          local_24 = *(uint *)sizeHelp_exref;
          if (local_24 != 0) {
            local_5 = *(char *)((int)local_c + -1);
            piVar5 = (int *)(this_00->field_01C7 + 9);
            do {
              if (((*(char *)((int)piVar5 + -1) == local_5) && (*piVar5 == *local_c)) &&
                 (piVar5[1] == local_c[1])) {
                ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,local_18 + 0x5f,
                                 *param_1,0x13d - local_18,0xf);
                pcVar6 = LoadResourceString(*(UINT *)(uVar7 * 0x11 + this_00->field_01C7),
                                            g_module_00807618);
                uVar7 = 0xffffffff;
                goto code_r0x00516013;
              }
              uVar7 = uVar7 + 1;
              piVar5 = (int *)((int)piVar5 + 0x11);
            } while (uVar7 < local_24);
          }
          goto LAB_0051607e;
        }
      }
LAB_005160da:
      piVar5 = (int *)((int)local_10 + 0x36);
      pcVar8 = (char *)((int)local_10 + 0x31);
      pcVar6 = (char *)((int)local_10 + 0x31);
      local_10 = piVar5;
    } while (*pcVar8 != '\0');
  }
  CheckBkView(this_00,*param_1,10);
  iVar3 = (*param_1 / 10 + 1) * 10;
  *param_1 = iVar3;
  iVar3 = ((ushort)this_00->field_01AF - 0x118) + iVar3;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 / (int)(uint)(ushort)this_00->field_01B1 + 1;
  }
  CreateSlider(this_00,iVar3);
  Library::DKW::WGR::FUN_006b5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (int)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF,0xff);
  Library::DKW::DDX::FUN_006b3640
            ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
             this_00->field_0044);
  g_currentExceptionFrame = local_88.previous;
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
    if (cVar1 == '\0') break;
code_r0x00516013:
    pcVar8 = pcVar6;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  pcVar6 = pcVar8 + -uVar7;
  pcVar8 = (char *)&DAT_0080f33a;
  for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  for (puVar4 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar4 != (uint *)0x0;
      puVar4 = Library::MSVCRT::FUN_0072e560(puVar4,'\n')) {
    *(undefined1 *)puVar4 = 0x20;
  }
  ccFntTy::WrStr(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
LAB_0051607e:
  local_40 = *param_1;
  local_3c = local_18;
  local_34 = *(undefined1 *)((int)local_c + -1);
  local_38 = local_28;
  local_33 = *local_c;
  local_2f = local_c[1];
  local_44 = 0x50;
  Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,&local_44);
  local_1c = local_1c + 1;
  local_c = (int *)((int)local_c + 9);
  *param_1 = *param_1 + 0xf;
  if (5 < local_1c) goto LAB_005160da;
  goto LAB_00515ee1;
}

