
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::PrepPlList */

void __thiscall SettMapSTy::PrepPlList(SettMapSTy *this,int *param_1)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  void *unaff_EDI;
  char *pcVar13;
  SettMapTy *this_00;
  bool bVar14;
  InternalExceptionFrame local_b8;
  undefined1 local_74;
  undefined1 local_73;
  char local_72;
  char cStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 local_6e;
  char local_6a [64];
  char local_2a;
  undefined4 local_29;
  undefined1 local_25;
  uint *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  byte *local_14;
  int local_10;
  char *local_c;
  SettMapTy *local_8;
  
  this->field_211C = DAT_008087c4._2_1_;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = (SettMapTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_settsobj_cpp_007cd544,0x86,0,iVar4,&DAT_007a4ccc,
                               s_SettMapSTy__PrepPlList_007cd58c);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Start_settsobj_cpp_007cd544,0x86);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_8->field_1E26 == '\x02') {
    local_10 = local_8->field_1F3F;
  }
  else {
    local_10 = local_8->field_1F43;
  }
  iVar4 = local_8->field_1F84;
  if (iVar4 != 0) {
    uVar10 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      bVar14 = *(int *)(iVar4 + 0xc) != 0;
      do {
        if (bVar14) {
          iVar4 = *(int *)(iVar4 + 8) * uVar10 + *(int *)(iVar4 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        if ((iVar4 != 0) && (*(byte **)(iVar4 + 0x50) != (byte *)0x0)) {
          FUN_006ae110(*(byte **)(iVar4 + 0x50));
        }
        iVar4 = this_00->field_1F84;
        uVar10 = uVar10 + 1;
        bVar14 = uVar10 < *(uint *)(iVar4 + 0xc);
      } while ((int)uVar10 < (int)*(uint *)(iVar4 + 0xc));
    }
    FUN_006ae110((byte *)this_00->field_1F84);
  }
  puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,8,0x60,8);
  this_00->field_1F84 = puVar5;
  local_c = &DAT_008087e8;
  do {
    pcVar9 = local_c;
    cVar1 = local_c[1];
    if (cVar1 != -1) {
      local_74 = 1;
      local_73 = 1;
      if (((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (*local_c == '\x03')) {
        cStack_71 = '\x01';
      }
      else {
        cStack_71 = *local_c;
      }
      local_72 = cVar1;
      if (this_00->field_1E26 == '\x02') {
        local_24 = CreateStrategList(local_10,CONCAT12(uStack_70,CONCAT11(cStack_71,cVar1)) & 0xff,
                                     0xffffffff);
      }
      else {
        local_24 = CreateOpponentList(local_10,CONCAT12(uStack_6f,CONCAT11(uStack_70,cStack_71)) &
                                               0xff,DAT_0080995c);
      }
      uVar10 = 0xffffffff;
      pcVar11 = (char *)&DAT_00807ddd;
      do {
        pcVar13 = pcVar11;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar11 = pcVar13 + -uVar10;
      pcVar13 = local_6a;
      for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      cVar1 = pcVar9[-0x21];
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (cVar1 == '\0') {
        uStack_70 = 1;
      }
      else {
        uStack_70 = 4;
        uStack_6f = 0;
        if (local_8->field_1E26 == '\x02') {
          uVar8 = 0;
          uVar10 = local_24[3];
          if (0 < (int)uVar10) {
            local_14 = (byte *)(pcVar9 + -0x20);
            do {
              if (uVar8 < uVar10) {
                iVar4 = local_24[2] * uVar8 + local_24[7];
              }
              else {
                iVar4 = 0;
              }
              pbVar6 = (byte *)(iVar4 + 0x4c);
              pbVar12 = local_14;
              do {
                bVar2 = *pbVar6;
                bVar14 = bVar2 < *pbVar12;
                if (bVar2 != *pbVar12) {
LAB_005d534b:
                  iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_005d5350;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar14 = bVar2 < pbVar12[1];
                if (bVar2 != pbVar12[1]) goto LAB_005d534b;
                pbVar6 = pbVar6 + 2;
                pbVar12 = pbVar12 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_005d5350:
              pcVar9 = local_c;
              if (iVar4 == 0) {
                uStack_6f = (undefined1)uVar8;
                break;
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar10);
          }
        }
      }
      local_2a = pcVar9[2];
      local_20 = *(undefined4 *)(pcVar9 + 3);
      local_6e = DAT_0080877f;
      local_1c = *(undefined4 *)(pcVar9 + 7);
      local_18 = *(undefined4 *)(pcVar9 + 0xb);
      local_29 = 0;
      local_25 = 1;
      Library::DKW::TBL::FUN_006ae1c0((uint *)local_8->field_1F84,(undefined4 *)&local_74);
      this_00 = local_8;
    }
    local_c = pcVar9 + 0x51;
  } while ((int)local_c < 0x808a70);
  iVar4 = this_00->field_1F84;
  uVar8 = 0;
  uVar10 = *(uint *)(iVar4 + 0xc);
  if (0 < (int)uVar10) {
    bVar14 = uVar10 != 0;
    do {
      if (bVar14) {
        iVar7 = *(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c);
      }
      else {
        iVar7 = 0;
      }
      if ((iVar7 != 0) && (*(char *)(iVar7 + 4) == '\x01')) {
        DAT_0080874d = *(undefined1 *)(iVar7 + 2);
        *(undefined1 *)(iVar7 + 4) = 2;
        DAT_0080874e = *(undefined1 *)(iVar7 + 3);
        uVar10 = 0xffffffff;
        pcVar9 = (char *)&DAT_00807ddd;
        goto code_r0x005d540b;
      }
      uVar8 = uVar8 + 1;
      bVar14 = uVar8 < uVar10;
    } while ((int)uVar8 < (int)uVar10);
  }
  goto LAB_005d5426;
  while( true ) {
    uVar10 = uVar10 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
    if (cVar1 == '\0') break;
code_r0x005d540b:
    pcVar11 = pcVar9;
    if (uVar10 == 0) break;
  }
  uVar10 = ~uVar10;
  pcVar9 = pcVar11 + -uVar10;
  pcVar11 = (char *)(iVar7 + 10);
  for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar10 = uVar10 & 3; this_00 = local_8, uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
LAB_005d5426:
  SettMapTy::PaintSC(this_00);
  (**(code **)(this_00->field_0000 + 0x20))();
  g_currentExceptionFrame = local_b8.previous;
  return;
}

