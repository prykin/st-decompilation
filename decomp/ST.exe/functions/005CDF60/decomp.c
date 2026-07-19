
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SendPlList */

void __thiscall SettMapMTy::SendPlList(SettMapMTy *this,int param_1)

{
  code *pcVar1;
  SettMapMTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_50;
  uint local_c;
  SettMapMTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    uVar5 = *(int *)(*(int *)(local_8 + 0x1f84) + 0xc) * 0x60;
    uVar6 = uVar5 + 9;
    local_c = uVar6;
    if (*(uint *)(local_8 + 0x222a) < uVar6) {
      iVar3 = Library::DKW::LIB::FUN_006acf50(*(undefined4 **)(local_8 + 0x2226),uVar6);
      *(int *)(pSVar2 + 0x2226) = iVar3;
      *(uint *)(pSVar2 + 0x222a) = uVar6;
    }
    puVar8 = *(undefined4 **)(pSVar2 + 0x2226);
    *puVar8 = *(undefined4 *)(pSVar2 + 0x2121);
    puVar8[1] = DAT_00808aab;
    *(SettMapMTy *)(puVar8 + 2) = pSVar2[0x1e26];
    puVar7 = *(undefined4 **)(*(int *)(pSVar2 + 0x1f84) + 0x1c);
    puVar8 = (undefined4 *)((int)puVar8 + 9);
    for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_00715360(DAT_00811764,param_1,'\"',*(char **)(pSVar2 + 0x2226),local_c,1,0xffffffff);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x230,0,iVar3,&DAT_007a4ccc,
                             s_SettMapMTy__SendPlList_007cd364);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_settmobj_cpp_007cd258,0x230);
  return;
}

