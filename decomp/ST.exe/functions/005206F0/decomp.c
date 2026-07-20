
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::Update */

void __thiscall InfocPanelTy::Update(InfocPanelTy *this)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  InfocPanelTy *this_00;
  char cVar4;
  int iVar5;
  UINT uID;
  uint *puVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  uint uVar9;
  void *unaff_EDI;
  int *piVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 uVar14;
  int local_188 [75];
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
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x99,0,iVar5,&DAT_007a4ccc
                                ,s_InfocPanelTy__Update_007c3f74);
    if (iVar13 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x99);
    return;
  }
  puVar1 = &local_14->field_01AB;
  piVar8 = (int *)puVar1;
  piVar10 = local_188;
  for (iVar5 = 0x4a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  *(char *)piVar10 = (char)*piVar8;
  STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,9,(int *)puVar1);
  if (this_00->field_01AB == 0) {
    this_00->field_03D4 = 0xff;
  }
  else if (this_00->field_03D4 == 0xff) {
    this_00->field_03D4 = 0;
  }
  else if ((byte)this_00->field_01AB <= (byte)this_00->field_03D4) {
    this_00->field_03D4 = 0;
  }
  puVar11 = (undefined4 *)&this_00->field_0x18;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  pbVar12 = &this_00->field_01AC;
  this_00->field_0028 = 0x23;
  local_5 = 0;
  local_10 = 0x23;
  do {
    uVar9 = local_10;
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
    local_c = pbVar12;
    FUN_006e6080(this_00,2,this_00->field_03D0,(undefined4 *)&this_00->field_0x18);
    if (*pbVar12 != 0xff) {
      if (DAT_0080874e == '\x03') {
        cVar4 = 's';
      }
      else {
        cVar4 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170(this_00->field_0068,0,0x30,uVar9,0x22,0xc,cVar4);
      if (local_5 < (byte)this_00->field_01AB) {
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x31,uVar9,0x10,0xc);
        cVar4 = (&DAT_008087e8)[(uint)*pbVar12 * 0x51];
        if (cVar4 == '\x01') {
          uID = 0x2742;
        }
        else if (cVar4 == '\x02') {
          uID = 0x2743;
        }
        else if (cVar4 == '\x03') {
          uID = 0x2745;
        }
        else {
          uID = 10000;
        }
        uVar14 = 0;
        iVar13 = -1;
        iVar5 = -1;
        puVar6 = (uint *)FUN_006b0140(uID,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_0189,puVar6,iVar5,iVar13,uVar14);
      }
      if (DAT_00808a8f == '\0') {
        iVar5 = -1;
        bVar2 = *local_c;
        _local_18 = CONCAT31(uStack_17,bVar2);
        if (DAT_0080874d == bVar2) {
LAB_00520987:
          uVar14 = 0;
        }
        else {
          uVar7 = (uint)DAT_0080874d;
          uVar9 = (uint)bVar2;
          cVar4 = *(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar9);
          if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar7) == '\0')) {
            uVar14 = 0xfffffffe;
          }
          else if ((cVar4 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar7) == '\0'))
          {
            uVar14 = 0xffffffff;
          }
          else if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar7) == '\x01'))
          {
            uVar14 = 1;
          }
          else {
            if ((cVar4 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar7) != '\x01'))
            goto LAB_00520987;
            uVar14 = 2;
          }
        }
        switch(uVar14) {
        case 1:
          iVar5 = 1;
          break;
        case 2:
          iVar5 = 3;
          break;
        case 0xfffffffe:
          iVar5 = 0;
          break;
        case 0xffffffff:
          iVar5 = 2;
        }
        uVar9 = local_10;
        if (-1 < iVar5 + -1) {
          pbVar12 = (byte *)FUN_0070b3a0(this_00->field_03C8,iVar5 + -1);
          DibPut((undefined4 *)this_00->field_0068,0x41,local_10,'\x06',pbVar12);
          uVar9 = local_10;
        }
      }
      else {
        wsprintfA(&this_00->field_0x18d,&DAT_007c3f90,
                  (byte)(&DAT_008087ea)[(uint)*local_c * 0x51] + 0x41);
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x41,uVar9,0x12,0xc);
        ccFntTy::WrStr(this_00->field_0189,(uint *)&this_00->field_0x18d,-1,-1,3);
      }
    }
    local_5 = local_5 + 1;
    pbVar12 = local_c + 1;
    local_10 = uVar9 + 0xd;
    if (6 < local_5) {
      local_c = pbVar12;
      PaintInfoc(this_00);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

