#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::Update */

void __thiscall InfocPanelTy::Update(InfocPanelTy *this)

{
  undefined1 *puVar1;
  byte bVar2;
  InfocPanelTy *this_00;
  byte bVar4;
  int iVar5;
  UINT resourceId;
  char *resourceString;
  undefined4 uVar5;
  BITMAPINFO *pBVar6;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *puVar9;
  byte *puVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\infocen.cpp",0x99,0,iVar5,"%s",
                               "InfocPanelTy::Update");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\infocen.cpp",0x99);
    return;
  }
  puVar1 = &local_14->field_01AB;
  puVar9 = (byte *)puVar1;
  puVar10 = (byte *)(local_188);
  memmove(puVar10, puVar9, 0x129); /* compiler REP MOVS byte copy */
  /* ST_CALLSITE[0052074A]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
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
        bVar4 = 0x73;
      }
      else {
        bVar4 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x30,uVar8,0x22,0xc,bVar4);
      if (local_5 < (byte)this_00->field_01AB) {
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x31,uVar8,0x10,0xc);
        bVar4 = g_bulkInitializedRecords_008087C7[*pbVar11].field_0021;
        if (bVar4 == 1) {
          resourceId = 0x2742;
        }
        else if (bVar4 == 2) {
          resourceId = 0x2743;
        }
        else if (bVar4 == 3) {
          resourceId = 0x2745;
        }
        else {
          resourceId = 10000;
        }
        uVar13 = 0;
        iVar12 = -1;
        iVar7 = -1;
        resourceString = LoadResourceString(resourceId,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_0189,resourceString,iVar7,iVar12,uVar13);
      }
      if (DAT_00808a8f == '\0') {
        iVar7 = -1;
        bVar4 = *local_c;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_18 = CONCAT31(uStack_17,bVar4);
        if (DAT_0080874d == bVar4) {
LAB_00520987:
          uVar5 = 0;
        }
        else {
          uVar8 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar8][bVar4];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar4][uVar8] == 0)) {
            uVar5 = 0xfffffffe;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar4][uVar8] == 0)) {
            uVar5 = 0xffffffff;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar4][uVar8] == 1)) {
            uVar5 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar4][uVar8] != 1)) goto LAB_00520987;
            uVar5 = 2;
          }
        }
        switch(uVar5) {
        case 1:
          iVar7 = 1;
          break;
        case 2:
          iVar7 = 3;
          break;
        case 0xfffffffe:
          iVar7 = 0;
          break;
        case 0xffffffff:
          iVar7 = 2;
        }
        uVar8 = local_10;
        if (-1 < iVar7 + -1) {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03C8,iVar7 + -1
                               );
          /* ST_CALLSITE[005209CC]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x41,local_10,'\x06',
                 (byte *)pBVar6);
          uVar8 = local_10;
        }
      }
      else {
        /* ST_CALLSITE[005208D0]: CALL dword ptr [0x0085bde8] */
        wsprintfA(&this_00->field_018D,"%c",
                  g_bulkInitializedRecords_008087C7[*local_c].field_0023 + 0x41);
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x41,uVar8,0x12,0xc);
        ccFntTy::WrStr(this_00->field_0189,&this_00->field_018D,-1,-1,3);
      }
    }
    local_5 = local_5 + 1;
    pbVar11 = local_c + 1;
    local_10 = uVar8 + 0xd;
    if (6 < local_5) {
      local_c = pbVar11;
      /* ST_CALLSITE[005209F6]: CALL 0x00404c69; direct=00404C69 InfocPanelTy::PaintInfoc */
      PaintInfoc(this_00);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

