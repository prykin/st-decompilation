
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawDescription */

void __thiscall HelpPanelTy::DrawDescription(HelpPanelTy *this,int *param_1,UINT param_2)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_4c;
  undefined4 local_48 [16];
  HelpPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x425,0,iVar3,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c383c,0x425);
    return;
  }
  if (param_2 != 10000) {
    ccFntTy::SetSurf(*(ccFntTy **)(local_8 + 0x1e0),*(int *)(local_8 + 0x218),0,0,*param_1,0x19c,0xf
                    );
    uVar10 = 3;
    iVar9 = -1;
    iVar3 = -1;
    puVar4 = (uint *)FUN_006b0140(0x55f5,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar4,iVar3,iVar9,uVar10);
    *param_1 = *param_1 + 0xf;
    pcVar5 = (char *)FUN_006b0140(param_2,DAT_00807618);
    uVar6 = 0xffffffff;
    do {
      pcVar8 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar5 = pcVar8 + -uVar6;
    pcVar8 = (char *)&DAT_0080f33a;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    }
    ccFntTy::FormIndentText
              (*(ccFntTy **)(this_00 + 0x1e0),(char *)&DAT_0080f33a,&DAT_0080f33a,
               (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar6 = FUN_007113e0(*(void **)(this_00 + 0x1e0),&DAT_0080f33a);
    CheckBkView(this_00,*param_1,uVar6);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,*param_1,0x19c,
                     uVar6 + 2);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                   (DAT_0080874e != '\x03') - 1 & 5,-1,-1);
    *param_1 = *param_1 + uVar6;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

