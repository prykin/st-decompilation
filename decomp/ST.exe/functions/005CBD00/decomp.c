
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::InitSettMap */

void __thiscall SettMapMTy::InitSettMap(SettMapMTy *this,char param_1)

{
  code *pcVar1;
  SettMapMTy *pSVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar10;
  int iVar11;
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
      *(undefined4 *)&local_c[1].field_0x4 = 0xffffffff;
    }
    else {
      DAT_00809958 = 0;
      *(undefined4 *)&local_c[1].field_0x4 = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    piVar4 = (int *)(*(int *)&local_c->field_0x1a5b + 0x69a);
    DAT_00808aab = DAT_00809958;
    if (*piVar4 != 0) {
      FUN_006ab060(piVar4);
    }
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x20,0xc,10);
    *(uint **)&pSVar2[1].field_0x11a = puVar5;
    iVar11 = 1;
    iVar3 = *(int *)(DAT_0081176c + 0x2f0);
    *(int *)&pSVar2->field_0x5d = iVar3;
    puVar7 = (undefined4 *)(iVar3 + 0x28);
    uVar6 = FUN_006b4fe0(iVar3);
    iVar3 = FUN_006b50c0(0xfa,0x16,(uint)*(ushort *)(*(int *)&pSVar2->field_0x5d + 0xe),uVar6,puVar7
                         ,iVar11);
    *(int *)&pSVar2[1].field_0xe7 = iVar3;
    uVar6 = *(uint *)(iVar3 + 0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    uVar6 = *(uint *)&pSVar2[1].field_0xe7;
    puVar8 = &pSVar2[1].field_0xe3;
    FUN_006b2330((uint)DAT_008075a8,(uint *)puVar8,0x31,0x404acf,*(uint *)(uVar6 + 4),
                 *(uint *)(uVar6 + 8),uVar6);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)puVar8,0xffffffff,200,0x1dc);
    FUN_006b3af0(DAT_008075a8,*(uint *)puVar8);
    thunk_FUN_005c29b0(param_1);
    if (((((param_1 == '\r') || (param_1 == '\x0e')) || (param_1 == '\x0f')) || (param_1 == '\x10'))
       && (*(int *)&pSVar2->field_0x1e27 == 0x11)) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403b61,400,0x62,
                   *(int *)&pSVar2->field_0x1a5b + 0x140);
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
      puVar8 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = (undefined1 *)0x0;
      }
      else {
        puVar8[2] = 1;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 3) = 0xffffffff;
        puVar8[1] = 2;
        *(undefined4 *)(puVar8 + 7) = 0;
        *(undefined4 *)(puVar8 + 0xb) = 0;
        *(undefined4 *)(puVar8 + 0xf) = 0;
        *(undefined4 *)(puVar8 + 0x1b) = 1;
        *(undefined4 *)(puVar8 + 0x13) = 1;
        *(undefined4 *)(puVar8 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar8 + 0x27) = 0;
        *(undefined4 *)(puVar8 + 0x23) = 0;
        *(undefined4 *)(puVar8 + 0x2f) = 1;
        *(undefined4 *)(puVar8 + 0x2b) = 1;
      }
      *(undefined1 **)&pSVar2[1].field_0xdb = puVar8;
      if (puVar8 != (undefined1 *)0x0) {
        uVar9 = 0;
        cVar10 = '\x01';
        uVar6 = 0x10;
        iVar11 = 1;
        iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar6 = HoloTy::Init(*(HoloTy **)&pSVar2[1].field_0xdb,1,200,0x1f1,iVar3,iVar11,uVar6,cVar10
                             ,uVar9);
        if (uVar6 != 0) {
          iVar3 = *(int *)&pSVar2[1].field_0xdb;
          *(undefined1 *)(iVar3 + 2) = 1;
          *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
          uVar6 = *(uint *)(*(int *)&pSVar2[1].field_0xdb + 3);
          if (-1 < (int)uVar6) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
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
  iVar11 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x4f,0,iVar3,&DAT_007a4ccc,
                              s_SettMapMTy__InitSettMap_007cd280);
  if (iVar11 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_settmobj_cpp_007cd258,0x4f);
  return;
}

