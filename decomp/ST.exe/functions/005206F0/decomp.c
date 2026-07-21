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
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 uVar13;
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
    iVar12 = ReportDebugMessage("E:\\__titans\\Andrey\\infocen.cpp",0x99,0,iVar6,"%s"
                                ,"InfocPanelTy::Update");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\infocen.cpp",0x99);
    return;
  }
  puVar1 = &local_14->field_01AB;
  puVar9 = (undefined4 *)puVar1;
  puVar10 = local_188;
  for (iVar6 = 0x4a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
  STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,9,(AnonShape_0043BEB0_1C00EC12 *)puVar1);
  if (this_00->field_01AB == 0) {
    this_00->field_03D4 = 0xff;
  }
  else if (this_00->field_03D4 == 0xff) {
    this_00->field_03D4 = 0;
  }
  else if ((byte)this_00->field_01AB <= (byte)this_00->field_03D4) {
    this_00->field_03D4 = 0;
  }
  puVar9 = (undefined4 *)&this_00->field_0x18;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  pbVar11 = &this_00->field_01AC;
  this_00->field_0028 = 0x23;
  local_5 = 0;
  local_10 = 0x23;
  do {
    uVar8 = local_10;
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
    local_c = pbVar11;
    FUN_006e6080(this_00,2,this_00->field_03D0,(undefined4 *)&this_00->field_0x18);
    if (*pbVar11 != 0xff) {
      if (DAT_0080874e == '\x03') {
        cVar5 = 's';
      }
      else {
        cVar5 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0x30,uVar8,0x22,0xc,cVar5);
      if (local_5 < (byte)this_00->field_01AB) {
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x31,uVar8,0x10,0xc);
        cVar5 = (&DAT_008087e8)[(uint)*pbVar11 * 0x51];
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
        uVar13 = 0;
        iVar12 = -1;
        iVar6 = -1;
        puVar7 = (uint *)LoadResourceString(resourceId,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_0189,puVar7,iVar6,iVar12,uVar13);
      }
      if (DAT_00808a8f == '\0') {
        iVar6 = -1;
        bVar2 = *local_c;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_18 = CONCAT31(uStack_17,bVar2);
        if (DAT_0080874d == bVar2) {
LAB_00520987:
          uVar13 = 0;
        }
        else {
          uVar8 = (uint)DAT_0080874d;
          bVar3 = g_playerRelationMatrix[uVar8][bVar2];
          if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][uVar8] == 0)) {
            uVar13 = 0xfffffffe;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][uVar8] == 0)) {
            uVar13 = 0xffffffff;
          }
          else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][uVar8] == 1)) {
            uVar13 = 1;
          }
          else {
            if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][uVar8] != 1)) goto LAB_00520987;
            uVar13 = 2;
          }
        }
        switch(uVar13) {
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
        uVar8 = local_10;
        if (-1 < iVar6 + -1) {
          pbVar11 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03C8,
                                         iVar6 + -1);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0x41,local_10,'\x06',pbVar11);
          uVar8 = local_10;
        }
      }
      else {
        wsprintfA(&this_00->field_0x18d,"%c",
                  (byte)(&DAT_008087ea)[(uint)*local_c * 0x51] + 0x41);
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x41,uVar8,0x12,0xc);
        ccFntTy::WrStr(this_00->field_0189,(uint *)&this_00->field_0x18d,-1,-1,3);
      }
    }
    local_5 = local_5 + 1;
    pbVar11 = local_c + 1;
    local_10 = uVar8 + 0xd;
    if (6 < local_5) {
      local_c = pbVar11;
      PaintInfoc(this_00);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

