
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::InitSettMap */

void __thiscall SettMapMTy::InitSettMap(SettMapMTy *this,char param_1)

{
  AnonPointee_StartSystemTy_02F0 *pAVar1;
  code *pcVar2;
  SettMapMTy *pSVar3;
  int iVar4;
  DArrayTy *pDVar5;
  uint uVar6;
  AnonPointee_SettMapMTy_2204 *pAVar7;
  undefined4 *puVar8;
  HoloTy *pHVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar11;
  char cVar12;
  InternalExceptionFrame local_50;
  SettMapMTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    DAT_00808783 = 3;
    DAT_00808754 = FUN_006e51b0(0x807620);
    pSVar3 = local_c;
    if (DAT_0080877e == '\0') {
      DAT_00809958 = 0xffffffff;
      local_c->field_2121 = 0xffffffff;
    }
    else {
      DAT_00809958 = 0;
      local_c->field_2121 = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    puVar8 = &local_c->field_1A5B->field_069A;
    DAT_00808aab = DAT_00809958;
    if (*puVar8 != 0) {
      FUN_006ab060((LPVOID *)puVar8);
    }
    pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x20,0xc,10);
    pSVar3->field_2237 = pDVar5;
    iVar4 = 1;
    pAVar1 = PTR_0081176c->field_02F0;
    pSVar3->field_005D = pAVar1;
    puVar8 = &pAVar1[2].field_0008;
    uVar6 = FUN_006b4fe0((int)pAVar1);
    pAVar7 = (AnonPointee_SettMapMTy_2204 *)
             FUN_006b50c0(0xfa,0x16,(uint)*(ushort *)(pSVar3->field_005D + 0xe),uVar6,puVar8,iVar4);
    pSVar3->field_2204 = pAVar7;
    uVar6 = pAVar7[1].field_0008;
    if (uVar6 == 0) {
      uVar6 = ((uint)*(ushort *)&pAVar7[1].field_0x2 * pAVar7->field_0004 + 0x1f >> 3 & 0x1ffffffc)
              * pAVar7->field_0008;
    }
    puVar8 = (undefined4 *)FUN_006b4fa0((int)pAVar7);
    for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    pAVar7 = pSVar3->field_2204;
    puVar8 = &pSVar3->field_2200;
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x404acf,pAVar7->field_0004,pAVar7->field_0008,
                 (uint)pAVar7);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,200,0x1dc);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    thunk_FUN_005c29b0(param_1);
    if (((((param_1 == '\r') || (param_1 == '\x0e')) || (param_1 == '\x0f')) || (param_1 == '\x10'))
       && (pSVar3->field_1E27 == 0x11)) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403b61,400,0x62,
                   (uint)&pSVar3->field_1A5B->field_0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,200,0x1f1);
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                   PTR_0081176c->field_0578,PTR_0081176c->field_057C);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                   PTR_0081176c->field_0609,PTR_0081176c->field_060D);
      }
      pHVar9 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar9 == (HoloTy *)0x0) {
        pHVar9 = (HoloTy *)0x0;
      }
      else {
        pHVar9->field_0002 = 1;
        pHVar9->field_0000 = 0;
        pHVar9->field_0003 = 0xffffffff;
        pHVar9->field_0001 = CASE_2;
        pHVar9->field_0007 = 0;
        pHVar9->field_000B = 0;
        *(undefined4 *)&pHVar9->field_0xf = 0;
        *(undefined4 *)&pHVar9->field_0x1b = 1;
        pHVar9->field_0013 = 1;
        pHVar9->field_0017 = 0xffffffff;
        pHVar9->field_0027 = 0;
        pHVar9->field_0023 = 0;
        pHVar9->field_002F = 1;
        pHVar9->field_002B = 1;
      }
      pSVar3->field_21F8 = pHVar9;
      if (pHVar9 != (HoloTy *)0x0) {
        uVar10 = 0;
        cVar12 = '\x01';
        uVar6 = 0x10;
        iVar11 = 1;
        iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar6 = HoloTy::Init(pSVar3->field_21F8,CASE_1,200,0x1f1,iVar4,iVar11,uVar6,cVar12,uVar10);
        if (uVar6 != 0) {
          pHVar9 = pSVar3->field_21F8;
          pHVar9->field_0002 = 1;
          pHVar9->field_0017 = pHVar9->field_0013;
          uVar6 = pSVar3->field_21F8->field_0003;
          if (-1 < (int)uVar6) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
          }
          if (PTR_0081176c->field_0560 != 0xffffffff) {
            FUN_006b3af0((int *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560);
          }
          if (PTR_0081176c->field_05F1 != 0xffffffff) {
            FUN_006b3af0((int *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1);
          }
          FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0558);
          FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0554);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                   PTR_0081176c->field_0578,PTR_0081176c->field_057C);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                   PTR_0081176c->field_0609,PTR_0081176c->field_060D);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0558);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
    }
    FUN_006b6500(g_int_00811764,DAT_0080733c);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar11 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x4f,0,iVar4,&DAT_007a4ccc,
                              s_SettMapMTy__InitSettMap_007cd280);
  if (iVar11 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_settmobj_cpp_007cd258,0x4f);
  return;
}

