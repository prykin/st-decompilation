
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::InitSettMap */

void __thiscall SettMapMTy::InitSettMap(SettMapMTy *this,char param_1)

{
  code *pcVar1;
  SettMapMTy *pSVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  HoloTy *pHVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar9;
  int iVar10;
  InternalExceptionFrame local_50;
  SettMapMTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    DAT_00808783 = 3;
    DAT_00808754 = FUN_006e51b0(0x807620);
    pSVar2 = local_c;
    if (DAT_0080877e == '\0') {
      DAT_00809958 = 0xffffffff;
      local_c->field_2121 = 0xffffffff;
    }
    else {
      DAT_00809958 = 0;
      local_c->field_2121 = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    puVar6 = &local_c->field_1A5B->field_069A;
    DAT_00808aab = DAT_00809958;
    if (*puVar6 != 0) {
      FUN_006ab060(puVar6);
    }
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x20,0xc,10);
    pSVar2->field_2237 = puVar4;
    iVar10 = 1;
    iVar3 = *(int *)(DAT_0081176c + 0x2f0);
    pSVar2->field_005D = iVar3;
    puVar6 = (undefined4 *)(iVar3 + 0x28);
    uVar5 = FUN_006b4fe0(iVar3);
    iVar3 = FUN_006b50c0(0xfa,0x16,(uint)*(ushort *)(pSVar2->field_005D + 0xe),uVar5,puVar6,iVar10);
    pSVar2->field_2204 = iVar3;
    uVar5 = *(uint *)(iVar3 + 0x14);
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    uVar5 = pSVar2->field_2204;
    puVar6 = &pSVar2->field_2200;
    FUN_006b2330((uint)DAT_008075a8,puVar6,0x31,0x404acf,*(uint *)(uVar5 + 4),*(uint *)(uVar5 + 8),
                 uVar5);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar6,0xffffffff,200,0x1dc);
    FUN_006b3af0(DAT_008075a8,*puVar6);
    thunk_FUN_005c29b0(param_1);
    if (((((param_1 == '\r') || (param_1 == '\x0e')) || (param_1 == '\x0f')) || (param_1 == '\x10'))
       && (pSVar2->field_1E27 == 0x11)) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403b61,400,0x62,
                   (uint)&pSVar2->field_1A5B->field_0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,200,0x1f1);
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
      }
      pHVar7 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar7 == (HoloTy *)0x0) {
        pHVar7 = (HoloTy *)0x0;
      }
      else {
        pHVar7->field_0002 = 1;
        pHVar7->field_0000 = 0;
        pHVar7->field_0003 = 0xffffffff;
        pHVar7->field_0001 = 2;
        pHVar7->field_0007 = 0;
        pHVar7->field_000B = 0;
        *(undefined4 *)&pHVar7->field_0xf = 0;
        *(undefined4 *)&pHVar7->field_0x1b = 1;
        pHVar7->field_0013 = 1;
        pHVar7->field_0017 = 0xffffffff;
        pHVar7->field_0027 = 0;
        pHVar7->field_0023 = 0;
        pHVar7->field_002F = 1;
        pHVar7->field_002B = 1;
      }
      pSVar2->field_21F8 = pHVar7;
      if (pHVar7 != (HoloTy *)0x0) {
        uVar8 = 0;
        cVar9 = '\x01';
        uVar5 = 0x10;
        iVar10 = 1;
        iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar5 = HoloTy::Init(pSVar2->field_21F8,CASE_1,200,0x1f1,iVar3,iVar10,uVar5,cVar9,uVar8);
        if (uVar5 != 0) {
          pHVar7 = pSVar2->field_21F8;
          pHVar7->field_0002 = 1;
          pHVar7->field_0017 = pHVar7->field_0013;
          uVar5 = pSVar2->field_21F8->field_0003;
          if (-1 < (int)uVar5) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar5);
          }
          if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
            FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
          }
          if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
            FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
          }
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
    }
    FUN_006b6500(DAT_00811764,DAT_0080733c);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar10 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x4f,0,iVar3,&DAT_007a4ccc,
                              s_SettMapMTy__InitSettMap_007cd280);
  if (iVar10 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_settmobj_cpp_007cd258,0x4f);
  return;
}

