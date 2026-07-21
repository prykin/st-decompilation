
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::AddMessage */

void __thiscall
FSGSTy::AddMessage(FSGSTy *this,uint param_1,byte *param_2,char *param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  AnonShape_006B7830_769CA2DF *pAVar3;
  code *pcVar4;
  FSGSTy *this_00;
  short sVar5;
  int iVar6;
  uint *puVar7;
  AnonShape_006B5570_4D68B99C *pAVar8;
  AnonShape_006B5570_4D68B99C *pAVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 unaff_ESI;
  byte *pbVar15;
  void *unaff_EDI;
  bool bVar16;
  InternalExceptionFrame local_5c;
  AnonShape_006B5570_4D68B99C *local_18;
  FSGSTy *local_14;
  uint local_10;
  uint *local_c;
  char local_5;
  
  local_c = (uint *)0x0;
  if ((param_3 == (char *)0x0) || (param_2 == (byte *)0x0)) {
    return;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x9ec,0,iVar6,
                                &DAT_007a4ccc,s_FSGSTy__AddMessage_007cc474);
    if (iVar11 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x9ec);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = -1;
  pbVar14 = param_2;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar1 = *pbVar14;
    pbVar14 = pbVar14 + 1;
  } while (bVar1 != 0);
  if (iVar6 == -2) {
    uVar12 = 0xffffffff;
    pcVar10 = param_3;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    local_c = Library::DKW::LIB::FUN_006aac10(~uVar12 + 4);
    if (local_c == (uint *)0x0) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    wsprintfA((LPSTR)local_c,s__s_1d_s_007c6fe4,&DAT_007c6ff0,param_1 & 0xff,param_3);
  }
  else {
    uVar12 = 0xffffffff;
    pbVar14 = param_2;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      bVar1 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar1 != 0);
    uVar13 = 0xffffffff;
    pcVar10 = param_3;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    local_c = Library::DKW::LIB::FUN_006aac10(~uVar12 + ~uVar13 + 0xc);
    if (local_c == (uint *)0x0) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    pbVar15 = &DAT_00807e1d;
    pbVar14 = param_2;
    do {
      bVar1 = *pbVar14;
      bVar16 = bVar1 < *pbVar15;
      if (bVar1 != *pbVar15) {
LAB_005a1fbe:
        iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_005a1fc3;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar14[1];
      bVar16 = bVar1 < pbVar15[1];
      if (bVar1 != pbVar15[1]) goto LAB_005a1fbe;
      pbVar14 = pbVar14 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_005a1fc3:
    if (iVar6 == 0) {
      wsprintfA((LPSTR)local_c,s__s2_s>__s_1d_s_007cc4a0,&DAT_007c6ff0,param_2,&DAT_007c6ff0,
                param_1 & 0xff,param_3);
    }
    else {
      wsprintfA((LPSTR)local_c,s__s_1d_s>__s_1d_s_007cc48c,&DAT_007c6ff0,param_4 & 0xff,param_2,
                &DAT_007c6ff0,param_1 & 0xff,param_3);
    }
  }
  if (local_c != (uint *)0x0) {
    for (puVar7 = Library::MSVCRT::FUN_0072e560(local_c,'\n'); puVar7 != (uint *)0x0;
        puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
      *(undefined1 *)puVar7 = 0x20;
    }
    pAVar8 = (AnonShape_006B5570_4D68B99C *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,10);
    local_18 = pAVar8;
    if (pAVar8 != (AnonShape_006B5570_4D68B99C *)0x0) {
      local_10 = 0;
      local_5 = '\0';
      Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar8,(char *)local_c);
      this_00 = local_14;
      pAVar9 = (AnonShape_006B5570_4D68B99C *)
               ccFntTy::FormSarr(local_14->field_1A77,(uint *)pAVar8,s________________007c21d8,
                                 0x1a6 - local_14->field_1B4C,0,0xffffffff,1);
      if (this_00->field_1A5F == CASE_6) {
        this_00->field_002D = 0x26;
        FUN_006e6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
        local_10 = (uint)(ushort)this_00->field_0033;
        if (*(int *)(this_00->field_1E9E + 8) + -0x19 <= (int)local_10) {
          local_5 = '\x01';
        }
      }
      if (pAVar9 != (AnonShape_006B5570_4D68B99C *)0x0) {
        ccFntTy::SepColorStrInSarr(this_00->field_1A77,(uint *)pAVar9,(uint *)pAVar9);
        pAVar3 = (AnonShape_006B7830_769CA2DF *)this_00->field_1E9E;
        iVar6 = pAVar3->field_0008 + pAVar9->field_0008;
        while (499 < iVar6) {
          FUN_006b7830(pAVar3,0);
          pAVar3 = (AnonShape_006B7830_769CA2DF *)this_00->field_1E9E;
          iVar6 = pAVar3->field_0008 + pAVar9->field_0008;
        }
        iVar6 = 0;
        if (0 < (int)pAVar9->field_0008) {
          if ((int)pAVar9->field_0008 < 1) {
            pcVar10 = (char *)0x0;
            goto LAB_005a2188;
          }
          do {
            pcVar10 = *(char **)(pAVar9->field_0014 + iVar6 * 4);
LAB_005a2188:
            Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_1E9E,pcVar10);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)pAVar9->field_0008);
        }
        FUN_006b5570(pAVar9);
        pAVar8 = local_18;
      }
      FUN_006b5570(pAVar8);
      if (this_00->field_1A5F == CASE_6) {
        this_00->field_002D = 0x28;
        *(undefined2 *)&this_00->field_0x31 = 1;
        this_00->field_0033 = *(undefined2 *)(this_00->field_1E9E + 8);
        FUN_006e6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
        this_00->field_002D = 0x22;
        *(undefined2 *)&this_00->field_0x31 = 0;
        if (local_5 == '\0') {
          sVar5 = (short)local_10;
        }
        else {
          iVar6 = *(int *)(this_00->field_1E9E + 8);
          if (iVar6 < 0x19) {
            sVar5 = 0;
          }
          else {
            sVar5 = (short)iVar6 + -0x19;
          }
        }
        this_00->field_0033 = sVar5;
        FUN_006e6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
      }
    }
    FreeAndNull(&local_c);
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

