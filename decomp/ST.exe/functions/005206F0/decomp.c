
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::Update */

void __thiscall InfocPanelTy::Update(InfocPanelTy *this)

{
  InfocPanelTy IVar1;
  code *pcVar2;
  uint uVar3;
  InfocPanelTy *this_00;
  char cVar4;
  int iVar5;
  UINT UVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  InfocPanelTy *pIVar10;
  void *unaff_EDI;
  InfocPanelTy *pIVar11;
  InfocPanelTy *pIVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  InfocPanelTy local_188 [300];
  InternalExceptionFrame local_5c;
  InfocPanelTy local_18;
  undefined3 uStack_17;
  InfocPanelTy *local_14;
  int local_10;
  InfocPanelTy *local_c;
  InfocPanelTy local_5;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar5 = __setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x99,0,iVar5,&DAT_007a4ccc
                                ,s_InfocPanelTy__Update_007c3f74);
    if (iVar13 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x99);
    return;
  }
  pIVar12 = local_14 + 0x1ab;
  pIVar10 = pIVar12;
  pIVar11 = local_188;
  for (iVar5 = 0x4a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(int *)pIVar11 = *(int *)pIVar10;
    pIVar10 = pIVar10 + 4;
    pIVar11 = pIVar11 + 4;
  }
  *pIVar11 = *pIVar10;
  thunk_FUN_0043beb0(DAT_007fa174,9,(int *)pIVar12);
  if (this_00[0x1ab] == (InfocPanelTy)0x0) {
    this_00[0x3d4] = (InfocPanelTy)0xff;
  }
  else if (this_00[0x3d4] == (InfocPanelTy)0xff) {
    this_00[0x3d4] = (InfocPanelTy)0x0;
  }
  else if ((byte)this_00[0x1ab] <= (byte)this_00[0x3d4]) {
    this_00[0x3d4] = (InfocPanelTy)0x0;
  }
  pIVar12 = this_00 + 0x18;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pIVar12 = 0;
    pIVar12 = pIVar12 + 4;
  }
  pIVar12 = this_00 + 0x1ac;
  *(undefined4 *)(this_00 + 0x28) = 0x23;
  local_5 = (InfocPanelTy)0x0;
  local_10 = 0x23;
  do {
    iVar5 = local_10;
    *(ushort *)(this_00 + 0x2c) = (byte)local_5 + 1;
    if ((byte)local_5 < (byte)this_00[0x1ab]) {
      if (local_5 == this_00[0x3d4]) {
        *(undefined2 *)(this_00 + 0x2e) = 1;
      }
      else {
        *(undefined2 *)(this_00 + 0x2e) = 0;
      }
    }
    else {
      *(undefined2 *)(this_00 + 0x2e) = 2;
    }
    local_c = pIVar12;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x3d0),(undefined4 *)(this_00 + 0x18));
    if (*pIVar12 != (InfocPanelTy)0xff) {
      if (DAT_0080874e == '\x03') {
        cVar4 = 's';
      }
      else {
        cVar4 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170(*(int *)(this_00 + 0x68),0,0x30,iVar5,0x22,0xc,cVar4);
      if ((byte)local_5 < (byte)this_00[0x1ab]) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x189),*(int *)(this_00 + 0x68),0,0x31,iVar5,0x10,
                         0xc);
        cVar4 = (&DAT_008087e8)[(uint)(byte)*pIVar12 * 0x51];
        if (cVar4 == '\x01') {
          UVar6 = 0x2742;
        }
        else if (cVar4 == '\x02') {
          UVar6 = 0x2743;
        }
        else if (cVar4 == '\x03') {
          UVar6 = 0x2745;
        }
        else {
          UVar6 = 10000;
        }
        uVar15 = 0;
        iVar14 = -1;
        iVar13 = -1;
        puVar7 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x189),puVar7,iVar13,iVar14,uVar15);
      }
      if (DAT_00808a8f == '\0') {
        iVar13 = -1;
        IVar1 = *local_c;
        _local_18 = CONCAT31(uStack_17,IVar1);
        if (DAT_0080874d == IVar1) {
LAB_00520987:
          uVar15 = 0;
        }
        else {
          uVar9 = (uint)(byte)DAT_0080874d;
          uVar3 = (uint)(byte)IVar1;
          cVar4 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar3);
          if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar9) == '\0')) {
            uVar15 = 0xfffffffe;
          }
          else if ((cVar4 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar9) == '\0'))
          {
            uVar15 = 0xffffffff;
          }
          else if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar9) == '\x01'))
          {
            uVar15 = 1;
          }
          else {
            if ((cVar4 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar9) != '\x01'))
            goto LAB_00520987;
            uVar15 = 2;
          }
        }
        switch(uVar15) {
        case 1:
          iVar13 = 1;
          break;
        case 2:
          iVar13 = 3;
          break;
        case 0xfffffffe:
          iVar13 = 0;
          break;
        case 0xffffffff:
          iVar13 = 2;
        }
        iVar5 = local_10;
        if (-1 < iVar13 + -1) {
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x3c8),iVar13 + -1);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0x41,local_10,'\x06',pbVar8);
          iVar5 = local_10;
        }
      }
      else {
        wsprintfA((LPSTR)(this_00 + 0x18d),&DAT_007c3f90,
                  (byte)(&DAT_008087ea)[(uint)(byte)*local_c * 0x51] + 0x41);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x189),*(int *)(this_00 + 0x68),0,0x41,iVar5,0x12,
                         0xc);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x189),(uint *)(this_00 + 0x18d),-1,-1,3);
      }
    }
    local_5 = (InfocPanelTy)((char)local_5 + 1);
    pIVar12 = local_c + 1;
    local_10 = iVar5 + 0xd;
    if (6 < (byte)local_5) {
      local_c = pIVar12;
      PaintInfoc(this_00);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

