
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::PrepPlList */

void __thiscall SettMapSTy::PrepPlList(SettMapSTy *this,int *param_1)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  void *pvVar5;
  DArrayTy *pDVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 unaff_ESI;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  void *unaff_EDI;
  char *pcVar14;
  SettMapTy *this_00;
  bool bVar15;
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
  cMf32 *local_10;
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
    iVar8 = ReportDebugMessage(s_E____titans_Start_settsobj_cpp_007cd544,0x86,0,iVar4,&DAT_007a4ccc,
                               s_SettMapSTy__PrepPlList_007cd58c);
    if (iVar8 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Start_settsobj_cpp_007cd544,0x86);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_8->field_1E26 == 2) {
    local_10 = (cMf32 *)local_8->field_1F3F;
  }
  else {
    local_10 = (cMf32 *)local_8->field_1F43;
  }
  pDVar6 = local_8->field_1F84;
  if (pDVar6 != (DArrayTy *)0x0) {
    uVar11 = 0;
    if (0 < (int)pDVar6->count) {
      bVar15 = pDVar6->count != 0;
      do {
        if (bVar15) {
          pvVar5 = (void *)(pDVar6->elementSize * uVar11 + (int)pDVar6->data);
        }
        else {
          pvVar5 = (void *)0x0;
        }
        if ((pvVar5 != (void *)0x0) && (*(DArrayTy **)((int)pvVar5 + 0x50) != (DArrayTy *)0x0)) {
          DArrayDestroy(*(DArrayTy **)((int)pvVar5 + 0x50));
        }
        pDVar6 = this_00->field_1F84;
        uVar11 = uVar11 + 1;
        bVar15 = uVar11 < pDVar6->count;
      } while ((int)uVar11 < (int)pDVar6->count);
    }
    DArrayDestroy(this_00->field_1F84);
  }
  pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,8,0x60,8);
  this_00->field_1F84 = pDVar6;
  local_c = &DAT_008087e8;
  do {
    pcVar10 = local_c;
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
      if (this_00->field_1E26 == 2) {
        local_24 = CreateStrategList((int)local_10,
                                     CONCAT12(uStack_70,CONCAT11(cStack_71,cVar1)) & 0xff,0xffffffff
                                    );
      }
      else {
        local_24 = CreateOpponentList(local_10,CONCAT12(uStack_6f,CONCAT11(uStack_70,cStack_71)) &
                                               0xff,DAT_0080995c);
      }
      uVar11 = 0xffffffff;
      pcVar12 = (char *)&DAT_00807ddd;
      do {
        pcVar14 = pcVar12;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar14 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar12 = pcVar14 + -uVar11;
      pcVar14 = local_6a;
      for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar14 = pcVar14 + 4;
      }
      cVar1 = pcVar10[-0x21];
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar14 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar14 = pcVar14 + 1;
      }
      if (cVar1 == '\0') {
        uStack_70 = 1;
      }
      else {
        uStack_70 = 4;
        uStack_6f = 0;
        if (local_8->field_1E26 == 2) {
          uVar9 = 0;
          uVar11 = local_24[3];
          if (0 < (int)uVar11) {
            local_14 = (byte *)(pcVar10 + -0x20);
            do {
              if (uVar9 < uVar11) {
                iVar4 = local_24[2] * uVar9 + local_24[7];
              }
              else {
                iVar4 = 0;
              }
              pbVar7 = (byte *)(iVar4 + 0x4c);
              pbVar13 = local_14;
              do {
                bVar2 = *pbVar7;
                bVar15 = bVar2 < *pbVar13;
                if (bVar2 != *pbVar13) {
LAB_005d534b:
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_005d5350;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar15 = bVar2 < pbVar13[1];
                if (bVar2 != pbVar13[1]) goto LAB_005d534b;
                pbVar7 = pbVar7 + 2;
                pbVar13 = pbVar13 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_005d5350:
              pcVar10 = local_c;
              if (iVar4 == 0) {
                uStack_6f = (undefined1)uVar9;
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar11);
          }
        }
      }
      local_2a = pcVar10[2];
      local_20 = *(undefined4 *)(pcVar10 + 3);
      local_6e = DAT_0080877f;
      local_1c = *(undefined4 *)(pcVar10 + 7);
      local_18 = *(undefined4 *)(pcVar10 + 0xb);
      local_29 = 0;
      local_25 = 1;
      Library::DKW::TBL::FUN_006ae1c0(&local_8->field_1F84->flags,(undefined4 *)&local_74);
      this_00 = local_8;
    }
    local_c = pcVar10 + 0x51;
  } while ((int)local_c < 0x808a70);
  pDVar6 = this_00->field_1F84;
  uVar9 = 0;
  uVar11 = pDVar6->count;
  if (0 < (int)uVar11) {
    bVar15 = uVar11 != 0;
    do {
      if (bVar15) {
        pvVar5 = (void *)(pDVar6->elementSize * uVar9 + (int)pDVar6->data);
      }
      else {
        pvVar5 = (void *)0x0;
      }
      if ((pvVar5 != (void *)0x0) && (*(char *)((int)pvVar5 + 4) == '\x01')) {
        DAT_0080874d = *(undefined1 *)((int)pvVar5 + 2);
        *(undefined1 *)((int)pvVar5 + 4) = 2;
        DAT_0080874e = *(undefined1 *)((int)pvVar5 + 3);
        uVar11 = 0xffffffff;
        pcVar10 = (char *)&DAT_00807ddd;
        goto code_r0x005d540b;
      }
      uVar9 = uVar9 + 1;
      bVar15 = uVar9 < uVar11;
    } while ((int)uVar9 < (int)uVar11);
  }
  goto LAB_005d5426;
  while( true ) {
    uVar11 = uVar11 - 1;
    pcVar12 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar12;
    if (cVar1 == '\0') break;
code_r0x005d540b:
    pcVar12 = pcVar10;
    if (uVar11 == 0) break;
  }
  uVar11 = ~uVar11;
  pcVar10 = pcVar12 + -uVar11;
  pcVar12 = (char *)((int)pvVar5 + 10);
  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar11 = uVar11 & 3; this_00 = local_8, uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
LAB_005d5426:
  SettMapTy::PaintSC(this_00);
  (*(code *)this_00->field_0000->field_0020)();
  g_currentExceptionFrame = local_b8.previous;
  return;
}

