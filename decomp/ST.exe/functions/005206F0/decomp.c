
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::Update */

void __thiscall InfocPanelTy::Update(InfocPanelTy *this)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  InfocPanelTy *this_00;
  char cVar5;
  int iVar6;
  UINT UVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  int *piVar10;
  void *unaff_EDI;
  int *piVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int local_188 [75];
  InternalExceptionFrame local_5c;
  byte local_18;
  undefined3 uStack_17;
  InfocPanelTy *local_14;
  int local_10;
  byte *local_c;
  byte local_5;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar14 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x99,0,iVar6,&DAT_007a4ccc
                                ,s_InfocPanelTy__Update_007c3f74);
    if (iVar14 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x99);
    return;
  }
  puVar1 = &local_14->field_01AB;
  piVar10 = (int *)puVar1;
  piVar11 = local_188;
  for (iVar6 = 0x4a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar11 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar11 = piVar11 + 1;
  }
  *(char *)piVar11 = (char)*piVar10;
  STAllPlayersC::GetPanelInfo(DAT_007fa174,9,(int *)puVar1);
  if (this_00->field_01AB == 0) {
    this_00->field_03D4 = 0xff;
  }
  else if (this_00->field_03D4 == 0xff) {
    this_00->field_03D4 = 0;
  }
  else if ((byte)this_00->field_01AB <= (byte)this_00->field_03D4) {
    this_00->field_03D4 = 0;
  }
  puVar12 = (undefined4 *)&this_00->field_0x18;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  pbVar13 = &this_00->field_01AC;
  this_00->field_0028 = 0x23;
  local_5 = 0;
  local_10 = 0x23;
  do {
    iVar6 = local_10;
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
    local_c = pbVar13;
    FUN_006e6080(this_00,2,this_00->field_03D0,(undefined4 *)&this_00->field_0x18);
    if (*pbVar13 != 0xff) {
      if (DAT_0080874e == '\x03') {
        cVar5 = 's';
      }
      else {
        cVar5 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170(this_00->field_0068,0,0x30,iVar6,0x22,0xc,cVar5);
      if (local_5 < (byte)this_00->field_01AB) {
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x31,iVar6,0x10,0xc);
        cVar5 = (&DAT_008087e8)[(uint)*pbVar13 * 0x51];
        if (cVar5 == '\x01') {
          UVar7 = 0x2742;
        }
        else if (cVar5 == '\x02') {
          UVar7 = 0x2743;
        }
        else if (cVar5 == '\x03') {
          UVar7 = 0x2745;
        }
        else {
          UVar7 = 10000;
        }
        uVar16 = 0;
        iVar15 = -1;
        iVar14 = -1;
        puVar8 = (uint *)FUN_006b0140(UVar7,DAT_00807618);
        ccFntTy::WrStr(this_00->field_0189,puVar8,iVar14,iVar15,uVar16);
      }
      if (DAT_00808a8f == '\0') {
        iVar14 = -1;
        bVar2 = *local_c;
        _local_18 = CONCAT31(uStack_17,bVar2);
        if (DAT_0080874d == bVar2) {
LAB_00520987:
          uVar16 = 0;
        }
        else {
          uVar9 = (uint)DAT_0080874d;
          uVar4 = (uint)bVar2;
          cVar5 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4);
          if ((cVar5 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\0')) {
            uVar16 = 0xfffffffe;
          }
          else if ((cVar5 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\0'))
          {
            uVar16 = 0xffffffff;
          }
          else if ((cVar5 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\x01'))
          {
            uVar16 = 1;
          }
          else {
            if ((cVar5 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) != '\x01'))
            goto LAB_00520987;
            uVar16 = 2;
          }
        }
        switch(uVar16) {
        case 1:
          iVar14 = 1;
          break;
        case 2:
          iVar14 = 3;
          break;
        case 0xfffffffe:
          iVar14 = 0;
          break;
        case 0xffffffff:
          iVar14 = 2;
        }
        iVar6 = local_10;
        if (-1 < iVar14 + -1) {
          pbVar13 = (byte *)FUN_0070b3a0(this_00->field_03C8,iVar14 + -1);
          DibPut((undefined4 *)this_00->field_0068,0x41,local_10,'\x06',pbVar13);
          iVar6 = local_10;
        }
      }
      else {
        wsprintfA(&this_00->field_0x18d,&DAT_007c3f90,
                  (byte)(&DAT_008087ea)[(uint)*local_c * 0x51] + 0x41);
        ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0x41,iVar6,0x12,0xc);
        ccFntTy::WrStr(this_00->field_0189,(uint *)&this_00->field_0x18d,-1,-1,3);
      }
    }
    local_5 = local_5 + 1;
    pbVar13 = local_c + 1;
    local_10 = iVar6 + 0xd;
    if (6 < local_5) {
      local_c = pbVar13;
      PaintInfoc(this_00);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

