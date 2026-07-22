#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::Update */

void __thiscall InfocPanelTy::Update(InfocPanelTy *this)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  InfocPanelTy *this_00;
  char cVar5;
  int iVar6;
  UINT resourceId;
  uint *resourceString;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 local_188 [75];
  InternalExceptionFrame local_5c;
  byte local_18;
  undefined3 uStack_17;
  InfocPanelTy *local_14;
  uint local_10;
  byte *local_c;
  byte local_5;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\infocen.cpp",0x99,0,iVar6,"%s"
                                ,"InfocPanelTy::Update");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\infocen.cpp",0x99);
    return;
  }
  puVar1 = &local_14->field_01AB;
  puVar8 = (undefined4 *)puVar1;
  puVar9 = local_188;
  for (iVar6 = 0x4a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
  STAllPlayersC::GetPanelInfo(g_allPlayers_007FA174,9,(AnonShape_0043BEB0_1C00EC12 *)puVar1);
  if (this_00->field_01AB == 0) {
    this_00->field_03D4 = 0xff;
  }
  else if (this_00->field_03D4 == 0xff) {
    this_00->field_03D4 = 0;
  }
  else if ((byte)this_00->field_01AB <= (byte)this_00->field_03D4) {
    this_00->field_03D4 = 0;
  }
  memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
  pbVar10 = &this_00->field_01AC;
  this_00->field_0028 = 0x23;
  local_5 = 0;
  local_10 = 0x23;
  do {
    uVar7 = local_10;
    this_00->field_002C = local_5 + 1;
    if (local_5 < (byte)this_00->field_01AB) {
      if (local_5 == this_00->field_03D4) {
        this_00->field_002E = 1;
      }
      else {
        this_00->field_002E = 0;
      }
    }
    else {
      this_00->field_002E = 2;
    }
    local_c = pbVar10;
    FUN_006e6080(this_00,2,this_00->field_03D0,(undefined4 *)&this_00->field_0x18);
    if (*pbVar10 != 0xff) {
      if (DAT_0080874e == '\x03') {
        cVar5 = 's';
      }
      else {
        cVar5 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0x30,uVar7,0x22,0xc,cVar5);
      if (local_5 < (byte)this_00->field_01AB) {
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x31,uVar7,0x10,0xc);
        cVar5 = (&DAT_008087e8)[(uint)*pbVar10 * 0x51];
        if (cVar5 == '\x01') {
          resourceId = 0x2742;
        }
        else if (cVar5 == '\x02') {
          resourceId = 0x2743;
        }
        else if (cVar5 == '\x03') {
          resourceId = 0x2745;
        }
        else {
          resourceId = 10000;
        }
        uVar12 = 0;
        iVar11 = -1;
        iVar6 = -1;
        resourceString = (uint *)LoadResourceString(resourceId,g_module_00807618);
        ccFntTy::WrStr(this_00->field_0189,resourceString,iVar6,iVar11,uVar12);
      }
      if (DAT_00808a8f == '\0') {
        iVar6 = -1;
        bVar2 = *local_c;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_18 = CONCAT31(uStack_17,bVar2);
        if (DAT_0080874d == bVar2) {
LAB_00520987:
          uVar12 = 0;
        }
        else {
          uVar7 = (uint)DAT_0080874d;
          bVar3 = g_playerRelationMatrix[uVar7][bVar2];
          if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][uVar7] == 0)) {
            uVar12 = 0xfffffffe;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][uVar7] == 0)) {
            uVar12 = 0xffffffff;
          }
          else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][uVar7] == 1)) {
            uVar12 = 1;
          }
          else {
            if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][uVar7] != 1)) goto LAB_00520987;
            uVar12 = 2;
          }
        }
        switch(uVar12) {
        case 1:
          iVar6 = 1;
          break;
        case 2:
          iVar6 = 3;
          break;
        case 0xfffffffe:
          iVar6 = 0;
          break;
        case 0xffffffff:
          iVar6 = 2;
        }
        uVar7 = local_10;
        if (-1 < iVar6 + -1) {
          pbVar10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03C8,
                                         iVar6 + -1);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0x41,local_10,'\x06',pbVar10);
          uVar7 = local_10;
        }
      }
      else {
        wsprintfA(&this_00->field_0x18d,"%c",
                  (byte)(&DAT_008087ea)[(uint)*local_c * 0x51] + 0x41);
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x41,uVar7,0x12,0xc);
        ccFntTy::WrStr(this_00->field_0189,(uint *)&this_00->field_0x18d,-1,-1,3);
      }
    }
    local_5 = local_5 + 1;
    pbVar10 = local_c + 1;
    local_10 = uVar7 + 0xd;
    if (6 < local_5) {
      local_c = pbVar10;
      PaintInfoc(this_00);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

